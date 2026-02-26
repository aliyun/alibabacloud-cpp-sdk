#include <darabonba/Core.hpp>
#include <alibabacloud/Linkedmall20230930.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Linkedmall20230930::Models;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{

AlibabaCloud::Linkedmall20230930::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "linkedmall.aliyuncs.com"},
    {"cn-shanghai" , "linkedmall.aliyuncs.com"},
    {"ap-northeast-1" , "linkedmall.aliyuncs.com"},
    {"ap-northeast-2-pop" , "linkedmall.aliyuncs.com"},
    {"ap-south-1" , "linkedmall.aliyuncs.com"},
    {"ap-southeast-1" , "linkedmall.aliyuncs.com"},
    {"ap-southeast-2" , "linkedmall.aliyuncs.com"},
    {"ap-southeast-3" , "linkedmall.aliyuncs.com"},
    {"ap-southeast-5" , "linkedmall.aliyuncs.com"},
    {"cn-beijing" , "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-1" , "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "linkedmall.aliyuncs.com"},
    {"cn-beijing-gov-1" , "linkedmall.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "linkedmall.aliyuncs.com"},
    {"cn-chengdu" , "linkedmall.aliyuncs.com"},
    {"cn-edge-1" , "linkedmall.aliyuncs.com"},
    {"cn-fujian" , "linkedmall.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-finance" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "linkedmall.aliyuncs.com"},
    {"cn-hongkong" , "linkedmall.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "linkedmall.aliyuncs.com"},
    {"cn-huhehaote" , "linkedmall.aliyuncs.com"},
    {"cn-north-2-gov-1" , "linkedmall.aliyuncs.com"},
    {"cn-qingdao" , "linkedmall.aliyuncs.com"},
    {"cn-qingdao-nebula" , "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "linkedmall.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "linkedmall.aliyuncs.com"},
    {"cn-shanghai-inner" , "linkedmall.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "linkedmall.aliyuncs.com"},
    {"cn-shenzhen" , "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-inner" , "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "linkedmall.aliyuncs.com"},
    {"cn-wuhan" , "linkedmall.aliyuncs.com"},
    {"cn-yushanfang" , "linkedmall.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou" , "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "linkedmall.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "linkedmall.aliyuncs.com"},
    {"eu-central-1" , "linkedmall.aliyuncs.com"},
    {"eu-west-1" , "linkedmall.aliyuncs.com"},
    {"eu-west-1-oxs" , "linkedmall.aliyuncs.com"},
    {"me-east-1" , "linkedmall.aliyuncs.com"},
    {"rus-west-1-pop" , "linkedmall.aliyuncs.com"},
    {"us-east-1" , "linkedmall.aliyuncs.com"},
    {"us-west-1" , "linkedmall.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("linkedmall", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 取消逆向单
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelRefundOrderResponse
 */
CancelRefundOrderResponse Client::cancelRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRefundOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/" , Darabonba::Encode::Encoder::percentEncode(disputeId) , "/commands/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRefundOrderResponse>();
}

/**
 * @summary 取消逆向单
 *
 * @return CancelRefundOrderResponse
 */
CancelRefundOrderResponse Client::cancelRefundOrder(const string &disputeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelRefundOrderWithOptions(disputeId, headers, runtime);
}

/**
 * @summary 确认收货（订单）
 *
 * @param request ConfirmDisburseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmDisburseResponse
 */
ConfirmDisburseResponse Client::confirmDisburseWithOptions(const ConfirmDisburseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ConfirmDisburse"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/commands/confirmDisburse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmDisburseResponse>();
}

/**
 * @summary 确认收货（订单）
 *
 * @param request ConfirmDisburseRequest
 * @return ConfirmDisburseResponse
 */
ConfirmDisburseResponse Client::confirmDisburse(const ConfirmDisburseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return confirmDisburseWithOptions(request, headers, runtime);
}

/**
 * @summary 提交运单信息
 *
 * @param request CreateGoodsShippingNoticeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGoodsShippingNoticeResponse
 */
CreateGoodsShippingNoticeResponse Client::createGoodsShippingNoticeWithOptions(const CreateGoodsShippingNoticeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateGoodsShippingNotice"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/command/createGoodsShippingNotice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGoodsShippingNoticeResponse>();
}

/**
 * @summary 提交运单信息
 *
 * @param request CreateGoodsShippingNoticeRequest
 * @return CreateGoodsShippingNoticeResponse
 */
CreateGoodsShippingNoticeResponse Client::createGoodsShippingNotice(const CreateGoodsShippingNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGoodsShippingNoticeWithOptions(request, headers, runtime);
}

/**
 * @summary 创建采购单
 *
 * @param request CreatePurchaseOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePurchaseOrderResponse
 */
CreatePurchaseOrderResponse Client::createPurchaseOrderWithOptions(const CreatePurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePurchaseOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePurchaseOrderResponse>();
}

/**
 * @summary 创建采购单
 *
 * @param request CreatePurchaseOrderRequest
 * @return CreatePurchaseOrderResponse
 */
CreatePurchaseOrderResponse Client::createPurchaseOrder(const CreatePurchaseOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPurchaseOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 创建逆向单
 *
 * @param request CreateRefundOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRefundOrderResponse
 */
CreateRefundOrderResponse Client::createRefundOrderWithOptions(const CreateRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateRefundOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRefundOrderResponse>();
}

/**
 * @summary 创建逆向单
 *
 * @param request CreateRefundOrderRequest
 * @return CreateRefundOrderResponse
 */
CreateRefundOrderResponse Client::createRefundOrder(const CreateRefundOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRefundOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 查询主单详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderResponse
 */
GetOrderResponse Client::getOrderWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/" , Darabonba::Encode::Encoder::percentEncode(orderId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrderResponse>();
}

/**
 * @summary 查询主单详情
 *
 * @return GetOrderResponse
 */
GetOrderResponse Client::getOrder(const string &orderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrderWithOptions(orderId, headers, runtime);
}

/**
 * @summary 查询采购单状态
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPurchaseOrderStatusResponse
 */
GetPurchaseOrderStatusResponse Client::getPurchaseOrderStatusWithOptions(const string &purchaseOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPurchaseOrderStatus"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders/" , Darabonba::Encode::Encoder::percentEncode(purchaseOrderId) , "/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPurchaseOrderStatusResponse>();
}

/**
 * @summary 查询采购单状态
 *
 * @return GetPurchaseOrderStatusResponse
 */
GetPurchaseOrderStatusResponse Client::getPurchaseOrderStatus(const string &purchaseOrderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPurchaseOrderStatusWithOptions(purchaseOrderId, headers, runtime);
}

/**
 * @summary 查询分销商店铺
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPurchaserShopResponse
 */
GetPurchaserShopResponse Client::getPurchaserShopWithOptions(const string &purchaserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPurchaserShop"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaserShops/" , Darabonba::Encode::Encoder::percentEncode(purchaserId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPurchaserShopResponse>();
}

/**
 * @summary 查询分销商店铺
 *
 * @return GetPurchaserShopResponse
 */
GetPurchaserShopResponse Client::getPurchaserShop(const string &purchaserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPurchaserShopWithOptions(purchaserId, headers, runtime);
}

/**
 * @summary 查询逆向单详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRefundOrderResponse
 */
GetRefundOrderResponse Client::getRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRefundOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/" , Darabonba::Encode::Encoder::percentEncode(disputeId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRefundOrderResponse>();
}

/**
 * @summary 查询逆向单详情
 *
 * @return GetRefundOrderResponse
 */
GetRefundOrderResponse Client::getRefundOrder(const string &disputeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRefundOrderWithOptions(disputeId, headers, runtime);
}

/**
 * @summary 查询选品池商品详情
 *
 * @param request GetSelectionProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSelectionProductResponse
 */
GetSelectionProductResponse Client::getSelectionProductWithOptions(const string &productId, const GetSelectionProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDivisionCode()) {
    query["divisionCode"] = request.getDivisionCode();
  }

  if (!!request.hasPurchaserId()) {
    query["purchaserId"] = request.getPurchaserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSelectionProduct"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products/" , Darabonba::Encode::Encoder::percentEncode(productId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSelectionProductResponse>();
}

/**
 * @summary 查询选品池商品详情
 *
 * @param request GetSelectionProductRequest
 * @return GetSelectionProductResponse
 */
GetSelectionProductResponse Client::getSelectionProduct(const string &productId, const GetSelectionProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSelectionProductWithOptions(productId, request, headers, runtime);
}

/**
 * @summary 查询选品池商品库存
 *
 * @param request GetSelectionProductSaleInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSelectionProductSaleInfoResponse
 */
GetSelectionProductSaleInfoResponse Client::getSelectionProductSaleInfoWithOptions(const string &productId, const GetSelectionProductSaleInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDivisionCode()) {
    query["divisionCode"] = request.getDivisionCode();
  }

  if (!!request.hasPurchaserId()) {
    query["purchaserId"] = request.getPurchaserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSelectionProductSaleInfo"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products/" , Darabonba::Encode::Encoder::percentEncode(productId) , "/saleInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSelectionProductSaleInfoResponse>();
}

/**
 * @summary 查询选品池商品库存
 *
 * @param request GetSelectionProductSaleInfoRequest
 * @return GetSelectionProductSaleInfoResponse
 */
GetSelectionProductSaleInfoResponse Client::getSelectionProductSaleInfo(const string &productId, const GetSelectionProductSaleInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSelectionProductSaleInfoWithOptions(productId, request, headers, runtime);
}

/**
 * @summary 查询类目
 *
 * @param request ListCategoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategoriesWithOptions(const ListCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ListCategories"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/categories/commands/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCategoriesResponse>();
}

/**
 * @summary 查询类目
 *
 * @param request ListCategoriesRequest
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategories(const ListCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCategoriesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询物流信息（订单）
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogisticsOrdersResponse
 */
ListLogisticsOrdersResponse Client::listLogisticsOrdersWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogisticsOrders"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/" , Darabonba::Encode::Encoder::percentEncode(orderId) , "/logisticsOrders")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogisticsOrdersResponse>();
}

/**
 * @summary 查询物流信息（订单）
 *
 * @return ListLogisticsOrdersResponse
 */
ListLogisticsOrdersResponse Client::listLogisticsOrders(const string &orderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogisticsOrdersWithOptions(orderId, headers, runtime);
}

/**
 * @summary 采购方店铺列表查询
 *
 * @param request ListPurchaserShopsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPurchaserShopsResponse
 */
ListPurchaserShopsResponse Client::listPurchaserShopsWithOptions(const ListPurchaserShopsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPurchaserShops"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaserShops")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPurchaserShopsResponse>();
}

/**
 * @summary 采购方店铺列表查询
 *
 * @param request ListPurchaserShopsRequest
 * @return ListPurchaserShopsResponse
 */
ListPurchaserShopsResponse Client::listPurchaserShops(const ListPurchaserShopsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPurchaserShopsWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询选品池商品库存
 *
 * @param request ListSelectionProductSaleInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSelectionProductSaleInfosResponse
 */
ListSelectionProductSaleInfosResponse Client::listSelectionProductSaleInfosWithOptions(const ListSelectionProductSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ListSelectionProductSaleInfos"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products/saleInfo/commands/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSelectionProductSaleInfosResponse>();
}

/**
 * @summary 批量查询选品池商品库存
 *
 * @param request ListSelectionProductSaleInfosRequest
 * @return ListSelectionProductSaleInfosResponse
 */
ListSelectionProductSaleInfosResponse Client::listSelectionProductSaleInfos(const ListSelectionProductSaleInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSelectionProductSaleInfosWithOptions(request, headers, runtime);
}

/**
 * @summary 查询商品列表
 *
 * @param request ListSelectionProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSelectionProductsResponse
 */
ListSelectionProductsResponse Client::listSelectionProductsWithOptions(const ListSelectionProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPurchaserId()) {
    query["purchaserId"] = request.getPurchaserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSelectionProducts"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/products")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSelectionProductsResponse>();
}

/**
 * @summary 查询商品列表
 *
 * @param request ListSelectionProductsRequest
 * @return ListSelectionProductsResponse
 */
ListSelectionProductsResponse Client::listSelectionProducts(const ListSelectionProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSelectionProductsWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询选品池商品SKU库存
 *
 * @param request ListSelectionSkuSaleInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSelectionSkuSaleInfosResponse
 */
ListSelectionSkuSaleInfosResponse Client::listSelectionSkuSaleInfosWithOptions(const ListSelectionSkuSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ListSelectionSkuSaleInfos"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/skus/saleInfo/commands/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSelectionSkuSaleInfosResponse>();
}

/**
 * @summary 批量查询选品池商品SKU库存
 *
 * @param request ListSelectionSkuSaleInfosRequest
 * @return ListSelectionSkuSaleInfosResponse
 */
ListSelectionSkuSaleInfosResponse Client::listSelectionSkuSaleInfos(const ListSelectionSkuSaleInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSelectionSkuSaleInfosWithOptions(request, headers, runtime);
}

/**
 * @summary 查询地址divisionCode
 *
 * @param request QueryChildDivisionCodeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChildDivisionCodeResponse
 */
QueryChildDivisionCodeResponse Client::queryChildDivisionCodeWithOptions(const QueryChildDivisionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "QueryChildDivisionCode"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/division/commands/queryChildDivisionCode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryChildDivisionCodeResponse>();
}

/**
 * @summary 查询地址divisionCode
 *
 * @param request QueryChildDivisionCodeRequest
 * @return QueryChildDivisionCodeResponse
 */
QueryChildDivisionCodeResponse Client::queryChildDivisionCode(const QueryChildDivisionCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryChildDivisionCodeWithOptions(request, headers, runtime);
}

/**
 * @summary 查询主单列表
 *
 * @param request QueryOrdersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrdersResponse
 */
QueryOrdersResponse Client::queryOrdersWithOptions(const QueryOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "QueryOrders"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/orders/commands/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrdersResponse>();
}

/**
 * @summary 查询主单列表
 *
 * @param request QueryOrdersRequest
 * @return QueryOrdersResponse
 */
QueryOrdersResponse Client::queryOrders(const QueryOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryOrdersWithOptions(request, headers, runtime);
}

/**
 * @summary 渲染采购单
 *
 * @param request RenderPurchaseOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenderPurchaseOrderResponse
 */
RenderPurchaseOrderResponse Client::renderPurchaseOrderWithOptions(const RenderPurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RenderPurchaseOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders/commands/render")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenderPurchaseOrderResponse>();
}

/**
 * @summary 渲染采购单
 *
 * @param request RenderPurchaseOrderRequest
 * @return RenderPurchaseOrderResponse
 */
RenderPurchaseOrderResponse Client::renderPurchaseOrder(const RenderPurchaseOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renderPurchaseOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 逆向单渲染
 *
 * @param request RenderRefundOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenderRefundOrderResponse
 */
RenderRefundOrderResponse Client::renderRefundOrderWithOptions(const RenderRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RenderRefundOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/refunds/commands/render")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenderRefundOrderResponse>();
}

/**
 * @summary 逆向单渲染
 *
 * @param request RenderRefundOrderRequest
 * @return RenderRefundOrderResponse
 */
RenderRefundOrderResponse Client::renderRefundOrder(const RenderRefundOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renderRefundOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 搜索商品
 *
 * @param request SearchProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchProductsResponse
 */
SearchProductsResponse Client::searchProductsWithOptions(const SearchProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBrandName()) {
    body["brandName"] = request.getBrandName();
  }

  if (!!request.hasCategoryIds()) {
    body["categoryIds"] = request.getCategoryIds();
  }

  if (!!request.hasCreateEndTime()) {
    body["createEndTime"] = request.getCreateEndTime();
  }

  if (!!request.hasCreateStartTime()) {
    body["createStartTime"] = request.getCreateStartTime();
  }

  if (!!request.hasDistributionHighPrice()) {
    body["distributionHighPrice"] = request.getDistributionHighPrice();
  }

  if (!!request.hasDistributionHighPriceRatio()) {
    body["distributionHighPriceRatio"] = request.getDistributionHighPriceRatio();
  }

  if (!!request.hasDistributionLowPrice()) {
    body["distributionLowPrice"] = request.getDistributionLowPrice();
  }

  if (!!request.hasDistributionLowPriceRatio()) {
    body["distributionLowPriceRatio"] = request.getDistributionLowPriceRatio();
  }

  if (!!request.hasHighMarkPrice()) {
    body["highMarkPrice"] = request.getHighMarkPrice();
  }

  if (!!request.hasHighPrice()) {
    body["highPrice"] = request.getHighPrice();
  }

  if (!!request.hasInGroup()) {
    body["inGroup"] = request.getInGroup();
  }

  if (!!request.hasInGroupEndTime()) {
    body["inGroupEndTime"] = request.getInGroupEndTime();
  }

  if (!!request.hasInGroupStartTime()) {
    body["inGroupStartTime"] = request.getInGroupStartTime();
  }

  if (!!request.hasInventoryRiskLevel()) {
    body["inventoryRiskLevel"] = request.getInventoryRiskLevel();
  }

  if (!!request.hasLmItemId()) {
    body["lmItemId"] = request.getLmItemId();
  }

  if (!!request.hasLowMarkPrice()) {
    body["lowMarkPrice"] = request.getLowMarkPrice();
  }

  if (!!request.hasLowPrice()) {
    body["lowPrice"] = request.getLowPrice();
  }

  if (!!request.hasModifyEndTime()) {
    body["modifyEndTime"] = request.getModifyEndTime();
  }

  if (!!request.hasModifyStartTime()) {
    body["modifyStartTime"] = request.getModifyStartTime();
  }

  if (!!request.hasOrderBy()) {
    body["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    body["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    body["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPlatform()) {
    body["platform"] = request.getPlatform();
  }

  if (!!request.hasProductId()) {
    body["productId"] = request.getProductId();
  }

  if (!!request.hasProductName()) {
    body["productName"] = request.getProductName();
  }

  if (!!request.hasProductStatus()) {
    body["productStatus"] = request.getProductStatus();
  }

  if (!!request.hasPurchaserId()) {
    body["purchaserId"] = request.getPurchaserId();
  }

  if (!!request.hasTaxRate()) {
    body["taxRate"] = request.getTaxRate();
  }

  if (!!request.hasTradeModeAndCredit()) {
    body["tradeModeAndCredit"] = request.getTradeModeAndCredit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchProducts"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/selection-group/product/command/searchProduct")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchProductsResponse>();
}

/**
 * @summary 搜索商品
 *
 * @param request SearchProductsRequest
 * @return SearchProductsResponse
 */
SearchProductsResponse Client::searchProducts(const SearchProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchProductsWithOptions(request, headers, runtime);
}

/**
 * @summary 入库操作
 *
 * @param request SelectionGroupAddProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectionGroupAddProductResponse
 */
SelectionGroupAddProductResponse Client::selectionGroupAddProductWithOptions(const SelectionGroupAddProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductIds()) {
    body["productIds"] = request.getProductIds();
  }

  if (!!request.hasPurchaserId()) {
    body["purchaserId"] = request.getPurchaserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SelectionGroupAddProduct"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/selection-group/product/command/addProduct")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectionGroupAddProductResponse>();
}

/**
 * @summary 入库操作
 *
 * @param request SelectionGroupAddProductRequest
 * @return SelectionGroupAddProductResponse
 */
SelectionGroupAddProductResponse Client::selectionGroupAddProduct(const SelectionGroupAddProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectionGroupAddProductWithOptions(request, headers, runtime);
}

/**
 * @summary 出库操作
 *
 * @param request SelectionGroupRemoveProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SelectionGroupRemoveProductResponse
 */
SelectionGroupRemoveProductResponse Client::selectionGroupRemoveProductWithOptions(const SelectionGroupRemoveProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductIds()) {
    body["productIds"] = request.getProductIds();
  }

  if (!!request.hasPurchaserId()) {
    body["purchaserId"] = request.getPurchaserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SelectionGroupRemoveProduct"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/selectionPool/selection-group/product/command/removeProduct")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SelectionGroupRemoveProductResponse>();
}

/**
 * @summary 出库操作
 *
 * @param request SelectionGroupRemoveProductRequest
 * @return SelectionGroupRemoveProductResponse
 */
SelectionGroupRemoveProductResponse Client::selectionGroupRemoveProduct(const SelectionGroupRemoveProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return selectionGroupRemoveProductWithOptions(request, headers, runtime);
}

/**
 * @summary 渲染拆分采购单
 *
 * @param request SplitPurchaseOrderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SplitPurchaseOrderResponse
 */
SplitPurchaseOrderResponse Client::splitPurchaseOrderWithOptions(const SplitPurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "SplitPurchaseOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/opensaas-s2b/opensaas-s2b-biz-trade/v2/purchaseOrders/commands/split")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SplitPurchaseOrderResponse>();
}

/**
 * @summary 渲染拆分采购单
 *
 * @param request SplitPurchaseOrderRequest
 * @return SplitPurchaseOrderResponse
 */
SplitPurchaseOrderResponse Client::splitPurchaseOrder(const SplitPurchaseOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return splitPurchaseOrderWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Linkedmall20230930