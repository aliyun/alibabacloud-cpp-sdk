// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ocr_api_20210707.hpp>
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

using namespace Alibabacloud_Ocr-api20210707;

Alibabacloud_Ocr-api20210707::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ocr-api"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ocr-api20210707::Client::getEndpoint(shared_ptr<string> productId,
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

RecognizeAdvancedResponse Alibabacloud_Ocr-api20210707::Client::recognizeAdvancedWithOptions(shared_ptr<RecognizeAdvancedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needSortPage)) {
    query->insert(pair<string, bool>("NeedSortPage", *request->needSortPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noStamp)) {
    query->insert(pair<string, bool>("NoStamp", *request->noStamp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputFigure)) {
    query->insert(pair<string, bool>("OutputFigure", *request->outputFigure));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paragraph)) {
    query->insert(pair<string, bool>("Paragraph", *request->paragraph));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->row)) {
    query->insert(pair<string, bool>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeAdvanced"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeAdvancedResponse(callApi(params, req, runtime));
}

RecognizeAdvancedResponse Alibabacloud_Ocr-api20210707::Client::recognizeAdvanced(shared_ptr<RecognizeAdvancedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeAdvancedWithOptions(request, runtime);
}

RecognizeAirItineraryResponse Alibabacloud_Ocr-api20210707::Client::recognizeAirItineraryWithOptions(shared_ptr<RecognizeAirItineraryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeAirItinerary"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeAirItineraryResponse(callApi(params, req, runtime));
}

RecognizeAirItineraryResponse Alibabacloud_Ocr-api20210707::Client::recognizeAirItinerary(shared_ptr<RecognizeAirItineraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeAirItineraryWithOptions(request, runtime);
}

RecognizeAllTextResponse Alibabacloud_Ocr-api20210707::Client::recognizeAllTextWithOptions(shared_ptr<RecognizeAllTextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RecognizeAllTextShrinkRequest> request = make_shared<RecognizeAllTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RecognizeAllTextRequestAdvancedConfig>(tmpReq->advancedConfig)) {
    request->advancedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->advancedConfig, make_shared<string>("AdvancedConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RecognizeAllTextRequestIdCardConfig>(tmpReq->idCardConfig)) {
    request->idCardConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->idCardConfig, make_shared<string>("IdCardConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RecognizeAllTextRequestInternationalBusinessLicenseConfig>(tmpReq->internationalBusinessLicenseConfig)) {
    request->internationalBusinessLicenseConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->internationalBusinessLicenseConfig, make_shared<string>("InternationalBusinessLicenseConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RecognizeAllTextRequestInternationalIdCardConfig>(tmpReq->internationalIdCardConfig)) {
    request->internationalIdCardConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->internationalIdCardConfig, make_shared<string>("InternationalIdCardConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RecognizeAllTextRequestMultiLanConfig>(tmpReq->multiLanConfig)) {
    request->multiLanConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->multiLanConfig, make_shared<string>("MultiLanConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RecognizeAllTextRequestTableConfig>(tmpReq->tableConfig)) {
    request->tableConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tableConfig, make_shared<string>("TableConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedConfigShrink)) {
    query->insert(pair<string, string>("AdvancedConfig", *request->advancedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardConfigShrink)) {
    query->insert(pair<string, string>("IdCardConfig", *request->idCardConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internationalBusinessLicenseConfigShrink)) {
    query->insert(pair<string, string>("InternationalBusinessLicenseConfig", *request->internationalBusinessLicenseConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internationalIdCardConfigShrink)) {
    query->insert(pair<string, string>("InternationalIdCardConfig", *request->internationalIdCardConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multiLanConfigShrink)) {
    query->insert(pair<string, string>("MultiLanConfig", *request->multiLanConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputBarCode)) {
    query->insert(pair<string, bool>("OutputBarCode", *request->outputBarCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputCoordinate)) {
    query->insert(pair<string, string>("OutputCoordinate", *request->outputCoordinate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputFigure)) {
    query->insert(pair<string, bool>("OutputFigure", *request->outputFigure));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputKVExcel)) {
    query->insert(pair<string, bool>("OutputKVExcel", *request->outputKVExcel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputOricoord)) {
    query->insert(pair<string, bool>("OutputOricoord", *request->outputOricoord));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputQrcode)) {
    query->insert(pair<string, bool>("OutputQrcode", *request->outputQrcode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputStamp)) {
    query->insert(pair<string, bool>("OutputStamp", *request->outputStamp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableConfigShrink)) {
    query->insert(pair<string, string>("TableConfig", *request->tableConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !tmpReq->body ? boost::any() : boost::any(*tmpReq->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeAllText"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeAllTextResponse(callApi(params, req, runtime));
}

RecognizeAllTextResponse Alibabacloud_Ocr-api20210707::Client::recognizeAllText(shared_ptr<RecognizeAllTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeAllTextWithOptions(request, runtime);
}

RecognizeBankAcceptanceResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankAcceptanceWithOptions(shared_ptr<RecognizeBankAcceptanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBankAcceptance"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBankAcceptanceResponse(callApi(params, req, runtime));
}

RecognizeBankAcceptanceResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankAcceptance(shared_ptr<RecognizeBankAcceptanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBankAcceptanceWithOptions(request, runtime);
}

RecognizeBankAccountLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankAccountLicenseWithOptions(shared_ptr<RecognizeBankAccountLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBankAccountLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBankAccountLicenseResponse(callApi(params, req, runtime));
}

RecognizeBankAccountLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankAccountLicense(shared_ptr<RecognizeBankAccountLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBankAccountLicenseWithOptions(request, runtime);
}

RecognizeBankCardResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankCardWithOptions(shared_ptr<RecognizeBankCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBankCard"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBankCardResponse(callApi(params, req, runtime));
}

RecognizeBankCardResponse Alibabacloud_Ocr-api20210707::Client::recognizeBankCard(shared_ptr<RecognizeBankCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBankCardWithOptions(request, runtime);
}

RecognizeBasicResponse Alibabacloud_Ocr-api20210707::Client::recognizeBasicWithOptions(shared_ptr<RecognizeBasicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBasic"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBasicResponse(callApi(params, req, runtime));
}

RecognizeBasicResponse Alibabacloud_Ocr-api20210707::Client::recognizeBasic(shared_ptr<RecognizeBasicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBasicWithOptions(request, runtime);
}

RecognizeBirthCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeBirthCertificationWithOptions(shared_ptr<RecognizeBirthCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBirthCertification"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBirthCertificationResponse(callApi(params, req, runtime));
}

RecognizeBirthCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeBirthCertification(shared_ptr<RecognizeBirthCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBirthCertificationWithOptions(request, runtime);
}

RecognizeBusShipTicketResponse Alibabacloud_Ocr-api20210707::Client::recognizeBusShipTicketWithOptions(shared_ptr<RecognizeBusShipTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBusShipTicket"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBusShipTicketResponse(callApi(params, req, runtime));
}

RecognizeBusShipTicketResponse Alibabacloud_Ocr-api20210707::Client::recognizeBusShipTicket(shared_ptr<RecognizeBusShipTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBusShipTicketWithOptions(request, runtime);
}

RecognizeBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBusinessLicenseWithOptions(shared_ptr<RecognizeBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeBusinessLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeBusinessLicenseResponse(callApi(params, req, runtime));
}

RecognizeBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeBusinessLicense(shared_ptr<RecognizeBusinessLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeBusinessLicenseWithOptions(request, runtime);
}

RecognizeCarInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarInvoiceWithOptions(shared_ptr<RecognizeCarInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCarInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCarInvoiceResponse(callApi(params, req, runtime));
}

RecognizeCarInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarInvoice(shared_ptr<RecognizeCarInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarInvoiceWithOptions(request, runtime);
}

RecognizeCarNumberResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarNumberWithOptions(shared_ptr<RecognizeCarNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCarNumber"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCarNumberResponse(callApi(params, req, runtime));
}

RecognizeCarNumberResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarNumber(shared_ptr<RecognizeCarNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarNumberWithOptions(request, runtime);
}

RecognizeCarVinCodeResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarVinCodeWithOptions(shared_ptr<RecognizeCarVinCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCarVinCode"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCarVinCodeResponse(callApi(params, req, runtime));
}

RecognizeCarVinCodeResponse Alibabacloud_Ocr-api20210707::Client::recognizeCarVinCode(shared_ptr<RecognizeCarVinCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarVinCodeWithOptions(request, runtime);
}

RecognizeChinesePassportResponse Alibabacloud_Ocr-api20210707::Client::recognizeChinesePassportWithOptions(shared_ptr<RecognizeChinesePassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputFigure)) {
    query->insert(pair<string, bool>("OutputFigure", *request->outputFigure));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeChinesePassport"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeChinesePassportResponse(callApi(params, req, runtime));
}

RecognizeChinesePassportResponse Alibabacloud_Ocr-api20210707::Client::recognizeChinesePassport(shared_ptr<RecognizeChinesePassportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeChinesePassportWithOptions(request, runtime);
}

RecognizeCommonPrintedInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeCommonPrintedInvoiceWithOptions(shared_ptr<RecognizeCommonPrintedInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCommonPrintedInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCommonPrintedInvoiceResponse(callApi(params, req, runtime));
}

RecognizeCommonPrintedInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeCommonPrintedInvoice(shared_ptr<RecognizeCommonPrintedInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCommonPrintedInvoiceWithOptions(request, runtime);
}

RecognizeCosmeticProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeCosmeticProduceLicenseWithOptions(shared_ptr<RecognizeCosmeticProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCosmeticProduceLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCosmeticProduceLicenseResponse(callApi(params, req, runtime));
}

RecognizeCosmeticProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeCosmeticProduceLicense(shared_ptr<RecognizeCosmeticProduceLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCosmeticProduceLicenseWithOptions(request, runtime);
}

RecognizeCovidTestReportResponse Alibabacloud_Ocr-api20210707::Client::recognizeCovidTestReportWithOptions(shared_ptr<RecognizeCovidTestReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->multipleResult)) {
    query->insert(pair<string, bool>("MultipleResult", *request->multipleResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCovidTestReport"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCovidTestReportResponse(callApi(params, req, runtime));
}

RecognizeCovidTestReportResponse Alibabacloud_Ocr-api20210707::Client::recognizeCovidTestReport(shared_ptr<RecognizeCovidTestReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCovidTestReportWithOptions(request, runtime);
}

RecognizeCtwoMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeCtwoMedicalDeviceManageLicenseWithOptions(shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCtwoMedicalDeviceManageLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCtwoMedicalDeviceManageLicenseResponse(callApi(params, req, runtime));
}

RecognizeCtwoMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeCtwoMedicalDeviceManageLicense(shared_ptr<RecognizeCtwoMedicalDeviceManageLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCtwoMedicalDeviceManageLicenseWithOptions(request, runtime);
}

RecognizeDocumentStructureResponse Alibabacloud_Ocr-api20210707::Client::recognizeDocumentStructureWithOptions(shared_ptr<RecognizeDocumentStructureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needSortPage)) {
    query->insert(pair<string, bool>("NeedSortPage", *request->needSortPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noStamp)) {
    query->insert(pair<string, bool>("NoStamp", *request->noStamp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->page)) {
    query->insert(pair<string, bool>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paragraph)) {
    query->insert(pair<string, bool>("Paragraph", *request->paragraph));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->row)) {
    query->insert(pair<string, bool>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useNewStyleOutput)) {
    query->insert(pair<string, bool>("UseNewStyleOutput", *request->useNewStyleOutput));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeDocumentStructure"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeDocumentStructureResponse(callApi(params, req, runtime));
}

RecognizeDocumentStructureResponse Alibabacloud_Ocr-api20210707::Client::recognizeDocumentStructure(shared_ptr<RecognizeDocumentStructureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeDocumentStructureWithOptions(request, runtime);
}

RecognizeDrivingLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeDrivingLicenseWithOptions(shared_ptr<RecognizeDrivingLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeDrivingLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeDrivingLicenseResponse(callApi(params, req, runtime));
}

RecognizeDrivingLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeDrivingLicense(shared_ptr<RecognizeDrivingLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeDrivingLicenseWithOptions(request, runtime);
}

RecognizeEduFormulaResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduFormulaWithOptions(shared_ptr<RecognizeEduFormulaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEduFormula"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEduFormulaResponse(callApi(params, req, runtime));
}

RecognizeEduFormulaResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduFormula(shared_ptr<RecognizeEduFormulaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduFormulaWithOptions(request, runtime);
}

RecognizeEduOralCalculationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduOralCalculationWithOptions(shared_ptr<RecognizeEduOralCalculationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEduOralCalculation"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEduOralCalculationResponse(callApi(params, req, runtime));
}

RecognizeEduOralCalculationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduOralCalculation(shared_ptr<RecognizeEduOralCalculationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduOralCalculationWithOptions(request, runtime);
}

RecognizeEduPaperCutResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperCutWithOptions(shared_ptr<RecognizeEduPaperCutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cutType)) {
    query->insert(pair<string, string>("CutType", *request->cutType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    query->insert(pair<string, string>("ImageType", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputOricoord)) {
    query->insert(pair<string, bool>("OutputOricoord", *request->outputOricoord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEduPaperCut"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEduPaperCutResponse(callApi(params, req, runtime));
}

RecognizeEduPaperCutResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperCut(shared_ptr<RecognizeEduPaperCutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduPaperCutWithOptions(request, runtime);
}

RecognizeEduPaperOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperOcrWithOptions(shared_ptr<RecognizeEduPaperOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    query->insert(pair<string, string>("ImageType", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputOricoord)) {
    query->insert(pair<string, bool>("OutputOricoord", *request->outputOricoord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEduPaperOcr"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEduPaperOcrResponse(callApi(params, req, runtime));
}

RecognizeEduPaperOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperOcr(shared_ptr<RecognizeEduPaperOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduPaperOcrWithOptions(request, runtime);
}

RecognizeEduPaperStructedResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperStructedWithOptions(shared_ptr<RecognizeEduPaperStructedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputOricoord)) {
    query->insert(pair<string, bool>("OutputOricoord", *request->outputOricoord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEduPaperStructed"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEduPaperStructedResponse(callApi(params, req, runtime));
}

RecognizeEduPaperStructedResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduPaperStructed(shared_ptr<RecognizeEduPaperStructedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduPaperStructedWithOptions(request, runtime);
}

RecognizeEduQuestionOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduQuestionOcrWithOptions(shared_ptr<RecognizeEduQuestionOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEduQuestionOcr"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEduQuestionOcrResponse(callApi(params, req, runtime));
}

RecognizeEduQuestionOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeEduQuestionOcr(shared_ptr<RecognizeEduQuestionOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEduQuestionOcrWithOptions(request, runtime);
}

RecognizeEnglishResponse Alibabacloud_Ocr-api20210707::Client::recognizeEnglishWithOptions(shared_ptr<RecognizeEnglishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEnglish"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEnglishResponse(callApi(params, req, runtime));
}

RecognizeEnglishResponse Alibabacloud_Ocr-api20210707::Client::recognizeEnglish(shared_ptr<RecognizeEnglishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEnglishWithOptions(request, runtime);
}

RecognizeEstateCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEstateCertificationWithOptions(shared_ptr<RecognizeEstateCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeEstateCertification"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeEstateCertificationResponse(callApi(params, req, runtime));
}

RecognizeEstateCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeEstateCertification(shared_ptr<RecognizeEstateCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeEstateCertificationWithOptions(request, runtime);
}

RecognizeExitEntryPermitToHKResponse Alibabacloud_Ocr-api20210707::Client::recognizeExitEntryPermitToHKWithOptions(shared_ptr<RecognizeExitEntryPermitToHKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputFigure)) {
    query->insert(pair<string, bool>("OutputFigure", *request->outputFigure));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeExitEntryPermitToHK"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeExitEntryPermitToHKResponse(callApi(params, req, runtime));
}

RecognizeExitEntryPermitToHKResponse Alibabacloud_Ocr-api20210707::Client::recognizeExitEntryPermitToHK(shared_ptr<RecognizeExitEntryPermitToHKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeExitEntryPermitToHKWithOptions(request, runtime);
}

RecognizeExitEntryPermitToMainlandResponse Alibabacloud_Ocr-api20210707::Client::recognizeExitEntryPermitToMainlandWithOptions(shared_ptr<RecognizeExitEntryPermitToMainlandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputFigure)) {
    query->insert(pair<string, bool>("OutputFigure", *request->outputFigure));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeExitEntryPermitToMainland"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeExitEntryPermitToMainlandResponse(callApi(params, req, runtime));
}

RecognizeExitEntryPermitToMainlandResponse Alibabacloud_Ocr-api20210707::Client::recognizeExitEntryPermitToMainland(shared_ptr<RecognizeExitEntryPermitToMainlandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeExitEntryPermitToMainlandWithOptions(request, runtime);
}

RecognizeFoodManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodManageLicenseWithOptions(shared_ptr<RecognizeFoodManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeFoodManageLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeFoodManageLicenseResponse(callApi(params, req, runtime));
}

RecognizeFoodManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodManageLicense(shared_ptr<RecognizeFoodManageLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeFoodManageLicenseWithOptions(request, runtime);
}

RecognizeFoodProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodProduceLicenseWithOptions(shared_ptr<RecognizeFoodProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeFoodProduceLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeFoodProduceLicenseResponse(callApi(params, req, runtime));
}

RecognizeFoodProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeFoodProduceLicense(shared_ptr<RecognizeFoodProduceLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeFoodProduceLicenseWithOptions(request, runtime);
}

RecognizeGeneralResponse Alibabacloud_Ocr-api20210707::Client::recognizeGeneralWithOptions(shared_ptr<RecognizeGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeGeneral"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeGeneralResponse(callApi(params, req, runtime));
}

RecognizeGeneralResponse Alibabacloud_Ocr-api20210707::Client::recognizeGeneral(shared_ptr<RecognizeGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeGeneralWithOptions(request, runtime);
}

RecognizeGeneralStructureResponse Alibabacloud_Ocr-api20210707::Client::recognizeGeneralStructureWithOptions(shared_ptr<RecognizeGeneralStructureRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RecognizeGeneralStructureShrinkRequest> request = make_shared<RecognizeGeneralStructureShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keys)) {
    request->keysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keys, make_shared<string>("Keys"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keysShrink)) {
    query->insert(pair<string, string>("Keys", *request->keysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !tmpReq->body ? boost::any() : boost::any(*tmpReq->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeGeneralStructure"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeGeneralStructureResponse(callApi(params, req, runtime));
}

RecognizeGeneralStructureResponse Alibabacloud_Ocr-api20210707::Client::recognizeGeneralStructure(shared_ptr<RecognizeGeneralStructureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeGeneralStructureWithOptions(request, runtime);
}

RecognizeHKIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeHKIdcardWithOptions(shared_ptr<RecognizeHKIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeHKIdcard"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeHKIdcardResponse(callApi(params, req, runtime));
}

RecognizeHKIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeHKIdcard(shared_ptr<RecognizeHKIdcardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHKIdcardWithOptions(request, runtime);
}

RecognizeHandwritingResponse Alibabacloud_Ocr-api20210707::Client::recognizeHandwritingWithOptions(shared_ptr<RecognizeHandwritingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needSortPage)) {
    query->insert(pair<string, bool>("NeedSortPage", *request->needSortPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->paragraph)) {
    query->insert(pair<string, bool>("Paragraph", *request->paragraph));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeHandwriting"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeHandwritingResponse(callApi(params, req, runtime));
}

RecognizeHandwritingResponse Alibabacloud_Ocr-api20210707::Client::recognizeHandwriting(shared_ptr<RecognizeHandwritingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHandwritingWithOptions(request, runtime);
}

RecognizeHealthCodeResponse Alibabacloud_Ocr-api20210707::Client::recognizeHealthCodeWithOptions(shared_ptr<RecognizeHealthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeHealthCode"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeHealthCodeResponse(callApi(params, req, runtime));
}

RecognizeHealthCodeResponse Alibabacloud_Ocr-api20210707::Client::recognizeHealthCode(shared_ptr<RecognizeHealthCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHealthCodeWithOptions(request, runtime);
}

RecognizeHotelConsumeResponse Alibabacloud_Ocr-api20210707::Client::recognizeHotelConsumeWithOptions(shared_ptr<RecognizeHotelConsumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeHotelConsume"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeHotelConsumeResponse(callApi(params, req, runtime));
}

RecognizeHotelConsumeResponse Alibabacloud_Ocr-api20210707::Client::recognizeHotelConsume(shared_ptr<RecognizeHotelConsumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHotelConsumeWithOptions(request, runtime);
}

RecognizeHouseholdResponse Alibabacloud_Ocr-api20210707::Client::recognizeHouseholdWithOptions(shared_ptr<RecognizeHouseholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isResidentPage)) {
    query->insert(pair<string, bool>("IsResidentPage", *request->isResidentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeHousehold"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeHouseholdResponse(callApi(params, req, runtime));
}

RecognizeHouseholdResponse Alibabacloud_Ocr-api20210707::Client::recognizeHousehold(shared_ptr<RecognizeHouseholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeHouseholdWithOptions(request, runtime);
}

RecognizeIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeIdcardWithOptions(shared_ptr<RecognizeIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->llmRec)) {
    query->insert(pair<string, bool>("Llm_rec", *request->llmRec));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputFigure)) {
    query->insert(pair<string, bool>("OutputFigure", *request->outputFigure));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputQualityInfo)) {
    query->insert(pair<string, bool>("OutputQualityInfo", *request->outputQualityInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeIdcard"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeIdcardResponse(callApi(params, req, runtime));
}

RecognizeIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeIdcard(shared_ptr<RecognizeIdcardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeIdcardWithOptions(request, runtime);
}

RecognizeInternationalBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeInternationalBusinessLicenseWithOptions(shared_ptr<RecognizeInternationalBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeInternationalBusinessLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeInternationalBusinessLicenseResponse(callApi(params, req, runtime));
}

RecognizeInternationalBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeInternationalBusinessLicense(shared_ptr<RecognizeInternationalBusinessLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeInternationalBusinessLicenseWithOptions(request, runtime);
}

RecognizeInternationalIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeInternationalIdcardWithOptions(shared_ptr<RecognizeInternationalIdcardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeInternationalIdcard"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeInternationalIdcardResponse(callApi(params, req, runtime));
}

RecognizeInternationalIdcardResponse Alibabacloud_Ocr-api20210707::Client::recognizeInternationalIdcard(shared_ptr<RecognizeInternationalIdcardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeInternationalIdcardWithOptions(request, runtime);
}

RecognizeInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeInvoiceWithOptions(shared_ptr<RecognizeInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeInvoiceResponse(callApi(params, req, runtime));
}

RecognizeInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeInvoice(shared_ptr<RecognizeInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeInvoiceWithOptions(request, runtime);
}

RecognizeJanpaneseResponse Alibabacloud_Ocr-api20210707::Client::recognizeJanpaneseWithOptions(shared_ptr<RecognizeJanpaneseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeJanpanese"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeJanpaneseResponse(callApi(params, req, runtime));
}

RecognizeJanpaneseResponse Alibabacloud_Ocr-api20210707::Client::recognizeJanpanese(shared_ptr<RecognizeJanpaneseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeJanpaneseWithOptions(request, runtime);
}

RecognizeKoreanResponse Alibabacloud_Ocr-api20210707::Client::recognizeKoreanWithOptions(shared_ptr<RecognizeKoreanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeKorean"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeKoreanResponse(callApi(params, req, runtime));
}

RecognizeKoreanResponse Alibabacloud_Ocr-api20210707::Client::recognizeKorean(shared_ptr<RecognizeKoreanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeKoreanWithOptions(request, runtime);
}

RecognizeLatinResponse Alibabacloud_Ocr-api20210707::Client::recognizeLatinWithOptions(shared_ptr<RecognizeLatinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeLatin"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeLatinResponse(callApi(params, req, runtime));
}

RecognizeLatinResponse Alibabacloud_Ocr-api20210707::Client::recognizeLatin(shared_ptr<RecognizeLatinRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeLatinWithOptions(request, runtime);
}

RecognizeMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceManageLicenseWithOptions(shared_ptr<RecognizeMedicalDeviceManageLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeMedicalDeviceManageLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeMedicalDeviceManageLicenseResponse(callApi(params, req, runtime));
}

RecognizeMedicalDeviceManageLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceManageLicense(shared_ptr<RecognizeMedicalDeviceManageLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMedicalDeviceManageLicenseWithOptions(request, runtime);
}

RecognizeMedicalDeviceProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceProduceLicenseWithOptions(shared_ptr<RecognizeMedicalDeviceProduceLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeMedicalDeviceProduceLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeMedicalDeviceProduceLicenseResponse(callApi(params, req, runtime));
}

RecognizeMedicalDeviceProduceLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeMedicalDeviceProduceLicense(shared_ptr<RecognizeMedicalDeviceProduceLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMedicalDeviceProduceLicenseWithOptions(request, runtime);
}

RecognizeMixedInvoicesResponse Alibabacloud_Ocr-api20210707::Client::recognizeMixedInvoicesWithOptions(shared_ptr<RecognizeMixedInvoicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->mergePdfPages)) {
    query->insert(pair<string, bool>("MergePdfPages", *request->mergePdfPages));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeMixedInvoices"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeMixedInvoicesResponse(callApi(params, req, runtime));
}

RecognizeMixedInvoicesResponse Alibabacloud_Ocr-api20210707::Client::recognizeMixedInvoices(shared_ptr<RecognizeMixedInvoicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMixedInvoicesWithOptions(request, runtime);
}

RecognizeMultiLanguageResponse Alibabacloud_Ocr-api20210707::Client::recognizeMultiLanguageWithOptions(shared_ptr<RecognizeMultiLanguageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RecognizeMultiLanguageShrinkRequest> request = make_shared<RecognizeMultiLanguageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->languages)) {
    request->languagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->languages, make_shared<string>("Languages"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->languagesShrink)) {
    query->insert(pair<string, string>("Languages", *request->languagesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needSortPage)) {
    query->insert(pair<string, bool>("NeedSortPage", *request->needSortPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !tmpReq->body ? boost::any() : boost::any(*tmpReq->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeMultiLanguage"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeMultiLanguageResponse(callApi(params, req, runtime));
}

RecognizeMultiLanguageResponse Alibabacloud_Ocr-api20210707::Client::recognizeMultiLanguage(shared_ptr<RecognizeMultiLanguageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeMultiLanguageWithOptions(request, runtime);
}

RecognizeNonTaxInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeNonTaxInvoiceWithOptions(shared_ptr<RecognizeNonTaxInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeNonTaxInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeNonTaxInvoiceResponse(callApi(params, req, runtime));
}

RecognizeNonTaxInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeNonTaxInvoice(shared_ptr<RecognizeNonTaxInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeNonTaxInvoiceWithOptions(request, runtime);
}

RecognizePassportResponse Alibabacloud_Ocr-api20210707::Client::recognizePassportWithOptions(shared_ptr<RecognizePassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizePassport"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizePassportResponse(callApi(params, req, runtime));
}

RecognizePassportResponse Alibabacloud_Ocr-api20210707::Client::recognizePassport(shared_ptr<RecognizePassportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizePassportWithOptions(request, runtime);
}

RecognizePaymentRecordResponse Alibabacloud_Ocr-api20210707::Client::recognizePaymentRecordWithOptions(shared_ptr<RecognizePaymentRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizePaymentRecord"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizePaymentRecordResponse(callApi(params, req, runtime));
}

RecognizePaymentRecordResponse Alibabacloud_Ocr-api20210707::Client::recognizePaymentRecord(shared_ptr<RecognizePaymentRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizePaymentRecordWithOptions(request, runtime);
}

RecognizePurchaseRecordResponse Alibabacloud_Ocr-api20210707::Client::recognizePurchaseRecordWithOptions(shared_ptr<RecognizePurchaseRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputMultiOrders)) {
    query->insert(pair<string, bool>("OutputMultiOrders", *request->outputMultiOrders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizePurchaseRecord"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizePurchaseRecordResponse(callApi(params, req, runtime));
}

RecognizePurchaseRecordResponse Alibabacloud_Ocr-api20210707::Client::recognizePurchaseRecord(shared_ptr<RecognizePurchaseRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizePurchaseRecordWithOptions(request, runtime);
}

RecognizeQuotaInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeQuotaInvoiceWithOptions(shared_ptr<RecognizeQuotaInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeQuotaInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeQuotaInvoiceResponse(callApi(params, req, runtime));
}

RecognizeQuotaInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeQuotaInvoice(shared_ptr<RecognizeQuotaInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeQuotaInvoiceWithOptions(request, runtime);
}

RecognizeRideHailingItineraryResponse Alibabacloud_Ocr-api20210707::Client::recognizeRideHailingItineraryWithOptions(shared_ptr<RecognizeRideHailingItineraryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeRideHailingItinerary"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeRideHailingItineraryResponse(callApi(params, req, runtime));
}

RecognizeRideHailingItineraryResponse Alibabacloud_Ocr-api20210707::Client::recognizeRideHailingItinerary(shared_ptr<RecognizeRideHailingItineraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeRideHailingItineraryWithOptions(request, runtime);
}

RecognizeRollTicketResponse Alibabacloud_Ocr-api20210707::Client::recognizeRollTicketWithOptions(shared_ptr<RecognizeRollTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeRollTicket"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeRollTicketResponse(callApi(params, req, runtime));
}

RecognizeRollTicketResponse Alibabacloud_Ocr-api20210707::Client::recognizeRollTicket(shared_ptr<RecognizeRollTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeRollTicketWithOptions(request, runtime);
}

RecognizeRussianResponse Alibabacloud_Ocr-api20210707::Client::recognizeRussianWithOptions(shared_ptr<RecognizeRussianRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeRussian"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeRussianResponse(callApi(params, req, runtime));
}

RecognizeRussianResponse Alibabacloud_Ocr-api20210707::Client::recognizeRussian(shared_ptr<RecognizeRussianRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeRussianWithOptions(request, runtime);
}

RecognizeShoppingReceiptResponse Alibabacloud_Ocr-api20210707::Client::recognizeShoppingReceiptWithOptions(shared_ptr<RecognizeShoppingReceiptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeShoppingReceipt"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeShoppingReceiptResponse(callApi(params, req, runtime));
}

RecognizeShoppingReceiptResponse Alibabacloud_Ocr-api20210707::Client::recognizeShoppingReceipt(shared_ptr<RecognizeShoppingReceiptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeShoppingReceiptWithOptions(request, runtime);
}

RecognizeSocialSecurityCardResponse Alibabacloud_Ocr-api20210707::Client::recognizeSocialSecurityCardWithOptions(shared_ptr<RecognizeSocialSecurityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeSocialSecurityCard"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeSocialSecurityCardResponse(callApi(params, req, runtime));
}

RecognizeSocialSecurityCardResponse Alibabacloud_Ocr-api20210707::Client::recognizeSocialSecurityCard(shared_ptr<RecognizeSocialSecurityCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeSocialSecurityCardWithOptions(request, runtime);
}

RecognizeSocialSecurityCardVersionIIResponse Alibabacloud_Ocr-api20210707::Client::recognizeSocialSecurityCardVersionIIWithOptions(shared_ptr<RecognizeSocialSecurityCardVersionIIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeSocialSecurityCardVersionII"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeSocialSecurityCardVersionIIResponse(callApi(params, req, runtime));
}

RecognizeSocialSecurityCardVersionIIResponse Alibabacloud_Ocr-api20210707::Client::recognizeSocialSecurityCardVersionII(shared_ptr<RecognizeSocialSecurityCardVersionIIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeSocialSecurityCardVersionIIWithOptions(request, runtime);
}

RecognizeTableOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeTableOcrWithOptions(shared_ptr<RecognizeTableOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isHandWriting)) {
    query->insert(pair<string, string>("IsHandWriting", *request->isHandWriting));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lineLess)) {
    query->insert(pair<string, bool>("LineLess", *request->lineLess));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skipDetection)) {
    query->insert(pair<string, bool>("SkipDetection", *request->skipDetection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeTableOcr"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeTableOcrResponse(callApi(params, req, runtime));
}

RecognizeTableOcrResponse Alibabacloud_Ocr-api20210707::Client::recognizeTableOcr(shared_ptr<RecognizeTableOcrRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTableOcrWithOptions(request, runtime);
}

RecognizeTaxClearanceCertificateResponse Alibabacloud_Ocr-api20210707::Client::recognizeTaxClearanceCertificateWithOptions(shared_ptr<RecognizeTaxClearanceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeTaxClearanceCertificate"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeTaxClearanceCertificateResponse(callApi(params, req, runtime));
}

RecognizeTaxClearanceCertificateResponse Alibabacloud_Ocr-api20210707::Client::recognizeTaxClearanceCertificate(shared_ptr<RecognizeTaxClearanceCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTaxClearanceCertificateWithOptions(request, runtime);
}

RecognizeTaxiInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTaxiInvoiceWithOptions(shared_ptr<RecognizeTaxiInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeTaxiInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeTaxiInvoiceResponse(callApi(params, req, runtime));
}

RecognizeTaxiInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTaxiInvoice(shared_ptr<RecognizeTaxiInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTaxiInvoiceWithOptions(request, runtime);
}

RecognizeThaiResponse Alibabacloud_Ocr-api20210707::Client::recognizeThaiWithOptions(shared_ptr<RecognizeThaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRotate)) {
    query->insert(pair<string, bool>("NeedRotate", *request->needRotate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputCharInfo)) {
    query->insert(pair<string, bool>("OutputCharInfo", *request->outputCharInfo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outputTable)) {
    query->insert(pair<string, bool>("OutputTable", *request->outputTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeThai"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeThaiResponse(callApi(params, req, runtime));
}

RecognizeThaiResponse Alibabacloud_Ocr-api20210707::Client::recognizeThai(shared_ptr<RecognizeThaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeThaiWithOptions(request, runtime);
}

RecognizeTollInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTollInvoiceWithOptions(shared_ptr<RecognizeTollInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeTollInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeTollInvoiceResponse(callApi(params, req, runtime));
}

RecognizeTollInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTollInvoice(shared_ptr<RecognizeTollInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTollInvoiceWithOptions(request, runtime);
}

RecognizeTradeMarkCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeTradeMarkCertificationWithOptions(shared_ptr<RecognizeTradeMarkCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeTradeMarkCertification"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeTradeMarkCertificationResponse(callApi(params, req, runtime));
}

RecognizeTradeMarkCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeTradeMarkCertification(shared_ptr<RecognizeTradeMarkCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTradeMarkCertificationWithOptions(request, runtime);
}

RecognizeTrainInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTrainInvoiceWithOptions(shared_ptr<RecognizeTrainInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeTrainInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeTrainInvoiceResponse(callApi(params, req, runtime));
}

RecognizeTrainInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeTrainInvoice(shared_ptr<RecognizeTrainInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeTrainInvoiceWithOptions(request, runtime);
}

RecognizeUsedCarInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeUsedCarInvoiceWithOptions(shared_ptr<RecognizeUsedCarInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeUsedCarInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeUsedCarInvoiceResponse(callApi(params, req, runtime));
}

RecognizeUsedCarInvoiceResponse Alibabacloud_Ocr-api20210707::Client::recognizeUsedCarInvoice(shared_ptr<RecognizeUsedCarInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeUsedCarInvoiceWithOptions(request, runtime);
}

RecognizeVehicleCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleCertificationWithOptions(shared_ptr<RecognizeVehicleCertificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeVehicleCertification"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeVehicleCertificationResponse(callApi(params, req, runtime));
}

RecognizeVehicleCertificationResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleCertification(shared_ptr<RecognizeVehicleCertificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeVehicleCertificationWithOptions(request, runtime);
}

RecognizeVehicleLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleLicenseWithOptions(shared_ptr<RecognizeVehicleLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeVehicleLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeVehicleLicenseResponse(callApi(params, req, runtime));
}

RecognizeVehicleLicenseResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleLicense(shared_ptr<RecognizeVehicleLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeVehicleLicenseWithOptions(request, runtime);
}

RecognizeVehicleRegistrationResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleRegistrationWithOptions(shared_ptr<RecognizeVehicleRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeVehicleRegistration"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeVehicleRegistrationResponse(callApi(params, req, runtime));
}

RecognizeVehicleRegistrationResponse Alibabacloud_Ocr-api20210707::Client::recognizeVehicleRegistration(shared_ptr<RecognizeVehicleRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeVehicleRegistrationWithOptions(request, runtime);
}

RecognizeWaybillResponse Alibabacloud_Ocr-api20210707::Client::recognizeWaybillWithOptions(shared_ptr<RecognizeWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)},
    {"stream", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeWaybill"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeWaybillResponse(callApi(params, req, runtime));
}

RecognizeWaybillResponse Alibabacloud_Ocr-api20210707::Client::recognizeWaybill(shared_ptr<RecognizeWaybillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeWaybillWithOptions(request, runtime);
}

VerifyBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::verifyBusinessLicenseWithOptions(shared_ptr<VerifyBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    query->insert(pair<string, string>("CompanyName", *request->companyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creditCode)) {
    query->insert(pair<string, string>("CreditCode", *request->creditCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPerson)) {
    query->insert(pair<string, string>("LegalPerson", *request->legalPerson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyBusinessLicense"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyBusinessLicenseResponse(callApi(params, req, runtime));
}

VerifyBusinessLicenseResponse Alibabacloud_Ocr-api20210707::Client::verifyBusinessLicense(shared_ptr<VerifyBusinessLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyBusinessLicenseWithOptions(request, runtime);
}

VerifyVATInvoiceResponse Alibabacloud_Ocr-api20210707::Client::verifyVATInvoiceWithOptions(shared_ptr<VerifyVATInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceCode)) {
    query->insert(pair<string, string>("InvoiceCode", *request->invoiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceDate)) {
    query->insert(pair<string, string>("InvoiceDate", *request->invoiceDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceKind)) {
    query->insert(pair<string, long>("InvoiceKind", *request->invoiceKind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceNo)) {
    query->insert(pair<string, string>("InvoiceNo", *request->invoiceNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceSum)) {
    query->insert(pair<string, string>("InvoiceSum", *request->invoiceSum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyVATInvoice"))},
    {"version", boost::any(string("2021-07-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyVATInvoiceResponse(callApi(params, req, runtime));
}

VerifyVATInvoiceResponse Alibabacloud_Ocr-api20210707::Client::verifyVATInvoice(shared_ptr<VerifyVATInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyVATInvoiceWithOptions(request, runtime);
}

