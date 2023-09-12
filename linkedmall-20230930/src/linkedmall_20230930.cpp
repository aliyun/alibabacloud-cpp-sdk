// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_20230930.hpp>
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/refunds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(disputeId)) + string("/commands/cancel"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/orders/commands/confirmDisburse"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/refunds/command/createGoodsShippingNotice"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/purchaseOrders"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/refunds"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/orders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(orderId)))},
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

GetProductResponse Alibabacloud_Linkedmall20230930::Client::getProductWithOptions(shared_ptr<string> productId,
                                                                                  shared_ptr<GetProductRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorShopId)) {
    query->insert(pair<string, string>("distributorShopId", *request->distributorShopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("divisionCode", *request->divisionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProduct"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(productId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductResponse(callApi(params, req, runtime));
}

GetProductResponse Alibabacloud_Linkedmall20230930::Client::getProduct(shared_ptr<string> productId, shared_ptr<GetProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductWithOptions(productId, request, headers, runtime);
}

GetProductSaleInfoResponse Alibabacloud_Linkedmall20230930::Client::getProductSaleInfoWithOptions(shared_ptr<string> productId,
                                                                                                  shared_ptr<GetProductSaleInfoRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorShopId)) {
    query->insert(pair<string, string>("distributorShopId", *request->distributorShopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->divisionCode)) {
    query->insert(pair<string, string>("divisionCode", *request->divisionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductSaleInfo"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(productId)) + string("/saleInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductSaleInfoResponse(callApi(params, req, runtime));
}

GetProductSaleInfoResponse Alibabacloud_Linkedmall20230930::Client::getProductSaleInfo(shared_ptr<string> productId, shared_ptr<GetProductSaleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductSaleInfoWithOptions(productId, request, headers, runtime);
}

GetPurchaseOrderStatusResponse Alibabacloud_Linkedmall20230930::Client::getPurchaseOrderStatusWithOptions(shared_ptr<string> purchaseOrderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPurchaseOrderStatus"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/purchaseOrders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(purchaseOrderId)) + string("/status"))},
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

GetRefundOrderResponse Alibabacloud_Linkedmall20230930::Client::getRefundOrderWithOptions(shared_ptr<string> disputeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRefundOrder"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/refunds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(disputeId)))},
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

GetShopResponse Alibabacloud_Linkedmall20230930::Client::getShopWithOptions(shared_ptr<string> shopId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetShop"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/shops/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(shopId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetShopResponse(callApi(params, req, runtime));
}

GetShopResponse Alibabacloud_Linkedmall20230930::Client::getShop(shared_ptr<string> shopId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getShopWithOptions(shopId, headers, runtime);
}

ListLogisticsOrdersResponse Alibabacloud_Linkedmall20230930::Client::listLogisticsOrdersWithOptions(shared_ptr<string> orderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogisticsOrders"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/orders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(orderId)) + string("/logisticsOrders"))},
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

ListProductGeneralBillsResponse Alibabacloud_Linkedmall20230930::Client::listProductGeneralBillsWithOptions(shared_ptr<ListProductGeneralBillsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductGeneralBills"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/productGeneralBills"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductGeneralBillsResponse(callApi(params, req, runtime));
}

ListProductGeneralBillsResponse Alibabacloud_Linkedmall20230930::Client::listProductGeneralBills(shared_ptr<ListProductGeneralBillsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductGeneralBillsWithOptions(request, headers, runtime);
}

ListProductSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listProductSaleInfosWithOptions(shared_ptr<ListProductSaleInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductSaleInfos"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/products/saleInfo/commands/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductSaleInfosResponse(callApi(params, req, runtime));
}

ListProductSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listProductSaleInfos(shared_ptr<ListProductSaleInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductSaleInfosWithOptions(request, headers, runtime);
}

ListProductsResponse Alibabacloud_Linkedmall20230930::Client::listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributorShopId)) {
    query->insert(pair<string, string>("distributorShopId", *request->distributorShopId));
  }
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
    {"action", boost::any(string("ListProducts"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/products"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductsResponse(callApi(params, req, runtime));
}

ListProductsResponse Alibabacloud_Linkedmall20230930::Client::listProducts(shared_ptr<ListProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductsWithOptions(request, headers, runtime);
}

ListShopsResponse Alibabacloud_Linkedmall20230930::Client::listShopsWithOptions(shared_ptr<ListShopsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelSupplierId)) {
    query->insert(pair<string, string>("channelSupplierId", *request->channelSupplierId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("endDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shopId)) {
    query->insert(pair<string, string>("shopId", *request->shopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shopName)) {
    query->insert(pair<string, string>("shopName", *request->shopName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("startDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListShops"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/shops"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListShopsResponse(callApi(params, req, runtime));
}

ListShopsResponse Alibabacloud_Linkedmall20230930::Client::listShops(shared_ptr<ListShopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listShopsWithOptions(request, headers, runtime);
}

ListSkuSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listSkuSaleInfosWithOptions(shared_ptr<ListSkuSaleInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSkuSaleInfos"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/skus/saleInfo/commands/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSkuSaleInfosResponse(callApi(params, req, runtime));
}

ListSkuSaleInfosResponse Alibabacloud_Linkedmall20230930::Client::listSkuSaleInfos(shared_ptr<ListSkuSaleInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSkuSaleInfosWithOptions(request, headers, runtime);
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/division/commands/queryChildDivisionCode"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/orders/commands/query"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/purchaseOrders/commands/render"))},
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
    {"pathname", boost::any(string("/opensaas-s2b/opensaas-s2b-biz-trade/v1/refunds/commands/render"))},
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

