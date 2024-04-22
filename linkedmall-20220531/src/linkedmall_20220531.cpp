// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_20220531.hpp>
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

using namespace Alibabacloud_Linkedmall20220531;

Alibabacloud_Linkedmall20220531::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Linkedmall20220531::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyCreateDistributionOrderResponse Alibabacloud_Linkedmall20220531::Client::applyCreateDistributionOrderWithOptions(shared_ptr<ApplyCreateDistributionOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyCreateDistributionOrderShrinkRequest> request = make_shared<ApplyCreateDistributionOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyCreateDistributionOrderRequestItemInfoLists>>(tmpReq->itemInfoLists)) {
    request->itemInfoListsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemInfoLists, make_shared<string>("ItemInfoLists"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerId)) {
    body->insert(pair<string, string>("BuyerId", *request->buyerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    body->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionOutTradeId)) {
    body->insert(pair<string, string>("DistributionOutTradeId", *request->distributionOutTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionSupplierId)) {
    body->insert(pair<string, string>("DistributionSupplierId", *request->distributionSupplierId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemInfoListsShrink)) {
    body->insert(pair<string, string>("ItemInfoLists", *request->itemInfoListsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyCreateDistributionOrder"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyCreateDistributionOrderResponse(callApi(params, req, runtime));
}

ApplyCreateDistributionOrderResponse Alibabacloud_Linkedmall20220531::Client::applyCreateDistributionOrder(shared_ptr<ApplyCreateDistributionOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyCreateDistributionOrderWithOptions(request, runtime);
}

ApplyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::applyRefund4DistributionWithOptions(shared_ptr<ApplyRefund4DistributionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyRefund4DistributionShrinkRequest> request = make_shared<ApplyRefund4DistributionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyRefund4DistributionRequestLeavePictureLists>>(tmpReq->leavePictureLists)) {
    request->leavePictureListsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->leavePictureLists, make_shared<string>("LeavePictureLists"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyReasonTextId)) {
    body->insert(pair<string, long>("ApplyReasonTextId", *request->applyReasonTextId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundCount)) {
    body->insert(pair<string, long>("ApplyRefundCount", *request->applyRefundCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundFee)) {
    body->insert(pair<string, long>("ApplyRefundFee", *request->applyRefundFee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    body->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    body->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leaveMessage)) {
    body->insert(pair<string, string>("LeaveMessage", *request->leaveMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leavePictureListsShrink)) {
    body->insert(pair<string, string>("LeavePictureLists", *request->leavePictureListsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyRefund4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyRefund4DistributionResponse(callApi(params, req, runtime));
}

ApplyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::applyRefund4Distribution(shared_ptr<ApplyRefund4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyRefund4DistributionWithOptions(request, runtime);
}

CancelDistributionTradeResponse Alibabacloud_Linkedmall20220531::Client::cancelDistributionTradeWithOptions(shared_ptr<CancelDistributionTradeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionTradeId)) {
    body->insert(pair<string, string>("DistributionTradeId", *request->distributionTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelDistributionTrade"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelDistributionTradeResponse(callApi(params, req, runtime));
}

CancelDistributionTradeResponse Alibabacloud_Linkedmall20220531::Client::cancelDistributionTrade(shared_ptr<CancelDistributionTradeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelDistributionTradeWithOptions(request, runtime);
}

CancelRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::cancelRefund4DistributionWithOptions(shared_ptr<CancelRefund4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRefund4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRefund4DistributionResponse(callApi(params, req, runtime));
}

CancelRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::cancelRefund4Distribution(shared_ptr<CancelRefund4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRefund4DistributionWithOptions(request, runtime);
}

ConfirmDisburse4DistributionResponse Alibabacloud_Linkedmall20220531::Client::confirmDisburse4DistributionWithOptions(shared_ptr<ConfirmDisburse4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionTradeId)) {
    body->insert(pair<string, string>("DistributionTradeId", *request->distributionTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainDistributionOrderId)) {
    body->insert(pair<string, string>("MainDistributionOrderId", *request->mainDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmDisburse4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmDisburse4DistributionResponse(callApi(params, req, runtime));
}

ConfirmDisburse4DistributionResponse Alibabacloud_Linkedmall20220531::Client::confirmDisburse4Distribution(shared_ptr<ConfirmDisburse4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmDisburse4DistributionWithOptions(request, runtime);
}

InitApplyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::initApplyRefund4DistributionWithOptions(shared_ptr<InitApplyRefund4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    body->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    body->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitApplyRefund4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitApplyRefund4DistributionResponse(callApi(params, req, runtime));
}

InitApplyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::initApplyRefund4Distribution(shared_ptr<InitApplyRefund4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initApplyRefund4DistributionWithOptions(request, runtime);
}

InitModifyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::initModifyRefund4DistributionWithOptions(shared_ptr<InitModifyRefund4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    body->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitModifyRefund4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitModifyRefund4DistributionResponse(callApi(params, req, runtime));
}

InitModifyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::initModifyRefund4Distribution(shared_ptr<InitModifyRefund4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initModifyRefund4DistributionWithOptions(request, runtime);
}

ListDistributionItemResponse Alibabacloud_Linkedmall20220531::Client::listDistributionItemWithOptions(shared_ptr<ListDistributionItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemStatus)) {
    body->insert(pair<string, long>("ItemStatus", *request->itemStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    body->insert(pair<string, string>("LmItemId", *request->lmItemId));
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
    {"action", boost::any(string("ListDistributionItem"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDistributionItemResponse(callApi(params, req, runtime));
}

ListDistributionItemResponse Alibabacloud_Linkedmall20220531::Client::listDistributionItem(shared_ptr<ListDistributionItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributionItemWithOptions(request, runtime);
}

ListDistributionItemWithoutCacheResponse Alibabacloud_Linkedmall20220531::Client::listDistributionItemWithoutCacheWithOptions(shared_ptr<ListDistributionItemWithoutCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemStatus)) {
    body->insert(pair<string, long>("ItemStatus", *request->itemStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    body->insert(pair<string, string>("LmItemId", *request->lmItemId));
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
    {"action", boost::any(string("ListDistributionItemWithoutCache"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDistributionItemWithoutCacheResponse(callApi(params, req, runtime));
}

ListDistributionItemWithoutCacheResponse Alibabacloud_Linkedmall20220531::Client::listDistributionItemWithoutCache(shared_ptr<ListDistributionItemWithoutCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributionItemWithoutCacheWithOptions(request, runtime);
}

ListDistributionMallResponse Alibabacloud_Linkedmall20220531::Client::listDistributionMallWithOptions(shared_ptr<ListDistributionMallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelSupplierId)) {
    body->insert(pair<string, string>("ChannelSupplierId", *request->channelSupplierId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallName)) {
    body->insert(pair<string, string>("DistributionMallName", *request->distributionMallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDistributionMall"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDistributionMallResponse(callApi(params, req, runtime));
}

ListDistributionMallResponse Alibabacloud_Linkedmall20220531::Client::listDistributionMall(shared_ptr<ListDistributionMallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributionMallWithOptions(request, runtime);
}

ModifyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::modifyRefund4DistributionWithOptions(shared_ptr<ModifyRefund4DistributionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyRefund4DistributionShrinkRequest> request = make_shared<ModifyRefund4DistributionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ModifyRefund4DistributionRequestLeavePictureLists>>(tmpReq->leavePictureLists)) {
    request->leavePictureListsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->leavePictureLists, make_shared<string>("LeavePictureLists"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyReasonTextId)) {
    body->insert(pair<string, long>("ApplyReasonTextId", *request->applyReasonTextId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundCount)) {
    body->insert(pair<string, long>("ApplyRefundCount", *request->applyRefundCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyRefundFee)) {
    body->insert(pair<string, long>("ApplyRefundFee", *request->applyRefundFee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizClaimType)) {
    body->insert(pair<string, long>("BizClaimType", *request->bizClaimType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->goodsStatus)) {
    body->insert(pair<string, long>("GoodsStatus", *request->goodsStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leaveMessage)) {
    body->insert(pair<string, string>("LeaveMessage", *request->leaveMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leavePictureListsShrink)) {
    body->insert(pair<string, string>("LeavePictureLists", *request->leavePictureListsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyRefund4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyRefund4DistributionResponse(callApi(params, req, runtime));
}

ModifyRefund4DistributionResponse Alibabacloud_Linkedmall20220531::Client::modifyRefund4Distribution(shared_ptr<ModifyRefund4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyRefund4DistributionWithOptions(request, runtime);
}

QueryChildDivisionCodeByIdResponse Alibabacloud_Linkedmall20220531::Client::queryChildDivisionCodeByIdWithOptions(shared_ptr<QueryChildDivisionCodeByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    body->insert(pair<string, string>("DivisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChildDivisionCodeById"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChildDivisionCodeByIdResponse(callApi(params, req, runtime));
}

QueryChildDivisionCodeByIdResponse Alibabacloud_Linkedmall20220531::Client::queryChildDivisionCodeById(shared_ptr<QueryChildDivisionCodeByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChildDivisionCodeByIdWithOptions(request, runtime);
}

QueryDistributionBillDetailResponse Alibabacloud_Linkedmall20220531::Client::queryDistributionBillDetailWithOptions(shared_ptr<QueryDistributionBillDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallName)) {
    body->insert(pair<string, string>("DistributionMallName", *request->distributionMallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
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
    {"action", boost::any(string("QueryDistributionBillDetail"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDistributionBillDetailResponse(callApi(params, req, runtime));
}

QueryDistributionBillDetailResponse Alibabacloud_Linkedmall20220531::Client::queryDistributionBillDetail(shared_ptr<QueryDistributionBillDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDistributionBillDetailWithOptions(request, runtime);
}

QueryDistributionMallResponse Alibabacloud_Linkedmall20220531::Client::queryDistributionMallWithOptions(shared_ptr<QueryDistributionMallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDistributionMall"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDistributionMallResponse(callApi(params, req, runtime));
}

QueryDistributionMallResponse Alibabacloud_Linkedmall20220531::Client::queryDistributionMall(shared_ptr<QueryDistributionMallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDistributionMallWithOptions(request, runtime);
}

QueryDistributionTradeStatusResponse Alibabacloud_Linkedmall20220531::Client::queryDistributionTradeStatusWithOptions(shared_ptr<QueryDistributionTradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionSupplierId)) {
    body->insert(pair<string, string>("DistributionSupplierId", *request->distributionSupplierId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionTradeId)) {
    body->insert(pair<string, string>("DistributionTradeId", *request->distributionTradeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDistributionTradeStatus"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDistributionTradeStatusResponse(callApi(params, req, runtime));
}

QueryDistributionTradeStatusResponse Alibabacloud_Linkedmall20220531::Client::queryDistributionTradeStatus(shared_ptr<QueryDistributionTradeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDistributionTradeStatusWithOptions(request, runtime);
}

QueryItemDetailResponse Alibabacloud_Linkedmall20220531::Client::queryItemDetailWithOptions(shared_ptr<QueryItemDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    body->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemDetail"))},
    {"version", boost::any(string("2022-05-31"))},
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

QueryItemDetailResponse Alibabacloud_Linkedmall20220531::Client::queryItemDetail(shared_ptr<QueryItemDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailWithOptions(request, runtime);
}

QueryItemDetailWithDivisionResponse Alibabacloud_Linkedmall20220531::Client::queryItemDetailWithDivisionWithOptions(shared_ptr<QueryItemDetailWithDivisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    body->insert(pair<string, string>("DivisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    body->insert(pair<string, string>("LmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemDetailWithDivision"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemDetailWithDivisionResponse(callApi(params, req, runtime));
}

QueryItemDetailWithDivisionResponse Alibabacloud_Linkedmall20220531::Client::queryItemDetailWithDivision(shared_ptr<QueryItemDetailWithDivisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailWithDivisionWithOptions(request, runtime);
}

QueryItemGuideRetailPriceResponse Alibabacloud_Linkedmall20220531::Client::queryItemGuideRetailPriceWithOptions(shared_ptr<QueryItemGuideRetailPriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryItemGuideRetailPriceShrinkRequest> request = make_shared<QueryItemGuideRetailPriceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemIdsShrink)) {
    body->insert(pair<string, string>("LmItemIds", *request->lmItemIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryItemGuideRetailPrice"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryItemGuideRetailPriceResponse(callApi(params, req, runtime));
}

QueryItemGuideRetailPriceResponse Alibabacloud_Linkedmall20220531::Client::queryItemGuideRetailPrice(shared_ptr<QueryItemGuideRetailPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemGuideRetailPriceWithOptions(request, runtime);
}

QueryLogistics4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryLogistics4DistributionWithOptions(shared_ptr<QueryLogistics4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainDistributionOrderId)) {
    body->insert(pair<string, string>("MainDistributionOrderId", *request->mainDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    body->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLogistics4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLogistics4DistributionResponse(callApi(params, req, runtime));
}

QueryLogistics4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryLogistics4Distribution(shared_ptr<QueryLogistics4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLogistics4DistributionWithOptions(request, runtime);
}

QueryMallCategoryListResponse Alibabacloud_Linkedmall20220531::Client::queryMallCategoryListWithOptions(shared_ptr<QueryMallCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->categoryId)) {
    body->insert(pair<string, long>("CategoryId", *request->categoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionMallId)) {
    body->insert(pair<string, string>("DistributionMallId", *request->distributionMallId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMallCategoryList"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMallCategoryListResponse(callApi(params, req, runtime));
}

QueryMallCategoryListResponse Alibabacloud_Linkedmall20220531::Client::queryMallCategoryList(shared_ptr<QueryMallCategoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMallCategoryListWithOptions(request, runtime);
}

QueryOrderDetail4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryOrderDetail4DistributionWithOptions(shared_ptr<QueryOrderDetail4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainDistributionOrderId)) {
    body->insert(pair<string, string>("MainDistributionOrderId", *request->mainDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderDetail4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderDetail4DistributionResponse(callApi(params, req, runtime));
}

QueryOrderDetail4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryOrderDetail4Distribution(shared_ptr<QueryOrderDetail4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderDetail4DistributionWithOptions(request, runtime);
}

QueryOrderList4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryOrderList4DistributionWithOptions(shared_ptr<QueryOrderList4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrderList4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrderList4DistributionResponse(callApi(params, req, runtime));
}

QueryOrderList4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryOrderList4Distribution(shared_ptr<QueryOrderList4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderList4DistributionWithOptions(request, runtime);
}

QueryRefundApplicationDetail4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryRefundApplicationDetail4DistributionWithOptions(shared_ptr<QueryRefundApplicationDetail4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRefundApplicationDetail4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRefundApplicationDetail4DistributionResponse(callApi(params, req, runtime));
}

QueryRefundApplicationDetail4DistributionResponse Alibabacloud_Linkedmall20220531::Client::queryRefundApplicationDetail4Distribution(shared_ptr<QueryRefundApplicationDetail4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRefundApplicationDetail4DistributionWithOptions(request, runtime);
}

RenderDistributionOrderResponse Alibabacloud_Linkedmall20220531::Client::renderDistributionOrderWithOptions(shared_ptr<RenderDistributionOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RenderDistributionOrderShrinkRequest> request = make_shared<RenderDistributionOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RenderDistributionOrderRequestItemInfoLists>>(tmpReq->itemInfoLists)) {
    request->itemInfoListsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemInfoLists, make_shared<string>("ItemInfoLists"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerId)) {
    body->insert(pair<string, string>("BuyerId", *request->buyerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryAddress)) {
    body->insert(pair<string, string>("DeliveryAddress", *request->deliveryAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionSupplierId)) {
    body->insert(pair<string, string>("DistributionSupplierId", *request->distributionSupplierId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemInfoListsShrink)) {
    body->insert(pair<string, string>("ItemInfoLists", *request->itemInfoListsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenderDistributionOrder"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenderDistributionOrderResponse(callApi(params, req, runtime));
}

RenderDistributionOrderResponse Alibabacloud_Linkedmall20220531::Client::renderDistributionOrder(shared_ptr<RenderDistributionOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renderDistributionOrderWithOptions(request, runtime);
}

SubmitReturnGoodLogistics4DistributionResponse Alibabacloud_Linkedmall20220531::Client::submitReturnGoodLogistics4DistributionWithOptions(shared_ptr<SubmitReturnGoodLogistics4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpCode)) {
    body->insert(pair<string, string>("CpCode", *request->cpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disputeId)) {
    body->insert(pair<string, long>("DisputeId", *request->disputeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorId)) {
    body->insert(pair<string, string>("DistributorId", *request->distributorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logisticsNo)) {
    body->insert(pair<string, string>("LogisticsNo", *request->logisticsNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDistributionOrderId)) {
    body->insert(pair<string, string>("SubDistributionOrderId", *request->subDistributionOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitReturnGoodLogistics4Distribution"))},
    {"version", boost::any(string("2022-05-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitReturnGoodLogistics4DistributionResponse(callApi(params, req, runtime));
}

SubmitReturnGoodLogistics4DistributionResponse Alibabacloud_Linkedmall20220531::Client::submitReturnGoodLogistics4Distribution(shared_ptr<SubmitReturnGoodLogistics4DistributionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitReturnGoodLogistics4DistributionWithOptions(request, runtime);
}

