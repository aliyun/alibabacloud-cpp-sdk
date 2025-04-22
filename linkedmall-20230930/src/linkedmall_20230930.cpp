// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_20230930.hpp>
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

using namespace Alibabacloud_Linkedmall20230930;

Alibabacloud_Linkedmall20230930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Linkedmall20230930::Client::getEndpoint(shared_ptr<string> productId,
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

CancelRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::cancelRefundOrderWithOptions(shared_ptr<string> disputeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRefundOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(disputeId)) + string("/commands/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRefundOrderResponse(callApi(params, req, runtime));
}

CancelRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::cancelRefundOrder(shared_ptr<string> disputeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelRefundOrderWithOptions(disputeId, headers, runtime);
}

ConfirmDisburseResponse Alibabacloud_Linkedmall20230930::Client::confirmDisburseWithOptions(shared_ptr<ConfirmDisburseRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmDisburse"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/commands/confirmDisburse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmDisburseResponse(callApi(params, req, runtime));
}

ConfirmDisburseResponse Alibabacloud_Linkedmall20230930::Client::confirmDisburse(shared_ptr<ConfirmDisburseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return confirmDisburseWithOptions(request, headers, runtime);
}

CreateGoodsShippingNoticeResponse Alibabacloud_Linkedmall20230930::Client::createGoodsShippingNoticeWithOptions(shared_ptr<CreateGoodsShippingNoticeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGoodsShippingNotice"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/command/createGoodsShippingNotice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGoodsShippingNoticeResponse(callApi(params, req, runtime));
}

CreateGoodsShippingNoticeResponse Alibabacloud_Linkedmall20230930::Client::createGoodsShippingNotice(shared_ptr<CreateGoodsShippingNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGoodsShippingNoticeWithOptions(request, headers, runtime);
}

CreatePurchaseOrderResponse Alibabacloud_Linkedmall20230930::Client::createPurchaseOrderWithOptions(shared_ptr<CreatePurchaseOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePurchaseOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePurchaseOrderResponse(callApi(params, req, runtime));
}

CreatePurchaseOrderResponse Alibabacloud_Linkedmall20230930::Client::createPurchaseOrder(shared_ptr<CreatePurchaseOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPurchaseOrderWithOptions(request, headers, runtime);
}

CreateRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::createRefundOrderWithOptions(shared_ptr<CreateRefundOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRefundOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRefundOrderResponse(callApi(params, req, runtime));
}

CreateRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::createRefundOrder(shared_ptr<CreateRefundOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRefundOrderWithOptions(request, headers, runtime);
}

GetOrderResponse Alibabacloud_Linkedmall20230930::Client::getOrderWithOptions(shared_ptr<string> orderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(orderId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrderResponse(callApi(params, req, runtime));
}

GetOrderResponse Alibabacloud_Linkedmall20230930::Client::getOrder(shared_ptr<string> orderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOrderWithOptions(orderId, headers, runtime);
}

GetPurchaseOrderStatusResponse Alibabacloud_Linkedmall20230930::Client::getPurchaseOrderStatusWithOptions(shared_ptr<string> purchaseOrderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPurchaseOrderStatus"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(purchaseOrderId)) + string("/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPurchaseOrderStatusResponse(callApi(params, req, runtime));
}

GetPurchaseOrderStatusResponse Alibabacloud_Linkedmall20230930::Client::getPurchaseOrderStatus(shared_ptr<string> purchaseOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPurchaseOrderStatusWithOptions(purchaseOrderId, headers, runtime);
}

GetPurchaserShopResponse Alibabacloud_Linkedmall20230930::Client::getPurchaserShopWithOptions(shared_ptr<string> purchaserId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPurchaserShop"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaserShops/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(purchaserId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPurchaserShopResponse(callApi(params, req, runtime));
}

GetPurchaserShopResponse Alibabacloud_Linkedmall20230930::Client::getPurchaserShop(shared_ptr<string> purchaserId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPurchaserShopWithOptions(purchaserId, headers, runtime);
}

GetRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::getRefundOrderWithOptions(shared_ptr<string> disputeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRefundOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(disputeId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRefundOrderResponse(callApi(params, req, runtime));
}

GetRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::getRefundOrder(shared_ptr<string> disputeId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRefundOrderWithOptions(disputeId, headers, runtime);
}

GetSelectionProductResponse Alibabacloud_Linkedmall20230930::Client::getSelectionProductWithOptions(shared_ptr<string> productId,
                                                                                                    shared_ptr<GetSelectionProductRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("divisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserId)) {
    query->insert(pair<string, string>("purchaserId", *request->purchaserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSelectionProduct"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(productId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSelectionProductResponse(callApi(params, req, runtime));
}

GetSelectionProductResponse Alibabacloud_Linkedmall20230930::Client::getSelectionProduct(shared_ptr<string> productId, shared_ptr<GetSelectionProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSelectionProductWithOptions(productId, request, headers, runtime);
}

GetSelectionProductSaleInfoResponse Alibabacloud_Linkedmall20230930::Client::getSelectionProductSaleInfoWithOptions(shared_ptr<string> productId,
                                                                                                                    shared_ptr<GetSelectionProductSaleInfoRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("divisionCode", *request->divisionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserId)) {
    query->insert(pair<string, string>("purchaserId", *request->purchaserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSelectionProductSaleInfo"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(productId)) + string("/saleInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSelectionProductSaleInfoResponse(callApi(params, req, runtime));
}

GetSelectionProductSaleInfoResponse Alibabacloud_Linkedmall20230930::Client::getSelectionProductSaleInfo(shared_ptr<string> productId, shared_ptr<GetSelectionProductSaleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSelectionProductSaleInfoWithOptions(productId, request, headers, runtime);
}

ListCategoriesResponse Alibabacloud_Linkedmall20230930::Client::listCategoriesWithOptions(shared_ptr<ListCategoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCategories"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/categories/commands/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCategoriesResponse(callApi(params, req, runtime));
}

ListCategoriesResponse Alibabacloud_Linkedmall20230930::Client::listCategories(shared_ptr<ListCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCategoriesWithOptions(request, headers, runtime);
}

ListLogisticsOrdersResponse Alibabacloud_Linkedmall20230930::Client::listLogisticsOrdersWithOptions(shared_ptr<string> orderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogisticsOrders"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(orderId)) + string("/logisticsOrders"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogisticsOrdersResponse(callApi(params, req, runtime));
}

ListLogisticsOrdersResponse Alibabacloud_Linkedmall20230930::Client::listLogisticsOrders(shared_ptr<string> orderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogisticsOrdersWithOptions(orderId, headers, runtime);
}

ListPurchaserShopsResponse Alibabacloud_Linkedmall20230930::Client::listPurchaserShopsWithOptions(shared_ptr<ListPurchaserShopsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPurchaserShops"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaserShops"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPurchaserShopsResponse(callApi(params, req, runtime));
}

ListPurchaserShopsResponse Alibabacloud_Linkedmall20230930::Client::listPurchaserShops(shared_ptr<ListPurchaserShopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPurchaserShopsWithOptions(request, headers, runtime);
}

ListSelectionProductSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listSelectionProductSaleInfosWithOptions(shared_ptr<ListSelectionProductSaleInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSelectionProductSaleInfos"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products/saleInfo/commands/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSelectionProductSaleInfosResponse(callApi(params, req, runtime));
}

ListSelectionProductSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listSelectionProductSaleInfos(shared_ptr<ListSelectionProductSaleInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSelectionProductSaleInfosWithOptions(request, headers, runtime);
}

ListSelectionProductsResponse Alibabacloud_Linkedmall20230930::Client::listSelectionProductsWithOptions(shared_ptr<ListSelectionProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserId)) {
    query->insert(pair<string, string>("purchaserId", *request->purchaserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSelectionProducts"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSelectionProductsResponse(callApi(params, req, runtime));
}

ListSelectionProductsResponse Alibabacloud_Linkedmall20230930::Client::listSelectionProducts(shared_ptr<ListSelectionProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSelectionProductsWithOptions(request, headers, runtime);
}

ListSelectionSkuSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listSelectionSkuSaleInfosWithOptions(shared_ptr<ListSelectionSkuSaleInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSelectionSkuSaleInfos"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/skus/saleInfo/commands/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSelectionSkuSaleInfosResponse(callApi(params, req, runtime));
}

ListSelectionSkuSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listSelectionSkuSaleInfos(shared_ptr<ListSelectionSkuSaleInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSelectionSkuSaleInfosWithOptions(request, headers, runtime);
}

QueryChildDivisionCodeResponse Alibabacloud_Linkedmall20230930::Client::queryChildDivisionCodeWithOptions(shared_ptr<QueryChildDivisionCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChildDivisionCode"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/division/commands/queryChildDivisionCode"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChildDivisionCodeResponse(callApi(params, req, runtime));
}

QueryChildDivisionCodeResponse Alibabacloud_Linkedmall20230930::Client::queryChildDivisionCode(shared_ptr<QueryChildDivisionCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryChildDivisionCodeWithOptions(request, headers, runtime);
}

QueryOrdersResponse Alibabacloud_Linkedmall20230930::Client::queryOrdersWithOptions(shared_ptr<QueryOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrders"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/commands/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrdersResponse(callApi(params, req, runtime));
}

QueryOrdersResponse Alibabacloud_Linkedmall20230930::Client::queryOrders(shared_ptr<QueryOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryOrdersWithOptions(request, headers, runtime);
}

RenderPurchaseOrderResponse Alibabacloud_Linkedmall20230930::Client::renderPurchaseOrderWithOptions(shared_ptr<RenderPurchaseOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenderPurchaseOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders/commands/render"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenderPurchaseOrderResponse(callApi(params, req, runtime));
}

RenderPurchaseOrderResponse Alibabacloud_Linkedmall20230930::Client::renderPurchaseOrder(shared_ptr<RenderPurchaseOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renderPurchaseOrderWithOptions(request, headers, runtime);
}

RenderRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::renderRefundOrderWithOptions(shared_ptr<RenderRefundOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenderRefundOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/commands/render"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenderRefundOrderResponse(callApi(params, req, runtime));
}

RenderRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::renderRefundOrder(shared_ptr<RenderRefundOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renderRefundOrderWithOptions(request, headers, runtime);
}

SearchProductsResponse Alibabacloud_Linkedmall20230930::Client::searchProductsWithOptions(shared_ptr<SearchProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brandName)) {
    body->insert(pair<string, string>("brandName", *request->brandName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->categoryIds)) {
    body->insert(pair<string, vector<string>>("categoryIds", *request->categoryIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createEndTime)) {
    body->insert(pair<string, string>("createEndTime", *request->createEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createStartTime)) {
    body->insert(pair<string, string>("createStartTime", *request->createStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distributionHighPrice)) {
    body->insert(pair<string, long>("distributionHighPrice", *request->distributionHighPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distributionHighPriceRatio)) {
    body->insert(pair<string, long>("distributionHighPriceRatio", *request->distributionHighPriceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distributionLowPrice)) {
    body->insert(pair<string, long>("distributionLowPrice", *request->distributionLowPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distributionLowPriceRatio)) {
    body->insert(pair<string, long>("distributionLowPriceRatio", *request->distributionLowPriceRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->highMarkPrice)) {
    body->insert(pair<string, long>("highMarkPrice", *request->highMarkPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->highPrice)) {
    body->insert(pair<string, long>("highPrice", *request->highPrice));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inGroup)) {
    body->insert(pair<string, bool>("inGroup", *request->inGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inGroupEndTime)) {
    body->insert(pair<string, string>("inGroupEndTime", *request->inGroupEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inGroupStartTime)) {
    body->insert(pair<string, string>("inGroupStartTime", *request->inGroupStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inventoryRiskLevel)) {
    body->insert(pair<string, string>("inventoryRiskLevel", *request->inventoryRiskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lmItemId)) {
    body->insert(pair<string, string>("lmItemId", *request->lmItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lowMarkPrice)) {
    body->insert(pair<string, long>("lowMarkPrice", *request->lowMarkPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->lowPrice)) {
    body->insert(pair<string, long>("lowPrice", *request->lowPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyEndTime)) {
    body->insert(pair<string, string>("modifyEndTime", *request->modifyEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyStartTime)) {
    body->insert(pair<string, string>("modifyStartTime", *request->modifyStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("orderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDirection)) {
    body->insert(pair<string, string>("orderDirection", *request->orderDirection));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productId)) {
    body->insert(pair<string, string>("productId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productStatus)) {
    body->insert(pair<string, string>("productStatus", *request->productStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserId)) {
    body->insert(pair<string, string>("purchaserId", *request->purchaserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taxRate)) {
    body->insert(pair<string, string>("taxRate", *request->taxRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tradeModeAndCredit)) {
    body->insert(pair<string, string>("tradeModeAndCredit", *request->tradeModeAndCredit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchProducts"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/selection-group/product/command/searchProduct"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchProductsResponse(callApi(params, req, runtime));
}

SearchProductsResponse Alibabacloud_Linkedmall20230930::Client::searchProducts(shared_ptr<SearchProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return searchProductsWithOptions(request, headers, runtime);
}

SelectionGroupAddProductResponse Alibabacloud_Linkedmall20230930::Client::selectionGroupAddProductWithOptions(shared_ptr<SelectionGroupAddProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productIds)) {
    body->insert(pair<string, vector<string>>("productIds", *request->productIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserId)) {
    body->insert(pair<string, string>("purchaserId", *request->purchaserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SelectionGroupAddProduct"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/selection-group/product/command/addProduct"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SelectionGroupAddProductResponse(callApi(params, req, runtime));
}

SelectionGroupAddProductResponse Alibabacloud_Linkedmall20230930::Client::selectionGroupAddProduct(shared_ptr<SelectionGroupAddProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return selectionGroupAddProductWithOptions(request, headers, runtime);
}

SelectionGroupRemoveProductResponse Alibabacloud_Linkedmall20230930::Client::selectionGroupRemoveProductWithOptions(shared_ptr<SelectionGroupRemoveProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productIds)) {
    body->insert(pair<string, vector<string>>("productIds", *request->productIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaserId)) {
    body->insert(pair<string, string>("purchaserId", *request->purchaserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SelectionGroupRemoveProduct"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/selection-group/product/command/removeProduct"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SelectionGroupRemoveProductResponse(callApi(params, req, runtime));
}

SelectionGroupRemoveProductResponse Alibabacloud_Linkedmall20230930::Client::selectionGroupRemoveProduct(shared_ptr<SelectionGroupRemoveProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return selectionGroupRemoveProductWithOptions(request, headers, runtime);
}

SplitPurchaseOrderResponse Alibabacloud_Linkedmall20230930::Client::splitPurchaseOrderWithOptions(shared_ptr<SplitPurchaseOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SplitPurchaseOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders/commands/split"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SplitPurchaseOrderResponse(callApi(params, req, runtime));
}

SplitPurchaseOrderResponse Alibabacloud_Linkedmall20230930::Client::splitPurchaseOrder(shared_ptr<SplitPurchaseOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return splitPurchaseOrderWithOptions(request, headers, runtime);
}

