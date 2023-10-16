// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/trademark_20180724.hpp>
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

using namespace Alibabacloud_Trademark20180724;

Alibabacloud_Trademark20180724::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("trademark"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Trademark20180724::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptPartnerNotificationResponse Alibabacloud_Trademark20180724::Client::acceptPartnerNotificationWithOptions(shared_ptr<AcceptPartnerNotificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->material)) {
    query->insert(pair<string, string>("Material", *request->material));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    query->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcceptPartnerNotification"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcceptPartnerNotificationResponse(callApi(params, req, runtime));
}

AcceptPartnerNotificationResponse Alibabacloud_Trademark20180724::Client::acceptPartnerNotification(shared_ptr<AcceptPartnerNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptPartnerNotificationWithOptions(request, runtime);
}

ApplyNotaryPostResponse Alibabacloud_Trademark20180724::Client::applyNotaryPostWithOptions(shared_ptr<ApplyNotaryPostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryOrderId)) {
    query->insert(pair<string, long>("NotaryOrderId", *request->notaryOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverAddress)) {
    query->insert(pair<string, string>("ReceiverAddress", *request->receiverAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverName)) {
    query->insert(pair<string, string>("ReceiverName", *request->receiverName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverPhone)) {
    query->insert(pair<string, string>("ReceiverPhone", *request->receiverPhone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyNotaryPost"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyNotaryPostResponse(callApi(params, req, runtime));
}

ApplyNotaryPostResponse Alibabacloud_Trademark20180724::Client::applyNotaryPost(shared_ptr<ApplyNotaryPostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyNotaryPostWithOptions(request, runtime);
}

AskAdjudicationFileResponse Alibabacloud_Trademark20180724::Client::askAdjudicationFileWithOptions(shared_ptr<AskAdjudicationFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactProvince)) {
    query->insert(pair<string, string>("ContactProvince", *request->contactProvince));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AskAdjudicationFile"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AskAdjudicationFileResponse(callApi(params, req, runtime));
}

AskAdjudicationFileResponse Alibabacloud_Trademark20180724::Client::askAdjudicationFile(shared_ptr<AskAdjudicationFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return askAdjudicationFileWithOptions(request, runtime);
}

BindMaterialResponse Alibabacloud_Trademark20180724::Client::bindMaterialWithOptions(shared_ptr<BindMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeKey)) {
    query->insert(pair<string, string>("LegalNoticeKey", *request->legalNoticeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    query->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindMaterialResponse(callApi(params, req, runtime));
}

BindMaterialResponse Alibabacloud_Trademark20180724::Client::bindMaterial(shared_ptr<BindMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindMaterialWithOptions(request, runtime);
}

CancelTradeOrderResponse Alibabacloud_Trademark20180724::Client::cancelTradeOrderWithOptions(shared_ptr<CancelTradeOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelTradeOrder"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelTradeOrderResponse(callApi(params, req, runtime));
}

CancelTradeOrderResponse Alibabacloud_Trademark20180724::Client::cancelTradeOrder(shared_ptr<CancelTradeOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelTradeOrderWithOptions(request, runtime);
}

CheckFlsmFillResponse Alibabacloud_Trademark20180724::Client::checkFlsmFillWithOptions(shared_ptr<CheckFlsmFillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantType)) {
    query->insert(pair<string, string>("ApplicantType", *request->applicantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personalType)) {
    query->insert(pair<string, string>("PersonalType", *request->personalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wtrName)) {
    query->insert(pair<string, string>("WtrName", *request->wtrName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckFlsmFill"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckFlsmFillResponse(callApi(params, req, runtime));
}

CheckFlsmFillResponse Alibabacloud_Trademark20180724::Client::checkFlsmFill(shared_ptr<CheckFlsmFillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFlsmFillWithOptions(request, runtime);
}

CheckIfCollectedResponse Alibabacloud_Trademark20180724::Client::checkIfCollectedWithOptions(shared_ptr<CheckIfCollectedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdList)) {
    query->insert(pair<string, string>("ItemIdList", *request->itemIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckIfCollected"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckIfCollectedResponse(callApi(params, req, runtime));
}

CheckIfCollectedResponse Alibabacloud_Trademark20180724::Client::checkIfCollected(shared_ptr<CheckIfCollectedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkIfCollectedWithOptions(request, runtime);
}

CheckLoaFillResponse Alibabacloud_Trademark20180724::Client::checkLoaFillWithOptions(shared_ptr<CheckLoaFillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantType)) {
    query->insert(pair<string, string>("ApplicantType", *request->applicantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wtrName)) {
    query->insert(pair<string, string>("WtrName", *request->wtrName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckLoaFill"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckLoaFillResponse(callApi(params, req, runtime));
}

CheckLoaFillResponse Alibabacloud_Trademark20180724::Client::checkLoaFill(shared_ptr<CheckLoaFillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkLoaFillWithOptions(request, runtime);
}

CheckTrademarkIconResponse Alibabacloud_Trademark20180724::Client::checkTrademarkIconWithOptions(shared_ptr<CheckTrademarkIconRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->eventSceneType)) {
    query->insert(pair<string, long>("EventSceneType", *request->eventSceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkIconOssKey)) {
    query->insert(pair<string, string>("TrademarkIconOssKey", *request->trademarkIconOssKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckTrademarkIcon"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckTrademarkIconResponse(callApi(params, req, runtime));
}

CheckTrademarkIconResponse Alibabacloud_Trademark20180724::Client::checkTrademarkIcon(shared_ptr<CheckTrademarkIconRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkTrademarkIconWithOptions(request, runtime);
}

CheckTrademarkOrderResponse Alibabacloud_Trademark20180724::Client::checkTrademarkOrderWithOptions(shared_ptr<CheckTrademarkOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementId)) {
    query->insert(pair<string, string>("AgreementId", *request->agreementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBlackIcon)) {
    query->insert(pair<string, bool>("IsBlackIcon", *request->isBlackIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    query->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logoGoodsId)) {
    query->insert(pair<string, string>("LogoGoodsId", *request->logoGoodsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderData)) {
    query->insert(pair<string, string>("OrderData", *request->orderData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partnerCode)) {
    query->insert(pair<string, string>("PartnerCode", *request->partnerCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNum)) {
    query->insert(pair<string, string>("PhoneNum", *request->phoneNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realUserName)) {
    query->insert(pair<string, string>("RealUserName", *request->realUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerName)) {
    query->insert(pair<string, string>("RegisterName", *request->registerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewInfoId)) {
    query->insert(pair<string, string>("RenewInfoId", *request->renewInfoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCode)) {
    query->insert(pair<string, string>("RootCode", *request->rootCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmComment)) {
    query->insert(pair<string, string>("TmComment", *request->tmComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNameType)) {
    query->insert(pair<string, string>("TmNameType", *request->tmNameType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckTrademarkOrder"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckTrademarkOrderResponse(callApi(params, req, runtime));
}

CheckTrademarkOrderResponse Alibabacloud_Trademark20180724::Client::checkTrademarkOrder(shared_ptr<CheckTrademarkOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkTrademarkOrderWithOptions(request, runtime);
}

CombineLoaResponse Alibabacloud_Trademark20180724::Client::combineLoaWithOptions(shared_ptr<CombineLoaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
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
    {"action", boost::any(string("CombineLoa"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CombineLoaResponse(callApi(params, req, runtime));
}

CombineLoaResponse Alibabacloud_Trademark20180724::Client::combineLoa(shared_ptr<CombineLoaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return combineLoaWithOptions(request, runtime);
}

CombineWTSResponse Alibabacloud_Trademark20180724::Client::combineWTSWithOptions(shared_ptr<CombineWTSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contact)) {
    query->insert(pair<string, string>("Contact", *request->contact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactAddressPost)) {
    query->insert(pair<string, string>("ContactAddressPost", *request->contactAddressPost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactMobile)) {
    query->insert(pair<string, string>("ContactMobile", *request->contactMobile));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNum)) {
    query->insert(pair<string, string>("TmNum", *request->tmNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmProduceType)) {
    query->insert(pair<string, string>("TmProduceType", *request->tmProduceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trademarkName)) {
    query->insert(pair<string, string>("TrademarkName", *request->trademarkName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wtsType)) {
    query->insert(pair<string, string>("WtsType", *request->wtsType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CombineWTS"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CombineWTSResponse(callApi(params, req, runtime));
}

CombineWTSResponse Alibabacloud_Trademark20180724::Client::combineWTS(shared_ptr<CombineWTSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return combineWTSWithOptions(request, runtime);
}

ComplementIntentionUserIdResponse Alibabacloud_Trademark20180724::Client::complementIntentionUserIdWithOptions(shared_ptr<ComplementIntentionUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerType)) {
    query->insert(pair<string, string>("CallerType", *request->callerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->complementUserId)) {
    body->insert(pair<string, string>("ComplementUserId", *request->complementUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ComplementIntentionUserId"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ComplementIntentionUserIdResponse(callApi(params, req, runtime));
}

ComplementIntentionUserIdResponse Alibabacloud_Trademark20180724::Client::complementIntentionUserId(shared_ptr<ComplementIntentionUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return complementIntentionUserIdWithOptions(request, runtime);
}

ConfirmAdditionalMaterialResponse Alibabacloud_Trademark20180724::Client::confirmAdditionalMaterialWithOptions(shared_ptr<ConfirmAdditionalMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ConfirmAdditionalMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmAdditionalMaterialResponse(callApi(params, req, runtime));
}

ConfirmAdditionalMaterialResponse Alibabacloud_Trademark20180724::Client::confirmAdditionalMaterial(shared_ptr<ConfirmAdditionalMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmAdditionalMaterialWithOptions(request, runtime);
}

ConfirmApplicantResponse Alibabacloud_Trademark20180724::Client::confirmApplicantWithOptions(shared_ptr<ConfirmApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ConfirmApplicant"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmApplicantResponse(callApi(params, req, runtime));
}

ConfirmApplicantResponse Alibabacloud_Trademark20180724::Client::confirmApplicant(shared_ptr<ConfirmApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmApplicantWithOptions(request, runtime);
}

ConfirmDissentOriginalResponse Alibabacloud_Trademark20180724::Client::confirmDissentOriginalWithOptions(shared_ptr<ConfirmDissentOriginalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    query->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactProvince)) {
    query->insert(pair<string, string>("ContactProvince", *request->contactProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmDissentOriginal"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmDissentOriginalResponse(callApi(params, req, runtime));
}

ConfirmDissentOriginalResponse Alibabacloud_Trademark20180724::Client::confirmDissentOriginal(shared_ptr<ConfirmDissentOriginalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmDissentOriginalWithOptions(request, runtime);
}

ConvertImageToGrayResponse Alibabacloud_Trademark20180724::Client::convertImageToGrayWithOptions(shared_ptr<ConvertImageToGrayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertImageToGray"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertImageToGrayResponse(callApi(params, req, runtime));
}

ConvertImageToGrayResponse Alibabacloud_Trademark20180724::Client::convertImageToGray(shared_ptr<ConvertImageToGrayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertImageToGrayWithOptions(request, runtime);
}

CopyApplicantResponse Alibabacloud_Trademark20180724::Client::copyApplicantWithOptions(shared_ptr<CopyApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyApplicant"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyApplicantResponse(callApi(params, req, runtime));
}

CopyApplicantResponse Alibabacloud_Trademark20180724::Client::copyApplicant(shared_ptr<CopyApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyApplicantWithOptions(request, runtime);
}

CreateIntentionOrderResponse Alibabacloud_Trademark20180724::Client::createIntentionOrderWithOptions(shared_ptr<CreateIntentionOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionBizId)) {
    query->insert(pair<string, string>("IntentionBizId", *request->intentionBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntentionOrder"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIntentionOrderResponse(callApi(params, req, runtime));
}

CreateIntentionOrderResponse Alibabacloud_Trademark20180724::Client::createIntentionOrder(shared_ptr<CreateIntentionOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntentionOrderWithOptions(request, runtime);
}

CreateIntentionOrderGeneratingPayResponse Alibabacloud_Trademark20180724::Client::createIntentionOrderGeneratingPayWithOptions(shared_ptr<CreateIntentionOrderGeneratingPayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionBizId)) {
    query->insert(pair<string, string>("IntentionBizId", *request->intentionBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentCallback)) {
    query->insert(pair<string, string>("PaymentCallback", *request->paymentCallback));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntentionOrderGeneratingPay"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIntentionOrderGeneratingPayResponse(callApi(params, req, runtime));
}

CreateIntentionOrderGeneratingPayResponse Alibabacloud_Trademark20180724::Client::createIntentionOrderGeneratingPay(shared_ptr<CreateIntentionOrderGeneratingPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntentionOrderGeneratingPayWithOptions(request, runtime);
}

CreateTrademarkOrderResponse Alibabacloud_Trademark20180724::Client::createTrademarkOrderWithOptions(shared_ptr<CreateTrademarkOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementId)) {
    query->insert(pair<string, string>("AgreementId", *request->agreementId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bigDipperSource)) {
    query->insert(pair<string, string>("BigDipperSource", *request->bigDipperSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBlackIcon)) {
    query->insert(pair<string, bool>("IsBlackIcon", *request->isBlackIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeKey)) {
    query->insert(pair<string, string>("LegalNoticeKey", *request->legalNoticeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    query->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderData)) {
    query->insert(pair<string, string>("OrderData", *request->orderData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partnerCode)) {
    query->insert(pair<string, string>("PartnerCode", *request->partnerCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNum)) {
    query->insert(pair<string, string>("PhoneNum", *request->phoneNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realUserName)) {
    query->insert(pair<string, string>("RealUserName", *request->realUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerName)) {
    query->insert(pair<string, string>("RegisterName", *request->registerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renewInfoId)) {
    query->insert(pair<string, string>("RenewInfoId", *request->renewInfoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCode)) {
    query->insert(pair<string, string>("RootCode", *request->rootCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmComment)) {
    query->insert(pair<string, string>("TmComment", *request->tmComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNameType)) {
    query->insert(pair<string, string>("TmNameType", *request->tmNameType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ua)) {
    query->insert(pair<string, string>("Ua", *request->ua));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrademarkOrder"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrademarkOrderResponse(callApi(params, req, runtime));
}

CreateTrademarkOrderResponse Alibabacloud_Trademark20180724::Client::createTrademarkOrder(shared_ptr<CreateTrademarkOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrademarkOrderWithOptions(request, runtime);
}

DeleteMaterialResponse Alibabacloud_Trademark20180724::Client::deleteMaterialWithOptions(shared_ptr<DeleteMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMaterialResponse(callApi(params, req, runtime));
}

DeleteMaterialResponse Alibabacloud_Trademark20180724::Client::deleteMaterial(shared_ptr<DeleteMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMaterialWithOptions(request, runtime);
}

DeleteTmMonitorRuleResponse Alibabacloud_Trademark20180724::Client::deleteTmMonitorRuleWithOptions(shared_ptr<DeleteTmMonitorRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTmMonitorRule"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTmMonitorRuleResponse(callApi(params, req, runtime));
}

DeleteTmMonitorRuleResponse Alibabacloud_Trademark20180724::Client::deleteTmMonitorRule(shared_ptr<DeleteTmMonitorRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTmMonitorRuleWithOptions(request, runtime);
}

DeleteTrademarkApplicationResponse Alibabacloud_Trademark20180724::Client::deleteTrademarkApplicationWithOptions(shared_ptr<DeleteTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrademarkApplication"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrademarkApplicationResponse(callApi(params, req, runtime));
}

DeleteTrademarkApplicationResponse Alibabacloud_Trademark20180724::Client::deleteTrademarkApplication(shared_ptr<DeleteTrademarkApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrademarkApplicationWithOptions(request, runtime);
}

DenySupplementResponse Alibabacloud_Trademark20180724::Client::denySupplementWithOptions(shared_ptr<DenySupplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DenySupplement"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DenySupplementResponse(callApi(params, req, runtime));
}

DenySupplementResponse Alibabacloud_Trademark20180724::Client::denySupplement(shared_ptr<DenySupplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return denySupplementWithOptions(request, runtime);
}

DescirbeCombineTrademarkResponse Alibabacloud_Trademark20180724::Client::descirbeCombineTrademarkWithOptions(shared_ptr<DescirbeCombineTrademarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accurateMatch)) {
    query->insert(pair<string, bool>("AccurateMatch", *request->accurateMatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerName)) {
    query->insert(pair<string, string>("OwnerName", *request->ownerName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->products)) {
    query->insert(pair<string, string>("Products", *request->products));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationNumber)) {
    query->insert(pair<string, string>("RegistrationNumber", *request->registrationNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->similarGroups)) {
    query->insert(pair<string, string>("SimilarGroups", *request->similarGroups));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescirbeCombineTrademark"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescirbeCombineTrademarkResponse(callApi(params, req, runtime));
}

DescirbeCombineTrademarkResponse Alibabacloud_Trademark20180724::Client::descirbeCombineTrademark(shared_ptr<DescirbeCombineTrademarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return descirbeCombineTrademarkWithOptions(request, runtime);
}

FillLogisticsResponse Alibabacloud_Trademark20180724::Client::fillLogisticsWithOptions(shared_ptr<FillLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logistics)) {
    query->insert(pair<string, string>("Logistics", *request->logistics));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FillLogistics"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FillLogisticsResponse(callApi(params, req, runtime));
}

FillLogisticsResponse Alibabacloud_Trademark20180724::Client::fillLogistics(shared_ptr<FillLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fillLogisticsWithOptions(request, runtime);
}

FilterUnavailableCodesResponse Alibabacloud_Trademark20180724::Client::filterUnavailableCodesWithOptions(shared_ptr<FilterUnavailableCodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FilterUnavailableCodesShrinkRequest> request = make_shared<FilterUnavailableCodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->codes)) {
    request->codesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->codes, make_shared<string>("Codes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codesShrink)) {
    query->insert(pair<string, string>("Codes", *request->codesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FilterUnavailableCodes"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FilterUnavailableCodesResponse(callApi(params, req, runtime));
}

FilterUnavailableCodesResponse Alibabacloud_Trademark20180724::Client::filterUnavailableCodes(shared_ptr<FilterUnavailableCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return filterUnavailableCodesWithOptions(request, runtime);
}

ForceUploadTrademarkOnsaleResponse Alibabacloud_Trademark20180724::Client::forceUploadTrademarkOnsaleWithOptions(shared_ptr<ForceUploadTrademarkOnsaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationCode)) {
    query->insert(pair<string, string>("ClassificationCode", *request->classificationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->originalPrice)) {
    query->insert(pair<string, double>("OriginalPrice", *request->originalPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerEnName)) {
    query->insert(pair<string, string>("OwnerEnName", *request->ownerEnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerName)) {
    query->insert(pair<string, string>("OwnerName", *request->ownerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regAnnDate)) {
    query->insert(pair<string, long>("RegAnnDate", *request->regAnnDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryClassification)) {
    query->insert(pair<string, string>("SecondaryClassification", *request->secondaryClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdClassification)) {
    query->insert(pair<string, string>("ThirdClassification", *request->thirdClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ForceUploadTrademarkOnsale"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ForceUploadTrademarkOnsaleResponse(callApi(params, req, runtime));
}

ForceUploadTrademarkOnsaleResponse Alibabacloud_Trademark20180724::Client::forceUploadTrademarkOnsale(shared_ptr<ForceUploadTrademarkOnsaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return forceUploadTrademarkOnsaleWithOptions(request, runtime);
}

GenerateQrCodeResponse Alibabacloud_Trademark20180724::Client::generateQrCodeWithOptions(shared_ptr<GenerateQrCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldKey)) {
    query->insert(pair<string, string>("FieldKey", *request->fieldKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateQrCode"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateQrCodeResponse(callApi(params, req, runtime));
}

GenerateQrCodeResponse Alibabacloud_Trademark20180724::Client::generateQrCode(shared_ptr<GenerateQrCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateQrCodeWithOptions(request, runtime);
}

GenerateUploadFilePolicyResponse Alibabacloud_Trademark20180724::Client::generateUploadFilePolicyWithOptions(shared_ptr<GenerateUploadFilePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateUploadFilePolicy"))},
    {"version", boost::any(string("2018-07-24"))},
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

GenerateUploadFilePolicyResponse Alibabacloud_Trademark20180724::Client::generateUploadFilePolicy(shared_ptr<GenerateUploadFilePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateUploadFilePolicyWithOptions(request, runtime);
}

GetAuthorizationLetterVersionResponse Alibabacloud_Trademark20180724::Client::getAuthorizationLetterVersionWithOptions(shared_ptr<GetAuthorizationLetterVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorizationLetterVersion"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthorizationLetterVersionResponse(callApi(params, req, runtime));
}

GetAuthorizationLetterVersionResponse Alibabacloud_Trademark20180724::Client::getAuthorizationLetterVersion(shared_ptr<GetAuthorizationLetterVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthorizationLetterVersionWithOptions(request, runtime);
}

GetDefaultPrincipalResponse Alibabacloud_Trademark20180724::Client::getDefaultPrincipalWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultPrincipal"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultPrincipalResponse(callApi(params, req, runtime));
}

GetDefaultPrincipalResponse Alibabacloud_Trademark20180724::Client::getDefaultPrincipal() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultPrincipalWithOptions(runtime);
}

GetDefaultPrincipalNameResponse Alibabacloud_Trademark20180724::Client::getDefaultPrincipalNameWithOptions(shared_ptr<GetDefaultPrincipalNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultPrincipalName"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultPrincipalNameResponse(callApi(params, req, runtime));
}

GetDefaultPrincipalNameResponse Alibabacloud_Trademark20180724::Client::getDefaultPrincipalName(shared_ptr<GetDefaultPrincipalNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultPrincipalNameWithOptions(request, runtime);
}

GetNotaryOrderResponse Alibabacloud_Trademark20180724::Client::getNotaryOrderWithOptions(shared_ptr<GetNotaryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryOrderId)) {
    query->insert(pair<string, long>("NotaryOrderId", *request->notaryOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNotaryOrder"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNotaryOrderResponse(callApi(params, req, runtime));
}

GetNotaryOrderResponse Alibabacloud_Trademark20180724::Client::getNotaryOrder(shared_ptr<GetNotaryOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNotaryOrderWithOptions(request, runtime);
}

GetSupportPrincipalNameResponse Alibabacloud_Trademark20180724::Client::getSupportPrincipalNameWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSupportPrincipalName"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSupportPrincipalNameResponse(callApi(params, req, runtime));
}

GetSupportPrincipalNameResponse Alibabacloud_Trademark20180724::Client::getSupportPrincipalName() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSupportPrincipalNameWithOptions(runtime);
}

InsertMaterialResponse Alibabacloud_Trademark20180724::Client::insertMaterialWithOptions(shared_ptr<InsertMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    query->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->region)) {
    query->insert(pair<string, long>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->town)) {
    query->insert(pair<string, string>("Town", *request->town));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertMaterialResponse(callApi(params, req, runtime));
}

InsertMaterialResponse Alibabacloud_Trademark20180724::Client::insertMaterial(shared_ptr<InsertMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertMaterialWithOptions(request, runtime);
}

InsertRenewInfoResponse Alibabacloud_Trademark20180724::Client::insertRenewInfoWithOptions(shared_ptr<InsertRenewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engAddress)) {
    query->insert(pair<string, string>("EngAddress", *request->engAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engName)) {
    query->insert(pair<string, string>("EngName", *request->engName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registerTime)) {
    query->insert(pair<string, long>("RegisterTime", *request->registerTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertRenewInfo"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertRenewInfoResponse(callApi(params, req, runtime));
}

InsertRenewInfoResponse Alibabacloud_Trademark20180724::Client::insertRenewInfo(shared_ptr<InsertRenewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertRenewInfoWithOptions(request, runtime);
}

InsertTmMonitorRuleResponse Alibabacloud_Trademark20180724::Client::insertTmMonitorRuleWithOptions(shared_ptr<InsertTmMonitorRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertTmMonitorRuleShrinkRequest> request = make_shared<InsertTmMonitorRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->classification)) {
    request->classificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->classification, make_shared<string>("Classification"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->notifyStatus)) {
    request->notifyStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifyStatus, make_shared<string>("NotifyStatus"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationShrink)) {
    query->insert(pair<string, string>("Classification", *request->classificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endApplyDate)) {
    query->insert(pair<string, string>("EndApplyDate", *request->endApplyDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyStatusShrink)) {
    query->insert(pair<string, string>("NotifyStatus", *request->notifyStatusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleKeyword)) {
    query->insert(pair<string, string>("RuleKeyword", *request->ruleKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleSource)) {
    query->insert(pair<string, string>("RuleSource", *request->ruleSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startApplyDate)) {
    query->insert(pair<string, string>("StartApplyDate", *request->startApplyDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertTmMonitorRule"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertTmMonitorRuleResponse(callApi(params, req, runtime));
}

InsertTmMonitorRuleResponse Alibabacloud_Trademark20180724::Client::insertTmMonitorRule(shared_ptr<InsertTmMonitorRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertTmMonitorRuleWithOptions(request, runtime);
}

ListNotaryInfosResponse Alibabacloud_Trademark20180724::Client::listNotaryInfosWithOptions(shared_ptr<ListNotaryInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizOrderNo)) {
    query->insert(pair<string, string>("BizOrderNo", *request->bizOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryType)) {
    query->insert(pair<string, long>("NotaryType", *request->notaryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNotaryInfos"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNotaryInfosResponse(callApi(params, req, runtime));
}

ListNotaryInfosResponse Alibabacloud_Trademark20180724::Client::listNotaryInfos(shared_ptr<ListNotaryInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNotaryInfosWithOptions(request, runtime);
}

ListNotaryOrdersResponse Alibabacloud_Trademark20180724::Client::listNotaryOrdersWithOptions(shared_ptr<ListNotaryOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunOrderId)) {
    query->insert(pair<string, string>("AliyunOrderId", *request->aliyunOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endOrderDate)) {
    query->insert(pair<string, long>("EndOrderDate", *request->endOrderDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryStatus)) {
    query->insert(pair<string, long>("NotaryStatus", *request->notaryStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryType)) {
    query->insert(pair<string, long>("NotaryType", *request->notaryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByType)) {
    query->insert(pair<string, string>("SortByType", *request->sortByType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortKeyType)) {
    query->insert(pair<string, long>("SortKeyType", *request->sortKeyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startOrderDate)) {
    query->insert(pair<string, long>("StartOrderDate", *request->startOrderDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNotaryOrders"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNotaryOrdersResponse(callApi(params, req, runtime));
}

ListNotaryOrdersResponse Alibabacloud_Trademark20180724::Client::listNotaryOrders(shared_ptr<ListNotaryOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNotaryOrdersWithOptions(request, runtime);
}

ListTrademarkSbjKeyResponse Alibabacloud_Trademark20180724::Client::listTrademarkSbjKeyWithOptions(shared_ptr<ListTrademarkSbjKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->principalKey)) {
    query->insert(pair<string, string>("PrincipalKey", *request->principalKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrademarkSbjKey"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrademarkSbjKeyResponse(callApi(params, req, runtime));
}

ListTrademarkSbjKeyResponse Alibabacloud_Trademark20180724::Client::listTrademarkSbjKey(shared_ptr<ListTrademarkSbjKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrademarkSbjKeyWithOptions(request, runtime);
}

ModifySubmitTransferMaterailResponse Alibabacloud_Trademark20180724::Client::modifySubmitTransferMaterailWithOptions(shared_ptr<ModifySubmitTransferMaterailRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifySubmitTransferMaterailShrinkRequest> request = make_shared<ModifySubmitTransferMaterailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->other)) {
    request->otherShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->other, make_shared<string>("Other"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assigneeProxy)) {
    query->insert(pair<string, string>("AssigneeProxy", *request->assigneeProxy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerBusinessLicenseTranslation)) {
    query->insert(pair<string, string>("BuyerBusinessLicenseTranslation", *request->buyerBusinessLicenseTranslation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerBusinessLicenseTranslation)) {
    query->insert(pair<string, string>("SellerBusinessLicenseTranslation", *request->sellerBusinessLicenseTranslation));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tradeMaterialFullUpdate)) {
    query->insert(pair<string, bool>("TradeMaterialFullUpdate", *request->tradeMaterialFullUpdate));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addr)) {
    body->insert(pair<string, string>("Addr", *request->addr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerBusinessLicense)) {
    body->insert(pair<string, string>("BuyerBusinessLicense", *request->buyerBusinessLicense));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerIdCard)) {
    body->insert(pair<string, string>("BuyerIdCard", *request->buyerIdCard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNo)) {
    body->insert(pair<string, string>("CardNo", *request->cardNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardType)) {
    body->insert(pair<string, string>("CardType", *request->cardType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->complete)) {
    body->insert(pair<string, bool>("Complete", *request->complete));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactEmail)) {
    body->insert(pair<string, string>("ContactEmail", *request->contactEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactMobile)) {
    body->insert(pair<string, string>("ContactMobile", *request->contactMobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    body->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notarization)) {
    body->insert(pair<string, string>("Notarization", *request->notarization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherShrink)) {
    body->insert(pair<string, string>("Other", *request->otherShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationCert)) {
    body->insert(pair<string, string>("RegistrationCert", *request->registrationCert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerApply)) {
    body->insert(pair<string, string>("SellerApply", *request->sellerApply));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerBusinessLicense)) {
    body->insert(pair<string, string>("SellerBusinessLicense", *request->sellerBusinessLicense));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerIdCard)) {
    body->insert(pair<string, string>("SellerIdCard", *request->sellerIdCard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerProxy)) {
    body->insert(pair<string, string>("SellerProxy", *request->sellerProxy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySubmitTransferMaterail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySubmitTransferMaterailResponse(callApi(params, req, runtime));
}

ModifySubmitTransferMaterailResponse Alibabacloud_Trademark20180724::Client::modifySubmitTransferMaterail(shared_ptr<ModifySubmitTransferMaterailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySubmitTransferMaterailWithOptions(request, runtime);
}

OperateProduceResponse Alibabacloud_Trademark20180724::Client::operateProduceWithOptions(shared_ptr<OperateProduceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extMap)) {
    query->insert(pair<string, string>("ExtMap", *request->extMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateProduce"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateProduceResponse(callApi(params, req, runtime));
}

OperateProduceResponse Alibabacloud_Trademark20180724::Client::operateProduce(shared_ptr<OperateProduceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateProduceWithOptions(request, runtime);
}

PartnerUpdateTrademarkNameResponse Alibabacloud_Trademark20180724::Client::partnerUpdateTrademarkNameWithOptions(shared_ptr<PartnerUpdateTrademarkNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callerParentId)) {
    query->insert(pair<string, long>("CallerParentId", *request->callerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callerType)) {
    query->insert(pair<string, string>("CallerType", *request->callerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventSceneType)) {
    body->insert(pair<string, long>("EventSceneType", *request->eventSceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionBizId)) {
    body->insert(pair<string, string>("IntentionBizId", *request->intentionBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmComment)) {
    body->insert(pair<string, string>("TmComment", *request->tmComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    body->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    body->insert(pair<string, string>("TmName", *request->tmName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PartnerUpdateTrademarkName"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PartnerUpdateTrademarkNameResponse(callApi(params, req, runtime));
}

PartnerUpdateTrademarkNameResponse Alibabacloud_Trademark20180724::Client::partnerUpdateTrademarkName(shared_ptr<PartnerUpdateTrademarkNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return partnerUpdateTrademarkNameWithOptions(request, runtime);
}

QueryCommunicationLogsResponse Alibabacloud_Trademark20180724::Client::queryCommunicationLogsWithOptions(shared_ptr<QueryCommunicationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCommunicationLogs"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCommunicationLogsResponse(callApi(params, req, runtime));
}

QueryCommunicationLogsResponse Alibabacloud_Trademark20180724::Client::queryCommunicationLogs(shared_ptr<QueryCommunicationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCommunicationLogsWithOptions(request, runtime);
}

QueryCredentialsInfoResponse Alibabacloud_Trademark20180724::Client::queryCredentialsInfoWithOptions(shared_ptr<QueryCredentialsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    query->insert(pair<string, string>("CompanyName", *request->companyName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialType)) {
    body->insert(pair<string, string>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    body->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCredentialsInfo"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCredentialsInfoResponse(callApi(params, req, runtime));
}

QueryCredentialsInfoResponse Alibabacloud_Trademark20180724::Client::queryCredentialsInfo(shared_ptr<QueryCredentialsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCredentialsInfoWithOptions(request, runtime);
}

QueryExtensionAttributeResponse Alibabacloud_Trademark20180724::Client::queryExtensionAttributeWithOptions(shared_ptr<QueryExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributeKey)) {
    query->insert(pair<string, string>("AttributeKey", *request->attributeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryExtensionAttribute"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryExtensionAttributeResponse(callApi(params, req, runtime));
}

QueryExtensionAttributeResponse Alibabacloud_Trademark20180724::Client::queryExtensionAttribute(shared_ptr<QueryExtensionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryExtensionAttributeWithOptions(request, runtime);
}

QueryIntentionDetailResponse Alibabacloud_Trademark20180724::Client::queryIntentionDetailWithOptions(shared_ptr<QueryIntentionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIntentionDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIntentionDetailResponse(callApi(params, req, runtime));
}

QueryIntentionDetailResponse Alibabacloud_Trademark20180724::Client::queryIntentionDetail(shared_ptr<QueryIntentionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIntentionDetailWithOptions(request, runtime);
}

QueryIntentionListResponse Alibabacloud_Trademark20180724::Client::queryIntentionListWithOptions(shared_ptr<QueryIntentionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortFiled)) {
    query->insert(pair<string, string>("SortFiled", *request->sortFiled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIntentionList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIntentionListResponse(callApi(params, req, runtime));
}

QueryIntentionListResponse Alibabacloud_Trademark20180724::Client::queryIntentionList(shared_ptr<QueryIntentionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIntentionListWithOptions(request, runtime);
}

QueryIntentionOwnerResponse Alibabacloud_Trademark20180724::Client::queryIntentionOwnerWithOptions(shared_ptr<QueryIntentionOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIntentionOwner"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIntentionOwnerResponse(callApi(params, req, runtime));
}

QueryIntentionOwnerResponse Alibabacloud_Trademark20180724::Client::queryIntentionOwner(shared_ptr<QueryIntentionOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIntentionOwnerWithOptions(request, runtime);
}

QueryIntentionPriceResponse Alibabacloud_Trademark20180724::Client::queryIntentionPriceWithOptions(shared_ptr<QueryIntentionPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionBizId)) {
    query->insert(pair<string, string>("IntentionBizId", *request->intentionBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIntentionPrice"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIntentionPriceResponse(callApi(params, req, runtime));
}

QueryIntentionPriceResponse Alibabacloud_Trademark20180724::Client::queryIntentionPrice(shared_ptr<QueryIntentionPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIntentionPriceWithOptions(request, runtime);
}

QueryMaterialResponse Alibabacloud_Trademark20180724::Client::queryMaterialWithOptions(shared_ptr<QueryMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryUnconfirmedInfo)) {
    query->insert(pair<string, bool>("QueryUnconfirmedInfo", *request->queryUnconfirmedInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMaterialResponse(callApi(params, req, runtime));
}

QueryMaterialResponse Alibabacloud_Trademark20180724::Client::queryMaterial(shared_ptr<QueryMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMaterialWithOptions(request, runtime);
}

QueryMaterialListResponse Alibabacloud_Trademark20180724::Client::queryMaterialListWithOptions(shared_ptr<QueryMaterialListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    query->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->materialId)) {
    query->insert(pair<string, long>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialVersion)) {
    query->insert(pair<string, string>("MaterialVersion", *request->materialVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->principalName)) {
    query->insert(pair<string, long>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->region)) {
    query->insert(pair<string, long>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemVersion)) {
    query->insert(pair<string, string>("SystemVersion", *request->systemVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMaterialList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMaterialListResponse(callApi(params, req, runtime));
}

QueryMaterialListResponse Alibabacloud_Trademark20180724::Client::queryMaterialList(shared_ptr<QueryMaterialListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMaterialListWithOptions(request, runtime);
}

QueryMonitorKeywordsResponse Alibabacloud_Trademark20180724::Client::queryMonitorKeywordsWithOptions(shared_ptr<QueryMonitorKeywordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->keywords)) {
    query->insert(pair<string, vector<string>>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMonitorKeywords"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMonitorKeywordsResponse(callApi(params, req, runtime));
}

QueryMonitorKeywordsResponse Alibabacloud_Trademark20180724::Client::queryMonitorKeywords(shared_ptr<QueryMonitorKeywordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonitorKeywordsWithOptions(request, runtime);
}

QueryOfficialFileCustomListResponse Alibabacloud_Trademark20180724::Client::queryOfficialFileCustomListWithOptions(shared_ptr<QueryOfficialFileCustomListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOfficialFileCustomList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOfficialFileCustomListResponse(callApi(params, req, runtime));
}

QueryOfficialFileCustomListResponse Alibabacloud_Trademark20180724::Client::queryOfficialFileCustomList(shared_ptr<QueryOfficialFileCustomListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOfficialFileCustomListWithOptions(request, runtime);
}

QueryOrderLogisticsListResponse Alibabacloud_Trademark20180724::Client::queryOrderLogisticsListWithOptions(shared_ptr<QueryOrderLogisticsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    body->insert(pair<string, string>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->produceOrderId)) {
    body->insert(pair<string, string>("ProduceOrderId", *request->produceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    body->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderLogisticsList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderLogisticsListResponse(callApi(params, req, runtime));
}

QueryOrderLogisticsListResponse Alibabacloud_Trademark20180724::Client::queryOrderLogisticsList(shared_ptr<QueryOrderLogisticsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderLogisticsListWithOptions(request, runtime);
}

QueryOssResourcesResponse Alibabacloud_Trademark20180724::Client::queryOssResourcesWithOptions(shared_ptr<QueryOssResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOssResources"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOssResourcesResponse(callApi(params, req, runtime));
}

QueryOssResourcesResponse Alibabacloud_Trademark20180724::Client::queryOssResources(shared_ptr<QueryOssResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOssResourcesWithOptions(request, runtime);
}

QueryProduceDetailResponse Alibabacloud_Trademark20180724::Client::queryProduceDetailWithOptions(shared_ptr<QueryProduceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyNo)) {
    query->insert(pair<string, string>("ApplyNo", *request->applyNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProduceDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProduceDetailResponse(callApi(params, req, runtime));
}

QueryProduceDetailResponse Alibabacloud_Trademark20180724::Client::queryProduceDetail(shared_ptr<QueryProduceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProduceDetailWithOptions(request, runtime);
}

QueryProduceListResponse Alibabacloud_Trademark20180724::Client::queryProduceListWithOptions(shared_ptr<QueryProduceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeLeft)) {
    query->insert(pair<string, long>("CreateTimeLeft", *request->createTimeLeft));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeRight)) {
    query->insert(pair<string, long>("CreateTimeRight", *request->createTimeRight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialName)) {
    query->insert(pair<string, string>("MaterialName", *request->materialName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProduceList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProduceListResponse(callApi(params, req, runtime));
}

QueryProduceListResponse Alibabacloud_Trademark20180724::Client::queryProduceList(shared_ptr<QueryProduceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProduceListWithOptions(request, runtime);
}

QueryQrCodeUploadStatusResponse Alibabacloud_Trademark20180724::Client::queryQrCodeUploadStatusWithOptions(shared_ptr<QueryQrCodeUploadStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldKey)) {
    query->insert(pair<string, string>("FieldKey", *request->fieldKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryQrCodeUploadStatus"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryQrCodeUploadStatusResponse(callApi(params, req, runtime));
}

QueryQrCodeUploadStatusResponse Alibabacloud_Trademark20180724::Client::queryQrCodeUploadStatus(shared_ptr<QueryQrCodeUploadStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryQrCodeUploadStatusWithOptions(request, runtime);
}

QuerySbjRuleResponse Alibabacloud_Trademark20180724::Client::querySbjRuleWithOptions(shared_ptr<QuerySbjRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySbjRule"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySbjRuleResponse(callApi(params, req, runtime));
}

QuerySbjRuleResponse Alibabacloud_Trademark20180724::Client::querySbjRule(shared_ptr<QuerySbjRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySbjRuleWithOptions(request, runtime);
}

QuerySupplementDetailResponse Alibabacloud_Trademark20180724::Client::querySupplementDetailWithOptions(shared_ptr<QuerySupplementDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySupplementDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySupplementDetailResponse(callApi(params, req, runtime));
}

QuerySupplementDetailResponse Alibabacloud_Trademark20180724::Client::querySupplementDetail(shared_ptr<QuerySupplementDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySupplementDetailWithOptions(request, runtime);
}

QueryTaskListResponse Alibabacloud_Trademark20180724::Client::queryTaskListWithOptions(shared_ptr<QueryTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskListResponse(callApi(params, req, runtime));
}

QueryTaskListResponse Alibabacloud_Trademark20180724::Client::queryTaskList(shared_ptr<QueryTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskListWithOptions(request, runtime);
}

QueryTmCollectionPageListResponse Alibabacloud_Trademark20180724::Client::queryTmCollectionPageListWithOptions(shared_ptr<QueryTmCollectionPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTmCollectionPageList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTmCollectionPageListResponse(callApi(params, req, runtime));
}

QueryTmCollectionPageListResponse Alibabacloud_Trademark20180724::Client::queryTmCollectionPageList(shared_ptr<QueryTmCollectionPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTmCollectionPageListWithOptions(request, runtime);
}

QueryTmSbjProduceResponse Alibabacloud_Trademark20180724::Client::queryTmSbjProduceWithOptions(shared_ptr<QueryTmSbjProduceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->highPriorityBizTypeStr)) {
    query->insert(pair<string, string>("HighPriorityBizTypeStr", *request->highPriorityBizTypeStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->highPriorityMaterialNameStr)) {
    query->insert(pair<string, string>("HighPriorityMaterialNameStr", *request->highPriorityMaterialNameStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->highPriorityOrderIdStr)) {
    query->insert(pair<string, string>("HighPriorityOrderIdStr", *request->highPriorityOrderIdStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->highPriorityUserIdStr)) {
    query->insert(pair<string, string>("HighPriorityUserIdStr", *request->highPriorityUserIdStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalKey)) {
    query->insert(pair<string, string>("PrincipalKey", *request->principalKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->producerType)) {
    query->insert(pair<string, string>("ProducerType", *request->producerType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryOrderPageSize)) {
    query->insert(pair<string, long>("QueryOrderPageSize", *request->queryOrderPageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTmSbjProduce"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTmSbjProduceResponse(callApi(params, req, runtime));
}

QueryTmSbjProduceResponse Alibabacloud_Trademark20180724::Client::queryTmSbjProduce(shared_ptr<QueryTmSbjProduceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTmSbjProduceWithOptions(request, runtime);
}

QueryTmSbjProduceDetailResponse Alibabacloud_Trademark20180724::Client::queryTmSbjProduceDetailWithOptions(shared_ptr<QueryTmSbjProduceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTmSbjProduceDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTmSbjProduceDetailResponse(callApi(params, req, runtime));
}

QueryTmSbjProduceDetailResponse Alibabacloud_Trademark20180724::Client::queryTmSbjProduceDetail(shared_ptr<QueryTmSbjProduceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTmSbjProduceDetailWithOptions(request, runtime);
}

QueryTradeIntentionUserListResponse Alibabacloud_Trademark20180724::Client::queryTradeIntentionUserListWithOptions(shared_ptr<QueryTradeIntentionUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->begin)) {
    query->insert(pair<string, long>("Begin", *request->begin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeIntentionUserList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeIntentionUserListResponse(callApi(params, req, runtime));
}

QueryTradeIntentionUserListResponse Alibabacloud_Trademark20180724::Client::queryTradeIntentionUserList(shared_ptr<QueryTradeIntentionUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeIntentionUserListWithOptions(request, runtime);
}

QueryTradeMarkApplicationDetailResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationDetailWithOptions(shared_ptr<QueryTradeMarkApplicationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeMarkApplicationDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeMarkApplicationDetailResponse(callApi(params, req, runtime));
}

QueryTradeMarkApplicationDetailResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationDetail(shared_ptr<QueryTradeMarkApplicationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeMarkApplicationDetailWithOptions(request, runtime);
}

QueryTradeMarkApplicationLogsResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationLogsWithOptions(shared_ptr<QueryTradeMarkApplicationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeMarkApplicationLogs"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeMarkApplicationLogsResponse(callApi(params, req, runtime));
}

QueryTradeMarkApplicationLogsResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationLogs(shared_ptr<QueryTradeMarkApplicationLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeMarkApplicationLogsWithOptions(request, runtime);
}

QueryTradeMarkApplicationsResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationsWithOptions(shared_ptr<QueryTradeMarkApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationCode)) {
    query->insert(pair<string, string>("ClassificationCode", *request->classificationCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hidden)) {
    query->insert(pair<string, long>("Hidden", *request->hidden));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionBizId)) {
    query->insert(pair<string, string>("IntentionBizId", *request->intentionBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logisticsNo)) {
    query->insert(pair<string, string>("LogisticsNo", *request->logisticsNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialName)) {
    query->insert(pair<string, string>("MaterialName", *request->materialName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    query->insert(pair<string, long>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortFiled)) {
    query->insert(pair<string, string>("SortFiled", *request->sortFiled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specification)) {
    query->insert(pair<string, long>("Specification", *request->specification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplementStatus)) {
    query->insert(pair<string, long>("SupplementStatus", *request->supplementStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeMarkApplications"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeMarkApplicationsResponse(callApi(params, req, runtime));
}

QueryTradeMarkApplicationsResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplications(shared_ptr<QueryTradeMarkApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeMarkApplicationsWithOptions(request, runtime);
}

QueryTradeMarkApplicationsByIntentionResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationsByIntentionWithOptions(shared_ptr<QueryTradeMarkApplicationsByIntentionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentionBizId)) {
    query->insert(pair<string, string>("IntentionBizId", *request->intentionBizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmProduceStatus)) {
    query->insert(pair<string, string>("TmProduceStatus", *request->tmProduceStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeMarkApplicationsByIntention"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeMarkApplicationsByIntentionResponse(callApi(params, req, runtime));
}

QueryTradeMarkApplicationsByIntentionResponse Alibabacloud_Trademark20180724::Client::queryTradeMarkApplicationsByIntention(shared_ptr<QueryTradeMarkApplicationsByIntentionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeMarkApplicationsByIntentionWithOptions(request, runtime);
}

QueryTradeProduceDetailResponse Alibabacloud_Trademark20180724::Client::queryTradeProduceDetailWithOptions(shared_ptr<QueryTradeProduceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeProduceDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeProduceDetailResponse(callApi(params, req, runtime));
}

QueryTradeProduceDetailResponse Alibabacloud_Trademark20180724::Client::queryTradeProduceDetail(shared_ptr<QueryTradeProduceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeProduceDetailWithOptions(request, runtime);
}

QueryTradeProduceListResponse Alibabacloud_Trademark20180724::Client::queryTradeProduceListWithOptions(shared_ptr<QueryTradeProduceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buyerStatus)) {
    query->insert(pair<string, long>("BuyerStatus", *request->buyerStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preOrderId)) {
    query->insert(pair<string, string>("PreOrderId", *request->preOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortFiled)) {
    query->insert(pair<string, string>("SortFiled", *request->sortFiled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTradeProduceList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTradeProduceListResponse(callApi(params, req, runtime));
}

QueryTradeProduceListResponse Alibabacloud_Trademark20180724::Client::queryTradeProduceList(shared_ptr<QueryTradeProduceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTradeProduceListWithOptions(request, runtime);
}

QueryTrademarkDetailByApplyNumberResponse Alibabacloud_Trademark20180724::Client::queryTrademarkDetailByApplyNumberWithOptions(shared_ptr<QueryTrademarkDetailByApplyNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyNumber)) {
    query->insert(pair<string, string>("ApplyNumber", *request->applyNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkDetailByApplyNumber"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkDetailByApplyNumberResponse(callApi(params, req, runtime));
}

QueryTrademarkDetailByApplyNumberResponse Alibabacloud_Trademark20180724::Client::queryTrademarkDetailByApplyNumber(shared_ptr<QueryTrademarkDetailByApplyNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkDetailByApplyNumberWithOptions(request, runtime);
}

QueryTrademarkDetailByApplyNumberEspResponse Alibabacloud_Trademark20180724::Client::queryTrademarkDetailByApplyNumberEspWithOptions(shared_ptr<QueryTrademarkDetailByApplyNumberEspRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyNumber)) {
    query->insert(pair<string, string>("ApplyNumber", *request->applyNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkDetailByApplyNumberEsp"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkDetailByApplyNumberEspResponse(callApi(params, req, runtime));
}

QueryTrademarkDetailByApplyNumberEspResponse Alibabacloud_Trademark20180724::Client::queryTrademarkDetailByApplyNumberEsp(shared_ptr<QueryTrademarkDetailByApplyNumberEspRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkDetailByApplyNumberEspWithOptions(request, runtime);
}

QueryTrademarkModelDetailResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelDetailWithOptions(shared_ptr<QueryTrademarkModelDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reviewSupplementMaterial)) {
    query->insert(pair<string, bool>("ReviewSupplementMaterial", *request->reviewSupplementMaterial));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkModelDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkModelDetailResponse(callApi(params, req, runtime));
}

QueryTrademarkModelDetailResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelDetail(shared_ptr<QueryTrademarkModelDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkModelDetailWithOptions(request, runtime);
}

QueryTrademarkModelEspDetailResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelEspDetailWithOptions(shared_ptr<QueryTrademarkModelEspDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkModelEspDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkModelEspDetailResponse(callApi(params, req, runtime));
}

QueryTrademarkModelEspDetailResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelEspDetail(shared_ptr<QueryTrademarkModelEspDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkModelEspDetailWithOptions(request, runtime);
}

QueryTrademarkModelEspListResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelEspListWithOptions(shared_ptr<QueryTrademarkModelEspListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderIdsStr)) {
    query->insert(pair<string, string>("OrderIdsStr", *request->orderIdsStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderInstanceId)) {
    query->insert(pair<string, string>("OrderInstanceId", *request->orderInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalKey)) {
    query->insert(pair<string, string>("PrincipalKey", *request->principalKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitStatus)) {
    query->insert(pair<string, string>("SubmitStatus", *request->submitStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitTime)) {
    query->insert(pair<string, string>("SubmitTime", *request->submitTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkModelEspList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkModelEspListResponse(callApi(params, req, runtime));
}

QueryTrademarkModelEspListResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelEspList(shared_ptr<QueryTrademarkModelEspListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkModelEspListWithOptions(request, runtime);
}

QueryTrademarkModelListResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelListWithOptions(shared_ptr<QueryTrademarkModelListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    query->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderIdsStr)) {
    query->insert(pair<string, string>("OrderIdsStr", *request->orderIdsStr));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalKey)) {
    query->insert(pair<string, string>("PrincipalKey", *request->principalKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->produceTypesStr)) {
    query->insert(pair<string, string>("ProduceTypesStr", *request->produceTypesStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitStart)) {
    query->insert(pair<string, string>("SubmitStart", *request->submitStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitStatus)) {
    query->insert(pair<string, string>("SubmitStatus", *request->submitStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitTime)) {
    query->insert(pair<string, string>("SubmitTime", *request->submitTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkModelList"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkModelListResponse(callApi(params, req, runtime));
}

QueryTrademarkModelListResponse Alibabacloud_Trademark20180724::Client::queryTrademarkModelList(shared_ptr<QueryTrademarkModelListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkModelListWithOptions(request, runtime);
}

QueryTrademarkMonitorResultsResponse Alibabacloud_Trademark20180724::Client::queryTrademarkMonitorResultsWithOptions(shared_ptr<QueryTrademarkMonitorResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionType)) {
    query->insert(pair<string, long>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyYear)) {
    query->insert(pair<string, string>("ApplyYear", *request->applyYear));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->procedureStatus)) {
    query->insert(pair<string, long>("ProcedureStatus", *request->procedureStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrationNumber)) {
    query->insert(pair<string, string>("RegistrationNumber", *request->registrationNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkMonitorResults"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkMonitorResultsResponse(callApi(params, req, runtime));
}

QueryTrademarkMonitorResultsResponse Alibabacloud_Trademark20180724::Client::queryTrademarkMonitorResults(shared_ptr<QueryTrademarkMonitorResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkMonitorResultsWithOptions(request, runtime);
}

QueryTrademarkMonitorRulesResponse Alibabacloud_Trademark20180724::Client::queryTrademarkMonitorRulesWithOptions(shared_ptr<QueryTrademarkMonitorRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notifyUpdate)) {
    query->insert(pair<string, long>("NotifyUpdate", *request->notifyUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkMonitorRules"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkMonitorRulesResponse(callApi(params, req, runtime));
}

QueryTrademarkMonitorRulesResponse Alibabacloud_Trademark20180724::Client::queryTrademarkMonitorRules(shared_ptr<QueryTrademarkMonitorRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkMonitorRulesWithOptions(request, runtime);
}

QueryTrademarkOnSaleResponse Alibabacloud_Trademark20180724::Client::queryTrademarkOnSaleWithOptions(shared_ptr<QueryTrademarkOnSaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerCode)) {
    query->insert(pair<string, string>("RegisterCode", *request->registerCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmType)) {
    query->insert(pair<string, string>("TmType", *request->tmType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkOnSale"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkOnSaleResponse(callApi(params, req, runtime));
}

QueryTrademarkOnSaleResponse Alibabacloud_Trademark20180724::Client::queryTrademarkOnSale(shared_ptr<QueryTrademarkOnSaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkOnSaleWithOptions(request, runtime);
}

QueryTrademarkPriceResponse Alibabacloud_Trademark20180724::Client::queryTrademarkPriceWithOptions(shared_ptr<QueryTrademarkPriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryTrademarkPriceShrinkRequest> request = make_shared<QueryTrademarkPriceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->orderData)) {
    request->orderDataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderData, make_shared<string>("OrderData"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDataShrink)) {
    query->insert(pair<string, string>("OrderData", *request->orderDataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkPrice"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkPriceResponse(callApi(params, req, runtime));
}

QueryTrademarkPriceResponse Alibabacloud_Trademark20180724::Client::queryTrademarkPrice(shared_ptr<QueryTrademarkPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkPriceWithOptions(request, runtime);
}

QueryTrademarkUploadAuditResultResponse Alibabacloud_Trademark20180724::Client::queryTrademarkUploadAuditResultWithOptions(shared_ptr<QueryTrademarkUploadAuditResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerCode)) {
    query->insert(pair<string, string>("RegisterCode", *request->registerCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmType)) {
    query->insert(pair<string, string>("TmType", *request->tmType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrademarkUploadAuditResult"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrademarkUploadAuditResultResponse(callApi(params, req, runtime));
}

QueryTrademarkUploadAuditResultResponse Alibabacloud_Trademark20180724::Client::queryTrademarkUploadAuditResult(shared_ptr<QueryTrademarkUploadAuditResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTrademarkUploadAuditResultWithOptions(request, runtime);
}

RecordBankBalanceResponse Alibabacloud_Trademark20180724::Client::recordBankBalanceWithOptions(shared_ptr<RecordBankBalanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionDate)) {
    query->insert(pair<string, long>("ActionDate", *request->actionDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->balance)) {
    query->insert(pair<string, string>("Balance", *request->balance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalName)) {
    query->insert(pair<string, string>("PrincipalName", *request->principalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecordBankBalance"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecordBankBalanceResponse(callApi(params, req, runtime));
}

RecordBankBalanceResponse Alibabacloud_Trademark20180724::Client::recordBankBalance(shared_ptr<RecordBankBalanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recordBankBalanceWithOptions(request, runtime);
}

RefundProduceResponse Alibabacloud_Trademark20180724::Client::refundProduceWithOptions(shared_ptr<RefundProduceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundType)) {
    query->insert(pair<string, string>("RefundType", *request->refundType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundProduce"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundProduceResponse(callApi(params, req, runtime));
}

RefundProduceResponse Alibabacloud_Trademark20180724::Client::refundProduce(shared_ptr<RefundProduceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundProduceWithOptions(request, runtime);
}

RefuseAdditionalMaterialResponse Alibabacloud_Trademark20180724::Client::refuseAdditionalMaterialWithOptions(shared_ptr<RefuseAdditionalMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("RefuseAdditionalMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefuseAdditionalMaterialResponse(callApi(params, req, runtime));
}

RefuseAdditionalMaterialResponse Alibabacloud_Trademark20180724::Client::refuseAdditionalMaterial(shared_ptr<RefuseAdditionalMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refuseAdditionalMaterialWithOptions(request, runtime);
}

RefuseApplicantResponse Alibabacloud_Trademark20180724::Client::refuseApplicantWithOptions(shared_ptr<RefuseApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("RefuseApplicant"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefuseApplicantResponse(callApi(params, req, runtime));
}

RefuseApplicantResponse Alibabacloud_Trademark20180724::Client::refuseApplicant(shared_ptr<RefuseApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refuseApplicantWithOptions(request, runtime);
}

RejectApplicantResponse Alibabacloud_Trademark20180724::Client::rejectApplicantWithOptions(shared_ptr<RejectApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RejectApplicant"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RejectApplicantResponse(callApi(params, req, runtime));
}

RejectApplicantResponse Alibabacloud_Trademark20180724::Client::rejectApplicant(shared_ptr<RejectApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rejectApplicantWithOptions(request, runtime);
}

SaveClassificationConditionsResponse Alibabacloud_Trademark20180724::Client::saveClassificationConditionsWithOptions(shared_ptr<SaveClassificationConditionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->condition)) {
    query->insert(pair<string, string>("Condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveClassificationConditions"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveClassificationConditionsResponse(callApi(params, req, runtime));
}

SaveClassificationConditionsResponse Alibabacloud_Trademark20180724::Client::saveClassificationConditions(shared_ptr<SaveClassificationConditionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveClassificationConditionsWithOptions(request, runtime);
}

SaveExtensionAttributeResponse Alibabacloud_Trademark20180724::Client::saveExtensionAttributeWithOptions(shared_ptr<SaveExtensionAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributeKey)) {
    query->insert(pair<string, string>("AttributeKey", *request->attributeKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attributeValue)) {
    query->insert(pair<string, string>("AttributeValue", *request->attributeValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveExtensionAttribute"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveExtensionAttributeResponse(callApi(params, req, runtime));
}

SaveExtensionAttributeResponse Alibabacloud_Trademark20180724::Client::saveExtensionAttribute(shared_ptr<SaveExtensionAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveExtensionAttributeWithOptions(request, runtime);
}

SaveTaskResponse Alibabacloud_Trademark20180724::Client::saveTaskWithOptions(shared_ptr<SaveTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->request)) {
    query->insert(pair<string, string>("Request", *request->request));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTask"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskResponse(callApi(params, req, runtime));
}

SaveTaskResponse Alibabacloud_Trademark20180724::Client::saveTask(shared_ptr<SaveTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskWithOptions(request, runtime);
}

SaveTaskForOfficialFileCustomResponse Alibabacloud_Trademark20180724::Client::saveTaskForOfficialFileCustomWithOptions(shared_ptr<SaveTaskForOfficialFileCustomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endAcceptTime)) {
    query->insert(pair<string, long>("EndAcceptTime", *request->endAcceptTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startAcceptTime)) {
    query->insert(pair<string, long>("StartAcceptTime", *request->startAcceptTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTaskForOfficialFileCustom"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskForOfficialFileCustomResponse(callApi(params, req, runtime));
}

SaveTaskForOfficialFileCustomResponse Alibabacloud_Trademark20180724::Client::saveTaskForOfficialFileCustom(shared_ptr<SaveTaskForOfficialFileCustomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForOfficialFileCustomWithOptions(request, runtime);
}

SaveTradeMarkReviewMaterialDetailResponse Alibabacloud_Trademark20180724::Client::saveTradeMarkReviewMaterialDetailWithOptions(shared_ptr<SaveTradeMarkReviewMaterialDetailRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveTradeMarkReviewMaterialDetailShrinkRequest> request = make_shared<SaveTradeMarkReviewMaterialDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->additionalOssKeyList)) {
    request->additionalOssKeyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->additionalOssKeyList, make_shared<string>("AdditionalOssKeyList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionalOssKeyListShrink)) {
    body->insert(pair<string, string>("AdditionalOssKeyList", *request->additionalOssKeyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationOssKey)) {
    body->insert(pair<string, string>("ApplicationOssKey", *request->applicationOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessLicenceOssKey)) {
    body->insert(pair<string, string>("BusinessLicenceOssKey", *request->businessLicenceOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardNumber)) {
    body->insert(pair<string, string>("CardNumber", *request->cardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->changeName)) {
    body->insert(pair<string, bool>("ChangeName", *request->changeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactAddress)) {
    body->insert(pair<string, string>("ContactAddress", *request->contactAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactEmail)) {
    body->insert(pair<string, string>("ContactEmail", *request->contactEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    body->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactNumber)) {
    body->insert(pair<string, string>("ContactNumber", *request->contactNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    body->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engAddress)) {
    body->insert(pair<string, string>("EngAddress", *request->engAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engName)) {
    body->insert(pair<string, string>("EngName", *request->engName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardOssKey)) {
    body->insert(pair<string, string>("IdCardOssKey", *request->idCardOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalNoticeOssKey)) {
    body->insert(pair<string, string>("LegalNoticeOssKey", *request->legalNoticeOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    body->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passportOssKey)) {
    body->insert(pair<string, string>("PassportOssKey", *request->passportOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->region)) {
    body->insert(pair<string, long>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reviewMaterialAdditionalJson)) {
    body->insert(pair<string, string>("ReviewMaterialAdditionalJson", *request->reviewMaterialAdditionalJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->separate)) {
    body->insert(pair<string, bool>("Separate", *request->separate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->submitOnline)) {
    body->insert(pair<string, bool>("SubmitOnline", *request->submitOnline));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->submitType)) {
    body->insert(pair<string, long>("SubmitType", *request->submitType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->supplementFlag)) {
    body->insert(pair<string, bool>("SupplementFlag", *request->supplementFlag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTradeMarkReviewMaterialDetail"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTradeMarkReviewMaterialDetailResponse(callApi(params, req, runtime));
}

SaveTradeMarkReviewMaterialDetailResponse Alibabacloud_Trademark20180724::Client::saveTradeMarkReviewMaterialDetail(shared_ptr<SaveTradeMarkReviewMaterialDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTradeMarkReviewMaterialDetailWithOptions(request, runtime);
}

SbjOperateResponse Alibabacloud_Trademark20180724::Client::sbjOperateWithOptions(shared_ptr<SbjOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    query->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyNo)) {
    query->insert(pair<string, string>("ApplyNo", *request->applyNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->auditStatus)) {
    query->insert(pair<string, bool>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileDate)) {
    query->insert(pair<string, string>("FileDate", *request->fileDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileOssKey)) {
    query->insert(pair<string, string>("FileOssKey", *request->fileOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderNo)) {
    query->insert(pair<string, string>("OrderNo", *request->orderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptOssKey)) {
    query->insert(pair<string, string>("ReceiptOssKey", *request->receiptOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->submittedSuccess)) {
    query->insert(pair<string, bool>("SubmittedSuccess", *request->submittedSuccess));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SbjOperate"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SbjOperateResponse(callApi(params, req, runtime));
}

SbjOperateResponse Alibabacloud_Trademark20180724::Client::sbjOperate(shared_ptr<SbjOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sbjOperateWithOptions(request, runtime);
}

SbjOperateNewResponse Alibabacloud_Trademark20180724::Client::sbjOperateNewWithOptions(shared_ptr<SbjOperateNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->addSubmitCount)) {
    query->insert(pair<string, bool>("AddSubmitCount", *request->addSubmitCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowResubmit)) {
    query->insert(pair<string, bool>("AllowResubmit", *request->allowResubmit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    query->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyNo)) {
    query->insert(pair<string, string>("ApplyNo", *request->applyNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->auditStatus)) {
    query->insert(pair<string, bool>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->changeStatus)) {
    query->insert(pair<string, bool>("ChangeStatus", *request->changeStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorMsgScreenshot)) {
    query->insert(pair<string, string>("ErrorMsgScreenshot", *request->errorMsgScreenshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileDate)) {
    query->insert(pair<string, string>("FileDate", *request->fileDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileOssKey)) {
    query->insert(pair<string, string>("FileOssKey", *request->fileOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderNo)) {
    query->insert(pair<string, string>("OrderNo", *request->orderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptOssKey)) {
    query->insert(pair<string, string>("ReceiptOssKey", *request->receiptOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->submittedSuccess)) {
    query->insert(pair<string, bool>("SubmittedSuccess", *request->submittedSuccess));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->successType)) {
    query->insert(pair<string, string>("SuccessType", *request->successType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SbjOperateNew"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SbjOperateNewResponse(callApi(params, req, runtime));
}

SbjOperateNewResponse Alibabacloud_Trademark20180724::Client::sbjOperateNew(shared_ptr<SbjOperateNewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sbjOperateNewWithOptions(request, runtime);
}

SbrainServiceExecuteResponse Alibabacloud_Trademark20180724::Client::sbrainServiceExecuteWithOptions(shared_ptr<SbrainServiceExecuteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SbrainServiceExecuteShrinkRequest> request = make_shared<SbrainServiceExecuteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->executeParams)) {
    request->executeParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executeParams, make_shared<string>("ExecuteParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executeParamsShrink)) {
    query->insert(pair<string, string>("ExecuteParams", *request->executeParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceNo)) {
    query->insert(pair<string, string>("ReferenceNo", *request->referenceNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceType)) {
    query->insert(pair<string, string>("ReferenceType", *request->referenceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->schemeId)) {
    query->insert(pair<string, long>("SchemeId", *request->schemeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePlace)) {
    query->insert(pair<string, string>("ServicePlace", *request->servicePlace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SbrainServiceExecute"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SbrainServiceExecuteResponse(callApi(params, req, runtime));
}

SbrainServiceExecuteResponse Alibabacloud_Trademark20180724::Client::sbrainServiceExecute(shared_ptr<SbrainServiceExecuteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sbrainServiceExecuteWithOptions(request, runtime);
}

SbrainServiceHasRunningTaskBatchQueryResponse Alibabacloud_Trademark20180724::Client::sbrainServiceHasRunningTaskBatchQueryWithOptions(shared_ptr<SbrainServiceHasRunningTaskBatchQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SbrainServiceHasRunningTaskBatchQueryShrinkRequest> request = make_shared<SbrainServiceHasRunningTaskBatchQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->referenceNos)) {
    request->referenceNosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceNos, make_shared<string>("ReferenceNos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceNosShrink)) {
    query->insert(pair<string, string>("ReferenceNos", *request->referenceNosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceType)) {
    query->insert(pair<string, string>("ReferenceType", *request->referenceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SbrainServiceHasRunningTaskBatchQuery"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SbrainServiceHasRunningTaskBatchQueryResponse(callApi(params, req, runtime));
}

SbrainServiceHasRunningTaskBatchQueryResponse Alibabacloud_Trademark20180724::Client::sbrainServiceHasRunningTaskBatchQuery(shared_ptr<SbrainServiceHasRunningTaskBatchQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sbrainServiceHasRunningTaskBatchQueryWithOptions(request, runtime);
}

SbrainServiceSchemeMatchResponse Alibabacloud_Trademark20180724::Client::sbrainServiceSchemeMatchWithOptions(shared_ptr<SbrainServiceSchemeMatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SbrainServiceSchemeMatchShrinkRequest> request = make_shared<SbrainServiceSchemeMatchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->matchParams)) {
    request->matchParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->matchParams, make_shared<string>("MatchParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->matchParamsShrink)) {
    query->insert(pair<string, string>("MatchParams", *request->matchParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceNo)) {
    query->insert(pair<string, string>("ReferenceNo", *request->referenceNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceType)) {
    query->insert(pair<string, string>("ReferenceType", *request->referenceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SbrainServiceSchemeMatch"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SbrainServiceSchemeMatchResponse(callApi(params, req, runtime));
}

SbrainServiceSchemeMatchResponse Alibabacloud_Trademark20180724::Client::sbrainServiceSchemeMatch(shared_ptr<SbrainServiceSchemeMatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sbrainServiceSchemeMatchWithOptions(request, runtime);
}

SearchTmOnsalesResponse Alibabacloud_Trademark20180724::Client::searchTmOnsalesWithOptions(shared_ptr<SearchTmOnsalesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->classification)) {
    query->insert(pair<string, string>("Classification", *request->classification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPriceLeft)) {
    query->insert(pair<string, long>("OrderPriceLeft", *request->orderPriceLeft));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPriceRight)) {
    query->insert(pair<string, long>("OrderPriceRight", *request->orderPriceRight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryAll)) {
    query->insert(pair<string, bool>("QueryAll", *request->queryAll));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regLeft)) {
    query->insert(pair<string, long>("RegLeft", *request->regLeft));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regRight)) {
    query->insert(pair<string, long>("RegRight", *request->regRight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerNumber)) {
    query->insert(pair<string, string>("RegisterNumber", *request->registerNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortName)) {
    query->insert(pair<string, string>("SortName", *request->sortName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    query->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topSearch)) {
    query->insert(pair<string, string>("TopSearch", *request->topSearch));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTmOnsales"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchTmOnsalesResponse(callApi(params, req, runtime));
}

SearchTmOnsalesResponse Alibabacloud_Trademark20180724::Client::searchTmOnsales(shared_ptr<SearchTmOnsalesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTmOnsalesWithOptions(request, runtime);
}

StartNotaryResponse Alibabacloud_Trademark20180724::Client::startNotaryWithOptions(shared_ptr<StartNotaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryOrderId)) {
    query->insert(pair<string, long>("NotaryOrderId", *request->notaryOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartNotary"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartNotaryResponse(callApi(params, req, runtime));
}

StartNotaryResponse Alibabacloud_Trademark20180724::Client::startNotary(shared_ptr<StartNotaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startNotaryWithOptions(request, runtime);
}

StoreMaterialTemporarilyResponse Alibabacloud_Trademark20180724::Client::storeMaterialTemporarilyWithOptions(shared_ptr<StoreMaterialTemporarilyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    query->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
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
    {"action", boost::any(string("StoreMaterialTemporarily"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StoreMaterialTemporarilyResponse(callApi(params, req, runtime));
}

StoreMaterialTemporarilyResponse Alibabacloud_Trademark20180724::Client::storeMaterialTemporarily(shared_ptr<StoreMaterialTemporarilyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return storeMaterialTemporarilyWithOptions(request, runtime);
}

SubmitSupplementResponse Alibabacloud_Trademark20180724::Client::submitSupplementWithOptions(shared_ptr<SubmitSupplementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSupplementShrinkRequest> request = make_shared<SubmitSupplementShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->uploadOssKeyList)) {
    request->uploadOssKeyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->uploadOssKeyList, make_shared<string>("UploadOssKeyList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadOssKeyListShrink)) {
    query->insert(pair<string, string>("UploadOssKeyList", *request->uploadOssKeyListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSupplement"))},
    {"version", boost::any(string("2018-07-24"))},
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

SubmitSupplementResponse Alibabacloud_Trademark20180724::Client::submitSupplement(shared_ptr<SubmitSupplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSupplementWithOptions(request, runtime);
}

SubmitTrademarkApplicationComplaintResponse Alibabacloud_Trademark20180724::Client::submitTrademarkApplicationComplaintWithOptions(shared_ptr<SubmitTrademarkApplicationComplaintRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTrademarkApplicationComplaintShrinkRequest> request = make_shared<SubmitTrademarkApplicationComplaintShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->files)) {
    request->filesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->files, make_shared<string>("Files"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filesShrink)) {
    query->insert(pair<string, string>("Files", *request->filesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTrademarkApplicationComplaint"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTrademarkApplicationComplaintResponse(callApi(params, req, runtime));
}

SubmitTrademarkApplicationComplaintResponse Alibabacloud_Trademark20180724::Client::submitTrademarkApplicationComplaint(shared_ptr<SubmitTrademarkApplicationComplaintRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTrademarkApplicationComplaintWithOptions(request, runtime);
}

SyncTrademarkResponse Alibabacloud_Trademark20180724::Client::syncTrademarkWithOptions(shared_ptr<SyncTrademarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationCode)) {
    query->insert(pair<string, string>("ClassificationCode", *request->classificationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->originalPrice)) {
    query->insert(pair<string, double>("OriginalPrice", *request->originalPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerEnName)) {
    query->insert(pair<string, string>("OwnerEnName", *request->ownerEnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerName)) {
    query->insert(pair<string, string>("OwnerName", *request->ownerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regAnnDate)) {
    query->insert(pair<string, long>("RegAnnDate", *request->regAnnDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryClassification)) {
    query->insert(pair<string, string>("SecondaryClassification", *request->secondaryClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdClassification)) {
    query->insert(pair<string, string>("ThirdClassification", *request->thirdClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncTrademark"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncTrademarkResponse(callApi(params, req, runtime));
}

SyncTrademarkResponse Alibabacloud_Trademark20180724::Client::syncTrademark(shared_ptr<SyncTrademarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncTrademarkWithOptions(request, runtime);
}

UpdateApplicantContacterResponse Alibabacloud_Trademark20180724::Client::updateApplicantContacterWithOptions(shared_ptr<UpdateApplicantContacterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applicantId)) {
    query->insert(pair<string, long>("ApplicantId", *request->applicantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactAddress)) {
    query->insert(pair<string, string>("ContactAddress", *request->contactAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactCity)) {
    query->insert(pair<string, string>("ContactCity", *request->contactCity));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplicantContacter"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicantContacterResponse(callApi(params, req, runtime));
}

UpdateApplicantContacterResponse Alibabacloud_Trademark20180724::Client::updateApplicantContacter(shared_ptr<UpdateApplicantContacterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApplicantContacterWithOptions(request, runtime);
}

UpdateMaterialResponse Alibabacloud_Trademark20180724::Client::updateMaterialWithOptions(shared_ptr<UpdateMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->loaId)) {
    query->insert(pair<string, long>("LoaId", *request->loaId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->personalType)) {
    query->insert(pair<string, long>("PersonalType", *request->personalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->town)) {
    query->insert(pair<string, string>("Town", *request->town));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMaterial"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMaterialResponse(callApi(params, req, runtime));
}

UpdateMaterialResponse Alibabacloud_Trademark20180724::Client::updateMaterial(shared_ptr<UpdateMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMaterialWithOptions(request, runtime);
}

UpdateProduceResponse Alibabacloud_Trademark20180724::Client::updateProduceWithOptions(shared_ptr<UpdateProduceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extMap)) {
    query->insert(pair<string, string>("ExtMap", *request->extMap));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProduce"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProduceResponse(callApi(params, req, runtime));
}

UpdateProduceResponse Alibabacloud_Trademark20180724::Client::updateProduce(shared_ptr<UpdateProduceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProduceWithOptions(request, runtime);
}

UpdateProduceLoaIdResponse Alibabacloud_Trademark20180724::Client::updateProduceLoaIdWithOptions(shared_ptr<UpdateProduceLoaIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loaOssKey)) {
    body->insert(pair<string, string>("LoaOssKey", *request->loaOssKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProduceLoaId"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProduceLoaIdResponse(callApi(params, req, runtime));
}

UpdateProduceLoaIdResponse Alibabacloud_Trademark20180724::Client::updateProduceLoaId(shared_ptr<UpdateProduceLoaIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProduceLoaIdWithOptions(request, runtime);
}

UpdateSendMaterialNumResponse Alibabacloud_Trademark20180724::Client::updateSendMaterialNumWithOptions(shared_ptr<UpdateSendMaterialNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->num)) {
    query->insert(pair<string, string>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operateType)) {
    query->insert(pair<string, long>("OperateType", *request->operateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSendMaterialNum"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSendMaterialNumResponse(callApi(params, req, runtime));
}

UpdateSendMaterialNumResponse Alibabacloud_Trademark20180724::Client::updateSendMaterialNum(shared_ptr<UpdateSendMaterialNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSendMaterialNumWithOptions(request, runtime);
}

UpdateTrademarkNameResponse Alibabacloud_Trademark20180724::Client::updateTrademarkNameWithOptions(shared_ptr<UpdateTrademarkNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmComment)) {
    body->insert(pair<string, string>("TmComment", *request->tmComment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    body->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    body->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrademarkName"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrademarkNameResponse(callApi(params, req, runtime));
}

UpdateTrademarkNameResponse Alibabacloud_Trademark20180724::Client::updateTrademarkName(shared_ptr<UpdateTrademarkNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTrademarkNameWithOptions(request, runtime);
}

UpdateTrademarkOnsaleResponse Alibabacloud_Trademark20180724::Client::updateTrademarkOnsaleWithOptions(shared_ptr<UpdateTrademarkOnsaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationCode)) {
    query->insert(pair<string, string>("ClassificationCode", *request->classificationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->originalPrice)) {
    query->insert(pair<string, double>("OriginalPrice", *request->originalPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerEnName)) {
    query->insert(pair<string, string>("OwnerEnName", *request->ownerEnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerName)) {
    query->insert(pair<string, string>("OwnerName", *request->ownerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regAnnDate)) {
    query->insert(pair<string, long>("RegAnnDate", *request->regAnnDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryClassification)) {
    query->insert(pair<string, string>("SecondaryClassification", *request->secondaryClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdClassification)) {
    query->insert(pair<string, string>("ThirdClassification", *request->thirdClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmType)) {
    query->insert(pair<string, string>("TmType", *request->tmType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeTmDetailJson)) {
    query->insert(pair<string, string>("TradeTmDetailJson", *request->tradeTmDetailJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrademarkOnsale"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrademarkOnsaleResponse(callApi(params, req, runtime));
}

UpdateTrademarkOnsaleResponse Alibabacloud_Trademark20180724::Client::updateTrademarkOnsale(shared_ptr<UpdateTrademarkOnsaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTrademarkOnsaleWithOptions(request, runtime);
}

UploadNotaryDataResponse Alibabacloud_Trademark20180724::Client::uploadNotaryDataWithOptions(shared_ptr<UploadNotaryDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizOrderNo)) {
    query->insert(pair<string, string>("BizOrderNo", *request->bizOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->notaryType)) {
    query->insert(pair<string, long>("NotaryType", *request->notaryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadContext)) {
    query->insert(pair<string, string>("UploadContext", *request->uploadContext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadNotaryData"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadNotaryDataResponse(callApi(params, req, runtime));
}

UploadNotaryDataResponse Alibabacloud_Trademark20180724::Client::uploadNotaryData(shared_ptr<UploadNotaryDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadNotaryDataWithOptions(request, runtime);
}

UploadTrademarkOnSaleResponse Alibabacloud_Trademark20180724::Client::uploadTrademarkOnSaleWithOptions(shared_ptr<UploadTrademarkOnSaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->classificationCode)) {
    query->insert(pair<string, string>("ClassificationCode", *request->classificationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->originalPrice)) {
    query->insert(pair<string, double>("OriginalPrice", *request->originalPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerEnName)) {
    query->insert(pair<string, string>("OwnerEnName", *request->ownerEnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerName)) {
    query->insert(pair<string, string>("OwnerName", *request->ownerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regAnnDate)) {
    query->insert(pair<string, long>("RegAnnDate", *request->regAnnDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondaryClassification)) {
    query->insert(pair<string, string>("SecondaryClassification", *request->secondaryClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdClassification)) {
    query->insert(pair<string, string>("ThirdClassification", *request->thirdClassification));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmIcon)) {
    query->insert(pair<string, string>("TmIcon", *request->tmIcon));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmName)) {
    query->insert(pair<string, string>("TmName", *request->tmName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmNumber)) {
    query->insert(pair<string, string>("TmNumber", *request->tmNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tmType)) {
    query->insert(pair<string, string>("TmType", *request->tmType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeTmDetailJson)) {
    query->insert(pair<string, string>("TradeTmDetailJson", *request->tradeTmDetailJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadTrademarkOnSale"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadTrademarkOnSaleResponse(callApi(params, req, runtime));
}

UploadTrademarkOnSaleResponse Alibabacloud_Trademark20180724::Client::uploadTrademarkOnSale(shared_ptr<UploadTrademarkOnSaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadTrademarkOnSaleWithOptions(request, runtime);
}

WriteCommunicationLogResponse Alibabacloud_Trademark20180724::Client::writeCommunicationLogWithOptions(shared_ptr<WriteCommunicationLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WriteCommunicationLog"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WriteCommunicationLogResponse(callApi(params, req, runtime));
}

WriteCommunicationLogResponse Alibabacloud_Trademark20180724::Client::writeCommunicationLog(shared_ptr<WriteCommunicationLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return writeCommunicationLogWithOptions(request, runtime);
}

WriteIntentionCommunicationLogResponse Alibabacloud_Trademark20180724::Client::writeIntentionCommunicationLogWithOptions(shared_ptr<WriteIntentionCommunicationLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reject)) {
    query->insert(pair<string, bool>("Reject", *request->reject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WriteIntentionCommunicationLog"))},
    {"version", boost::any(string("2018-07-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WriteIntentionCommunicationLogResponse(callApi(params, req, runtime));
}

WriteIntentionCommunicationLogResponse Alibabacloud_Trademark20180724::Client::writeIntentionCommunicationLog(shared_ptr<WriteIntentionCommunicationLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return writeIntentionCommunicationLogWithOptions(request, runtime);
}

