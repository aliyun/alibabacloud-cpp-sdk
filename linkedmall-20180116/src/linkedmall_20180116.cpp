// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_20180116.hpp>
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

using namespace Alibabacloud_Linkedmall20180116;

Alibabacloud_Linkedmall20180116::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "linkedmall.aliyuncs.com"},
    {"cn-shanghai", "linkedmall.aliyuncs.com"},
    {"ap-northeast-1", "linkedmall.aliyuncs.com"},
    {"ap-northeast-2-pop", "linkedmall.aliyuncs.com"},
    {"ap-south-1", "linkedmall.aliyuncs.com"},
    {"ap-southeast-1", "linkedmall.aliyuncs.com"},
    {"ap-southeast-2", "linkedmall.aliyuncs.com"},
    {"ap-southeast-3", "linkedmall.aliyuncs.com"},
    {"ap-southeast-5", "linkedmall.aliyuncs.com"},
    {"cn-beijing", "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-pop", "linkedmall.aliyuncs.com"},
    {"cn-beijing-gov-1", "linkedmall.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "linkedmall.aliyuncs.com"},
    {"cn-chengdu", "linkedmall.aliyuncs.com"},
    {"cn-edge-1", "linkedmall.aliyuncs.com"},
    {"cn-fujian", "linkedmall.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-finance", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-test-306", "linkedmall.aliyuncs.com"},
    {"cn-hongkong", "linkedmall.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "linkedmall.aliyuncs.com"},
    {"cn-huhehaote", "linkedmall.aliyuncs.com"},
    {"cn-north-2-gov-1", "linkedmall.aliyuncs.com"},
    {"cn-qingdao", "linkedmall.aliyuncs.com"},
    {"cn-qingdao-nebula", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-inner", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-inner", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "linkedmall.aliyuncs.com"},
    {"cn-wuhan", "linkedmall.aliyuncs.com"},
    {"cn-yushanfang", "linkedmall.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou", "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "linkedmall.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "linkedmall.aliyuncs.com"},
    {"eu-central-1", "linkedmall.aliyuncs.com"},
    {"eu-west-1", "linkedmall.aliyuncs.com"},
    {"eu-west-1-oxs", "linkedmall.aliyuncs.com"},
    {"me-east-1", "linkedmall.aliyuncs.com"},
    {"rus-west-1-pop", "linkedmall.aliyuncs.com"},
    {"us-east-1", "linkedmall.aliyuncs.com"},
    {"us-west-1", "linkedmall.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkedmall"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Linkedmall20180116::Client::getEndpoint(shared_ptr<string> productId,
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

AddAddressResponse Alibabacloud_Linkedmall20180116::Client::addAddressWithOptions(shared_ptr<AddAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressInfo)) {
    body->insert(pair<string, string>("AddressInfo", *request->addressInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAddress"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAddressResponse(callApi(params, req, runtime));
}

AddAddressResponse Alibabacloud_Linkedmall20180116::Client::addAddress(shared_ptr<AddAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAddressWithOptions(request, runtime);
}

AddItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::addItemLimitRuleWithOptions(shared_ptr<AddItemLimitRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmActivityId)) {
    query->insert(pair<string, long>("LmActivityId", *request->lmActivityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizCode)) {
    query->insert(pair<string, string>("SubBizCode", *request->subBizCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upperNum)) {
    query->insert(pair<string, long>("UpperNum", *request->upperNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddItemLimitRule"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddItemLimitRuleResponse(callApi(params, req, runtime));
}

AddItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::addItemLimitRule(shared_ptr<AddItemLimitRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addItemLimitRuleWithOptions(request, runtime);
}

AddItemToSubBizsResponse Alibabacloud_Linkedmall20180116::Client::addItemToSubBizsWithOptions(shared_ptr<AddItemToSubBizsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddItemToSubBizsShrinkRequest> request = make_shared<AddItemToSubBizsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subBizIds)) {
    request->subBizIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subBizIds, make_shared<string>("SubBizIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    body->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    body->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizIdsShrink)) {
    body->insert(pair<string, string>("SubBizIds", *request->subBizIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddItemToSubBizs"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddItemToSubBizsResponse(callApi(params, req, runtime));
}

AddItemToSubBizsResponse Alibabacloud_Linkedmall20180116::Client::addItemToSubBizs(shared_ptr<AddItemToSubBizsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addItemToSubBizsWithOptions(request, runtime);
}

AddSupplierNewItemsResponse Alibabacloud_Linkedmall20180116::Client::addSupplierNewItemsWithOptions(shared_ptr<AddSupplierNewItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddSupplierNewItemsRequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<AddSupplierNewItemsRequestItemList>>("ItemList", *request->itemList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSupplierNewItems"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSupplierNewItemsResponse(callApi(params, req, runtime));
}

AddSupplierNewItemsResponse Alibabacloud_Linkedmall20180116::Client::addSupplierNewItems(shared_ptr<AddSupplierNewItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSupplierNewItemsWithOptions(request, runtime);
}

ApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::applyRefundWithOptions(shared_ptr<ApplyRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyReasonTextId)) {
    query->insert(pair<string, long>("ApplyReasonTextId", *request->applyReasonTextId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundCount)) {
    query->insert(pair<string, long>("ApplyRefundCount", *request->applyRefundCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundFee)) {
    query->insert(pair<string, long>("ApplyRefundFee", *request->applyRefundFee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    query->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    query->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->leaveMessage)) {
    body->insert(pair<string, string>("LeaveMessage", *request->leaveMessage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyRefundRequestLeavePictureList>>(request->leavePictureList)) {
    body->insert(pair<string, vector<ApplyRefundRequestLeavePictureList>>("LeavePictureList", *request->leavePictureList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyRefund"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyRefundResponse(callApi(params, req, runtime));
}

ApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::applyRefund(shared_ptr<ApplyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyRefundWithOptions(request, runtime);
}

ApplyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::applyRefundWithDesignatedTbUidWithOptions(shared_ptr<ApplyRefundWithDesignatedTbUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyRefundWithDesignatedTbUidShrinkRequest> request = make_shared<ApplyRefundWithDesignatedTbUidShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyRefundWithDesignatedTbUidRequestProofs>>(tmpReq->proofs)) {
    request->proofsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->proofs, make_shared<string>("Proofs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    body->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proofsShrink)) {
    body->insert(pair<string, string>("Proofs", *request->proofsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reasonId)) {
    body->insert(pair<string, long>("ReasonId", *request->reasonId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCode)) {
    body->insert(pair<string, long>("RefundCode", *request->refundCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCount)) {
    body->insert(pair<string, long>("RefundCount", *request->refundCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundFee)) {
    body->insert(pair<string, long>("RefundFee", *request->refundFee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyRefundWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyRefundWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

ApplyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::applyRefundWithDesignatedTbUid(shared_ptr<ApplyRefundWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyRefundWithDesignatedTbUidWithOptions(request, runtime);
}

BatchRegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::batchRegistAnonymousTbAccountWithOptions(shared_ptr<BatchRegistAnonymousTbAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idJsonList)) {
    query->insert(pair<string, string>("IdJsonList", *request->idJsonList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchRegistAnonymousTbAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchRegistAnonymousTbAccountResponse(callApi(params, req, runtime));
}

BatchRegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::batchRegistAnonymousTbAccount(shared_ptr<BatchRegistAnonymousTbAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegistAnonymousTbAccountWithOptions(request, runtime);
}

CancelOrderResponse Alibabacloud_Linkedmall20180116::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmOrderId)) {
    query->insert(pair<string, string>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrder"))},
    {"version", boost::any(string("2018-01-16"))},
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

CancelOrderResponse Alibabacloud_Linkedmall20180116::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

CancelOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::cancelOrderWithDesignatedTbUidWithOptions(shared_ptr<CancelOrderWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    body->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOrderWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOrderWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

CancelOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::cancelOrderWithDesignatedTbUid(shared_ptr<CancelOrderWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithDesignatedTbUidWithOptions(request, runtime);
}

CancelRealTbAccountSupportResponse Alibabacloud_Linkedmall20180116::Client::cancelRealTbAccountSupportWithOptions(shared_ptr<CancelRealTbAccountSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRealTbAccountSupport"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRealTbAccountSupportResponse(callApi(params, req, runtime));
}

CancelRealTbAccountSupportResponse Alibabacloud_Linkedmall20180116::Client::cancelRealTbAccountSupport(shared_ptr<CancelRealTbAccountSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRealTbAccountSupportWithOptions(request, runtime);
}

CancelRefundResponse Alibabacloud_Linkedmall20180116::Client::cancelRefundWithOptions(shared_ptr<CancelRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    query->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRefund"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRefundResponse(callApi(params, req, runtime));
}

CancelRefundResponse Alibabacloud_Linkedmall20180116::Client::cancelRefund(shared_ptr<CancelRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRefundWithOptions(request, runtime);
}

CancelRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::cancelRefundWithDesignatedTbUidWithOptions(shared_ptr<CancelRefundWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRefundWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRefundWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

CancelRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::cancelRefundWithDesignatedTbUid(shared_ptr<CancelRefundWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRefundWithDesignatedTbUidWithOptions(request, runtime);
}

ConfirmDisburseResponse Alibabacloud_Linkedmall20180116::Client::confirmDisburseWithOptions(shared_ptr<ConfirmDisburseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmOrderId)) {
    query->insert(pair<string, string>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmDisburse"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmDisburseResponse(callApi(params, req, runtime));
}

ConfirmDisburseResponse Alibabacloud_Linkedmall20180116::Client::confirmDisburse(shared_ptr<ConfirmDisburseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmDisburseWithOptions(request, runtime);
}

ConfirmDisburseWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::confirmDisburseWithDesignatedTbUidWithOptions(shared_ptr<ConfirmDisburseWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    body->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmDisburseWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmDisburseWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

ConfirmDisburseWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::confirmDisburseWithDesignatedTbUid(shared_ptr<ConfirmDisburseWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmDisburseWithDesignatedTbUidWithOptions(request, runtime);
}

CreateMovieTicketOrderResponse Alibabacloud_Linkedmall20180116::Client::createMovieTicketOrderWithOptions(shared_ptr<CreateMovieTicketOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMovieTicketOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMovieTicketOrderResponse(callApi(params, req, runtime));
}

CreateMovieTicketOrderResponse Alibabacloud_Linkedmall20180116::Client::createMovieTicketOrder(shared_ptr<CreateMovieTicketOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMovieTicketOrderWithOptions(request, runtime);
}

CreateOrderResponse Alibabacloud_Linkedmall20180116::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerMessageMap)) {
    query->insert(pair<string, string>("BuyerMessageMap", *request->buyerMessageMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    query->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOrderRequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<CreateOrderRequestItemList>>("ItemList", *request->itemList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderExpireTime)) {
    query->insert(pair<string, long>("OrderExpireTime", *request->orderExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeId)) {
    query->insert(pair<string, string>("OutTradeId", *request->outTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalAmount)) {
    query->insert(pair<string, long>("TotalAmount", *request->totalAmount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrder"))},
    {"version", boost::any(string("2018-01-16"))},
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

CreateOrderResponse Alibabacloud_Linkedmall20180116::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithOptions(request, runtime);
}

CreateOrderPayUrlForOutDiscountResponse Alibabacloud_Linkedmall20180116::Client::createOrderPayUrlForOutDiscountWithOptions(shared_ptr<CreateOrderPayUrlForOutDiscountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buyInfo)) {
    body->insert(pair<string, string>("BuyInfo", *request->buyInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrderPayUrlForOutDiscount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderPayUrlForOutDiscountResponse(callApi(params, req, runtime));
}

CreateOrderPayUrlForOutDiscountResponse Alibabacloud_Linkedmall20180116::Client::createOrderPayUrlForOutDiscount(shared_ptr<CreateOrderPayUrlForOutDiscountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderPayUrlForOutDiscountWithOptions(request, runtime);
}

CreateOrderTransactionDetailFileResponse Alibabacloud_Linkedmall20180116::Client::createOrderTransactionDetailFileWithOptions(shared_ptr<CreateOrderTransactionDetailFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createEndTime)) {
    body->insert(pair<string, string>("CreateEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createStartTime)) {
    body->insert(pair<string, string>("CreateStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    body->insert(pair<string, string>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmShopId)) {
    body->insert(pair<string, string>("LmShopId", *request->lmShopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderStatus)) {
    body->insert(pair<string, string>("OrderStatus", *request->orderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payStatus)) {
    body->insert(pair<string, string>("PayStatus", *request->payStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentEndTime)) {
    body->insert(pair<string, string>("PaymentEndTime", *request->paymentEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentStartTime)) {
    body->insert(pair<string, string>("PaymentStartTime", *request->paymentStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poCode)) {
    body->insert(pair<string, string>("PoCode", *request->poCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundEndTime)) {
    body->insert(pair<string, string>("RefundEndTime", *request->refundEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundStartTime)) {
    body->insert(pair<string, string>("RefundStartTime", *request->refundStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerId)) {
    body->insert(pair<string, string>("SellerId", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerName)) {
    body->insert(pair<string, string>("SellerName", *request->sellerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settlementNode)) {
    body->insert(pair<string, string>("SettlementNode", *request->settlementNode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shopName)) {
    body->insert(pair<string, string>("ShopName", *request->shopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbMainOrderId)) {
    body->insert(pair<string, string>("TbMainOrderId", *request->tbMainOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantName)) {
    body->insert(pair<string, string>("TenantName", *request->tenantName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrderTransactionDetailFile"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderTransactionDetailFileResponse(callApi(params, req, runtime));
}

CreateOrderTransactionDetailFileResponse Alibabacloud_Linkedmall20180116::Client::createOrderTransactionDetailFile(shared_ptr<CreateOrderTransactionDetailFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderTransactionDetailFileWithOptions(request, runtime);
}

CreateOrderV2Response Alibabacloud_Linkedmall20180116::Client::createOrderV2WithOptions(shared_ptr<CreateOrderV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerMessageMap)) {
    query->insert(pair<string, string>("BuyerMessageMap", *request->buyerMessageMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    query->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOrderV2RequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<CreateOrderV2RequestItemList>>("ItemList", *request->itemList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderExpireTime)) {
    query->insert(pair<string, long>("OrderExpireTime", *request->orderExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeId)) {
    query->insert(pair<string, string>("OutTradeId", *request->outTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalAmount)) {
    query->insert(pair<string, long>("TotalAmount", *request->totalAmount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrderV2"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderV2Response(callApi(params, req, runtime));
}

CreateOrderV2Response Alibabacloud_Linkedmall20180116::Client::createOrderV2(shared_ptr<CreateOrderV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderV2WithOptions(request, runtime);
}

CreateOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::createOrderWithDesignatedTbUidWithOptions(shared_ptr<CreateOrderWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerMessages)) {
    body->insert(pair<string, string>("BuyerMessages", *request->buyerMessages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    body->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryInfo)) {
    body->insert(pair<string, string>("DeliveryInfo", *request->deliveryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderExpireTime)) {
    body->insert(pair<string, long>("OrderExpireTime", *request->orderExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderItems)) {
    body->insert(pair<string, string>("OrderItems", *request->orderItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeId)) {
    body->insert(pair<string, string>("OutTradeId", *request->outTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrderWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrderWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

CreateOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::createOrderWithDesignatedTbUid(shared_ptr<CreateOrderWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithDesignatedTbUidWithOptions(request, runtime);
}

CreateOutDiscountOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::createOutDiscountOrderWithDesignatedTbUidWithOptions(shared_ptr<CreateOutDiscountOrderWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerMessages)) {
    body->insert(pair<string, string>("BuyerMessages", *request->buyerMessages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    body->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryInfo)) {
    body->insert(pair<string, string>("DeliveryInfo", *request->deliveryInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderExpireTime)) {
    body->insert(pair<string, long>("OrderExpireTime", *request->orderExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderItems)) {
    body->insert(pair<string, string>("OrderItems", *request->orderItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDiscountInfos)) {
    body->insert(pair<string, string>("OutDiscountInfos", *request->outDiscountInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeId)) {
    body->insert(pair<string, string>("OutTradeId", *request->outTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOutDiscountOrderWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOutDiscountOrderWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

CreateOutDiscountOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::createOutDiscountOrderWithDesignatedTbUid(shared_ptr<CreateOutDiscountOrderWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOutDiscountOrderWithDesignatedTbUidWithOptions(request, runtime);
}

CreatePayUrlResponse Alibabacloud_Linkedmall20180116::Client::createPayUrlWithOptions(shared_ptr<CreatePayUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buyInfo)) {
    body->insert(pair<string, string>("BuyInfo", *request->buyInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePayUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePayUrlResponse(callApi(params, req, runtime));
}

CreatePayUrlResponse Alibabacloud_Linkedmall20180116::Client::createPayUrl(shared_ptr<CreatePayUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPayUrlWithOptions(request, runtime);
}

CreateSettleConfirmResponse Alibabacloud_Linkedmall20180116::Client::createSettleConfirmWithOptions(shared_ptr<CreateSettleConfirmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRequestNo)) {
    body->insert(pair<string, string>("OutRequestNo", *request->outRequestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeNo)) {
    body->insert(pair<string, string>("OutTradeNo", *request->outTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleInfo)) {
    body->insert(pair<string, string>("SettleInfo", *request->settleInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeNo)) {
    body->insert(pair<string, string>("TradeNo", *request->tradeNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSettleConfirm"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSettleConfirmResponse(callApi(params, req, runtime));
}

CreateSettleConfirmResponse Alibabacloud_Linkedmall20180116::Client::createSettleConfirm(shared_ptr<CreateSettleConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSettleConfirmWithOptions(request, runtime);
}

CreateVirtualProductOrderResponse Alibabacloud_Linkedmall20180116::Client::createVirtualProductOrderWithOptions(shared_ptr<CreateVirtualProductOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    query->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVirtualProductOrderRequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<CreateVirtualProductOrderRequestItemList>>("ItemList", *request->itemList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderExpireTime)) {
    query->insert(pair<string, long>("OrderExpireTime", *request->orderExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeId)) {
    query->insert(pair<string, string>("OutTradeId", *request->outTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalAmount)) {
    query->insert(pair<string, long>("TotalAmount", *request->totalAmount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVirtualProductOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVirtualProductOrderResponse(callApi(params, req, runtime));
}

CreateVirtualProductOrderResponse Alibabacloud_Linkedmall20180116::Client::createVirtualProductOrder(shared_ptr<CreateVirtualProductOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVirtualProductOrderWithOptions(request, runtime);
}

CreateWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::createWithholdTradeWithOptions(shared_ptr<CreateWithholdTradeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementNo)) {
    body->insert(pair<string, string>("AgreementNo", *request->agreementNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerId)) {
    body->insert(pair<string, string>("BuyerId", *request->buyerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->goodsDetail)) {
    body->insert(pair<string, string>("GoodsDetail", *request->goodsDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRequestNo)) {
    body->insert(pair<string, string>("OutRequestNo", *request->outRequestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeNo)) {
    body->insert(pair<string, string>("OutTradeNo", *request->outTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleMode)) {
    body->insert(pair<string, string>("SettleMode", *request->settleMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalAmount)) {
    body->insert(pair<string, string>("TotalAmount", *request->totalAmount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWithholdTrade"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWithholdTradeResponse(callApi(params, req, runtime));
}

CreateWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::createWithholdTrade(shared_ptr<CreateWithholdTradeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWithholdTradeWithOptions(request, runtime);
}

DeductUserPointResponse Alibabacloud_Linkedmall20180116::Client::deductUserPointWithOptions(shared_ptr<DeductUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeductUserPointShrinkRequest> request = make_shared<DeductUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeductUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeductUserPointResponse(callApi(params, req, runtime));
}

DeductUserPointResponse Alibabacloud_Linkedmall20180116::Client::deductUserPoint(shared_ptr<DeductUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deductUserPointWithOptions(request, runtime);
}

DeleteBizItemsResponse Alibabacloud_Linkedmall20180116::Client::deleteBizItemsWithOptions(shared_ptr<DeleteBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->itemIdList)) {
    query->insert(pair<string, vector<long>>("ItemIdList", *request->itemIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBizItems"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBizItemsResponse(callApi(params, req, runtime));
}

DeleteBizItemsResponse Alibabacloud_Linkedmall20180116::Client::deleteBizItems(shared_ptr<DeleteBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBizItemsWithOptions(request, runtime);
}

DeleteItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::deleteItemLimitRuleWithOptions(shared_ptr<DeleteItemLimitRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmActivityId)) {
    query->insert(pair<string, long>("LmActivityId", *request->lmActivityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizCode)) {
    query->insert(pair<string, string>("SubBizCode", *request->subBizCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteItemLimitRule"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteItemLimitRuleResponse(callApi(params, req, runtime));
}

DeleteItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::deleteItemLimitRule(shared_ptr<DeleteItemLimitRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteItemLimitRuleWithOptions(request, runtime);
}

DownloadCpsBillFileResponse Alibabacloud_Linkedmall20180116::Client::downloadCpsBillFileWithOptions(shared_ptr<DownloadCpsBillFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    body->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadCpsBillFile"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadCpsBillFileResponse(callApi(params, req, runtime));
}

DownloadCpsBillFileResponse Alibabacloud_Linkedmall20180116::Client::downloadCpsBillFile(shared_ptr<DownloadCpsBillFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadCpsBillFileWithOptions(request, runtime);
}

DownloadItemBillFileResponse Alibabacloud_Linkedmall20180116::Client::downloadItemBillFileWithOptions(shared_ptr<DownloadItemBillFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    body->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadItemBillFile"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadItemBillFileResponse(callApi(params, req, runtime));
}

DownloadItemBillFileResponse Alibabacloud_Linkedmall20180116::Client::downloadItemBillFile(shared_ptr<DownloadItemBillFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadItemBillFileWithOptions(request, runtime);
}

DownloadOrderTransactionDetailFileResponse Alibabacloud_Linkedmall20180116::Client::downloadOrderTransactionDetailFileWithOptions(shared_ptr<DownloadOrderTransactionDetailFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordId)) {
    body->insert(pair<string, string>("RecordId", *request->recordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadOrderTransactionDetailFile"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadOrderTransactionDetailFileResponse(callApi(params, req, runtime));
}

DownloadOrderTransactionDetailFileResponse Alibabacloud_Linkedmall20180116::Client::downloadOrderTransactionDetailFile(shared_ptr<DownloadOrderTransactionDetailFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadOrderTransactionDetailFileWithOptions(request, runtime);
}

EnableOrderResponse Alibabacloud_Linkedmall20180116::Client::enableOrderWithOptions(shared_ptr<EnableOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmOrderId)) {
    query->insert(pair<string, string>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeId)) {
    query->insert(pair<string, string>("OutTradeId", *request->outTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableOrderResponse(callApi(params, req, runtime));
}

EnableOrderResponse Alibabacloud_Linkedmall20180116::Client::enableOrder(shared_ptr<EnableOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableOrderWithOptions(request, runtime);
}

EnableOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::enableOrderWithDesignatedTbUidWithOptions(shared_ptr<EnableOrderWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    body->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableOrderWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableOrderWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

EnableOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::enableOrderWithDesignatedTbUid(shared_ptr<EnableOrderWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableOrderWithDesignatedTbUidWithOptions(request, runtime);
}

ExecuteNodeResponse Alibabacloud_Linkedmall20180116::Client::executeNodeWithOptions(shared_ptr<ExecuteNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceId)) {
    query->insert(pair<string, string>("NodeInstanceId", *request->nodeInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processId)) {
    query->insert(pair<string, string>("ProcessId", *request->processId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    query->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestData)) {
    query->insert(pair<string, string>("RequestData", *request->requestData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteNode"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteNodeResponse(callApi(params, req, runtime));
}

ExecuteNodeResponse Alibabacloud_Linkedmall20180116::Client::executeNode(shared_ptr<ExecuteNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeNodeWithOptions(request, runtime);
}

FreezeUserPointResponse Alibabacloud_Linkedmall20180116::Client::freezeUserPointWithOptions(shared_ptr<FreezeUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FreezeUserPointShrinkRequest> request = make_shared<FreezeUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FreezeUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FreezeUserPointResponse(callApi(params, req, runtime));
}

FreezeUserPointResponse Alibabacloud_Linkedmall20180116::Client::freezeUserPoint(shared_ptr<FreezeUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return freezeUserPointWithOptions(request, runtime);
}

GetActivityGameInfoResponse Alibabacloud_Linkedmall20180116::Client::getActivityGameInfoWithOptions(shared_ptr<GetActivityGameInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetActivityGameInfoShrinkRequest> request = make_shared<GetActivityGameInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->activityId)) {
    query->insert(pair<string, string>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetActivityGameInfo"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetActivityGameInfoResponse(callApi(params, req, runtime));
}

GetActivityGameInfoResponse Alibabacloud_Linkedmall20180116::Client::getActivityGameInfo(shared_ptr<GetActivityGameInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getActivityGameInfoWithOptions(request, runtime);
}

GetCategoryChainResponse Alibabacloud_Linkedmall20180116::Client::getCategoryChainWithOptions(shared_ptr<GetCategoryChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategoryChain"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCategoryChainResponse(callApi(params, req, runtime));
}

GetCategoryChainResponse Alibabacloud_Linkedmall20180116::Client::getCategoryChain(shared_ptr<GetCategoryChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoryChainWithOptions(request, runtime);
}

GetCategoryListResponse Alibabacloud_Linkedmall20180116::Client::getCategoryListWithOptions(shared_ptr<GetCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategoryList"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCategoryListResponse(callApi(params, req, runtime));
}

GetCategoryListResponse Alibabacloud_Linkedmall20180116::Client::getCategoryList(shared_ptr<GetCategoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoryListWithOptions(request, runtime);
}

GetCustomServiceUrlResponse Alibabacloud_Linkedmall20180116::Client::getCustomServiceUrlWithOptions(shared_ptr<GetCustomServiceUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cuid)) {
    query->insert(pair<string, string>("Cuid", *request->cuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nick)) {
    query->insert(pair<string, string>("Nick", *request->nick));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerId)) {
    query->insert(pair<string, string>("SellerId", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomServiceUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomServiceUrlResponse(callApi(params, req, runtime));
}

GetCustomServiceUrlResponse Alibabacloud_Linkedmall20180116::Client::getCustomServiceUrl(shared_ptr<GetCustomServiceUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomServiceUrlWithOptions(request, runtime);
}

GetGuidePageResponse Alibabacloud_Linkedmall20180116::Client::getGuidePageWithOptions(shared_ptr<GetGuidePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGuidePage"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGuidePageResponse(callApi(params, req, runtime));
}

GetGuidePageResponse Alibabacloud_Linkedmall20180116::Client::getGuidePage(shared_ptr<GetGuidePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGuidePageWithOptions(request, runtime);
}

GetItemPromotionResponse Alibabacloud_Linkedmall20180116::Client::getItemPromotionWithOptions(shared_ptr<GetItemPromotionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetItemPromotion"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetItemPromotionResponse(callApi(params, req, runtime));
}

GetItemPromotionResponse Alibabacloud_Linkedmall20180116::Client::getItemPromotion(shared_ptr<GetItemPromotionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getItemPromotionWithOptions(request, runtime);
}

GetLoginPageResponse Alibabacloud_Linkedmall20180116::Client::getLoginPageWithOptions(shared_ptr<GetLoginPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->failUrl)) {
    body->insert(pair<string, string>("FailUrl", *request->failUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUrl)) {
    body->insert(pair<string, string>("TargetUrl", *request->targetUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoginPage"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLoginPageResponse(callApi(params, req, runtime));
}

GetLoginPageResponse Alibabacloud_Linkedmall20180116::Client::getLoginPage(shared_ptr<GetLoginPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginPageWithOptions(request, runtime);
}

GetSwitchUrlResponse Alibabacloud_Linkedmall20180116::Client::getSwitchUrlWithOptions(shared_ptr<GetSwitchUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSwitchUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSwitchUrlResponse(callApi(params, req, runtime));
}

GetSwitchUrlResponse Alibabacloud_Linkedmall20180116::Client::getSwitchUrl(shared_ptr<GetSwitchUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSwitchUrlWithOptions(request, runtime);
}

GetUserInfoResponse Alibabacloud_Linkedmall20180116::Client::getUserInfoWithOptions(shared_ptr<GetUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userFlag)) {
    query->insert(pair<string, string>("UserFlag", *request->userFlag));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryJson)) {
    body->insert(pair<string, string>("QueryJson", *request->queryJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserInfo"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserInfoResponse(callApi(params, req, runtime));
}

GetUserInfoResponse Alibabacloud_Linkedmall20180116::Client::getUserInfo(shared_ptr<GetUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserInfoWithOptions(request, runtime);
}

GetUserTokenPageResponse Alibabacloud_Linkedmall20180116::Client::getUserTokenPageWithOptions(shared_ptr<GetUserTokenPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserTokenPage"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserTokenPageResponse(callApi(params, req, runtime));
}

GetUserTokenPageResponse Alibabacloud_Linkedmall20180116::Client::getUserTokenPage(shared_ptr<GetUserTokenPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserTokenPageWithOptions(request, runtime);
}

GetWithholdSignPageUrlResponse Alibabacloud_Linkedmall20180116::Client::getWithholdSignPageUrlWithOptions(shared_ptr<GetWithholdSignPageUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalAgreementNo)) {
    body->insert(pair<string, string>("ExternalAgreementNo", *request->externalAgreementNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityParameters)) {
    body->insert(pair<string, string>("IdentityParameters", *request->identityParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantServiceDescription)) {
    body->insert(pair<string, string>("MerchantServiceDescription", *request->merchantServiceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantServiceName)) {
    body->insert(pair<string, string>("MerchantServiceName", *request->merchantServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    body->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRequestNo)) {
    body->insert(pair<string, string>("OutRequestNo", *request->outRequestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnUrl)) {
    body->insert(pair<string, string>("ReturnUrl", *request->returnUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWithholdSignPageUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWithholdSignPageUrlResponse(callApi(params, req, runtime));
}

GetWithholdSignPageUrlResponse Alibabacloud_Linkedmall20180116::Client::getWithholdSignPageUrl(shared_ptr<GetWithholdSignPageUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWithholdSignPageUrlWithOptions(request, runtime);
}

GiveUserPointResponse Alibabacloud_Linkedmall20180116::Client::giveUserPointWithOptions(shared_ptr<GiveUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GiveUserPointShrinkRequest> request = make_shared<GiveUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetBizUid)) {
    query->insert(pair<string, string>("TargetBizUid", *request->targetBizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GiveUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GiveUserPointResponse(callApi(params, req, runtime));
}

GiveUserPointResponse Alibabacloud_Linkedmall20180116::Client::giveUserPoint(shared_ptr<GiveUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return giveUserPointWithOptions(request, runtime);
}

GrantPromotionToUserResponse Alibabacloud_Linkedmall20180116::Client::grantPromotionToUserWithOptions(shared_ptr<GrantPromotionToUserRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantPromotionToUserShrinkRequest> request = make_shared<GrantPromotionToUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->body)) {
    request->bodyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->body, make_shared<string>("body"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireSeconds)) {
    query->insert(pair<string, long>("ExpireSeconds", *request->expireSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantMode)) {
    query->insert(pair<string, string>("GrantMode", *request->grantMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantWay)) {
    query->insert(pair<string, string>("GrantWay", *request->grantWay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityCode)) {
    query->insert(pair<string, string>("SecurityCode", *request->securityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyShrink)) {
    body->insert(pair<string, string>("body", *request->bodyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantPromotionToUser"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantPromotionToUserResponse(callApi(params, req, runtime));
}

GrantPromotionToUserResponse Alibabacloud_Linkedmall20180116::Client::grantPromotionToUser(shared_ptr<GrantPromotionToUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantPromotionToUserWithOptions(request, runtime);
}

GrantUserPointResponse Alibabacloud_Linkedmall20180116::Client::grantUserPointWithOptions(shared_ptr<GrantUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantUserPointShrinkRequest> request = make_shared<GrantUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantUserPointResponse(callApi(params, req, runtime));
}

GrantUserPointResponse Alibabacloud_Linkedmall20180116::Client::grantUserPoint(shared_ptr<GrantUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantUserPointWithOptions(request, runtime);
}

InitApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::initApplyRefundWithOptions(shared_ptr<InitApplyRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    query->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    query->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitApplyRefund"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitApplyRefundResponse(callApi(params, req, runtime));
}

InitApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::initApplyRefund(shared_ptr<InitApplyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initApplyRefundWithOptions(request, runtime);
}

InitApplyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::initApplyRefundWithDesignatedTbUidWithOptions(shared_ptr<InitApplyRefundWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCode)) {
    body->insert(pair<string, long>("RefundCode", *request->refundCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitApplyRefundWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitApplyRefundWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

InitApplyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::initApplyRefundWithDesignatedTbUid(shared_ptr<InitApplyRefundWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initApplyRefundWithDesignatedTbUidWithOptions(request, runtime);
}

InitModifyRefundResponse Alibabacloud_Linkedmall20180116::Client::initModifyRefundWithOptions(shared_ptr<InitModifyRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    query->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    query->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    query->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitModifyRefund"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitModifyRefundResponse(callApi(params, req, runtime));
}

InitModifyRefundResponse Alibabacloud_Linkedmall20180116::Client::initModifyRefund(shared_ptr<InitModifyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initModifyRefundWithOptions(request, runtime);
}

InitModifyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::initModifyRefundWithDesignatedTbUidWithOptions(shared_ptr<InitModifyRefundWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCode)) {
    body->insert(pair<string, long>("RefundCode", *request->refundCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitModifyRefundWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitModifyRefundWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

InitModifyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::initModifyRefundWithDesignatedTbUid(shared_ptr<InitModifyRefundWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initModifyRefundWithDesignatedTbUidWithOptions(request, runtime);
}

ListActivityAtmosphereResponse Alibabacloud_Linkedmall20180116::Client::listActivityAtmosphereWithOptions(shared_ptr<ListActivityAtmosphereRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListActivityAtmosphere"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListActivityAtmosphereResponse(callApi(params, req, runtime));
}

ListActivityAtmosphereResponse Alibabacloud_Linkedmall20180116::Client::listActivityAtmosphere(shared_ptr<ListActivityAtmosphereRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listActivityAtmosphereWithOptions(request, runtime);
}

ListActivityGameInfoResponse Alibabacloud_Linkedmall20180116::Client::listActivityGameInfoWithOptions(shared_ptr<ListActivityGameInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListActivityGameInfo"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListActivityGameInfoResponse(callApi(params, req, runtime));
}

ListActivityGameInfoResponse Alibabacloud_Linkedmall20180116::Client::listActivityGameInfo(shared_ptr<ListActivityGameInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listActivityGameInfoWithOptions(request, runtime);
}

ListItemActivitiesResponse Alibabacloud_Linkedmall20180116::Client::listItemActivitiesWithOptions(shared_ptr<ListItemActivitiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListItemActivitiesShrinkRequest> request = make_shared<ListItemActivitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdsShrink)) {
    query->insert(pair<string, string>("ItemIds", *request->itemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdsShrink)) {
    query->insert(pair<string, string>("LmItemIds", *request->lmItemIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListItemActivities"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListItemActivitiesResponse(callApi(params, req, runtime));
}

ListItemActivitiesResponse Alibabacloud_Linkedmall20180116::Client::listItemActivities(shared_ptr<ListItemActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listItemActivitiesWithOptions(request, runtime);
}

ListUserGameProcessResponse Alibabacloud_Linkedmall20180116::Client::listUserGameProcessWithOptions(shared_ptr<ListUserGameProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserGameProcess"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserGameProcessResponse(callApi(params, req, runtime));
}

ListUserGameProcessResponse Alibabacloud_Linkedmall20180116::Client::listUserGameProcess(shared_ptr<ListUserGameProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserGameProcessWithOptions(request, runtime);
}

ListUserPointRecordsResponse Alibabacloud_Linkedmall20180116::Client::listUserPointRecordsWithOptions(shared_ptr<ListUserPointRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserPointRecords"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserPointRecordsResponse(callApi(params, req, runtime));
}

ListUserPointRecordsResponse Alibabacloud_Linkedmall20180116::Client::listUserPointRecords(shared_ptr<ListUserPointRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserPointRecordsWithOptions(request, runtime);
}

ModifyBasicAndBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBasicAndBizItemsWithOptions(shared_ptr<ModifyBasicAndBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyBasicAndBizItemsRequestItemList>>(request->itemList)) {
    body->insert(pair<string, vector<ModifyBasicAndBizItemsRequestItemList>>("ItemList", *request->itemList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBasicAndBizItems"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBasicAndBizItemsResponse(callApi(params, req, runtime));
}

ModifyBasicAndBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBasicAndBizItems(shared_ptr<ModifyBasicAndBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBasicAndBizItemsWithOptions(request, runtime);
}

ModifyBasicItemSupplierPriceResponse Alibabacloud_Linkedmall20180116::Client::modifyBasicItemSupplierPriceWithOptions(shared_ptr<ModifyBasicItemSupplierPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmShopId)) {
    query->insert(pair<string, long>("LmShopId", *request->lmShopId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skuId)) {
    query->insert(pair<string, long>("SkuId", *request->skuId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->supplierPrice)) {
    query->insert(pair<string, long>("SupplierPrice", *request->supplierPrice));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBasicItemSupplierPrice"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBasicItemSupplierPriceResponse(callApi(params, req, runtime));
}

ModifyBasicItemSupplierPriceResponse Alibabacloud_Linkedmall20180116::Client::modifyBasicItemSupplierPrice(shared_ptr<ModifyBasicItemSupplierPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBasicItemSupplierPriceWithOptions(request, runtime);
}

ModifyBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBizItemsWithOptions(shared_ptr<ModifyBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyBizItemsRequestItemList>>(request->itemList)) {
    body->insert(pair<string, vector<ModifyBizItemsRequestItemList>>("ItemList", *request->itemList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBizItems"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyBizItemsResponse(callApi(params, req, runtime));
}

ModifyBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBizItems(shared_ptr<ModifyBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBizItemsWithOptions(request, runtime);
}

ModifyItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::modifyItemLimitRuleWithOptions(shared_ptr<ModifyItemLimitRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmActivityId)) {
    query->insert(pair<string, long>("LmActivityId", *request->lmActivityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleType)) {
    query->insert(pair<string, long>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizCode)) {
    query->insert(pair<string, string>("SubBizCode", *request->subBizCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->upperNum)) {
    query->insert(pair<string, long>("UpperNum", *request->upperNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyItemLimitRule"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyItemLimitRuleResponse(callApi(params, req, runtime));
}

ModifyItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::modifyItemLimitRule(shared_ptr<ModifyItemLimitRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyItemLimitRuleWithOptions(request, runtime);
}

ModifyOrderDeliveryAddressResponse Alibabacloud_Linkedmall20180116::Client::modifyOrderDeliveryAddressWithOptions(shared_ptr<ModifyOrderDeliveryAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    query->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    query->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyOrderDeliveryAddress"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyOrderDeliveryAddressResponse(callApi(params, req, runtime));
}

ModifyOrderDeliveryAddressResponse Alibabacloud_Linkedmall20180116::Client::modifyOrderDeliveryAddress(shared_ptr<ModifyOrderDeliveryAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOrderDeliveryAddressWithOptions(request, runtime);
}

ModifyRefundResponse Alibabacloud_Linkedmall20180116::Client::modifyRefundWithOptions(shared_ptr<ModifyRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyReasonTextId)) {
    query->insert(pair<string, long>("ApplyReasonTextId", *request->applyReasonTextId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundCount)) {
    query->insert(pair<string, long>("ApplyRefundCount", *request->applyRefundCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundFee)) {
    query->insert(pair<string, long>("ApplyRefundFee", *request->applyRefundFee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    query->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    query->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    query->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->leaveMessage)) {
    body->insert(pair<string, string>("LeaveMessage", *request->leaveMessage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyRefundRequestLeavePictureList>>(request->leavePictureList)) {
    body->insert(pair<string, vector<ModifyRefundRequestLeavePictureList>>("LeavePictureList", *request->leavePictureList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRefund"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRefundResponse(callApi(params, req, runtime));
}

ModifyRefundResponse Alibabacloud_Linkedmall20180116::Client::modifyRefund(shared_ptr<ModifyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRefundWithOptions(request, runtime);
}

ModifyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::modifyRefundWithDesignatedTbUidWithOptions(shared_ptr<ModifyRefundWithDesignatedTbUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyRefundWithDesignatedTbUidShrinkRequest> request = make_shared<ModifyRefundWithDesignatedTbUidShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ModifyRefundWithDesignatedTbUidRequestProofs>>(tmpReq->proofs)) {
    request->proofsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->proofs, make_shared<string>("Proofs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    body->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proofsShrink)) {
    body->insert(pair<string, string>("Proofs", *request->proofsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reasonId)) {
    body->insert(pair<string, long>("ReasonId", *request->reasonId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCode)) {
    body->insert(pair<string, long>("RefundCode", *request->refundCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundCount)) {
    body->insert(pair<string, long>("RefundCount", *request->refundCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundFee)) {
    body->insert(pair<string, long>("RefundFee", *request->refundFee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRefundWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRefundWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

ModifyRefundWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::modifyRefundWithDesignatedTbUid(shared_ptr<ModifyRefundWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRefundWithDesignatedTbUidWithOptions(request, runtime);
}

ModifySettleAccountResponse Alibabacloud_Linkedmall20180116::Client::modifySettleAccountWithOptions(shared_ptr<ModifySettleAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountChannel)) {
    body->insert(pair<string, string>("AccountChannel", *request->accountChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    body->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPayType)) {
    body->insert(pair<string, string>("AccountPayType", *request->accountPayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    body->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryOrAreaCode)) {
    body->insert(pair<string, string>("CountryOrAreaCode", *request->countryOrAreaCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    body->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    body->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySettleAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySettleAccountResponse(callApi(params, req, runtime));
}

ModifySettleAccountResponse Alibabacloud_Linkedmall20180116::Client::modifySettleAccount(shared_ptr<ModifySettleAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySettleAccountWithOptions(request, runtime);
}

ModifySupplierPriceAndPriceCentResponse Alibabacloud_Linkedmall20180116::Client::modifySupplierPriceAndPriceCentWithOptions(shared_ptr<ModifySupplierPriceAndPriceCentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmShopId)) {
    query->insert(pair<string, string>("LmShopId", *request->lmShopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priceCent)) {
    query->insert(pair<string, string>("PriceCent", *request->priceCent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skuId)) {
    query->insert(pair<string, string>("SkuId", *request->skuId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierPrice)) {
    query->insert(pair<string, string>("SupplierPrice", *request->supplierPrice));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySupplierPriceAndPriceCent"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySupplierPriceAndPriceCentResponse(callApi(params, req, runtime));
}

ModifySupplierPriceAndPriceCentResponse Alibabacloud_Linkedmall20180116::Client::modifySupplierPriceAndPriceCent(shared_ptr<ModifySupplierPriceAndPriceCentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySupplierPriceAndPriceCentWithOptions(request, runtime);
}

NotifyPayOrderStatusResponse Alibabacloud_Linkedmall20180116::Client::notifyPayOrderStatusWithOptions(shared_ptr<NotifyPayOrderStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationDate)) {
    query->insert(pair<string, string>("OperationDate", *request->operationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payTypes)) {
    query->insert(pair<string, string>("PayTypes", *request->payTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NotifyPayOrderStatus"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NotifyPayOrderStatusResponse(callApi(params, req, runtime));
}

NotifyPayOrderStatusResponse Alibabacloud_Linkedmall20180116::Client::notifyPayOrderStatus(shared_ptr<NotifyPayOrderStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyPayOrderStatusWithOptions(request, runtime);
}

NotifyWithholdFundResponse Alibabacloud_Linkedmall20180116::Client::notifyWithholdFundWithOptions(shared_ptr<NotifyWithholdFundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationDate)) {
    query->insert(pair<string, string>("OperationDate", *request->operationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payTypes)) {
    query->insert(pair<string, string>("PayTypes", *request->payTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantOrderId)) {
    query->insert(pair<string, string>("TenantOrderId", *request->tenantOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NotifyWithholdFund"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NotifyWithholdFundResponse(callApi(params, req, runtime));
}

NotifyWithholdFundResponse Alibabacloud_Linkedmall20180116::Client::notifyWithholdFund(shared_ptr<NotifyWithholdFundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyWithholdFundWithOptions(request, runtime);
}

OpenRealTbAccountSupportResponse Alibabacloud_Linkedmall20180116::Client::openRealTbAccountSupportWithOptions(shared_ptr<OpenRealTbAccountSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenRealTbAccountSupport"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenRealTbAccountSupportResponse(callApi(params, req, runtime));
}

OpenRealTbAccountSupportResponse Alibabacloud_Linkedmall20180116::Client::openRealTbAccountSupport(shared_ptr<OpenRealTbAccountSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openRealTbAccountSupportWithOptions(request, runtime);
}

PushUserGameProcessResponse Alibabacloud_Linkedmall20180116::Client::pushUserGameProcessWithOptions(shared_ptr<PushUserGameProcessRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushUserGameProcessShrinkRequest> request = make_shared<PushUserGameProcessShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->body)) {
    request->bodyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->body, make_shared<string>("body"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentStepId)) {
    query->insert(pair<string, string>("CurrentStepId", *request->currentStepId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processId)) {
    query->insert(pair<string, string>("ProcessId", *request->processId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyShrink)) {
    body->insert(pair<string, string>("body", *request->bodyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushUserGameProcess"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushUserGameProcessResponse(callApi(params, req, runtime));
}

PushUserGameProcessResponse Alibabacloud_Linkedmall20180116::Client::pushUserGameProcess(shared_ptr<PushUserGameProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushUserGameProcessWithOptions(request, runtime);
}

QueryActivityItemsResponse Alibabacloud_Linkedmall20180116::Client::queryActivityItemsWithOptions(shared_ptr<QueryActivityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmActivityId)) {
    query->insert(pair<string, long>("LmActivityId", *request->lmActivityId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryActivityItems"))},
    {"version", boost::any(string("2018-01-16"))},
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

QueryActivityItemsResponse Alibabacloud_Linkedmall20180116::Client::queryActivityItems(shared_ptr<QueryActivityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryActivityItemsWithOptions(request, runtime);
}

QueryAddressResponse Alibabacloud_Linkedmall20180116::Client::queryAddressWithOptions(shared_ptr<QueryAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("DivisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAddress"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAddressResponse(callApi(params, req, runtime));
}

QueryAddressResponse Alibabacloud_Linkedmall20180116::Client::queryAddress(shared_ptr<QueryAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAddressWithOptions(request, runtime);
}

QueryAddressDetailResponse Alibabacloud_Linkedmall20180116::Client::queryAddressDetailWithOptions(shared_ptr<QueryAddressDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressInfo)) {
    query->insert(pair<string, string>("AddressInfo", *request->addressInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAddressDetail"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAddressDetailResponse(callApi(params, req, runtime));
}

QueryAddressDetailResponse Alibabacloud_Linkedmall20180116::Client::queryAddressDetail(shared_ptr<QueryAddressDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAddressDetailWithOptions(request, runtime);
}

QueryAddressListResponse Alibabacloud_Linkedmall20180116::Client::queryAddressListWithOptions(shared_ptr<QueryAddressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAddressList"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAddressListResponse(callApi(params, req, runtime));
}

QueryAddressListResponse Alibabacloud_Linkedmall20180116::Client::queryAddressList(shared_ptr<QueryAddressListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAddressListWithOptions(request, runtime);
}

QueryAdvertisementSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryAdvertisementSettleInfoWithOptions(shared_ptr<QueryAdvertisementSettleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    query->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaSettleDetailId)) {
    query->insert(pair<string, string>("MediaSettleDetailId", *request->mediaSettleDetailId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleNo)) {
    query->insert(pair<string, string>("SettleNo", *request->settleNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAdvertisementSettleInfo"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAdvertisementSettleInfoResponse(callApi(params, req, runtime));
}

QueryAdvertisementSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryAdvertisementSettleInfo(shared_ptr<QueryAdvertisementSettleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAdvertisementSettleInfoWithOptions(request, runtime);
}

QueryAgreementResponse Alibabacloud_Linkedmall20180116::Client::queryAgreementWithOptions(shared_ptr<QueryAgreementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementNo)) {
    body->insert(pair<string, string>("AgreementNo", *request->agreementNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalAgreementNo)) {
    body->insert(pair<string, string>("ExternalAgreementNo", *request->externalAgreementNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAgreement"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAgreementResponse(callApi(params, req, runtime));
}

QueryAgreementResponse Alibabacloud_Linkedmall20180116::Client::queryAgreement(shared_ptr<QueryAgreementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAgreementWithOptions(request, runtime);
}

QueryAllCinemasResponse Alibabacloud_Linkedmall20180116::Client::queryAllCinemasWithOptions(shared_ptr<QueryAllCinemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cityCode)) {
    query->insert(pair<string, long>("CityCode", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllCinemas"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllCinemasResponse(callApi(params, req, runtime));
}

QueryAllCinemasResponse Alibabacloud_Linkedmall20180116::Client::queryAllCinemas(shared_ptr<QueryAllCinemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllCinemasWithOptions(request, runtime);
}

QueryAllCitiesResponse Alibabacloud_Linkedmall20180116::Client::queryAllCitiesWithOptions(shared_ptr<QueryAllCitiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryAllCitiesShrinkRequest> request = make_shared<QueryAllCitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extJson)) {
    request->extJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extJson, make_shared<string>("ExtJson"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJsonShrink)) {
    query->insert(pair<string, string>("ExtJson", *request->extJsonShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAllCities"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAllCitiesResponse(callApi(params, req, runtime));
}

QueryAllCitiesResponse Alibabacloud_Linkedmall20180116::Client::queryAllCities(shared_ptr<QueryAllCitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllCitiesWithOptions(request, runtime);
}

QueryBatchRegistAnonymousTbAccountResultResponse Alibabacloud_Linkedmall20180116::Client::queryBatchRegistAnonymousTbAccountResultWithOptions(shared_ptr<QueryBatchRegistAnonymousTbAccountResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchId)) {
    query->insert(pair<string, string>("BatchId", *request->batchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBatchRegistAnonymousTbAccountResult"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBatchRegistAnonymousTbAccountResultResponse(callApi(params, req, runtime));
}

QueryBatchRegistAnonymousTbAccountResultResponse Alibabacloud_Linkedmall20180116::Client::queryBatchRegistAnonymousTbAccountResult(shared_ptr<QueryBatchRegistAnonymousTbAccountResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBatchRegistAnonymousTbAccountResultWithOptions(request, runtime);
}

QueryBestSession4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBestSession4ItemsWithOptions(shared_ptr<QueryBestSession4ItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBestSession4ItemsShrinkRequest> request = make_shared<QueryBestSession4ItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdsShrink)) {
    query->insert(pair<string, string>("ItemIds", *request->itemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdsShrink)) {
    query->insert(pair<string, string>("LmItemIds", *request->lmItemIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBestSession4Items"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBestSession4ItemsResponse(callApi(params, req, runtime));
}

QueryBestSession4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBestSession4Items(shared_ptr<QueryBestSession4ItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBestSession4ItemsWithOptions(request, runtime);
}

QueryBizItemListResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemListWithOptions(shared_ptr<QueryBizItemListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBizItemListShrinkRequest> request = make_shared<QueryBizItemListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdsShrink)) {
    query->insert(pair<string, string>("ItemIds", *request->itemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdsShrink)) {
    query->insert(pair<string, string>("LmItemIds", *request->lmItemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBizItemList"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBizItemListResponse(callApi(params, req, runtime));
}

QueryBizItemListResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemList(shared_ptr<QueryBizItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemListWithOptions(request, runtime);
}

QueryBizItemListV2Response Alibabacloud_Linkedmall20180116::Client::queryBizItemListV2WithOptions(shared_ptr<QueryBizItemListV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBizItemListV2ShrinkRequest> request = make_shared<QueryBizItemListV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    query->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdsShrink)) {
    query->insert(pair<string, string>("ItemIds", *request->itemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdsShrink)) {
    query->insert(pair<string, string>("LmItemIds", *request->lmItemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBizItemListV2"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBizItemListV2Response(callApi(params, req, runtime));
}

QueryBizItemListV2Response Alibabacloud_Linkedmall20180116::Client::queryBizItemListV2(shared_ptr<QueryBizItemListV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemListV2WithOptions(request, runtime);
}

QueryBizItemListWithCacheResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemListWithCacheWithOptions(shared_ptr<QueryBizItemListWithCacheRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBizItemListWithCacheShrinkRequest> request = make_shared<QueryBizItemListWithCacheShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBizItemListWithCache"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBizItemListWithCacheResponse(callApi(params, req, runtime));
}

QueryBizItemListWithCacheResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemListWithCache(shared_ptr<QueryBizItemListWithCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemListWithCacheWithOptions(request, runtime);
}

QueryBizItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemsWithOptions(shared_ptr<QueryBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBizItems"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBizItemsResponse(callApi(params, req, runtime));
}

QueryBizItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBizItems(shared_ptr<QueryBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemsWithOptions(request, runtime);
}

QueryBizItemsWithActivityResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemsWithActivityWithOptions(shared_ptr<QueryBizItemsWithActivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBizItemsWithActivityShrinkRequest> request = make_shared<QueryBizItemsWithActivityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBizItemsWithActivity"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBizItemsWithActivityResponse(callApi(params, req, runtime));
}

QueryBizItemsWithActivityResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemsWithActivity(shared_ptr<QueryBizItemsWithActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemsWithActivityWithOptions(request, runtime);
}

QueryBudgetTicketItemListByBizIdResponse Alibabacloud_Linkedmall20180116::Client::queryBudgetTicketItemListByBizIdWithOptions(shared_ptr<QueryBudgetTicketItemListByBizIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->budgetTicketNo)) {
    query->insert(pair<string, string>("BudgetTicketNo", *request->budgetTicketNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBudgetTicketItemListByBizId"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBudgetTicketItemListByBizIdResponse(callApi(params, req, runtime));
}

QueryBudgetTicketItemListByBizIdResponse Alibabacloud_Linkedmall20180116::Client::queryBudgetTicketItemListByBizId(shared_ptr<QueryBudgetTicketItemListByBizIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBudgetTicketItemListByBizIdWithOptions(request, runtime);
}

QueryChannelItemBillDownloadUrlResponse Alibabacloud_Linkedmall20180116::Client::queryChannelItemBillDownloadUrlWithOptions(shared_ptr<QueryChannelItemBillDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    body->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billPeriod)) {
    body->insert(pair<string, string>("BillPeriod", *request->billPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billStatus)) {
    body->insert(pair<string, string>("BillStatus", *request->billStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmShopId)) {
    body->insert(pair<string, long>("LmShopId", *request->lmShopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmShopName)) {
    body->insert(pair<string, string>("LmShopName", *request->lmShopName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChannelItemBillDownloadUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChannelItemBillDownloadUrlResponse(callApi(params, req, runtime));
}

QueryChannelItemBillDownloadUrlResponse Alibabacloud_Linkedmall20180116::Client::queryChannelItemBillDownloadUrl(shared_ptr<QueryChannelItemBillDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChannelItemBillDownloadUrlWithOptions(request, runtime);
}

QueryGuideItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupWithOptions(shared_ptr<QueryGuideItemGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemState)) {
    query->insert(pair<string, string>("ItemState", *request->itemState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGuideItemGroup"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGuideItemGroupResponse(callApi(params, req, runtime));
}

QueryGuideItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroup(shared_ptr<QueryGuideItemGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGuideItemGroupWithOptions(request, runtime);
}

QueryGuideItemGroupForCrowdOperationResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupForCrowdOperationWithOptions(shared_ptr<QueryGuideItemGroupForCrowdOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemState)) {
    query->insert(pair<string, string>("ItemState", *request->itemState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userFlag)) {
    query->insert(pair<string, string>("UserFlag", *request->userFlag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGuideItemGroupForCrowdOperation"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGuideItemGroupForCrowdOperationResponse(callApi(params, req, runtime));
}

QueryGuideItemGroupForCrowdOperationResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupForCrowdOperation(shared_ptr<QueryGuideItemGroupForCrowdOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGuideItemGroupForCrowdOperationWithOptions(request, runtime);
}

QueryGuideItemGroupWithOutInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupWithOutInventoryWithOptions(shared_ptr<QueryGuideItemGroupWithOutInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGuideItemGroupWithOutInventory"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGuideItemGroupWithOutInventoryResponse(callApi(params, req, runtime));
}

QueryGuideItemGroupWithOutInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupWithOutInventory(shared_ptr<QueryGuideItemGroupWithOutInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGuideItemGroupWithOutInventoryWithOptions(request, runtime);
}

QueryHotMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryHotMoviesWithOptions(shared_ptr<QueryHotMoviesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cityCode)) {
    query->insert(pair<string, long>("CityCode", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHotMovies"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHotMoviesResponse(callApi(params, req, runtime));
}

QueryHotMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryHotMovies(shared_ptr<QueryHotMoviesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHotMoviesWithOptions(request, runtime);
}

QueryInventoryOfItemsInBizItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryInventoryOfItemsInBizItemGroupWithOptions(shared_ptr<QueryInventoryOfItemsInBizItemGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryInventoryOfItemsInBizItemGroupShrinkRequest> request = make_shared<QueryInventoryOfItemsInBizItemGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInventoryOfItemsInBizItemGroup"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInventoryOfItemsInBizItemGroupResponse(callApi(params, req, runtime));
}

QueryInventoryOfItemsInBizItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryInventoryOfItemsInBizItemGroup(shared_ptr<QueryInventoryOfItemsInBizItemGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInventoryOfItemsInBizItemGroupWithOptions(request, runtime);
}

QueryItemDetailResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailWithOptions(shared_ptr<QueryItemDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemDetail"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemDetailResponse(callApi(params, req, runtime));
}

QueryItemDetailResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetail(shared_ptr<QueryItemDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailWithOptions(request, runtime);
}

QueryItemDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailInnerWithOptions(shared_ptr<QueryItemDetailInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("DivisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemDetailInner"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemDetailInnerResponse(callApi(params, req, runtime));
}

QueryItemDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailInner(shared_ptr<QueryItemDetailInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailInnerWithOptions(request, runtime);
}

QueryItemDetailTeaResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailTeaWithOptions(shared_ptr<QueryItemDetailTeaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemDetailTea"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemDetailTeaResponse(callApi(params, req, runtime));
}

QueryItemDetailTeaResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailTea(shared_ptr<QueryItemDetailTeaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailTeaWithOptions(request, runtime);
}

QueryItemInSubBizsResponse Alibabacloud_Linkedmall20180116::Client::queryItemInSubBizsWithOptions(shared_ptr<QueryItemInSubBizsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryItemInSubBizsShrinkRequest> request = make_shared<QueryItemInSubBizsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subBizIds)) {
    request->subBizIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subBizIds, make_shared<string>("SubBizIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemInSubBizs"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemInSubBizsResponse(callApi(params, req, runtime));
}

QueryItemInSubBizsResponse Alibabacloud_Linkedmall20180116::Client::queryItemInSubBizs(shared_ptr<QueryItemInSubBizsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemInSubBizsWithOptions(request, runtime);
}

QueryItemInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryItemInventoryWithOptions(shared_ptr<QueryItemInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("DivisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryItemInventoryRequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<QueryItemInventoryRequestItemList>>("ItemList", *request->itemList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemInventory"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemInventoryResponse(callApi(params, req, runtime));
}

QueryItemInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryItemInventory(shared_ptr<QueryItemInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemInventoryWithOptions(request, runtime);
}

QueryItemInventoryV2Response Alibabacloud_Linkedmall20180116::Client::queryItemInventoryV2WithOptions(shared_ptr<QueryItemInventoryV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("DivisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryItemInventoryV2RequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<QueryItemInventoryV2RequestItemList>>("ItemList", *request->itemList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemInventoryV2"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemInventoryV2Response(callApi(params, req, runtime));
}

QueryItemInventoryV2Response Alibabacloud_Linkedmall20180116::Client::queryItemInventoryV2(shared_ptr<QueryItemInventoryV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemInventoryV2WithOptions(request, runtime);
}

QueryItemNextCycleRestrictionResponse Alibabacloud_Linkedmall20180116::Client::queryItemNextCycleRestrictionWithOptions(shared_ptr<QueryItemNextCycleRestrictionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryItemNextCycleRestrictionShrinkRequest> request = make_shared<QueryItemNextCycleRestrictionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->lmItemId)) {
    request->lmItemIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemId, make_shared<string>("LmItemId"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizId)) {
    query->insert(pair<string, string>("SubBizId", *request->subBizId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdShrink)) {
    body->insert(pair<string, string>("LmItemId", *request->lmItemIdShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemNextCycleRestriction"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemNextCycleRestrictionResponse(callApi(params, req, runtime));
}

QueryItemNextCycleRestrictionResponse Alibabacloud_Linkedmall20180116::Client::queryItemNextCycleRestriction(shared_ptr<QueryItemNextCycleRestrictionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemNextCycleRestrictionWithOptions(request, runtime);
}

QueryLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryLogisticsWithOptions(shared_ptr<QueryLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    query->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLogistics"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLogisticsResponse(callApi(params, req, runtime));
}

QueryLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryLogistics(shared_ptr<QueryLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLogisticsWithOptions(request, runtime);
}

QueryMediaSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryMediaSettleInfoWithOptions(shared_ptr<QueryMediaSettleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    query->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaName)) {
    query->insert(pair<string, string>("MediaName", *request->mediaName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleNo)) {
    query->insert(pair<string, string>("SettleNo", *request->settleNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaSettleInfo"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMediaSettleInfoResponse(callApi(params, req, runtime));
}

QueryMediaSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryMediaSettleInfo(shared_ptr<QueryMediaSettleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaSettleInfoWithOptions(request, runtime);
}

QueryMessagesResponse Alibabacloud_Linkedmall20180116::Client::queryMessagesWithOptions(shared_ptr<QueryMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMessages"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMessagesResponse(callApi(params, req, runtime));
}

QueryMessagesResponse Alibabacloud_Linkedmall20180116::Client::queryMessages(shared_ptr<QueryMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessagesWithOptions(request, runtime);
}

QueryMovieCommentsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieCommentsWithOptions(shared_ptr<QueryMovieCommentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->movieId)) {
    query->insert(pair<string, long>("MovieId", *request->movieId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMovieComments"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMovieCommentsResponse(callApi(params, req, runtime));
}

QueryMovieCommentsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieComments(shared_ptr<QueryMovieCommentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieCommentsWithOptions(request, runtime);
}

QueryMovieSchedulesResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSchedulesWithOptions(shared_ptr<QueryMovieSchedulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cinemaId)) {
    query->insert(pair<string, long>("CinemaId", *request->cinemaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMovieSchedules"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMovieSchedulesResponse(callApi(params, req, runtime));
}

QueryMovieSchedulesResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSchedules(shared_ptr<QueryMovieSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieSchedulesWithOptions(request, runtime);
}

QueryMovieSeatsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSeatsWithOptions(shared_ptr<QueryMovieSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scheduleId)) {
    query->insert(pair<string, long>("ScheduleId", *request->scheduleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMovieSeats"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMovieSeatsResponse(callApi(params, req, runtime));
}

QueryMovieSeatsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSeats(shared_ptr<QueryMovieSeatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieSeatsWithOptions(request, runtime);
}

QueryMovieTicketsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieTicketsWithOptions(shared_ptr<QueryMovieTicketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMovieTickets"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMovieTicketsResponse(callApi(params, req, runtime));
}

QueryMovieTicketsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieTickets(shared_ptr<QueryMovieTicketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieTicketsWithOptions(request, runtime);
}

QueryOrderAndPaymentListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderAndPaymentListWithOptions(shared_ptr<QueryOrderAndPaymentListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOption)) {
    query->insert(pair<string, string>("FilterOption", *request->filterOption));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderAndPaymentList"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderAndPaymentListResponse(callApi(params, req, runtime));
}

QueryOrderAndPaymentListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderAndPaymentList(shared_ptr<QueryOrderAndPaymentListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderAndPaymentListWithOptions(request, runtime);
}

QueryOrderAndPaymentListWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryOrderAndPaymentListWithDesignatedTbUidWithOptions(shared_ptr<QueryOrderAndPaymentListWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOption)) {
    body->insert(pair<string, string>("FilterOption", *request->filterOption));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderAndPaymentListWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderAndPaymentListWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

QueryOrderAndPaymentListWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryOrderAndPaymentListWithDesignatedTbUid(shared_ptr<QueryOrderAndPaymentListWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderAndPaymentListWithDesignatedTbUidWithOptions(request, runtime);
}

QueryOrderCommissionRateResponse Alibabacloud_Linkedmall20180116::Client::queryOrderCommissionRateWithOptions(shared_ptr<QueryOrderCommissionRateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    query->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderCommissionRate"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderCommissionRateResponse(callApi(params, req, runtime));
}

QueryOrderCommissionRateResponse Alibabacloud_Linkedmall20180116::Client::queryOrderCommissionRate(shared_ptr<QueryOrderCommissionRateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderCommissionRateWithOptions(request, runtime);
}

QueryOrderDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryOrderDetailInnerWithOptions(shared_ptr<QueryOrderDetailInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOption)) {
    query->insert(pair<string, string>("FilterOption", *request->filterOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderDetailInner"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderDetailInnerResponse(callApi(params, req, runtime));
}

QueryOrderDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryOrderDetailInner(shared_ptr<QueryOrderDetailInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderDetailInnerWithOptions(request, runtime);
}

QueryOrderIdByPayIdResponse Alibabacloud_Linkedmall20180116::Client::queryOrderIdByPayIdWithOptions(shared_ptr<QueryOrderIdByPayIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentId)) {
    query->insert(pair<string, string>("PaymentId", *request->paymentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderIdByPayId"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderIdByPayIdResponse(callApi(params, req, runtime));
}

QueryOrderIdByPayIdResponse Alibabacloud_Linkedmall20180116::Client::queryOrderIdByPayId(shared_ptr<QueryOrderIdByPayIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderIdByPayIdWithOptions(request, runtime);
}

QueryOrderInfoAfterSaleResponse Alibabacloud_Linkedmall20180116::Client::queryOrderInfoAfterSaleWithOptions(shared_ptr<QueryOrderInfoAfterSaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderInfoAfterSale"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderInfoAfterSaleResponse(callApi(params, req, runtime));
}

QueryOrderInfoAfterSaleResponse Alibabacloud_Linkedmall20180116::Client::queryOrderInfoAfterSale(shared_ptr<QueryOrderInfoAfterSaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderInfoAfterSaleWithOptions(request, runtime);
}

QueryOrderItemInfoByPaymentIdForAiZhanYouResponse Alibabacloud_Linkedmall20180116::Client::queryOrderItemInfoByPaymentIdForAiZhanYouWithOptions(shared_ptr<QueryOrderItemInfoByPaymentIdForAiZhanYouRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentId)) {
    query->insert(pair<string, string>("PaymentId", *request->paymentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderItemInfoByPaymentIdForAiZhanYou"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderItemInfoByPaymentIdForAiZhanYouResponse(callApi(params, req, runtime));
}

QueryOrderItemInfoByPaymentIdForAiZhanYouResponse Alibabacloud_Linkedmall20180116::Client::queryOrderItemInfoByPaymentIdForAiZhanYou(shared_ptr<QueryOrderItemInfoByPaymentIdForAiZhanYouRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderItemInfoByPaymentIdForAiZhanYouWithOptions(request, runtime);
}

QueryOrderListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderListWithOptions(shared_ptr<QueryOrderListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOption)) {
    query->insert(pair<string, string>("FilterOption", *request->filterOption));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderList"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderListResponse(callApi(params, req, runtime));
}

QueryOrderListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderList(shared_ptr<QueryOrderListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderListWithOptions(request, runtime);
}

QueryOrderListWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryOrderListWithDesignatedTbUidWithOptions(shared_ptr<QueryOrderListWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterOption)) {
    body->insert(pair<string, string>("FilterOption", *request->filterOption));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderListWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderListWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

QueryOrderListWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryOrderListWithDesignatedTbUid(shared_ptr<QueryOrderListWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderListWithDesignatedTbUidWithOptions(request, runtime);
}

QueryOrderLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryOrderLogisticsWithOptions(shared_ptr<QueryOrderLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    query->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderLogistics"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderLogisticsResponse(callApi(params, req, runtime));
}

QueryOrderLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryOrderLogistics(shared_ptr<QueryOrderLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderLogisticsWithOptions(request, runtime);
}

QueryOrderLogisticsWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryOrderLogisticsWithDesignatedTbUidWithOptions(shared_ptr<QueryOrderLogisticsWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    body->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderLogisticsWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderLogisticsWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

QueryOrderLogisticsWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryOrderLogisticsWithDesignatedTbUid(shared_ptr<QueryOrderLogisticsWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderLogisticsWithDesignatedTbUidWithOptions(request, runtime);
}

QueryRealTbAccountSupportResponse Alibabacloud_Linkedmall20180116::Client::queryRealTbAccountSupportWithOptions(shared_ptr<QueryRealTbAccountSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRealTbAccountSupport"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRealTbAccountSupportResponse(callApi(params, req, runtime));
}

QueryRealTbAccountSupportResponse Alibabacloud_Linkedmall20180116::Client::queryRealTbAccountSupport(shared_ptr<QueryRealTbAccountSupportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRealTbAccountSupportWithOptions(request, runtime);
}

QueryRefundApplicationDetailResponse Alibabacloud_Linkedmall20180116::Client::queryRefundApplicationDetailWithOptions(shared_ptr<QueryRefundApplicationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRefundApplicationDetail"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRefundApplicationDetailResponse(callApi(params, req, runtime));
}

QueryRefundApplicationDetailResponse Alibabacloud_Linkedmall20180116::Client::queryRefundApplicationDetail(shared_ptr<QueryRefundApplicationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRefundApplicationDetailWithOptions(request, runtime);
}

QueryRefundApplyWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryRefundApplyWithDesignatedTbUidWithOptions(shared_ptr<QueryRefundApplyWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRefundApplyWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRefundApplyWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

QueryRefundApplyWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::queryRefundApplyWithDesignatedTbUid(shared_ptr<QueryRefundApplyWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRefundApplyWithDesignatedTbUidWithOptions(request, runtime);
}

QuerySellerLicenseResponse Alibabacloud_Linkedmall20180116::Client::querySellerLicenseWithOptions(shared_ptr<QuerySellerLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerId)) {
    body->insert(pair<string, string>("SellerId", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySellerLicense"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySellerLicenseResponse(callApi(params, req, runtime));
}

QuerySellerLicenseResponse Alibabacloud_Linkedmall20180116::Client::querySellerLicense(shared_ptr<QuerySellerLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySellerLicenseWithOptions(request, runtime);
}

QueryStatementsResponse Alibabacloud_Linkedmall20180116::Client::queryStatementsWithOptions(shared_ptr<QueryStatementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    query->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    query->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payeeIds)) {
    query->insert(pair<string, string>("PayeeIds", *request->payeeIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleNoes)) {
    query->insert(pair<string, string>("SettleNoes", *request->settleNoes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleStatus)) {
    query->insert(pair<string, string>("SettleStatus", *request->settleStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settleType)) {
    query->insert(pair<string, string>("SettleType", *request->settleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStatements"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStatementsResponse(callApi(params, req, runtime));
}

QueryStatementsResponse Alibabacloud_Linkedmall20180116::Client::queryStatements(shared_ptr<QueryStatementsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStatementsWithOptions(request, runtime);
}

QuerySupplierItemBillDownloadUrlResponse Alibabacloud_Linkedmall20180116::Client::querySupplierItemBillDownloadUrlWithOptions(shared_ptr<QuerySupplierItemBillDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billId)) {
    body->insert(pair<string, string>("BillId", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billPeriod)) {
    body->insert(pair<string, string>("BillPeriod", *request->billPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billStatus)) {
    body->insert(pair<string, string>("BillStatus", *request->billStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    body->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmShopId)) {
    body->insert(pair<string, long>("LmShopId", *request->lmShopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmShopName)) {
    body->insert(pair<string, string>("LmShopName", *request->lmShopName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySupplierItemBillDownloadUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySupplierItemBillDownloadUrlResponse(callApi(params, req, runtime));
}

QuerySupplierItemBillDownloadUrlResponse Alibabacloud_Linkedmall20180116::Client::querySupplierItemBillDownloadUrl(shared_ptr<QuerySupplierItemBillDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySupplierItemBillDownloadUrlWithOptions(request, runtime);
}

QueryUnfinishedActivitiesResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedActivitiesWithOptions(shared_ptr<QueryUnfinishedActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUnfinishedActivities"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUnfinishedActivitiesResponse(callApi(params, req, runtime));
}

QueryUnfinishedActivitiesResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedActivities(shared_ptr<QueryUnfinishedActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUnfinishedActivitiesWithOptions(request, runtime);
}

QueryUnfinishedSessionsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessionsWithOptions(shared_ptr<QueryUnfinishedSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryTime)) {
    query->insert(pair<string, long>("QueryTime", *request->queryTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUnfinishedSessions"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUnfinishedSessionsResponse(callApi(params, req, runtime));
}

QueryUnfinishedSessionsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessions(shared_ptr<QueryUnfinishedSessionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUnfinishedSessionsWithOptions(request, runtime);
}

QueryUnfinishedSessions4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessions4ItemsWithOptions(shared_ptr<QueryUnfinishedSessions4ItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUnfinishedSessions4ItemsShrinkRequest> request = make_shared<QueryUnfinishedSessions4ItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdsShrink)) {
    query->insert(pair<string, string>("ItemIds", *request->itemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdsShrink)) {
    query->insert(pair<string, string>("LmItemIds", *request->lmItemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->queryTime)) {
    query->insert(pair<string, long>("QueryTime", *request->queryTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUnfinishedSessions4Items"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUnfinishedSessions4ItemsResponse(callApi(params, req, runtime));
}

QueryUnfinishedSessions4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessions4Items(shared_ptr<QueryUnfinishedSessions4ItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUnfinishedSessions4ItemsWithOptions(request, runtime);
}

QueryUpcomingMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryUpcomingMoviesWithOptions(shared_ptr<QueryUpcomingMoviesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUpcomingMoviesShrinkRequest> request = make_shared<QueryUpcomingMoviesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extJson)) {
    request->extJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extJson, make_shared<string>("ExtJson"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cityCode)) {
    query->insert(pair<string, long>("CityCode", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJsonShrink)) {
    query->insert(pair<string, string>("ExtJson", *request->extJsonShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUpcomingMovies"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUpcomingMoviesResponse(callApi(params, req, runtime));
}

QueryUpcomingMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryUpcomingMovies(shared_ptr<QueryUpcomingMoviesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUpcomingMoviesWithOptions(request, runtime);
}

QueryUserAccountResponse Alibabacloud_Linkedmall20180116::Client::queryUserAccountWithOptions(shared_ptr<QueryUserAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserAccountResponse(callApi(params, req, runtime));
}

QueryUserAccountResponse Alibabacloud_Linkedmall20180116::Client::queryUserAccount(shared_ptr<QueryUserAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserAccountWithOptions(request, runtime);
}

QueryUserGameProcessResponse Alibabacloud_Linkedmall20180116::Client::queryUserGameProcessWithOptions(shared_ptr<QueryUserGameProcessRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUserGameProcessShrinkRequest> request = make_shared<QueryUserGameProcessShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processId)) {
    query->insert(pair<string, string>("ProcessId", *request->processId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserGameProcess"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserGameProcessResponse(callApi(params, req, runtime));
}

QueryUserGameProcessResponse Alibabacloud_Linkedmall20180116::Client::queryUserGameProcess(shared_ptr<QueryUserGameProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserGameProcessWithOptions(request, runtime);
}

QueryUserPointResponse Alibabacloud_Linkedmall20180116::Client::queryUserPointWithOptions(shared_ptr<QueryUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUserPointShrinkRequest> request = make_shared<QueryUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserPointResponse(callApi(params, req, runtime));
}

QueryUserPointResponse Alibabacloud_Linkedmall20180116::Client::queryUserPoint(shared_ptr<QueryUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserPointWithOptions(request, runtime);
}

QueryWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::queryWithholdTradeWithOptions(shared_ptr<QueryWithholdTradeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeNo)) {
    body->insert(pair<string, string>("OutTradeNo", *request->outTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeNo)) {
    body->insert(pair<string, string>("TradeNo", *request->tradeNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryWithholdTrade"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryWithholdTradeResponse(callApi(params, req, runtime));
}

QueryWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::queryWithholdTrade(shared_ptr<QueryWithholdTradeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWithholdTradeWithOptions(request, runtime);
}

RebindTbAccountResponse Alibabacloud_Linkedmall20180116::Client::rebindTbAccountWithOptions(shared_ptr<RebindTbAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebindTbAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebindTbAccountResponse(callApi(params, req, runtime));
}

RebindTbAccountResponse Alibabacloud_Linkedmall20180116::Client::rebindTbAccount(shared_ptr<RebindTbAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebindTbAccountWithOptions(request, runtime);
}

RefreshSettlementOrderAccountResponse Alibabacloud_Linkedmall20180116::Client::refreshSettlementOrderAccountWithOptions(shared_ptr<RefreshSettlementOrderAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshSettlementOrderAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshSettlementOrderAccountResponse(callApi(params, req, runtime));
}

RefreshSettlementOrderAccountResponse Alibabacloud_Linkedmall20180116::Client::refreshSettlementOrderAccount(shared_ptr<RefreshSettlementOrderAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshSettlementOrderAccountWithOptions(request, runtime);
}

RefundOrderResponse Alibabacloud_Linkedmall20180116::Client::refundOrderWithOptions(shared_ptr<RefundOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRequestNo)) {
    body->insert(pair<string, string>("OutRequestNo", *request->outRequestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeNo)) {
    body->insert(pair<string, string>("OutTradeNo", *request->outTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundAmount)) {
    body->insert(pair<string, string>("RefundAmount", *request->refundAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundReason)) {
    body->insert(pair<string, string>("RefundReason", *request->refundReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundRoyaltyParameters)) {
    body->insert(pair<string, string>("RefundRoyaltyParameters", *request->refundRoyaltyParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeNo)) {
    body->insert(pair<string, string>("TradeNo", *request->tradeNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundOrderResponse(callApi(params, req, runtime));
}

RefundOrderResponse Alibabacloud_Linkedmall20180116::Client::refundOrder(shared_ptr<RefundOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundOrderWithOptions(request, runtime);
}

RefundPointResponse Alibabacloud_Linkedmall20180116::Client::refundPointWithOptions(shared_ptr<RefundPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmOrderId)) {
    query->insert(pair<string, string>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    query->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerId)) {
    query->insert(pair<string, string>("SellerId", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundPointResponse(callApi(params, req, runtime));
}

RefundPointResponse Alibabacloud_Linkedmall20180116::Client::refundPoint(shared_ptr<RefundPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundPointWithOptions(request, runtime);
}

RefundUserPointResponse Alibabacloud_Linkedmall20180116::Client::refundUserPointWithOptions(shared_ptr<RefundUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefundUserPointShrinkRequest> request = make_shared<RefundUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originRecordId)) {
    query->insert(pair<string, string>("OriginRecordId", *request->originRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefundUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefundUserPointResponse(callApi(params, req, runtime));
}

RefundUserPointResponse Alibabacloud_Linkedmall20180116::Client::refundUserPoint(shared_ptr<RefundUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundUserPointWithOptions(request, runtime);
}

RefuseMerchantSyncTaskResponse Alibabacloud_Linkedmall20180116::Client::refuseMerchantSyncTaskWithOptions(shared_ptr<RefuseMerchantSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerNick)) {
    query->insert(pair<string, string>("SellerNick", *request->sellerNick));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeStamp)) {
    query->insert(pair<string, long>("TimeStamp", *request->timeStamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefuseMerchantSyncTask"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefuseMerchantSyncTaskResponse(callApi(params, req, runtime));
}

RefuseMerchantSyncTaskResponse Alibabacloud_Linkedmall20180116::Client::refuseMerchantSyncTask(shared_ptr<RefuseMerchantSyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refuseMerchantSyncTaskWithOptions(request, runtime);
}

RegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::registAnonymousTbAccountWithOptions(shared_ptr<RegistAnonymousTbAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegistAnonymousTbAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegistAnonymousTbAccountResponse(callApi(params, req, runtime));
}

RegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::registAnonymousTbAccount(shared_ptr<RegistAnonymousTbAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registAnonymousTbAccountWithOptions(request, runtime);
}

RegisterSettleAccountResponse Alibabacloud_Linkedmall20180116::Client::registerSettleAccountWithOptions(shared_ptr<RegisterSettleAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountChannel)) {
    body->insert(pair<string, string>("AccountChannel", *request->accountChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    body->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    body->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPayType)) {
    body->insert(pair<string, string>("AccountPayType", *request->accountPayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    body->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->countryOrAreaCode)) {
    body->insert(pair<string, string>("CountryOrAreaCode", *request->countryOrAreaCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    body->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    body->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterSettleAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterSettleAccountResponse(callApi(params, req, runtime));
}

RegisterSettleAccountResponse Alibabacloud_Linkedmall20180116::Client::registerSettleAccount(shared_ptr<RegisterSettleAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerSettleAccountWithOptions(request, runtime);
}

RegisterUserAccountResponse Alibabacloud_Linkedmall20180116::Client::registerUserAccountWithOptions(shared_ptr<RegisterUserAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterUserAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterUserAccountResponse(callApi(params, req, runtime));
}

RegisterUserAccountResponse Alibabacloud_Linkedmall20180116::Client::registerUserAccount(shared_ptr<RegisterUserAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerUserAccountWithOptions(request, runtime);
}

ReleaseMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::releaseMovieSeatWithOptions(shared_ptr<ReleaseMovieSeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lockSeatApplyKey)) {
    query->insert(pair<string, string>("LockSeatApplyKey", *request->lockSeatApplyKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseMovieSeat"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseMovieSeatResponse(callApi(params, req, runtime));
}

ReleaseMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::releaseMovieSeat(shared_ptr<ReleaseMovieSeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseMovieSeatWithOptions(request, runtime);
}

RemoveAddressResponse Alibabacloud_Linkedmall20180116::Client::removeAddressWithOptions(shared_ptr<RemoveAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressInfo)) {
    body->insert(pair<string, string>("AddressInfo", *request->addressInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAddress"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAddressResponse(callApi(params, req, runtime));
}

RemoveAddressResponse Alibabacloud_Linkedmall20180116::Client::removeAddress(shared_ptr<RemoveAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAddressWithOptions(request, runtime);
}

RemoveMessagesResponse Alibabacloud_Linkedmall20180116::Client::removeMessagesWithOptions(shared_ptr<RemoveMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageIds)) {
    query->insert(pair<string, string>("MessageIds", *request->messageIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveMessages"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveMessagesResponse(callApi(params, req, runtime));
}

RemoveMessagesResponse Alibabacloud_Linkedmall20180116::Client::removeMessages(shared_ptr<RemoveMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeMessagesWithOptions(request, runtime);
}

RenderH5OrderResponse Alibabacloud_Linkedmall20180116::Client::renderH5OrderWithOptions(shared_ptr<RenderH5OrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyOrderRequestModel)) {
    query->insert(pair<string, string>("BuyOrderRequestModel", *request->buyOrderRequestModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenderH5Order"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenderH5OrderResponse(callApi(params, req, runtime));
}

RenderH5OrderResponse Alibabacloud_Linkedmall20180116::Client::renderH5Order(shared_ptr<RenderH5OrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renderH5OrderWithOptions(request, runtime);
}

RenderOrderResponse Alibabacloud_Linkedmall20180116::Client::renderOrderWithOptions(shared_ptr<RenderOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    query->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RenderOrderRequestItemList>>(request->itemList)) {
    query->insert(pair<string, vector<RenderOrderRequestItemList>>("ItemList", *request->itemList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    query->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenderOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenderOrderResponse(callApi(params, req, runtime));
}

RenderOrderResponse Alibabacloud_Linkedmall20180116::Client::renderOrder(shared_ptr<RenderOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renderOrderWithOptions(request, runtime);
}

RenderOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::renderOrderWithDesignatedTbUidWithOptions(shared_ptr<RenderOrderWithDesignatedTbUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RenderOrderWithDesignatedTbUidShrinkRequest> request = make_shared<RenderOrderWithDesignatedTbUidShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RenderOrderWithDesignatedTbUidRequestItemList>>(tmpReq->itemList)) {
    request->itemListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemList, make_shared<string>("ItemList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    body->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemListShrink)) {
    body->insert(pair<string, string>("ItemList", *request->itemListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenderOrderWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenderOrderWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

RenderOrderWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::renderOrderWithDesignatedTbUid(shared_ptr<RenderOrderWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renderOrderWithDesignatedTbUidWithOptions(request, runtime);
}

RepayForPayUrlResponse Alibabacloud_Linkedmall20180116::Client::repayForPayUrlWithOptions(shared_ptr<RepayForPayUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    query->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RepayForPayUrl"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RepayForPayUrlResponse(callApi(params, req, runtime));
}

RepayForPayUrlResponse Alibabacloud_Linkedmall20180116::Client::repayForPayUrl(shared_ptr<RepayForPayUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return repayForPayUrlWithOptions(request, runtime);
}

RepayOrderResponse Alibabacloud_Linkedmall20180116::Client::repayOrderWithOptions(shared_ptr<RepayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    query->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RepayOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RepayOrderResponse(callApi(params, req, runtime));
}

RepayOrderResponse Alibabacloud_Linkedmall20180116::Client::repayOrder(shared_ptr<RepayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return repayOrderWithOptions(request, runtime);
}

RepayWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::repayWithDesignatedTbUidWithOptions(shared_ptr<RepayWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    body->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lmOrderId)) {
    body->insert(pair<string, long>("LmOrderId", *request->lmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RepayWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RepayWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

RepayWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::repayWithDesignatedTbUid(shared_ptr<RepayWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return repayWithDesignatedTbUidWithOptions(request, runtime);
}

ReserveMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::reserveMovieSeatWithOptions(shared_ptr<ReserveMovieSeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scheduleId)) {
    query->insert(pair<string, long>("ScheduleId", *request->scheduleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->seatIds)) {
    query->insert(pair<string, string>("SeatIds", *request->seatIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->seatNames)) {
    query->insert(pair<string, string>("SeatNames", *request->seatNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReserveMovieSeat"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReserveMovieSeatResponse(callApi(params, req, runtime));
}

ReserveMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::reserveMovieSeat(shared_ptr<ReserveMovieSeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reserveMovieSeatWithOptions(request, runtime);
}

SettleOrderResponse Alibabacloud_Linkedmall20180116::Client::settleOrderWithOptions(shared_ptr<SettleOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRequestNo)) {
    body->insert(pair<string, string>("OutRequestNo", *request->outRequestNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTradeNo)) {
    body->insert(pair<string, string>("OutTradeNo", *request->outTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->royaltyParameters)) {
    body->insert(pair<string, string>("RoyaltyParameters", *request->royaltyParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeNo)) {
    body->insert(pair<string, string>("TradeNo", *request->tradeNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SettleOrder"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SettleOrderResponse(callApi(params, req, runtime));
}

SettleOrderResponse Alibabacloud_Linkedmall20180116::Client::settleOrder(shared_ptr<SettleOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return settleOrderWithOptions(request, runtime);
}

StartUserGameResponse Alibabacloud_Linkedmall20180116::Client::startUserGameWithOptions(shared_ptr<StartUserGameRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartUserGameShrinkRequest> request = make_shared<StartUserGameShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->activityId)) {
    query->insert(pair<string, string>("ActivityId", *request->activityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gameId)) {
    query->insert(pair<string, string>("GameId", *request->gameId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    query->insert(pair<string, string>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userApp)) {
    query->insert(pair<string, string>("UserApp", *request->userApp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartUserGame"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartUserGameResponse(callApi(params, req, runtime));
}

StartUserGameResponse Alibabacloud_Linkedmall20180116::Client::startUserGame(shared_ptr<StartUserGameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startUserGameWithOptions(request, runtime);
}

SubmitReturnGoodLogisticsResponse Alibabacloud_Linkedmall20180116::Client::submitReturnGoodLogisticsWithOptions(shared_ptr<SubmitReturnGoodLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpCode)) {
    query->insert(pair<string, string>("CpCode", *request->cpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    query->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logisticsNo)) {
    query->insert(pair<string, string>("LogisticsNo", *request->logisticsNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    query->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitReturnGoodLogistics"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitReturnGoodLogisticsResponse(callApi(params, req, runtime));
}

SubmitReturnGoodLogisticsResponse Alibabacloud_Linkedmall20180116::Client::submitReturnGoodLogistics(shared_ptr<SubmitReturnGoodLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitReturnGoodLogisticsWithOptions(request, runtime);
}

SubmitReturnGoodLogisticsWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::submitReturnGoodLogisticsWithDesignatedTbUidWithOptions(shared_ptr<SubmitReturnGoodLogisticsWithDesignatedTbUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    body->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpCode)) {
    body->insert(pair<string, string>("CpCode", *request->cpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logisticsNo)) {
    body->insert(pair<string, string>("LogisticsNo", *request->logisticsNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subLmOrderId)) {
    body->insert(pair<string, string>("SubLmOrderId", *request->subLmOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbAccountType)) {
    body->insert(pair<string, string>("TbAccountType", *request->tbAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tbUserId)) {
    body->insert(pair<string, long>("TbUserId", *request->tbUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    body->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitReturnGoodLogisticsWithDesignatedTbUid"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitReturnGoodLogisticsWithDesignatedTbUidResponse(callApi(params, req, runtime));
}

SubmitReturnGoodLogisticsWithDesignatedTbUidResponse Alibabacloud_Linkedmall20180116::Client::submitReturnGoodLogisticsWithDesignatedTbUid(shared_ptr<SubmitReturnGoodLogisticsWithDesignatedTbUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitReturnGoodLogisticsWithDesignatedTbUidWithOptions(request, runtime);
}

SyncMerchantInfoResponse Alibabacloud_Linkedmall20180116::Client::syncMerchantInfoWithOptions(shared_ptr<SyncMerchantInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sellerNick)) {
    query->insert(pair<string, string>("SellerNick", *request->sellerNick));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeStamp)) {
    query->insert(pair<string, long>("TimeStamp", *request->timeStamp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->itemList)) {
    body->insert(pair<string, string>("ItemList", *request->itemList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncMerchantInfo"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncMerchantInfoResponse(callApi(params, req, runtime));
}

SyncMerchantInfoResponse Alibabacloud_Linkedmall20180116::Client::syncMerchantInfo(shared_ptr<SyncMerchantInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncMerchantInfoWithOptions(request, runtime);
}

UnFreezeUserPointResponse Alibabacloud_Linkedmall20180116::Client::unFreezeUserPointWithOptions(shared_ptr<UnFreezeUserPointRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnFreezeUserPointShrinkRequest> request = make_shared<UnFreezeUserPointShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extInfo)) {
    request->extInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extInfo, make_shared<string>("ExtInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentId)) {
    query->insert(pair<string, string>("IdempotentId", *request->idempotentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfoShrink)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnFreezeUserPoint"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnFreezeUserPointResponse(callApi(params, req, runtime));
}

UnFreezeUserPointResponse Alibabacloud_Linkedmall20180116::Client::unFreezeUserPoint(shared_ptr<UnFreezeUserPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unFreezeUserPointWithOptions(request, runtime);
}

UnsignWithholdAgreementResponse Alibabacloud_Linkedmall20180116::Client::unsignWithholdAgreementWithOptions(shared_ptr<UnsignWithholdAgreementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementNo)) {
    body->insert(pair<string, string>("AgreementNo", *request->agreementNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalAgreementNo)) {
    body->insert(pair<string, string>("ExternalAgreementNo", *request->externalAgreementNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    body->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRequestNo)) {
    body->insert(pair<string, string>("OutRequestNo", *request->outRequestNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnsignWithholdAgreement"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnsignWithholdAgreementResponse(callApi(params, req, runtime));
}

UnsignWithholdAgreementResponse Alibabacloud_Linkedmall20180116::Client::unsignWithholdAgreement(shared_ptr<UnsignWithholdAgreementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unsignWithholdAgreementWithOptions(request, runtime);
}

UpdateAddressResponse Alibabacloud_Linkedmall20180116::Client::updateAddressWithOptions(shared_ptr<UpdateAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartyUserId)) {
    query->insert(pair<string, string>("ThirdPartyUserId", *request->thirdPartyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useAnonymousTbAccount)) {
    query->insert(pair<string, bool>("UseAnonymousTbAccount", *request->useAnonymousTbAccount));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressInfo)) {
    body->insert(pair<string, string>("AddressInfo", *request->addressInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAddress"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAddressResponse(callApi(params, req, runtime));
}

UpdateAddressResponse Alibabacloud_Linkedmall20180116::Client::updateAddress(shared_ptr<UpdateAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAddressWithOptions(request, runtime);
}

ValidateTaobaoAccountResponse Alibabacloud_Linkedmall20180116::Client::validateTaobaoAccountWithOptions(shared_ptr<ValidateTaobaoAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUid)) {
    query->insert(pair<string, string>("BizUid", *request->bizUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extJson)) {
    query->insert(pair<string, string>("ExtJson", *request->extJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobileNo)) {
    query->insert(pair<string, string>("MobileNo", *request->mobileNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbUserNick)) {
    query->insert(pair<string, string>("TbUserNick", *request->tbUserNick));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateTaobaoAccount"))},
    {"version", boost::any(string("2018-01-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateTaobaoAccountResponse(callApi(params, req, runtime));
}

ValidateTaobaoAccountResponse Alibabacloud_Linkedmall20180116::Client::validateTaobaoAccount(shared_ptr<ValidateTaobaoAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateTaobaoAccountWithOptions(request, runtime);
}

