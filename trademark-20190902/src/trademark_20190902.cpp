// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/trademark_20190902.hpp>
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

using namespace Alibabacloud_Trademark20190902;

Alibabacloud_Trademark20190902::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("trademark"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Trademark20190902::Client::getEndpoint(shared_ptr<string> productId,
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

BindApplicantResponse Alibabacloud_Trademark20190902::Client::bindApplicantWithOptions(shared_ptr<BindApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantId)) {
    query->insert(pair<string, string>("ApplicantId", *request->applicantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationOssKey)) {
    query->insert(pair<string, string>("AuthorizationOssKey", *request->authorizationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindApplicant"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindApplicantResponse(callApi(params, req, runtime));
}

BindApplicantResponse Alibabacloud_Trademark20190902::Client::bindApplicant(shared_ptr<BindApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindApplicantWithOptions(request, runtime);
}

CancelOrderResponse Alibabacloud_Trademark20190902::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrder"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOrderResponse(callApi(params, req, runtime));
}

CancelOrderResponse Alibabacloud_Trademark20190902::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

CheckAuthorizationLetterResponse Alibabacloud_Trademark20190902::Client::checkAuthorizationLetterWithOptions(shared_ptr<CheckAuthorizationLetterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantType)) {
    query->insert(pair<string, string>("ApplicantType", *request->applicantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->color)) {
    query->insert(pair<string, string>("Color", *request->color));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactZipcode)) {
    query->insert(pair<string, string>("ContactZipcode", *request->contactZipcode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalType)) {
    query->insert(pair<string, string>("PersonalType", *request->personalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAuthorizationLetter"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAuthorizationLetterResponse(callApi(params, req, runtime));
}

CheckAuthorizationLetterResponse Alibabacloud_Trademark20190902::Client::checkAuthorizationLetter(shared_ptr<CheckAuthorizationLetterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAuthorizationLetterWithOptions(request, runtime);
}

CheckBizAvailableResponse Alibabacloud_Trademark20190902::Client::checkBizAvailableWithOptions(shared_ptr<CheckBizAvailableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->biz)) {
    query->insert(pair<string, string>("Biz", *request->biz));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckBizAvailable"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckBizAvailableResponse(callApi(params, req, runtime));
}

CheckBizAvailableResponse Alibabacloud_Trademark20190902::Client::checkBizAvailable(shared_ptr<CheckBizAvailableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkBizAvailableWithOptions(request, runtime);
}

CheckDuplicateApplicantRiskResponse Alibabacloud_Trademark20190902::Client::checkDuplicateApplicantRiskWithOptions(shared_ptr<CheckDuplicateApplicantRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantName)) {
    query->insert(pair<string, string>("ApplicantName", *request->applicantName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventSceneType)) {
    query->insert(pair<string, long>("EventSceneType", *request->eventSceneType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDuplicateApplicantRisk"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDuplicateApplicantRiskResponse(callApi(params, req, runtime));
}

CheckDuplicateApplicantRiskResponse Alibabacloud_Trademark20190902::Client::checkDuplicateApplicantRisk(shared_ptr<CheckDuplicateApplicantRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDuplicateApplicantRiskWithOptions(request, runtime);
}

CheckDuplicateClassificationResponse Alibabacloud_Trademark20190902::Client::checkDuplicateClassificationWithOptions(shared_ptr<CheckDuplicateClassificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventSceneType)) {
    query->insert(pair<string, long>("EventSceneType", *request->eventSceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDuplicateClassification"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDuplicateClassificationResponse(callApi(params, req, runtime));
}

CheckDuplicateClassificationResponse Alibabacloud_Trademark20190902::Client::checkDuplicateClassification(shared_ptr<CheckDuplicateClassificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDuplicateClassificationWithOptions(request, runtime);
}

CheckDuplicateTrademarkResponse Alibabacloud_Trademark20190902::Client::checkDuplicateTrademarkWithOptions(shared_ptr<CheckDuplicateTrademarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventSceneType)) {
    query->insert(pair<string, long>("EventSceneType", *request->eventSceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialName)) {
    query->insert(pair<string, string>("MaterialName", *request->materialName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDuplicateTrademark"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDuplicateTrademarkResponse(callApi(params, req, runtime));
}

CheckDuplicateTrademarkResponse Alibabacloud_Trademark20190902::Client::checkDuplicateTrademark(shared_ptr<CheckDuplicateTrademarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDuplicateTrademarkWithOptions(request, runtime);
}

CheckMaterialValidityResponse Alibabacloud_Trademark20190902::Client::checkMaterialValidityWithOptions(shared_ptr<CheckMaterialValidityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicenseOssKey)) {
    query->insert(pair<string, string>("BusinessLicenseOssKey", *request->businessLicenseOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    query->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardName)) {
    query->insert(pair<string, string>("IdCardName", *request->idCardName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardNumber)) {
    query->insert(pair<string, string>("IdCardNumber", *request->idCardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardOssKey)) {
    query->insert(pair<string, string>("IdCardOssKey", *request->idCardOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->materialId)) {
    query->insert(pair<string, long>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->materialRegion)) {
    query->insert(pair<string, long>("MaterialRegion", *request->materialRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->materialType)) {
    query->insert(pair<string, long>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalType)) {
    query->insert(pair<string, long>("PersonalType", *request->personalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMaterialValidity"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMaterialValidityResponse(callApi(params, req, runtime));
}

CheckMaterialValidityResponse Alibabacloud_Trademark20190902::Client::checkMaterialValidity(shared_ptr<CheckMaterialValidityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMaterialValidityWithOptions(request, runtime);
}

CheckTrademarkNameResponse Alibabacloud_Trademark20190902::Client::checkTrademarkNameWithOptions(shared_ptr<CheckTrademarkNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->eventSceneType)) {
    query->insert(pair<string, long>("EventSceneType", *request->eventSceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckTrademarkName"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckTrademarkNameResponse(callApi(params, req, runtime));
}

CheckTrademarkNameResponse Alibabacloud_Trademark20190902::Client::checkTrademarkName(shared_ptr<CheckTrademarkNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkTrademarkNameWithOptions(request, runtime);
}

CloseTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::closeTrademarkApplicationWithOptions(shared_ptr<CloseTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseTrademarkApplication"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseTrademarkApplicationResponse(callApi(params, req, runtime));
}

CloseTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::closeTrademarkApplication(shared_ptr<CloseTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeTrademarkApplicationWithOptions(request, runtime);
}

CombineAuthorizationLetterResponse Alibabacloud_Trademark20190902::Client::combineAuthorizationLetterWithOptions(shared_ptr<CombineAuthorizationLetterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantType)) {
    query->insert(pair<string, string>("ApplicantType", *request->applicantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactPhone)) {
    query->insert(pair<string, string>("ContactPhone", *request->contactPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactPostcode)) {
    query->insert(pair<string, string>("ContactPostcode", *request->contactPostcode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialName)) {
    query->insert(pair<string, string>("MaterialName", *request->materialName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nationality)) {
    query->insert(pair<string, string>("Nationality", *request->nationality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalType)) {
    query->insert(pair<string, string>("PersonalType", *request->personalType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmProduceType)) {
    query->insert(pair<string, string>("TmProduceType", *request->tmProduceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CombineAuthorizationLetter"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CombineAuthorizationLetterResponse(callApi(params, req, runtime));
}

CombineAuthorizationLetterResponse Alibabacloud_Trademark20190902::Client::combineAuthorizationLetter(shared_ptr<CombineAuthorizationLetterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return combineAuthorizationLetterWithOptions(request, runtime);
}

ComplementTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::complementTrademarkApplicationWithOptions(shared_ptr<ComplementTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementId)) {
    query->insert(pair<string, string>("AgreementId", *request->agreementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationOssKey)) {
    query->insert(pair<string, string>("AuthorizationOssKey", *request->authorizationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBlackIcon)) {
    query->insert(pair<string, bool>("IsBlackIcon", *request->isBlackIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderData)) {
    query->insert(pair<string, string>("OrderData", *request->orderData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkComment)) {
    query->insert(pair<string, string>("TrademarkComment", *request->trademarkComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkIconOssKey)) {
    query->insert(pair<string, string>("TrademarkIconOssKey", *request->trademarkIconOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkNameType)) {
    query->insert(pair<string, string>("TrademarkNameType", *request->trademarkNameType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trademarkType)) {
    query->insert(pair<string, long>("TrademarkType", *request->trademarkType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ComplementTrademarkApplication"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ComplementTrademarkApplicationResponse(callApi(params, req, runtime));
}

ComplementTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::complementTrademarkApplication(shared_ptr<ComplementTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return complementTrademarkApplicationWithOptions(request, runtime);
}

ConfirmExpertSolutionResponse Alibabacloud_Trademark20190902::Client::confirmExpertSolutionWithOptions(shared_ptr<ConfirmExpertSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmExpertSolution"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmExpertSolutionResponse(callApi(params, req, runtime));
}

ConfirmExpertSolutionResponse Alibabacloud_Trademark20190902::Client::confirmExpertSolution(shared_ptr<ConfirmExpertSolutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmExpertSolutionWithOptions(request, runtime);
}

CreateApplicantResponse Alibabacloud_Trademark20190902::Client::createApplicantWithOptions(shared_ptr<CreateApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantName)) {
    query->insert(pair<string, string>("ApplicantName", *request->applicantName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantRegion)) {
    query->insert(pair<string, long>("ApplicantRegion", *request->applicantRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantType)) {
    query->insert(pair<string, long>("ApplicantType", *request->applicantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationOssKey)) {
    query->insert(pair<string, string>("AuthorizationOssKey", *request->authorizationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicenceOssKey)) {
    query->insert(pair<string, string>("BusinessLicenceOssKey", *request->businessLicenceOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    query->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactAddress)) {
    query->insert(pair<string, string>("ContactAddress", *request->contactAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCity)) {
    query->insert(pair<string, string>("ContactCity", *request->contactCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCounty)) {
    query->insert(pair<string, string>("ContactCounty", *request->contactCounty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactDistrict)) {
    query->insert(pair<string, string>("ContactDistrict", *request->contactDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactEmail)) {
    query->insert(pair<string, string>("ContactEmail", *request->contactEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactProvince)) {
    query->insert(pair<string, string>("ContactProvince", *request->contactProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactZipcode)) {
    query->insert(pair<string, string>("ContactZipcode", *request->contactZipcode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EAddress)) {
    query->insert(pair<string, string>("EAddress", *request->EAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EName)) {
    query->insert(pair<string, string>("EName", *request->EName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardName)) {
    query->insert(pair<string, string>("IdCardName", *request->idCardName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardNumber)) {
    query->insert(pair<string, string>("IdCardNumber", *request->idCardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardOssKey)) {
    query->insert(pair<string, string>("IdCardOssKey", *request->idCardOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeOssKey)) {
    query->insert(pair<string, string>("LegalNoticeOssKey", *request->legalNoticeOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passportOssKey)) {
    query->insert(pair<string, string>("PassportOssKey", *request->passportOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalType)) {
    query->insert(pair<string, long>("PersonalType", *request->personalType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplicant"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicantResponse(callApi(params, req, runtime));
}

CreateApplicantResponse Alibabacloud_Trademark20190902::Client::createApplicant(shared_ptr<CreateApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApplicantWithOptions(request, runtime);
}

CreateCommodityOrderResponse Alibabacloud_Trademark20190902::Client::createCommodityOrderWithOptions(shared_ptr<CreateCommodityOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCommodityOrderShrinkRequest> request = make_shared<CreateCommodityOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->components)) {
    request->componentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->components, make_shared<string>("Components"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->orderParams)) {
    request->orderParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderParams, make_shared<string>("OrderParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentsShrink)) {
    query->insert(pair<string, string>("Components", *request->componentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderParamsShrink)) {
    query->insert(pair<string, string>("OrderParams", *request->orderParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specCode)) {
    query->insert(pair<string, string>("SpecCode", *request->specCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCommodityOrder"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCommodityOrderResponse(callApi(params, req, runtime));
}

CreateCommodityOrderResponse Alibabacloud_Trademark20190902::Client::createCommodityOrder(shared_ptr<CreateCommodityOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCommodityOrderWithOptions(request, runtime);
}

CreateOrderResponse Alibabacloud_Trademark20190902::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementId)) {
    query->insert(pair<string, string>("AgreementId", *request->agreementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantId)) {
    query->insert(pair<string, string>("ApplicantId", *request->applicantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicationType)) {
    query->insert(pair<string, long>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationOssKey)) {
    query->insert(pair<string, string>("AuthorizationOssKey", *request->authorizationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackAndWhiteIcon)) {
    query->insert(pair<string, string>("BlackAndWhiteIcon", *request->blackAndWhiteIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classifications)) {
    query->insert(pair<string, string>("Classifications", *request->classifications));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeKey)) {
    query->insert(pair<string, string>("LegalNoticeKey", *request->legalNoticeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentCallback)) {
    query->insert(pair<string, string>("PaymentCallback", *request->paymentCallback));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkComment)) {
    query->insert(pair<string, string>("TrademarkComment", *request->trademarkComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkIcon)) {
    query->insert(pair<string, string>("TrademarkIcon", *request->trademarkIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkNameType)) {
    query->insert(pair<string, string>("TrademarkNameType", *request->trademarkNameType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrder"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderResponse(callApi(params, req, runtime));
}

CreateOrderResponse Alibabacloud_Trademark20190902::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithOptions(request, runtime);
}

CreateTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::createTrademarkApplicationWithOptions(shared_ptr<CreateTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementId)) {
    query->insert(pair<string, string>("AgreementId", *request->agreementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantId)) {
    query->insert(pair<string, string>("ApplicantId", *request->applicantId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicationType)) {
    query->insert(pair<string, long>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationOssKey)) {
    query->insert(pair<string, string>("AuthorizationOssKey", *request->authorizationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackAndWhiteIcon)) {
    query->insert(pair<string, string>("BlackAndWhiteIcon", *request->blackAndWhiteIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classifications)) {
    query->insert(pair<string, string>("Classifications", *request->classifications));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeKey)) {
    query->insert(pair<string, string>("LegalNoticeKey", *request->legalNoticeKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkComment)) {
    query->insert(pair<string, string>("TrademarkComment", *request->trademarkComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkIcon)) {
    query->insert(pair<string, string>("TrademarkIcon", *request->trademarkIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkNameType)) {
    query->insert(pair<string, string>("TrademarkNameType", *request->trademarkNameType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrademarkApplication"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrademarkApplicationResponse(callApi(params, req, runtime));
}

CreateTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::createTrademarkApplication(shared_ptr<CreateTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrademarkApplicationWithOptions(request, runtime);
}

DeleteSearchConditionResponse Alibabacloud_Trademark20190902::Client::deleteSearchConditionWithOptions(shared_ptr<DeleteSearchConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->conditionId)) {
    query->insert(pair<string, long>("ConditionId", *request->conditionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umid)) {
    query->insert(pair<string, string>("Umid", *request->umid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSearchCondition"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSearchConditionResponse(callApi(params, req, runtime));
}

DeleteSearchConditionResponse Alibabacloud_Trademark20190902::Client::deleteSearchCondition(shared_ptr<DeleteSearchConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSearchConditionWithOptions(request, runtime);
}

DescribeAdminTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::describeAdminTrademarkApplicationWithOptions(shared_ptr<DescribeAdminTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdminTrademarkApplication"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdminTrademarkApplicationResponse(callApi(params, req, runtime));
}

DescribeAdminTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::describeAdminTrademarkApplication(shared_ptr<DescribeAdminTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdminTrademarkApplicationWithOptions(request, runtime);
}

DescribeApplicantResponse Alibabacloud_Trademark20190902::Client::describeApplicantWithOptions(shared_ptr<DescribeApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantId)) {
    query->insert(pair<string, long>("ApplicantId", *request->applicantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApplicant"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApplicantResponse(callApi(params, req, runtime));
}

DescribeApplicantResponse Alibabacloud_Trademark20190902::Client::describeApplicant(shared_ptr<DescribeApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApplicantWithOptions(request, runtime);
}

DescribePartnerTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::describePartnerTrademarkApplicationWithOptions(shared_ptr<DescribePartnerTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePartnerTrademarkApplication"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePartnerTrademarkApplicationResponse(callApi(params, req, runtime));
}

DescribePartnerTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::describePartnerTrademarkApplication(shared_ptr<DescribePartnerTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePartnerTrademarkApplicationWithOptions(request, runtime);
}

DescribeQualificationStatusResponse Alibabacloud_Trademark20190902::Client::describeQualificationStatusWithOptions(shared_ptr<DescribeQualificationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tbUid)) {
    query->insert(pair<string, string>("TbUid", *request->tbUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualificationStatus"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualificationStatusResponse(callApi(params, req, runtime));
}

DescribeQualificationStatusResponse Alibabacloud_Trademark20190902::Client::describeQualificationStatus(shared_ptr<DescribeQualificationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQualificationStatusWithOptions(request, runtime);
}

DescribeSupplementResponse Alibabacloud_Trademark20190902::Client::describeSupplementWithOptions(shared_ptr<DescribeSupplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->supplementId)) {
    query->insert(pair<string, long>("SupplementId", *request->supplementId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSupplement"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSupplementResponse(callApi(params, req, runtime));
}

DescribeSupplementResponse Alibabacloud_Trademark20190902::Client::describeSupplement(shared_ptr<DescribeSupplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSupplementWithOptions(request, runtime);
}

DescribeTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::describeTrademarkApplicationWithOptions(shared_ptr<DescribeTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrademarkApplication"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrademarkApplicationResponse(callApi(params, req, runtime));
}

DescribeTrademarkApplicationResponse Alibabacloud_Trademark20190902::Client::describeTrademarkApplication(shared_ptr<DescribeTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrademarkApplicationWithOptions(request, runtime);
}

DescribeTrademarkDetailForInnerResponse Alibabacloud_Trademark20190902::Client::describeTrademarkDetailForInnerWithOptions(shared_ptr<DescribeTrademarkDetailForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umid)) {
    query->insert(pair<string, string>("Umid", *request->umid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrademarkDetailForInner"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrademarkDetailForInnerResponse(callApi(params, req, runtime));
}

DescribeTrademarkDetailForInnerResponse Alibabacloud_Trademark20190902::Client::describeTrademarkDetailForInner(shared_ptr<DescribeTrademarkDetailForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrademarkDetailForInnerWithOptions(request, runtime);
}

GenerateUploadFilePolicyResponse Alibabacloud_Trademark20190902::Client::generateUploadFilePolicyWithOptions(shared_ptr<GenerateUploadFilePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateUploadFilePolicy"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateUploadFilePolicyResponse(callApi(params, req, runtime));
}

GenerateUploadFilePolicyResponse Alibabacloud_Trademark20190902::Client::generateUploadFilePolicy(shared_ptr<GenerateUploadFilePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateUploadFilePolicyWithOptions(request, runtime);
}

GetAlipayUrlResponse Alibabacloud_Trademark20190902::Client::getAlipayUrlWithOptions(shared_ptr<GetAlipayUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlipayUrl"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlipayUrlResponse(callApi(params, req, runtime));
}

GetAlipayUrlResponse Alibabacloud_Trademark20190902::Client::getAlipayUrl(shared_ptr<GetAlipayUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlipayUrlWithOptions(request, runtime);
}

GetOrderConfirmUrlResponse Alibabacloud_Trademark20190902::Client::getOrderConfirmUrlWithOptions(shared_ptr<GetOrderConfirmUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetOrderConfirmUrlRequestItems>>(request->items)) {
    query->insert(pair<string, vector<GetOrderConfirmUrlRequestItems>>("Items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTraceCode)) {
    query->insert(pair<string, string>("OutTraceCode", *request->outTraceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTraceType)) {
    query->insert(pair<string, string>("OutTraceType", *request->outTraceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrderConfirmUrl"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrderConfirmUrlResponse(callApi(params, req, runtime));
}

GetOrderConfirmUrlResponse Alibabacloud_Trademark20190902::Client::getOrderConfirmUrl(shared_ptr<GetOrderConfirmUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOrderConfirmUrlWithOptions(request, runtime);
}

GetStsByTaobaoUidResponse Alibabacloud_Trademark20190902::Client::getStsByTaobaoUidWithOptions(shared_ptr<GetStsByTaobaoUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUid)) {
    query->insert(pair<string, string>("AliyunUid", *request->aliyunUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbUid)) {
    query->insert(pair<string, string>("TbUid", *request->tbUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStsByTaobaoUid"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStsByTaobaoUidResponse(callApi(params, req, runtime));
}

GetStsByTaobaoUidResponse Alibabacloud_Trademark20190902::Client::getStsByTaobaoUid(shared_ptr<GetStsByTaobaoUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStsByTaobaoUidWithOptions(request, runtime);
}

ListAdminTrademarkApplicationLogsResponse Alibabacloud_Trademark20190902::Client::listAdminTrademarkApplicationLogsWithOptions(shared_ptr<ListAdminTrademarkApplicationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAdminTrademarkApplicationLogs"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAdminTrademarkApplicationLogsResponse(callApi(params, req, runtime));
}

ListAdminTrademarkApplicationLogsResponse Alibabacloud_Trademark20190902::Client::listAdminTrademarkApplicationLogs(shared_ptr<ListAdminTrademarkApplicationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAdminTrademarkApplicationLogsWithOptions(request, runtime);
}

ListAdminTrademarkApplicationsResponse Alibabacloud_Trademark20190902::Client::listAdminTrademarkApplicationsWithOptions(shared_ptr<ListAdminTrademarkApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantName)) {
    query->insert(pair<string, string>("ApplicantName", *request->applicantName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicationStatus)) {
    query->insert(pair<string, long>("ApplicationStatus", *request->applicationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationType)) {
    query->insert(pair<string, string>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplementStatus)) {
    query->insert(pair<string, long>("SupplementStatus", *request->supplementStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkNumber)) {
    query->insert(pair<string, string>("TrademarkNumber", *request->trademarkNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAdminTrademarkApplications"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAdminTrademarkApplicationsResponse(callApi(params, req, runtime));
}

ListAdminTrademarkApplicationsResponse Alibabacloud_Trademark20190902::Client::listAdminTrademarkApplications(shared_ptr<ListAdminTrademarkApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAdminTrademarkApplicationsWithOptions(request, runtime);
}

ListApplicantsResponse Alibabacloud_Trademark20190902::Client::listApplicantsWithOptions(shared_ptr<ListApplicantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantName)) {
    query->insert(pair<string, string>("ApplicantName", *request->applicantName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantRegion)) {
    query->insert(pair<string, long>("ApplicantRegion", *request->applicantRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantType)) {
    query->insert(pair<string, long>("ApplicantType", *request->applicantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantVersion)) {
    query->insert(pair<string, string>("ApplicantVersion", *request->applicantVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->auditStatus)) {
    query->insert(pair<string, long>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    query->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemVersion)) {
    query->insert(pair<string, string>("SystemVersion", *request->systemVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplicants"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicantsResponse(callApi(params, req, runtime));
}

ListApplicantsResponse Alibabacloud_Trademark20190902::Client::listApplicants(shared_ptr<ListApplicantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicantsWithOptions(request, runtime);
}

ListAreasResponse Alibabacloud_Trademark20190902::Client::listAreasWithOptions(shared_ptr<ListAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCode)) {
    query->insert(pair<string, string>("ParentCode", *request->parentCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAreas"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAreasResponse(callApi(params, req, runtime));
}

ListAreasResponse Alibabacloud_Trademark20190902::Client::listAreas(shared_ptr<ListAreasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAreasWithOptions(request, runtime);
}

ListClassificationConditionsResponse Alibabacloud_Trademark20190902::Client::listClassificationConditionsWithOptions(shared_ptr<ListClassificationConditionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClassificationConditions"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClassificationConditionsResponse(callApi(params, req, runtime));
}

ListClassificationConditionsResponse Alibabacloud_Trademark20190902::Client::listClassificationConditions(shared_ptr<ListClassificationConditionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClassificationConditionsWithOptions(request, runtime);
}

ListClassificationsResponse Alibabacloud_Trademark20190902::Client::listClassificationsWithOptions(shared_ptr<ListClassificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCode)) {
    query->insert(pair<string, string>("ParentCode", *request->parentCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClassifications"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClassificationsResponse(callApi(params, req, runtime));
}

ListClassificationsResponse Alibabacloud_Trademark20190902::Client::listClassifications(shared_ptr<ListClassificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClassificationsWithOptions(request, runtime);
}

ListTrademarkApplicationLogsResponse Alibabacloud_Trademark20190902::Client::listTrademarkApplicationLogsWithOptions(shared_ptr<ListTrademarkApplicationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrademarkApplicationLogs"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrademarkApplicationLogsResponse(callApi(params, req, runtime));
}

ListTrademarkApplicationLogsResponse Alibabacloud_Trademark20190902::Client::listTrademarkApplicationLogs(shared_ptr<ListTrademarkApplicationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrademarkApplicationLogsWithOptions(request, runtime);
}

ListTrademarkApplicationsResponse Alibabacloud_Trademark20190902::Client::listTrademarkApplicationsWithOptions(shared_ptr<ListTrademarkApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantName)) {
    query->insert(pair<string, string>("ApplicantName", *request->applicantName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicationStatus)) {
    query->insert(pair<string, long>("ApplicationStatus", *request->applicationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationType)) {
    query->insert(pair<string, string>("ApplicationType", *request->applicationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeLeft)) {
    query->insert(pair<string, long>("CreateTimeLeft", *request->createTimeLeft));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeRight)) {
    query->insert(pair<string, long>("CreateTimeRight", *request->createTimeRight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flag)) {
    query->insert(pair<string, long>("Flag", *request->flag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    query->insert(pair<string, long>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryVoucherOrderDoneFlag)) {
    query->insert(pair<string, bool>("QueryVoucherOrderDoneFlag", *request->queryVoucherOrderDoneFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryVoucherOrderFlag)) {
    query->insert(pair<string, bool>("QueryVoucherOrderFlag", *request->queryVoucherOrderFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortFiled)) {
    query->insert(pair<string, string>("SortFiled", *request->sortFiled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplementStatus)) {
    query->insert(pair<string, long>("SupplementStatus", *request->supplementStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkNumber)) {
    query->insert(pair<string, string>("TrademarkNumber", *request->trademarkNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrademarkApplications"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrademarkApplicationsResponse(callApi(params, req, runtime));
}

ListTrademarkApplicationsResponse Alibabacloud_Trademark20190902::Client::listTrademarkApplications(shared_ptr<ListTrademarkApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrademarkApplicationsWithOptions(request, runtime);
}

ListTrademarkSearchForInnerResponse Alibabacloud_Trademark20190902::Client::listTrademarkSearchForInnerWithOptions(shared_ptr<ListTrademarkSearchForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyBeginTime)) {
    query->insert(pair<string, string>("ApplyBeginTime", *request->applyBeginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyEndTime)) {
    query->insert(pair<string, string>("ApplyEndTime", *request->applyEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ifPrecision)) {
    query->insert(pair<string, bool>("IfPrecision", *request->ifPrecision));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchPreference)) {
    query->insert(pair<string, string>("SearchPreference", *request->searchPreference));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("SearchType", *request->searchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umid)) {
    query->insert(pair<string, string>("Umid", *request->umid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrademarkSearchForInner"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrademarkSearchForInnerResponse(callApi(params, req, runtime));
}

ListTrademarkSearchForInnerResponse Alibabacloud_Trademark20190902::Client::listTrademarkSearchForInner(shared_ptr<ListTrademarkSearchForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrademarkSearchForInnerWithOptions(request, runtime);
}

PutMeasureDataResponse Alibabacloud_Trademark20190902::Client::putMeasureDataWithOptions(shared_ptr<PutMeasureDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    body->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutMeasureData"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutMeasureDataResponse(callApi(params, req, runtime));
}

PutMeasureDataResponse Alibabacloud_Trademark20190902::Client::putMeasureData(shared_ptr<PutMeasureDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putMeasureDataWithOptions(request, runtime);
}

PutMeasureReadyFlagResponse Alibabacloud_Trademark20190902::Client::putMeasureReadyFlagWithOptions(shared_ptr<PutMeasureReadyFlagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readyFlag)) {
    query->insert(pair<string, string>("ReadyFlag", *request->readyFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutMeasureReadyFlag"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutMeasureReadyFlagResponse(callApi(params, req, runtime));
}

PutMeasureReadyFlagResponse Alibabacloud_Trademark20190902::Client::putMeasureReadyFlag(shared_ptr<PutMeasureReadyFlagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putMeasureReadyFlagWithOptions(request, runtime);
}

QueryActivityItemsResponse Alibabacloud_Trademark20190902::Client::queryActivityItemsWithOptions(shared_ptr<QueryActivityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->activityId)) {
    query->insert(pair<string, long>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfo)) {
    query->insert(pair<string, string>("ExtendInfo", *request->extendInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->floorIndex)) {
    query->insert(pair<string, long>("FloorIndex", *request->floorIndex));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mock)) {
    query->insert(pair<string, bool>("Mock", *request->mock));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->refresh)) {
    query->insert(pair<string, bool>("Refresh", *request->refresh));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umId)) {
    query->insert(pair<string, string>("UmId", *request->umId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryActivityItems"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryActivityItemsResponse(callApi(params, req, runtime));
}

QueryActivityItemsResponse Alibabacloud_Trademark20190902::Client::queryActivityItems(shared_ptr<QueryActivityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryActivityItemsWithOptions(request, runtime);
}

QueryAliyunUidResponse Alibabacloud_Trademark20190902::Client::queryAliyunUidWithOptions(shared_ptr<QueryAliyunUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tbUid)) {
    query->insert(pair<string, string>("TbUid", *request->tbUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAliyunUid"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAliyunUidResponse(callApi(params, req, runtime));
}

QueryAliyunUidResponse Alibabacloud_Trademark20190902::Client::queryAliyunUid(shared_ptr<QueryAliyunUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAliyunUidWithOptions(request, runtime);
}

QueryDetailItemResponse Alibabacloud_Trademark20190902::Client::queryDetailItemWithOptions(shared_ptr<QueryDetailItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->detailConvertType)) {
    query->insert(pair<string, string>("DetailConvertType", *request->detailConvertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailId)) {
    query->insert(pair<string, string>("DetailId", *request->detailId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailType)) {
    query->insert(pair<string, string>("DetailType", *request->detailType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mock)) {
    query->insert(pair<string, bool>("Mock", *request->mock));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDetailItem"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDetailItemResponse(callApi(params, req, runtime));
}

QueryDetailItemResponse Alibabacloud_Trademark20190902::Client::queryDetailItem(shared_ptr<QueryDetailItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDetailItemWithOptions(request, runtime);
}

QueryRemainResourcesResponse Alibabacloud_Trademark20190902::Client::queryRemainResourcesWithOptions(shared_ptr<QueryRemainResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRemainResources"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRemainResourcesResponse(callApi(params, req, runtime));
}

QueryRemainResourcesResponse Alibabacloud_Trademark20190902::Client::queryRemainResources(shared_ptr<QueryRemainResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRemainResourcesWithOptions(request, runtime);
}

RefuseSupplementResponse Alibabacloud_Trademark20190902::Client::refuseSupplementWithOptions(shared_ptr<RefuseSupplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->supplementId)) {
    query->insert(pair<string, long>("SupplementId", *request->supplementId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefuseSupplement"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefuseSupplementResponse(callApi(params, req, runtime));
}

RefuseSupplementResponse Alibabacloud_Trademark20190902::Client::refuseSupplement(shared_ptr<RefuseSupplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refuseSupplementWithOptions(request, runtime);
}

RejectExpertSolutionResponse Alibabacloud_Trademark20190902::Client::rejectExpertSolutionWithOptions(shared_ptr<RejectExpertSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RejectExpertSolution"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RejectExpertSolutionResponse(callApi(params, req, runtime));
}

RejectExpertSolutionResponse Alibabacloud_Trademark20190902::Client::rejectExpertSolution(shared_ptr<RejectExpertSolutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rejectExpertSolutionWithOptions(request, runtime);
}

RemoveApplicantResponse Alibabacloud_Trademark20190902::Client::removeApplicantWithOptions(shared_ptr<RemoveApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantId)) {
    query->insert(pair<string, long>("ApplicantId", *request->applicantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApplicant"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveApplicantResponse(callApi(params, req, runtime));
}

RemoveApplicantResponse Alibabacloud_Trademark20190902::Client::removeApplicant(shared_ptr<RemoveApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeApplicantWithOptions(request, runtime);
}

SaveSearchConditionResponse Alibabacloud_Trademark20190902::Client::saveSearchConditionWithOptions(shared_ptr<SaveSearchConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conditionContent)) {
    body->insert(pair<string, string>("ConditionContent", *request->conditionContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    body->insert(pair<string, string>("TagName", *request->tagName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umid)) {
    body->insert(pair<string, string>("Umid", *request->umid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSearchCondition"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSearchConditionResponse(callApi(params, req, runtime));
}

SaveSearchConditionResponse Alibabacloud_Trademark20190902::Client::saveSearchCondition(shared_ptr<SaveSearchConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSearchConditionWithOptions(request, runtime);
}

SaveTemporaryApplicantResponse Alibabacloud_Trademark20190902::Client::saveTemporaryApplicantWithOptions(shared_ptr<SaveTemporaryApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantId)) {
    query->insert(pair<string, long>("ApplicantId", *request->applicantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicenceOssKey)) {
    query->insert(pair<string, string>("BusinessLicenceOssKey", *request->businessLicenceOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    query->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->completeApplicant)) {
    query->insert(pair<string, bool>("CompleteApplicant", *request->completeApplicant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactAddress)) {
    query->insert(pair<string, string>("ContactAddress", *request->contactAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCity)) {
    query->insert(pair<string, string>("ContactCity", *request->contactCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCounty)) {
    query->insert(pair<string, string>("ContactCounty", *request->contactCounty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactDistrict)) {
    query->insert(pair<string, string>("ContactDistrict", *request->contactDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactEmail)) {
    query->insert(pair<string, string>("ContactEmail", *request->contactEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactProvince)) {
    query->insert(pair<string, string>("ContactProvince", *request->contactProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactZipCode)) {
    query->insert(pair<string, string>("ContactZipCode", *request->contactZipCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EAddress)) {
    query->insert(pair<string, string>("EAddress", *request->EAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EName)) {
    query->insert(pair<string, string>("EName", *request->EName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardOssKey)) {
    query->insert(pair<string, string>("IdCardOssKey", *request->idCardOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeOssKey)) {
    query->insert(pair<string, string>("LegalNoticeOssKey", *request->legalNoticeOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    query->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passportOssKey)) {
    query->insert(pair<string, string>("PassportOssKey", *request->passportOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->town)) {
    query->insert(pair<string, string>("Town", *request->town));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTemporaryApplicant"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTemporaryApplicantResponse(callApi(params, req, runtime));
}

SaveTemporaryApplicantResponse Alibabacloud_Trademark20190902::Client::saveTemporaryApplicant(shared_ptr<SaveTemporaryApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTemporaryApplicantWithOptions(request, runtime);
}

SearchItemsResponse Alibabacloud_Trademark20190902::Client::searchItemsWithOptions(shared_ptr<SearchItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->excludedTags)) {
    query->insert(pair<string, string>("ExcludedTags", *request->excludedTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludedUids)) {
    query->insert(pair<string, string>("ExcludedUids", *request->excludedUids));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->feedsType)) {
    query->insert(pair<string, bool>("FeedsType", *request->feedsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intCls)) {
    query->insert(pair<string, string>("IntCls", *request->intCls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->mock)) {
    query->insert(pair<string, bool>("Mock", *request->mock));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priceLeft)) {
    query->insert(pair<string, string>("PriceLeft", *request->priceLeft));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priceRight)) {
    query->insert(pair<string, string>("PriceRight", *request->priceRight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->products)) {
    query->insert(pair<string, string>("Products", *request->products));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    query->insert(pair<string, long>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trademarkNameLength)) {
    query->insert(pair<string, long>("TrademarkNameLength", *request->trademarkNameLength));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkNameType)) {
    query->insert(pair<string, string>("TrademarkNameType", *request->trademarkNameType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umId)) {
    query->insert(pair<string, string>("UmId", *request->umId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchItems"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchItemsResponse(callApi(params, req, runtime));
}

SearchItemsResponse Alibabacloud_Trademark20190902::Client::searchItems(shared_ptr<SearchItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchItemsWithOptions(request, runtime);
}

SearchSimilarityResponse Alibabacloud_Trademark20190902::Client::searchSimilarityWithOptions(shared_ptr<SearchSimilarityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchSimilarityShrinkRequest> request = make_shared<SearchSimilarityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->classifications)) {
    request->classificationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->classifications, make_shared<string>("Classifications"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->similarGroups)) {
    request->similarGroupsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->similarGroups, make_shared<string>("SimilarGroups"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationsShrink)) {
    query->insert(pair<string, string>("Classifications", *request->classificationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchSimilarityShrinkRequestNameUriList>>(request->nameUriList)) {
    query->insert(pair<string, vector<SearchSimilarityShrinkRequestNameUriList>>("NameUriList", *request->nameUriList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("SearchType", *request->searchType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showDetail)) {
    query->insert(pair<string, bool>("ShowDetail", *request->showDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->similarGroupsShrink)) {
    query->insert(pair<string, string>("SimilarGroups", *request->similarGroupsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sorter)) {
    query->insert(pair<string, string>("Sorter", *request->sorter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umid)) {
    query->insert(pair<string, string>("Umid", *request->umid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchSimilarity"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchSimilarityResponse(callApi(params, req, runtime));
}

SearchSimilarityResponse Alibabacloud_Trademark20190902::Client::searchSimilarity(shared_ptr<SearchSimilarityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchSimilarityWithOptions(request, runtime);
}

SearchSimilarityListResponse Alibabacloud_Trademark20190902::Client::searchSimilarityListWithOptions(shared_ptr<SearchSimilarityListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchSimilarityListShrinkRequest> request = make_shared<SearchSimilarityListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->classifications)) {
    request->classificationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->classifications, make_shared<string>("Classifications"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->similarGroups)) {
    request->similarGroupsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->similarGroups, make_shared<string>("SimilarGroups"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationsShrink)) {
    query->insert(pair<string, string>("Classifications", *request->classificationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->similarGroupsShrink)) {
    query->insert(pair<string, string>("SimilarGroups", *request->similarGroupsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->successSearchType)) {
    query->insert(pair<string, string>("SuccessSearchType", *request->successSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->umid)) {
    query->insert(pair<string, string>("Umid", *request->umid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    query->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchSimilarityList"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchSimilarityListResponse(callApi(params, req, runtime));
}

SearchSimilarityListResponse Alibabacloud_Trademark20190902::Client::searchSimilarityList(shared_ptr<SearchSimilarityListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchSimilarityListWithOptions(request, runtime);
}

SendMessageToUserResponse Alibabacloud_Trademark20190902::Client::sendMessageToUserWithOptions(shared_ptr<SendMessageToUserRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendMessageToUserShrinkRequest> request = make_shared<SendMessageToUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->templateData)) {
    request->templateDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateData, make_shared<string>("TemplateData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverNickName)) {
    query->insert(pair<string, string>("ReceiverNickName", *request->receiverNickName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderNickName)) {
    query->insert(pair<string, string>("SenderNickName", *request->senderNickName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateDataShrink)) {
    query->insert(pair<string, string>("TemplateData", *request->templateDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessageToUser"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageToUserResponse(callApi(params, req, runtime));
}

SendMessageToUserResponse Alibabacloud_Trademark20190902::Client::sendMessageToUser(shared_ptr<SendMessageToUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageToUserWithOptions(request, runtime);
}

SubmitSupplementResponse Alibabacloud_Trademark20190902::Client::submitSupplementWithOptions(shared_ptr<SubmitSupplementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSupplementShrinkRequest> request = make_shared<SubmitSupplementShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->userFiles)) {
    request->userFilesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userFiles, make_shared<string>("UserFiles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplementId)) {
    query->insert(pair<string, long>("SupplementId", *request->supplementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userFilesShrink)) {
    query->insert(pair<string, string>("UserFiles", *request->userFilesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSupplement"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSupplementResponse(callApi(params, req, runtime));
}

SubmitSupplementResponse Alibabacloud_Trademark20190902::Client::submitSupplement(shared_ptr<SubmitSupplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSupplementWithOptions(request, runtime);
}

UpdateApplicantResponse Alibabacloud_Trademark20190902::Client::updateApplicantWithOptions(shared_ptr<UpdateApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantId)) {
    query->insert(pair<string, long>("ApplicantId", *request->applicantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantName)) {
    query->insert(pair<string, string>("ApplicantName", *request->applicantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationOssKey)) {
    query->insert(pair<string, string>("AuthorizationOssKey", *request->authorizationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicenceOssKey)) {
    query->insert(pair<string, string>("BusinessLicenceOssKey", *request->businessLicenceOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    query->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactAddress)) {
    query->insert(pair<string, string>("ContactAddress", *request->contactAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCity)) {
    query->insert(pair<string, string>("ContactCity", *request->contactCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCounty)) {
    query->insert(pair<string, string>("ContactCounty", *request->contactCounty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactDistrict)) {
    query->insert(pair<string, string>("ContactDistrict", *request->contactDistrict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactEmail)) {
    query->insert(pair<string, string>("ContactEmail", *request->contactEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactProvince)) {
    query->insert(pair<string, string>("ContactProvince", *request->contactProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactZipcode)) {
    query->insert(pair<string, string>("ContactZipcode", *request->contactZipcode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EAddress)) {
    query->insert(pair<string, string>("EAddress", *request->EAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->EName)) {
    query->insert(pair<string, string>("EName", *request->EName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardName)) {
    query->insert(pair<string, string>("IdCardName", *request->idCardName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardNumber)) {
    query->insert(pair<string, string>("IdCardNumber", *request->idCardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardOssKey)) {
    query->insert(pair<string, string>("IdCardOssKey", *request->idCardOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeOssKey)) {
    query->insert(pair<string, string>("LegalNoticeOssKey", *request->legalNoticeOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passportOssKey)) {
    query->insert(pair<string, string>("PassportOssKey", *request->passportOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalType)) {
    query->insert(pair<string, long>("PersonalType", *request->personalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicant"))},
    {"version", boost::any(string("2019-09-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicantResponse(callApi(params, req, runtime));
}

UpdateApplicantResponse Alibabacloud_Trademark20190902::Client::updateApplicant(shared_ptr<UpdateApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApplicantWithOptions(request, runtime);
}

