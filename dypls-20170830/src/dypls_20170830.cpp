// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dypls_20170830.hpp>
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

using namespace Alibabacloud_Dypls20170830;

Alibabacloud_Dypls20170830::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dypls"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dypls20170830::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyArInvoiceWithSourceResponse Alibabacloud_Dypls20170830::Client::applyArInvoiceWithSourceWithOptions(shared_ptr<ApplyArInvoiceWithSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ApplyArInvoiceWithSourceRequestAddress>(request->address)) {
    bodyFlat->insert(pair<string, ApplyArInvoiceWithSourceRequestAddress>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->amount)) {
    body->insert(pair<string, double>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    body->insert(pair<string, string>("AppCode", *request->appCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applier)) {
    body->insert(pair<string, string>("Applier", *request->applier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyDate)) {
    body->insert(pair<string, string>("ApplyDate", *request->applyDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currencyCode)) {
    body->insert(pair<string, string>("CurrencyCode", *request->currencyCode));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyArInvoiceWithSourceRequestCustomer>(request->customer)) {
    bodyFlat->insert(pair<string, ApplyArInvoiceWithSourceRequestCustomer>("Customer", *request->customer));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->encryptProps)) {
    bodyFlat->insert(pair<string, map<string, string>>("EncryptProps", *request->encryptProps));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->excludingTaxAmount)) {
    body->insert(pair<string, double>("ExcludingTaxAmount", *request->excludingTaxAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputType)) {
    body->insert(pair<string, string>("InputType", *request->inputType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceType)) {
    body->insert(pair<string, string>("InvoiceType", *request->invoiceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isMerged)) {
    body->insert(pair<string, bool>("IsMerged", *request->isMerged));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialType)) {
    body->insert(pair<string, string>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    body->insert(pair<string, string>("Memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ouCode)) {
    body->insert(pair<string, string>("OuCode", *request->ouCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserBankInfo)) {
    body->insert(pair<string, string>("PurchaserBankInfo", *request->purchaserBankInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserContactInfo)) {
    body->insert(pair<string, string>("PurchaserContactInfo", *request->purchaserContactInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserName)) {
    body->insert(pair<string, string>("PurchaserName", *request->purchaserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserTaxNo)) {
    body->insert(pair<string, string>("PurchaserTaxNo", *request->purchaserTaxNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestNo)) {
    body->insert(pair<string, string>("RequestNo", *request->requestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sign)) {
    body->insert(pair<string, string>("Sign", *request->sign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteId)) {
    body->insert(pair<string, string>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyArInvoiceWithSourceRequestSourceList>>(request->sourceList)) {
    body->insert(pair<string, vector<ApplyArInvoiceWithSourceRequestSourceList>>("SourceList", *request->sourceList));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->taxAmount)) {
    body->insert(pair<string, double>("TaxAmount", *request->taxAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyArInvoiceWithSource"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyArInvoiceWithSourceResponse(callApi(params, req, runtime));
}

ApplyArInvoiceWithSourceResponse Alibabacloud_Dypls20170830::Client::applyArInvoiceWithSource(shared_ptr<ApplyArInvoiceWithSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyArInvoiceWithSourceWithOptions(request, runtime);
}

ApplyBlackInfoExportResponse Alibabacloud_Dypls20170830::Client::applyBlackInfoExportWithOptions(shared_ptr<ApplyBlackInfoExportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyBlackInfoExport"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyBlackInfoExportResponse(callApi(params, req, runtime));
}

ApplyBlackInfoExportResponse Alibabacloud_Dypls20170830::Client::applyBlackInfoExport(shared_ptr<ApplyBlackInfoExportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyBlackInfoExportWithOptions(request, runtime);
}

ApplyCallRecordExportResponse Alibabacloud_Dypls20170830::Client::applyCallRecordExportWithOptions(shared_ptr<ApplyCallRecordExportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callDate)) {
    query->insert(pair<string, string>("CallDate", *request->callDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyCallRecordExport"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyCallRecordExportResponse(callApi(params, req, runtime));
}

ApplyCallRecordExportResponse Alibabacloud_Dypls20170830::Client::applyCallRecordExport(shared_ptr<ApplyCallRecordExportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyCallRecordExportWithOptions(request, runtime);
}

ApplyGroupNumberExportResponse Alibabacloud_Dypls20170830::Client::applyGroupNumberExportWithOptions(shared_ptr<ApplyGroupNumberExportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyGroupNumberExport"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyGroupNumberExportResponse(callApi(params, req, runtime));
}

ApplyGroupNumberExportResponse Alibabacloud_Dypls20170830::Client::applyGroupNumberExport(shared_ptr<ApplyGroupNumberExportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyGroupNumberExportWithOptions(request, runtime);
}

ApplyRingToneResponse Alibabacloud_Dypls20170830::Client::applyRingToneWithOptions(shared_ptr<ApplyRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playType)) {
    query->insert(pair<string, string>("PlayType", *request->playType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyRingTone"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyRingToneResponse(callApi(params, req, runtime));
}

ApplyRingToneResponse Alibabacloud_Dypls20170830::Client::applyRingTone(shared_ptr<ApplyRingToneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyRingToneWithOptions(request, runtime);
}

BatchOccupySecretResResponse Alibabacloud_Dypls20170830::Client::batchOccupySecretResWithOptions(shared_ptr<BatchOccupySecretResRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchOccupySecretResShrinkRequest> request = make_shared<BatchOccupySecretResShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchOccupySecretResRequestBatchOccupyList>>(tmpReq->batchOccupyList)) {
    request->batchOccupyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->batchOccupyList, make_shared<string>("BatchOccupyList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchOccupyListShrink)) {
    query->insert(pair<string, string>("BatchOccupyList", *request->batchOccupyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchOccupySecretRes"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchOccupySecretResResponse(callApi(params, req, runtime));
}

BatchOccupySecretResResponse Alibabacloud_Dypls20170830::Client::batchOccupySecretRes(shared_ptr<BatchOccupySecretResRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchOccupySecretResWithOptions(request, runtime);
}

BindResourceResponse Alibabacloud_Dypls20170830::Client::bindResourceWithOptions(shared_ptr<BindResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->asrModelId)) {
    query->insert(pair<string, string>("AsrModelId", *request->asrModelId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asrStatus)) {
    query->insert(pair<string, bool>("AsrStatus", *request->asrStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->axnExtensionB)) {
    query->insert(pair<string, string>("AxnExtensionB", *request->axnExtensionB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expTime)) {
    query->insert(pair<string, string>("ExpTime", *request->expTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRecord)) {
    query->insert(pair<string, bool>("IsRecord", *request->isRecord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindResource"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindResourceResponse(callApi(params, req, runtime));
}

BindResourceResponse Alibabacloud_Dypls20170830::Client::bindResource(shared_ptr<BindResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindResourceWithOptions(request, runtime);
}

BlackOperateResponse Alibabacloud_Dypls20170830::Client::blackOperateWithOptions(shared_ptr<BlackOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackMap)) {
    query->insert(pair<string, string>("BlackMap", *request->blackMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateType)) {
    query->insert(pair<string, string>("OperateType", *request->operateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BlackOperate"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BlackOperateResponse(callApi(params, req, runtime));
}

BlackOperateResponse Alibabacloud_Dypls20170830::Client::blackOperate(shared_ptr<BlackOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return blackOperateWithOptions(request, runtime);
}

CreateCertifyInfoResponse Alibabacloud_Dypls20170830::Client::createCertifyInfoWithOptions(shared_ptr<CreateCertifyInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNo)) {
    query->insert(pair<string, string>("PhoneNo", *request->phoneNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertifyInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertifyInfoResponse(callApi(params, req, runtime));
}

CreateCertifyInfoResponse Alibabacloud_Dypls20170830::Client::createCertifyInfo(shared_ptr<CreateCertifyInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertifyInfoWithOptions(request, runtime);
}

CreateContactsResponse Alibabacloud_Dypls20170830::Client::createContactsWithOptions(shared_ptr<CreateContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateContacts"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateContactsResponse(callApi(params, req, runtime));
}

CreateContactsResponse Alibabacloud_Dypls20170830::Client::createContacts(shared_ptr<CreateContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createContactsWithOptions(request, runtime);
}

CreateGroupDetailResponse Alibabacloud_Dypls20170830::Client::createGroupDetailWithOptions(shared_ptr<CreateGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numberList)) {
    query->insert(pair<string, string>("NumberList", *request->numberList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroupDetail"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupDetailResponse(callApi(params, req, runtime));
}

CreateGroupDetailResponse Alibabacloud_Dypls20170830::Client::createGroupDetail(shared_ptr<CreateGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupDetailWithOptions(request, runtime);
}

CreateGroupInfoResponse Alibabacloud_Dypls20170830::Client::createGroupInfoWithOptions(shared_ptr<CreateGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numberList)) {
    query->insert(pair<string, string>("NumberList", *request->numberList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroupInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupInfoResponse(callApi(params, req, runtime));
}

CreateGroupInfoResponse Alibabacloud_Dypls20170830::Client::createGroupInfo(shared_ptr<CreateGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupInfoWithOptions(request, runtime);
}

CreateLogicalDeleteResponse Alibabacloud_Dypls20170830::Client::createLogicalDeleteWithOptions(shared_ptr<CreateLogicalDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtWakeup)) {
    query->insert(pair<string, string>("GmtWakeup", *request->gmtWakeup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hid)) {
    query->insert(pair<string, long>("Hid", *request->hid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->interrupt)) {
    query->insert(pair<string, bool>("Interrupt", *request->interrupt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoker)) {
    query->insert(pair<string, string>("Invoker", *request->invoker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->success)) {
    query->insert(pair<string, bool>("Success", *request->success));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskExtraData)) {
    query->insert(pair<string, string>("TaskExtraData", *request->taskExtraData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdentifier)) {
    query->insert(pair<string, string>("TaskIdentifier", *request->taskIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogicalDelete"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLogicalDeleteResponse(callApi(params, req, runtime));
}

CreateLogicalDeleteResponse Alibabacloud_Dypls20170830::Client::createLogicalDelete(shared_ptr<CreateLogicalDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLogicalDeleteWithOptions(request, runtime);
}

CreateMessageCallbackResponse Alibabacloud_Dypls20170830::Client::createMessageCallbackWithOptions(shared_ptr<CreateMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMessageCallback"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMessageCallbackResponse(callApi(params, req, runtime));
}

CreateMessageCallbackResponse Alibabacloud_Dypls20170830::Client::createMessageCallback(shared_ptr<CreateMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMessageCallbackWithOptions(request, runtime);
}

CreateMessageQueueResponse Alibabacloud_Dypls20170830::Client::createMessageQueueWithOptions(shared_ptr<CreateMessageQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billIds)) {
    query->insert(pair<string, string>("BillIds", *request->billIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueName)) {
    query->insert(pair<string, string>("QueueName", *request->queueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueTitle)) {
    query->insert(pair<string, string>("QueueTitle", *request->queueTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMessageQueue"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMessageQueueResponse(callApi(params, req, runtime));
}

CreateMessageQueueResponse Alibabacloud_Dypls20170830::Client::createMessageQueue(shared_ptr<CreateMessageQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMessageQueueWithOptions(request, runtime);
}

CreatePhysicalDeleteResponse Alibabacloud_Dypls20170830::Client::createPhysicalDeleteWithOptions(shared_ptr<CreatePhysicalDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtWakeup)) {
    query->insert(pair<string, string>("GmtWakeup", *request->gmtWakeup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hid)) {
    query->insert(pair<string, long>("Hid", *request->hid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->interrupt)) {
    query->insert(pair<string, bool>("Interrupt", *request->interrupt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoker)) {
    query->insert(pair<string, string>("Invoker", *request->invoker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->success)) {
    query->insert(pair<string, bool>("Success", *request->success));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskExtraData)) {
    query->insert(pair<string, string>("TaskExtraData", *request->taskExtraData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdentifier)) {
    query->insert(pair<string, string>("TaskIdentifier", *request->taskIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePhysicalDelete"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePhysicalDeleteResponse(callApi(params, req, runtime));
}

CreatePhysicalDeleteResponse Alibabacloud_Dypls20170830::Client::createPhysicalDelete(shared_ptr<CreatePhysicalDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPhysicalDeleteWithOptions(request, runtime);
}

CreatePoolInfoResponse Alibabacloud_Dypls20170830::Client::createPoolInfoWithOptions(shared_ptr<CreatePoolInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolName)) {
    query->insert(pair<string, string>("PoolName", *request->poolName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePoolInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePoolInfoResponse(callApi(params, req, runtime));
}

CreatePoolInfoResponse Alibabacloud_Dypls20170830::Client::createPoolInfo(shared_ptr<CreatePoolInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPoolInfoWithOptions(request, runtime);
}

CreateProductResponse Alibabacloud_Dypls20170830::Client::createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodId)) {
    query->insert(pair<string, string>("ProdId", *request->prodId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProduct"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductResponse(callApi(params, req, runtime));
}

CreateProductResponse Alibabacloud_Dypls20170830::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductWithOptions(request, runtime);
}

CreateRingToneResponse Alibabacloud_Dypls20170830::Client::createRingToneWithOptions(shared_ptr<CreateRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    query->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playType)) {
    query->insert(pair<string, string>("PlayType", *request->playType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ringName)) {
    query->insert(pair<string, string>("RingName", *request->ringName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tts)) {
    query->insert(pair<string, string>("Tts", *request->tts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRingTone"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRingToneResponse(callApi(params, req, runtime));
}

CreateRingToneResponse Alibabacloud_Dypls20170830::Client::createRingTone(shared_ptr<CreateRingToneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRingToneWithOptions(request, runtime);
}

CreateSubsTrialResponse Alibabacloud_Dypls20170830::Client::createSubsTrialWithOptions(shared_ptr<CreateSubsTrialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneA)) {
    query->insert(pair<string, string>("PhoneA", *request->phoneA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneB)) {
    query->insert(pair<string, string>("PhoneB", *request->phoneB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resType)) {
    query->insert(pair<string, string>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubsTrial"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubsTrialResponse(callApi(params, req, runtime));
}

CreateSubsTrialResponse Alibabacloud_Dypls20170830::Client::createSubsTrial(shared_ptr<CreateSubsTrialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubsTrialWithOptions(request, runtime);
}

CreateTransferRecordResponse Alibabacloud_Dypls20170830::Client::createTransferRecordWithOptions(shared_ptr<CreateTransferRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numberList)) {
    query->insert(pair<string, string>("NumberList", *request->numberList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originBillId)) {
    query->insert(pair<string, string>("OriginBillId", *request->originBillId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originName)) {
    query->insert(pair<string, string>("OriginName", *request->originName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetBillId)) {
    query->insert(pair<string, string>("TargetBillId", *request->targetBillId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetName)) {
    query->insert(pair<string, string>("TargetName", *request->targetName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->total)) {
    query->insert(pair<string, long>("Total", *request->total));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->transferType)) {
    query->insert(pair<string, long>("TransferType", *request->transferType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTransferRecord"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTransferRecordResponse(callApi(params, req, runtime));
}

CreateTransferRecordResponse Alibabacloud_Dypls20170830::Client::createTransferRecord(shared_ptr<CreateTransferRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTransferRecordWithOptions(request, runtime);
}

DeleteCertifyInfoResponse Alibabacloud_Dypls20170830::Client::deleteCertifyInfoWithOptions(shared_ptr<DeleteCertifyInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCertifyInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCertifyInfoResponse(callApi(params, req, runtime));
}

DeleteCertifyInfoResponse Alibabacloud_Dypls20170830::Client::deleteCertifyInfo(shared_ptr<DeleteCertifyInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertifyInfoWithOptions(request, runtime);
}

DeleteContactsResponse Alibabacloud_Dypls20170830::Client::deleteContactsWithOptions(shared_ptr<DeleteContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContacts"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteContactsResponse(callApi(params, req, runtime));
}

DeleteContactsResponse Alibabacloud_Dypls20170830::Client::deleteContacts(shared_ptr<DeleteContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContactsWithOptions(request, runtime);
}

DeleteGroupDetailResponse Alibabacloud_Dypls20170830::Client::deleteGroupDetailWithOptions(shared_ptr<DeleteGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idList)) {
    query->insert(pair<string, string>("IdList", *request->idList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroupDetail"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupDetailResponse(callApi(params, req, runtime));
}

DeleteGroupDetailResponse Alibabacloud_Dypls20170830::Client::deleteGroupDetail(shared_ptr<DeleteGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupDetailWithOptions(request, runtime);
}

DeleteMessageCallbackResponse Alibabacloud_Dypls20170830::Client::deleteMessageCallbackWithOptions(shared_ptr<DeleteMessageCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMessageCallback"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMessageCallbackResponse(callApi(params, req, runtime));
}

DeleteMessageCallbackResponse Alibabacloud_Dypls20170830::Client::deleteMessageCallback(shared_ptr<DeleteMessageCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMessageCallbackWithOptions(request, runtime);
}

DeleteRingToneResponse Alibabacloud_Dypls20170830::Client::deleteRingToneWithOptions(shared_ptr<DeleteRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRingTone"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRingToneResponse(callApi(params, req, runtime));
}

DeleteRingToneResponse Alibabacloud_Dypls20170830::Client::deleteRingTone(shared_ptr<DeleteRingToneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRingToneWithOptions(request, runtime);
}

DownloadCompleteResponse Alibabacloud_Dypls20170830::Client::downloadCompleteWithOptions(shared_ptr<DownloadCompleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadComplete"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadCompleteResponse(callApi(params, req, runtime));
}

DownloadCompleteResponse Alibabacloud_Dypls20170830::Client::downloadComplete(shared_ptr<DownloadCompleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadCompleteWithOptions(request, runtime);
}

ExportResResponse Alibabacloud_Dypls20170830::Client::exportResWithOptions(shared_ptr<ExportResRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resBindStatus)) {
    query->insert(pair<string, long>("ResBindStatus", *request->resBindStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportRes"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportResResponse(callApi(params, req, runtime));
}

ExportResResponse Alibabacloud_Dypls20170830::Client::exportRes(shared_ptr<ExportResRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportResWithOptions(request, runtime);
}

GetEinvoicePdfDataResponse Alibabacloud_Dypls20170830::Client::getEinvoicePdfDataWithOptions(shared_ptr<GetEinvoicePdfDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    body->insert(pair<string, string>("AppCode", *request->appCode));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<GetEinvoicePdfDataRequestCustomer>(request->customer)) {
    bodyFlat->insert(pair<string, GetEinvoicePdfDataRequestCustomer>("Customer", *request->customer));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->encryptProps)) {
    bodyFlat->insert(pair<string, map<string, string>>("EncryptProps", *request->encryptProps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceCode)) {
    body->insert(pair<string, string>("InvoiceCode", *request->invoiceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceNo)) {
    body->insert(pair<string, string>("InvoiceNo", *request->invoiceNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sign)) {
    body->insert(pair<string, string>("Sign", *request->sign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEinvoicePdfData"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEinvoicePdfDataResponse(callApi(params, req, runtime));
}

GetEinvoicePdfDataResponse Alibabacloud_Dypls20170830::Client::getEinvoicePdfData(shared_ptr<GetEinvoicePdfDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEinvoicePdfDataWithOptions(request, runtime);
}

GetSecretAsrInfoResponse Alibabacloud_Dypls20170830::Client::getSecretAsrInfoWithOptions(shared_ptr<GetSecretAsrInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callTime)) {
    query->insert(pair<string, string>("CallTime", *request->callTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSecretAsrInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSecretAsrInfoResponse(callApi(params, req, runtime));
}

GetSecretAsrInfoResponse Alibabacloud_Dypls20170830::Client::getSecretAsrInfo(shared_ptr<GetSecretAsrInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecretAsrInfoWithOptions(request, runtime);
}

GetUserResourceTagStatusResponse Alibabacloud_Dypls20170830::Client::getUserResourceTagStatusWithOptions(shared_ptr<GetUserResourceTagStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserResourceTagStatus"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResourceTagStatusResponse(callApi(params, req, runtime));
}

GetUserResourceTagStatusResponse Alibabacloud_Dypls20170830::Client::getUserResourceTagStatus(shared_ptr<GetUserResourceTagStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserResourceTagStatusWithOptions(request, runtime);
}

ListAsrLanguageModelsResponse Alibabacloud_Dypls20170830::Client::listAsrLanguageModelsWithOptions(shared_ptr<ListAsrLanguageModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAsrLanguageModels"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAsrLanguageModelsResponse(callApi(params, req, runtime));
}

ListAsrLanguageModelsResponse Alibabacloud_Dypls20170830::Client::listAsrLanguageModels(shared_ptr<ListAsrLanguageModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAsrLanguageModelsWithOptions(request, runtime);
}

LockResourceResponse Alibabacloud_Dypls20170830::Client::lockResourceWithOptions(shared_ptr<LockResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockResource"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockResourceResponse(callApi(params, req, runtime));
}

LockResourceResponse Alibabacloud_Dypls20170830::Client::lockResource(shared_ptr<LockResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockResourceWithOptions(request, runtime);
}

OccupySecretResResponse Alibabacloud_Dypls20170830::Client::occupySecretResWithOptions(shared_ptr<OccupySecretResRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayPool)) {
    query->insert(pair<string, bool>("IsDisplayPool", *request->isDisplayPool));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noLike)) {
    query->insert(pair<string, string>("NoLike", *request->noLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderDetailId)) {
    query->insert(pair<string, long>("OrderDetailId", *request->orderDetailId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partnerKey)) {
    query->insert(pair<string, string>("PartnerKey", *request->partnerKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->secretNoType)) {
    query->insert(pair<string, long>("SecretNoType", *request->secretNoType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalCount)) {
    query->insert(pair<string, long>("TotalCount", *request->totalCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("secretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OccupySecretRes"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OccupySecretResResponse(callApi(params, req, runtime));
}

OccupySecretResResponse Alibabacloud_Dypls20170830::Client::occupySecretRes(shared_ptr<OccupySecretResRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return occupySecretResWithOptions(request, runtime);
}

OrderSucceededCallbackResponse Alibabacloud_Dypls20170830::Client::orderSucceededCallbackWithOptions(shared_ptr<OrderSucceededCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("data", *request->data));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OrderSucceededCallback"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OrderSucceededCallbackResponse(callApi(params, req, runtime));
}

OrderSucceededCallbackResponse Alibabacloud_Dypls20170830::Client::orderSucceededCallback(shared_ptr<OrderSucceededCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return orderSucceededCallbackWithOptions(request, runtime);
}

PoolConfigResponse Alibabacloud_Dypls20170830::Client::poolConfigWithOptions(shared_ptr<PoolConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->callbackType)) {
    query->insert(pair<string, long>("CallbackType", *request->callbackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->frozenDay)) {
    query->insert(pair<string, long>("FrozenDay", *request->frozenDay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needAllCallRecords)) {
    query->insert(pair<string, bool>("NeedAllCallRecords", *request->needAllCallRecords));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->openSmsWhite)) {
    query->insert(pair<string, bool>("OpenSmsWhite", *request->openSmsWhite));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->poolWarningLimit)) {
    query->insert(pair<string, long>("PoolWarningLimit", *request->poolWarningLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectXMode)) {
    query->insert(pair<string, string>("SelectXMode", *request->selectXMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartSmsWhitelist)) {
    query->insert(pair<string, string>("SmartSmsWhitelist", *request->smartSmsWhitelist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smsChannel)) {
    query->insert(pair<string, string>("SmsChannel", *request->smsChannel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PoolConfig"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PoolConfigResponse(callApi(params, req, runtime));
}

PoolConfigResponse Alibabacloud_Dypls20170830::Client::poolConfig(shared_ptr<PoolConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return poolConfigWithOptions(request, runtime);
}

PurchaseResourcesResponse Alibabacloud_Dypls20170830::Client::purchaseResourcesWithOptions(shared_ptr<PurchaseResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->buyNumber)) {
    query->insert(pair<string, long>("BuyNumber", *request->buyNumber));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayPool)) {
    query->insert(pair<string, bool>("IsDisplayPool", *request->isDisplayPool));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noLike)) {
    query->insert(pair<string, string>("NoLike", *request->noLike));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionName)) {
    query->insert(pair<string, string>("RegionName", *request->regionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specId)) {
    query->insert(pair<string, long>("SpecId", *request->specId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usageScenarios)) {
    query->insert(pair<string, string>("UsageScenarios", *request->usageScenarios));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PurchaseResources"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PurchaseResourcesResponse(callApi(params, req, runtime));
}

PurchaseResourcesResponse Alibabacloud_Dypls20170830::Client::purchaseResources(shared_ptr<PurchaseResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purchaseResourcesWithOptions(request, runtime);
}

QueryBindingDetailsResponse Alibabacloud_Dypls20170830::Client::queryBindingDetailsWithOptions(shared_ptr<QueryBindingDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subId)) {
    query->insert(pair<string, string>("SubId", *request->subId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBindingDetails"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBindingDetailsResponse(callApi(params, req, runtime));
}

QueryBindingDetailsResponse Alibabacloud_Dypls20170830::Client::queryBindingDetails(shared_ptr<QueryBindingDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBindingDetailsWithOptions(request, runtime);
}

QueryBlackListResponse Alibabacloud_Dypls20170830::Client::queryBlackListWithOptions(shared_ptr<QueryBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackPrefix)) {
    query->insert(pair<string, string>("BlackPrefix", *request->blackPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBlackList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBlackListResponse(callApi(params, req, runtime));
}

QueryBlackListResponse Alibabacloud_Dypls20170830::Client::queryBlackList(shared_ptr<QueryBlackListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBlackListWithOptions(request, runtime);
}

QueryBuyPageInitDataResponse Alibabacloud_Dypls20170830::Client::queryBuyPageInitDataWithOptions(shared_ptr<QueryBuyPageInitDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBuyPageInitData"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBuyPageInitDataResponse(callApi(params, req, runtime));
}

QueryBuyPageInitDataResponse Alibabacloud_Dypls20170830::Client::queryBuyPageInitData(shared_ptr<QueryBuyPageInitDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBuyPageInitDataWithOptions(request, runtime);
}

QueryBuyPageResCountResponse Alibabacloud_Dypls20170830::Client::queryBuyPageResCountWithOptions(shared_ptr<QueryBuyPageResCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->like)) {
    query->insert(pair<string, string>("Like", *request->like));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specId)) {
    query->insert(pair<string, long>("SpecId", *request->specId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBuyPageResCount"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBuyPageResCountResponse(callApi(params, req, runtime));
}

QueryBuyPageResCountResponse Alibabacloud_Dypls20170830::Client::queryBuyPageResCount(shared_ptr<QueryBuyPageResCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBuyPageResCountWithOptions(request, runtime);
}

QueryBuyPageResInfoResponse Alibabacloud_Dypls20170830::Client::queryBuyPageResInfoWithOptions(shared_ptr<QueryBuyPageResInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->like)) {
    query->insert(pair<string, string>("Like", *request->like));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specId)) {
    query->insert(pair<string, long>("SpecId", *request->specId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBuyPageResInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBuyPageResInfoResponse(callApi(params, req, runtime));
}

QueryBuyPageResInfoResponse Alibabacloud_Dypls20170830::Client::queryBuyPageResInfo(shared_ptr<QueryBuyPageResInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBuyPageResInfoWithOptions(request, runtime);
}

QueryBuyResInfoResponse Alibabacloud_Dypls20170830::Client::queryBuyResInfoWithOptions(shared_ptr<QueryBuyResInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->like)) {
    query->insert(pair<string, string>("Like", *request->like));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->specId)) {
    query->insert(pair<string, long>("SpecId", *request->specId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBuyResInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBuyResInfoResponse(callApi(params, req, runtime));
}

QueryBuyResInfoResponse Alibabacloud_Dypls20170830::Client::queryBuyResInfo(shared_ptr<QueryBuyResInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBuyResInfoWithOptions(request, runtime);
}

QueryCallRecordingListResponse Alibabacloud_Dypls20170830::Client::queryCallRecordingListWithOptions(shared_ptr<QueryCallRecordingListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callDate)) {
    query->insert(pair<string, string>("CallDate", *request->callDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoA)) {
    query->insert(pair<string, string>("PhoneNoA", *request->phoneNoA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNoB)) {
    query->insert(pair<string, string>("PhoneNoB", *request->phoneNoB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCallRecordingList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCallRecordingListResponse(callApi(params, req, runtime));
}

QueryCallRecordingListResponse Alibabacloud_Dypls20170830::Client::queryCallRecordingList(shared_ptr<QueryCallRecordingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCallRecordingListWithOptions(request, runtime);
}

QueryCertifyInfoListResponse Alibabacloud_Dypls20170830::Client::queryCertifyInfoListWithOptions(shared_ptr<QueryCertifyInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyStatus)) {
    query->insert(pair<string, string>("CertifyStatus", *request->certifyStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNo)) {
    query->insert(pair<string, string>("PhoneNo", *request->phoneNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCertifyInfoList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCertifyInfoListResponse(callApi(params, req, runtime));
}

QueryCertifyInfoListResponse Alibabacloud_Dypls20170830::Client::queryCertifyInfoList(shared_ptr<QueryCertifyInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCertifyInfoListWithOptions(request, runtime);
}

QueryCertifyOverviewInfoResponse Alibabacloud_Dypls20170830::Client::queryCertifyOverviewInfoWithOptions(shared_ptr<QueryCertifyOverviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCertifyOverviewInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCertifyOverviewInfoResponse(callApi(params, req, runtime));
}

QueryCertifyOverviewInfoResponse Alibabacloud_Dypls20170830::Client::queryCertifyOverviewInfo(shared_ptr<QueryCertifyOverviewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCertifyOverviewInfoWithOptions(request, runtime);
}

QueryContactsListResponse Alibabacloud_Dypls20170830::Client::queryContactsListWithOptions(shared_ptr<QueryContactsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryContactsList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryContactsListResponse(callApi(params, req, runtime));
}

QueryContactsListResponse Alibabacloud_Dypls20170830::Client::queryContactsList(shared_ptr<QueryContactsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryContactsListWithOptions(request, runtime);
}

QueryCustInfoResponse Alibabacloud_Dypls20170830::Client::queryCustInfoWithOptions(shared_ptr<QueryCustInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCustInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCustInfoResponse(callApi(params, req, runtime));
}

QueryCustInfoResponse Alibabacloud_Dypls20170830::Client::queryCustInfo(shared_ptr<QueryCustInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCustInfoWithOptions(request, runtime);
}

QueryDownloadUrlResponse Alibabacloud_Dypls20170830::Client::queryDownloadUrlWithOptions(shared_ptr<QueryDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDownloadUrl"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDownloadUrlResponse(callApi(params, req, runtime));
}

QueryDownloadUrlResponse Alibabacloud_Dypls20170830::Client::queryDownloadUrl(shared_ptr<QueryDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDownloadUrlWithOptions(request, runtime);
}

QueryEffectiveInvoiceListByBillNosResponse Alibabacloud_Dypls20170830::Client::queryEffectiveInvoiceListByBillNosWithOptions(shared_ptr<QueryEffectiveInvoiceListByBillNosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    body->insert(pair<string, string>("AppCode", *request->appCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billNo)) {
    body->insert(pair<string, string>("BillNo", *request->billNo));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->encryptProps)) {
    bodyFlat->insert(pair<string, map<string, string>>("EncryptProps", *request->encryptProps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->majorBillNo)) {
    body->insert(pair<string, string>("MajorBillNo", *request->majorBillNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ouCode)) {
    body->insert(pair<string, string>("OuCode", *request->ouCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedSystem)) {
    body->insert(pair<string, string>("RelatedSystem", *request->relatedSystem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sign)) {
    body->insert(pair<string, string>("Sign", *request->sign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEffectiveInvoiceListByBillNos"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEffectiveInvoiceListByBillNosResponse(callApi(params, req, runtime));
}

QueryEffectiveInvoiceListByBillNosResponse Alibabacloud_Dypls20170830::Client::queryEffectiveInvoiceListByBillNos(shared_ptr<QueryEffectiveInvoiceListByBillNosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEffectiveInvoiceListByBillNosWithOptions(request, runtime);
}

QueryExportResUrlResponse Alibabacloud_Dypls20170830::Client::queryExportResUrlWithOptions(shared_ptr<QueryExportResUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryExportResUrl"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryExportResUrlResponse(callApi(params, req, runtime));
}

QueryExportResUrlResponse Alibabacloud_Dypls20170830::Client::queryExportResUrl(shared_ptr<QueryExportResUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryExportResUrlWithOptions(request, runtime);
}

QueryGroupDetailListResponse Alibabacloud_Dypls20170830::Client::queryGroupDetailListWithOptions(shared_ptr<QueryGroupDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    query->insert(pair<string, string>("Number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGroupDetailList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGroupDetailListResponse(callApi(params, req, runtime));
}

QueryGroupDetailListResponse Alibabacloud_Dypls20170830::Client::queryGroupDetailList(shared_ptr<QueryGroupDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGroupDetailListWithOptions(request, runtime);
}

QueryGroupInfoListResponse Alibabacloud_Dypls20170830::Client::queryGroupInfoListWithOptions(shared_ptr<QueryGroupInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKey)) {
    query->insert(pair<string, string>("QueryKey", *request->queryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGroupInfoList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGroupInfoListResponse(callApi(params, req, runtime));
}

QueryGroupInfoListResponse Alibabacloud_Dypls20170830::Client::queryGroupInfoList(shared_ptr<QueryGroupInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGroupInfoListWithOptions(request, runtime);
}

QueryInvoiceInfoByRequestNoResponse Alibabacloud_Dypls20170830::Client::queryInvoiceInfoByRequestNoWithOptions(shared_ptr<QueryInvoiceInfoByRequestNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    body->insert(pair<string, string>("AppCode", *request->appCode));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->encryptProps)) {
    bodyFlat->insert(pair<string, map<string, string>>("EncryptProps", *request->encryptProps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedSystem)) {
    body->insert(pair<string, string>("RelatedSystem", *request->relatedSystem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestNo)) {
    body->insert(pair<string, string>("RequestNo", *request->requestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sign)) {
    body->insert(pair<string, string>("Sign", *request->sign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInvoiceInfoByRequestNo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInvoiceInfoByRequestNoResponse(callApi(params, req, runtime));
}

QueryInvoiceInfoByRequestNoResponse Alibabacloud_Dypls20170830::Client::queryInvoiceInfoByRequestNo(shared_ptr<QueryInvoiceInfoByRequestNoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInvoiceInfoByRequestNoWithOptions(request, runtime);
}

QueryMessageCallbackInfoResponse Alibabacloud_Dypls20170830::Client::queryMessageCallbackInfoWithOptions(shared_ptr<QueryMessageCallbackInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMessageCallbackInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMessageCallbackInfoResponse(callApi(params, req, runtime));
}

QueryMessageCallbackInfoResponse Alibabacloud_Dypls20170830::Client::queryMessageCallbackInfo(shared_ptr<QueryMessageCallbackInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessageCallbackInfoWithOptions(request, runtime);
}

QueryMessageQueueListResponse Alibabacloud_Dypls20170830::Client::queryMessageQueueListWithOptions(shared_ptr<QueryMessageQueueListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMessageQueueList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMessageQueueListResponse(callApi(params, req, runtime));
}

QueryMessageQueueListResponse Alibabacloud_Dypls20170830::Client::queryMessageQueueList(shared_ptr<QueryMessageQueueListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessageQueueListWithOptions(request, runtime);
}

QueryMonthlyBillInfoResponse Alibabacloud_Dypls20170830::Client::queryMonthlyBillInfoWithOptions(shared_ptr<QueryMonthlyBillInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billCycle)) {
    query->insert(pair<string, string>("BillCycle", *request->billCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    query->insert(pair<string, string>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemName)) {
    query->insert(pair<string, string>("ItemName", *request->itemName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subjectItemId)) {
    query->insert(pair<string, string>("SubjectItemId", *request->subjectItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMonthlyBillInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMonthlyBillInfoResponse(callApi(params, req, runtime));
}

QueryMonthlyBillInfoResponse Alibabacloud_Dypls20170830::Client::queryMonthlyBillInfo(shared_ptr<QueryMonthlyBillInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonthlyBillInfoWithOptions(request, runtime);
}

QueryMonthlyStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryMonthlyStatisticsInfoWithOptions(shared_ptr<QueryMonthlyStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMonthlyStatisticsInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMonthlyStatisticsInfoResponse(callApi(params, req, runtime));
}

QueryMonthlyStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryMonthlyStatisticsInfo(shared_ptr<QueryMonthlyStatisticsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonthlyStatisticsInfoWithOptions(request, runtime);
}

QueryNoBuyTasksResponse Alibabacloud_Dypls20170830::Client::queryNoBuyTasksWithOptions(shared_ptr<QueryNoBuyTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryNoBuyTasks"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryNoBuyTasksResponse(callApi(params, req, runtime));
}

QueryNoBuyTasksResponse Alibabacloud_Dypls20170830::Client::queryNoBuyTasks(shared_ptr<QueryNoBuyTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryNoBuyTasksWithOptions(request, runtime);
}

QueryNoDistributeResponse Alibabacloud_Dypls20170830::Client::queryNoDistributeWithOptions(shared_ptr<QueryNoDistributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryNoDistribute"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryNoDistributeResponse(callApi(params, req, runtime));
}

QueryNoDistributeResponse Alibabacloud_Dypls20170830::Client::queryNoDistribute(shared_ptr<QueryNoDistributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryNoDistributeWithOptions(request, runtime);
}

QueryOpenStatusResponse Alibabacloud_Dypls20170830::Client::queryOpenStatusWithOptions(shared_ptr<QueryOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->busOffer)) {
    query->insert(pair<string, long>("BusOffer", *request->busOffer));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodId)) {
    query->insert(pair<string, string>("ProdId", *request->prodId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOpenStatus"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOpenStatusResponse(callApi(params, req, runtime));
}

QueryOpenStatusResponse Alibabacloud_Dypls20170830::Client::queryOpenStatus(shared_ptr<QueryOpenStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOpenStatusWithOptions(request, runtime);
}

QueryPackageDetailResponse Alibabacloud_Dypls20170830::Client::queryPackageDetailWithOptions(shared_ptr<QueryPackageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPackageDetail"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPackageDetailResponse(callApi(params, req, runtime));
}

QueryPackageDetailResponse Alibabacloud_Dypls20170830::Client::queryPackageDetail(shared_ptr<QueryPackageDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPackageDetailWithOptions(request, runtime);
}

QueryPackageListResponse Alibabacloud_Dypls20170830::Client::queryPackageListWithOptions(shared_ptr<QueryPackageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billCycle)) {
    query->insert(pair<string, string>("BillCycle", *request->billCycle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPackageList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPackageListResponse(callApi(params, req, runtime));
}

QueryPackageListResponse Alibabacloud_Dypls20170830::Client::queryPackageList(shared_ptr<QueryPackageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPackageListWithOptions(request, runtime);
}

QueryPackageStatisticsResponse Alibabacloud_Dypls20170830::Client::queryPackageStatisticsWithOptions(shared_ptr<QueryPackageStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPackageStatistics"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPackageStatisticsResponse(callApi(params, req, runtime));
}

QueryPackageStatisticsResponse Alibabacloud_Dypls20170830::Client::queryPackageStatistics(shared_ptr<QueryPackageStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPackageStatisticsWithOptions(request, runtime);
}

QueryPoolCityListResponse Alibabacloud_Dypls20170830::Client::queryPoolCityListWithOptions(shared_ptr<QueryPoolCityListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPoolCityList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPoolCityListResponse(callApi(params, req, runtime));
}

QueryPoolCityListResponse Alibabacloud_Dypls20170830::Client::queryPoolCityList(shared_ptr<QueryPoolCityListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPoolCityListWithOptions(request, runtime);
}

QueryPoolInfoListResponse Alibabacloud_Dypls20170830::Client::queryPoolInfoListWithOptions(shared_ptr<QueryPoolInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isFuzzyQuery)) {
    query->insert(pair<string, bool>("IsFuzzyQuery", *request->isFuzzyQuery));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolName)) {
    query->insert(pair<string, string>("PoolName", *request->poolName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchParam)) {
    query->insert(pair<string, string>("SearchParam", *request->searchParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPoolInfoList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPoolInfoListResponse(callApi(params, req, runtime));
}

QueryPoolInfoListResponse Alibabacloud_Dypls20170830::Client::queryPoolInfoList(shared_ptr<QueryPoolInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPoolInfoListWithOptions(request, runtime);
}

QueryPoolMonthlyBillInfoResponse Alibabacloud_Dypls20170830::Client::queryPoolMonthlyBillInfoWithOptions(shared_ptr<QueryPoolMonthlyBillInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billCycle)) {
    query->insert(pair<string, string>("BillCycle", *request->billCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPoolMonthlyBillInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPoolMonthlyBillInfoResponse(callApi(params, req, runtime));
}

QueryPoolMonthlyBillInfoResponse Alibabacloud_Dypls20170830::Client::queryPoolMonthlyBillInfo(shared_ptr<QueryPoolMonthlyBillInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPoolMonthlyBillInfoWithOptions(request, runtime);
}

QueryPoolStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryPoolStatisticsInfoWithOptions(shared_ptr<QueryPoolStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPoolStatisticsInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPoolStatisticsInfoResponse(callApi(params, req, runtime));
}

QueryPoolStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryPoolStatisticsInfo(shared_ptr<QueryPoolStatisticsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPoolStatisticsInfoWithOptions(request, runtime);
}

QueryPoolSummaryInfoResponse Alibabacloud_Dypls20170830::Client::queryPoolSummaryInfoWithOptions(shared_ptr<QueryPoolSummaryInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPoolSummaryInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPoolSummaryInfoResponse(callApi(params, req, runtime));
}

QueryPoolSummaryInfoResponse Alibabacloud_Dypls20170830::Client::queryPoolSummaryInfo(shared_ptr<QueryPoolSummaryInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPoolSummaryInfoWithOptions(request, runtime);
}

QueryPurchasedInfoResponse Alibabacloud_Dypls20170830::Client::queryPurchasedInfoWithOptions(shared_ptr<QueryPurchasedInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPurchasedInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPurchasedInfoResponse(callApi(params, req, runtime));
}

QueryPurchasedInfoResponse Alibabacloud_Dypls20170830::Client::queryPurchasedInfo(shared_ptr<QueryPurchasedInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPurchasedInfoWithOptions(request, runtime);
}

QueryPurchasedResListResponse Alibabacloud_Dypls20170830::Client::queryPurchasedResListWithOptions(shared_ptr<QueryPurchasedResListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayPool)) {
    query->insert(pair<string, bool>("IsDisplayPool", *request->isDisplayPool));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resBindStatus)) {
    query->insert(pair<string, long>("ResBindStatus", *request->resBindStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPurchasedResList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPurchasedResListResponse(callApi(params, req, runtime));
}

QueryPurchasedResListResponse Alibabacloud_Dypls20170830::Client::queryPurchasedResList(shared_ptr<QueryPurchasedResListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPurchasedResListWithOptions(request, runtime);
}

QueryQRCodeInfoResponse Alibabacloud_Dypls20170830::Client::queryQRCodeInfoWithOptions(shared_ptr<QueryQRCodeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNumber)) {
    query->insert(pair<string, string>("SecretNumber", *request->secretNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryQRCodeInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryQRCodeInfoResponse(callApi(params, req, runtime));
}

QueryQRCodeInfoResponse Alibabacloud_Dypls20170830::Client::queryQRCodeInfo(shared_ptr<QueryQRCodeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryQRCodeInfoWithOptions(request, runtime);
}

QueryRecordingUrlResponse Alibabacloud_Dypls20170830::Client::queryRecordingUrlWithOptions(shared_ptr<QueryRecordingUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callDate)) {
    query->insert(pair<string, string>("CallDate", *request->callDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordingUrl"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordingUrlResponse(callApi(params, req, runtime));
}

QueryRecordingUrlResponse Alibabacloud_Dypls20170830::Client::queryRecordingUrl(shared_ptr<QueryRecordingUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordingUrlWithOptions(request, runtime);
}

QueryResSummaryInfoResponse Alibabacloud_Dypls20170830::Client::queryResSummaryInfoWithOptions(shared_ptr<QueryResSummaryInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryResSummaryInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryResSummaryInfoResponse(callApi(params, req, runtime));
}

QueryResSummaryInfoResponse Alibabacloud_Dypls20170830::Client::queryResSummaryInfo(shared_ptr<QueryResSummaryInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryResSummaryInfoWithOptions(request, runtime);
}

QueryRingToneUrlResponse Alibabacloud_Dypls20170830::Client::queryRingToneUrlWithOptions(shared_ptr<QueryRingToneUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    query->insert(pair<string, string>("FileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRingToneUrl"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRingToneUrlResponse(callApi(params, req, runtime));
}

QueryRingToneUrlResponse Alibabacloud_Dypls20170830::Client::queryRingToneUrl(shared_ptr<QueryRingToneUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRingToneUrlWithOptions(request, runtime);
}

QueryRingTonesResponse Alibabacloud_Dypls20170830::Client::queryRingTonesWithOptions(shared_ptr<QueryRingTonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playType)) {
    query->insert(pair<string, string>("PlayType", *request->playType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRingTones"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRingTonesResponse(callApi(params, req, runtime));
}

QueryRingTonesResponse Alibabacloud_Dypls20170830::Client::queryRingTones(shared_ptr<QueryRingTonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRingTonesWithOptions(request, runtime);
}

QuerySimplePoolInfoListResponse Alibabacloud_Dypls20170830::Client::querySimplePoolInfoListWithOptions(shared_ptr<QuerySimplePoolInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolName)) {
    query->insert(pair<string, string>("PoolName", *request->poolName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySimplePoolInfoList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySimplePoolInfoListResponse(callApi(params, req, runtime));
}

QuerySimplePoolInfoListResponse Alibabacloud_Dypls20170830::Client::querySimplePoolInfoList(shared_ptr<QuerySimplePoolInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySimplePoolInfoListWithOptions(request, runtime);
}

QueryStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryStatisticsInfoWithOptions(shared_ptr<QueryStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStatisticsInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStatisticsInfoResponse(callApi(params, req, runtime));
}

QueryStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryStatisticsInfo(shared_ptr<QueryStatisticsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStatisticsInfoWithOptions(request, runtime);
}

QueryTagOpenStatusResponse Alibabacloud_Dypls20170830::Client::queryTagOpenStatusWithOptions(shared_ptr<QueryTagOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributeKey)) {
    query->insert(pair<string, string>("AttributeKey", *request->attributeKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizType)) {
    query->insert(pair<string, long>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subAttributeKey)) {
    query->insert(pair<string, string>("SubAttributeKey", *request->subAttributeKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTagOpenStatus"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTagOpenStatusResponse(callApi(params, req, runtime));
}

QueryTagOpenStatusResponse Alibabacloud_Dypls20170830::Client::queryTagOpenStatus(shared_ptr<QueryTagOpenStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTagOpenStatusWithOptions(request, runtime);
}

QueryTransferDetailsResponse Alibabacloud_Dypls20170830::Client::queryTransferDetailsWithOptions(shared_ptr<QueryTransferDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    query->insert(pair<string, long>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransferDetails"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransferDetailsResponse(callApi(params, req, runtime));
}

QueryTransferDetailsResponse Alibabacloud_Dypls20170830::Client::queryTransferDetails(shared_ptr<QueryTransferDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferDetailsWithOptions(request, runtime);
}

QueryTransferRecordResponse Alibabacloud_Dypls20170830::Client::queryTransferRecordWithOptions(shared_ptr<QueryTransferRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    query->insert(pair<string, long>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransferRecord"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransferRecordResponse(callApi(params, req, runtime));
}

QueryTransferRecordResponse Alibabacloud_Dypls20170830::Client::queryTransferRecord(shared_ptr<QueryTransferRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferRecordWithOptions(request, runtime);
}

QueryTransferRecordsResponse Alibabacloud_Dypls20170830::Client::queryTransferRecordsWithOptions(shared_ptr<QueryTransferRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    query->insert(pair<string, long>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransferRecords"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransferRecordsResponse(callApi(params, req, runtime));
}

QueryTransferRecordsResponse Alibabacloud_Dypls20170830::Client::queryTransferRecords(shared_ptr<QueryTransferRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferRecordsWithOptions(request, runtime);
}

QueryUserDeleteStatusResponse Alibabacloud_Dypls20170830::Client::queryUserDeleteStatusWithOptions(shared_ptr<QueryUserDeleteStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtWakeup)) {
    query->insert(pair<string, string>("GmtWakeup", *request->gmtWakeup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hid)) {
    query->insert(pair<string, long>("Hid", *request->hid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->interrupt)) {
    query->insert(pair<string, bool>("Interrupt", *request->interrupt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoker)) {
    query->insert(pair<string, string>("Invoker", *request->invoker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    query->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->success)) {
    query->insert(pair<string, bool>("Success", *request->success));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskExtraData)) {
    query->insert(pair<string, string>("TaskExtraData", *request->taskExtraData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdentifier)) {
    query->insert(pair<string, string>("TaskIdentifier", *request->taskIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserDeleteStatus"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserDeleteStatusResponse(callApi(params, req, runtime));
}

QueryUserDeleteStatusResponse Alibabacloud_Dypls20170830::Client::queryUserDeleteStatus(shared_ptr<QueryUserDeleteStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserDeleteStatusWithOptions(request, runtime);
}

QueryUserInfoResponse Alibabacloud_Dypls20170830::Client::queryUserInfoWithOptions(shared_ptr<QueryUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserInfoResponse(callApi(params, req, runtime));
}

QueryUserInfoResponse Alibabacloud_Dypls20170830::Client::queryUserInfo(shared_ptr<QueryUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserInfoWithOptions(request, runtime);
}

QueryUserResPoolInfoResponse Alibabacloud_Dypls20170830::Client::queryUserResPoolInfoWithOptions(shared_ptr<QueryUserResPoolInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserResPoolInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserResPoolInfoResponse(callApi(params, req, runtime));
}

QueryUserResPoolInfoResponse Alibabacloud_Dypls20170830::Client::queryUserResPoolInfo(shared_ptr<QueryUserResPoolInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserResPoolInfoWithOptions(request, runtime);
}

QueryVirtualOperationShowResponse Alibabacloud_Dypls20170830::Client::queryVirtualOperationShowWithOptions(shared_ptr<QueryVirtualOperationShowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryVirtualOperationShow"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryVirtualOperationShowResponse(callApi(params, req, runtime));
}

QueryVirtualOperationShowResponse Alibabacloud_Dypls20170830::Client::queryVirtualOperationShow(shared_ptr<QueryVirtualOperationShowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVirtualOperationShowWithOptions(request, runtime);
}

QueryWarningListResponse Alibabacloud_Dypls20170830::Client::queryWarningListWithOptions(shared_ptr<QueryWarningListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWarningList"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWarningListResponse(callApi(params, req, runtime));
}

QueryWarningListResponse Alibabacloud_Dypls20170830::Client::queryWarningList(shared_ptr<QueryWarningListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWarningListWithOptions(request, runtime);
}

QueryWaybillOrderInfoResponse Alibabacloud_Dypls20170830::Client::queryWaybillOrderInfoWithOptions(shared_ptr<QueryWaybillOrderInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderCode)) {
    query->insert(pair<string, string>("OuterOrderCode", *request->outerOrderCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWaybillOrderInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWaybillOrderInfoResponse(callApi(params, req, runtime));
}

QueryWaybillOrderInfoResponse Alibabacloud_Dypls20170830::Client::queryWaybillOrderInfo(shared_ptr<QueryWaybillOrderInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWaybillOrderInfoWithOptions(request, runtime);
}

QueryWaybillOrderStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryWaybillOrderStatisticsInfoWithOptions(shared_ptr<QueryWaybillOrderStatisticsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularity)) {
    query->insert(pair<string, string>("Granularity", *request->granularity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWaybillOrderStatisticsInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWaybillOrderStatisticsInfoResponse(callApi(params, req, runtime));
}

QueryWaybillOrderStatisticsInfoResponse Alibabacloud_Dypls20170830::Client::queryWaybillOrderStatisticsInfo(shared_ptr<QueryWaybillOrderStatisticsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWaybillOrderStatisticsInfoWithOptions(request, runtime);
}

ReleaseResourceResponse Alibabacloud_Dypls20170830::Client::releaseResourceWithOptions(shared_ptr<ReleaseResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDisplayPool)) {
    query->insert(pair<string, bool>("IsDisplayPool", *request->isDisplayPool));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseResource"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseResourceResponse(callApi(params, req, runtime));
}

ReleaseResourceResponse Alibabacloud_Dypls20170830::Client::releaseResource(shared_ptr<ReleaseResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseResourceWithOptions(request, runtime);
}

TestTtsRingToneResponse Alibabacloud_Dypls20170830::Client::testTtsRingToneWithOptions(shared_ptr<TestTtsRingToneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tts)) {
    query->insert(pair<string, string>("Tts", *request->tts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceSpeed)) {
    query->insert(pair<string, string>("VoiceSpeed", *request->voiceSpeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceStyle)) {
    query->insert(pair<string, string>("VoiceStyle", *request->voiceStyle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceType)) {
    query->insert(pair<string, string>("VoiceType", *request->voiceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceVolume)) {
    query->insert(pair<string, string>("VoiceVolume", *request->voiceVolume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestTtsRingTone"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestTtsRingToneResponse(callApi(params, req, runtime));
}

TestTtsRingToneResponse Alibabacloud_Dypls20170830::Client::testTtsRingTone(shared_ptr<TestTtsRingToneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testTtsRingToneWithOptions(request, runtime);
}

UnbindResourceResponse Alibabacloud_Dypls20170830::Client::unbindResourceWithOptions(shared_ptr<UnbindResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bindIds)) {
    query->insert(pair<string, string>("BindIds", *request->bindIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindResource"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindResourceResponse(callApi(params, req, runtime));
}

UnbindResourceResponse Alibabacloud_Dypls20170830::Client::unbindResource(shared_ptr<UnbindResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindResourceWithOptions(request, runtime);
}

UnlockResourceResponse Alibabacloud_Dypls20170830::Client::unlockResourceWithOptions(shared_ptr<UnlockResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnlockResource"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnlockResourceResponse(callApi(params, req, runtime));
}

UnlockResourceResponse Alibabacloud_Dypls20170830::Client::unlockResource(shared_ptr<UnlockResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockResourceWithOptions(request, runtime);
}

UpdateContactsResponse Alibabacloud_Dypls20170830::Client::updateContactsWithOptions(shared_ptr<UpdateContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateContacts"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateContactsResponse(callApi(params, req, runtime));
}

UpdateContactsResponse Alibabacloud_Dypls20170830::Client::updateContacts(shared_ptr<UpdateContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateContactsWithOptions(request, runtime);
}

UpdateGroupDetailResponse Alibabacloud_Dypls20170830::Client::updateGroupDetailWithOptions(shared_ptr<UpdateGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroupDetail"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupDetailResponse(callApi(params, req, runtime));
}

UpdateGroupDetailResponse Alibabacloud_Dypls20170830::Client::updateGroupDetail(shared_ptr<UpdateGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupDetailWithOptions(request, runtime);
}

UpdateGroupInfoResponse Alibabacloud_Dypls20170830::Client::updateGroupInfoWithOptions(shared_ptr<UpdateGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolKey)) {
    query->insert(pair<string, string>("PoolKey", *request->poolKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroupInfo"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupInfoResponse(callApi(params, req, runtime));
}

UpdateGroupInfoResponse Alibabacloud_Dypls20170830::Client::updateGroupInfo(shared_ptr<UpdateGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupInfoWithOptions(request, runtime);
}

UpdatePoolNameResponse Alibabacloud_Dypls20170830::Client::updatePoolNameWithOptions(shared_ptr<UpdatePoolNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolName)) {
    query->insert(pair<string, string>("PoolName", *request->poolName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePoolName"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePoolNameResponse(callApi(params, req, runtime));
}

UpdatePoolNameResponse Alibabacloud_Dypls20170830::Client::updatePoolName(shared_ptr<UpdatePoolNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePoolNameWithOptions(request, runtime);
}

UpdateResRemarkResponse Alibabacloud_Dypls20170830::Client::updateResRemarkWithOptions(shared_ptr<UpdateResRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    query->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resType)) {
    query->insert(pair<string, long>("ResType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretNo)) {
    query->insert(pair<string, string>("SecretNo", *request->secretNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResRemark"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResRemarkResponse(callApi(params, req, runtime));
}

UpdateResRemarkResponse Alibabacloud_Dypls20170830::Client::updateResRemark(shared_ptr<UpdateResRemarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateResRemarkWithOptions(request, runtime);
}

ValidateOrderResponse Alibabacloud_Dypls20170830::Client::validateOrderWithOptions(shared_ptr<ValidateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodCode)) {
    query->insert(pair<string, string>("ProdCode", *request->prodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("data", *request->data));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateOrder"))},
    {"version", boost::any(string("2017-08-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateOrderResponse(callApi(params, req, runtime));
}

ValidateOrderResponse Alibabacloud_Dypls20170830::Client::validateOrder(shared_ptr<ValidateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateOrderWithOptions(request, runtime);
}

