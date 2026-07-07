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
 * @summary Cancels a refund order.
 *
 * @description Cancel a refund order.
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
 * @summary Cancels a refund order.
 *
 * @description Cancel a refund order.
 *
 * @return CancelRefundOrderResponse
 */
CancelRefundOrderResponse Client::cancelRefundOrder(const string &disputeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelRefundOrderWithOptions(disputeId, headers, runtime);
}

/**
 * @summary Confirms the receipt of goods.
 *
 * @description Confirms the receipt of goods.
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
 * @summary Confirms the receipt of goods.
 *
 * @description Confirms the receipt of goods.
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
 * @summary Backfill shipping notice information.
 *
 * @description Backfill shipping notice information.
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
 * @summary Backfill shipping notice information.
 *
 * @description Backfill shipping notice information.
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
 * @summary Creates a purchase order and returns the purchase order ID. The specific result of order creation is communicated through messages. After the order is created, you can query the order details associated with the purchase order using the order API.
 *
 * @description Creates a purchase order and returns the purchase order ID. Messages communicate the specific result of order creation. After the order is created, you can query the order details associated with the purchase order using the order API.
 * >Warning: Note: Purchase order creation is an asynchronous task. If a distributor calls this API and receives an abnormal status (such as error code 503), do not immediately process customer refunds. Distributors must wait for and consume the PurchaseOrderCreate message (the purchase order creation result message) to determine the order status—for example, by consuming the order status synchronization message—before proceeding with business logic. This prevents financial losses.
 * >Notice: Note: If you do not receive the PurchaseOrderCreate message (the purchase order creation result message) after calling the purchase order creation API, submit a ticket to the technical support team to inquire about the cause.
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
 * @summary Creates a purchase order and returns the purchase order ID. The specific result of order creation is communicated through messages. After the order is created, you can query the order details associated with the purchase order using the order API.
 *
 * @description Creates a purchase order and returns the purchase order ID. Messages communicate the specific result of order creation. After the order is created, you can query the order details associated with the purchase order using the order API.
 * >Warning: Note: Purchase order creation is an asynchronous task. If a distributor calls this API and receives an abnormal status (such as error code 503), do not immediately process customer refunds. Distributors must wait for and consume the PurchaseOrderCreate message (the purchase order creation result message) to determine the order status—for example, by consuming the order status synchronization message—before proceeding with business logic. This prevents financial losses.
 * >Notice: Note: If you do not receive the PurchaseOrderCreate message (the purchase order creation result message) after calling the purchase order creation API, submit a ticket to the technical support team to inquire about the cause.
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
 * @summary Create a support ticket.
 *
 * @description Creates a refund order.
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
 * @summary Create a support ticket.
 *
 * @description Creates a refund order.
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
 * @summary Queries the details of an order.
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
 * @summary Queries the details of an order.
 *
 * @return GetOrderResponse
 */
GetOrderResponse Client::getOrder(const string &orderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOrderWithOptions(orderId, headers, runtime);
}

/**
 * @summary Retrieve the purchase order status.
 *
 * @description Retrieve the transaction order status.
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
 * @summary Retrieve the purchase order status.
 *
 * @description Retrieve the transaction order status.
 *
 * @return GetPurchaseOrderStatusResponse
 */
GetPurchaseOrderStatusResponse Client::getPurchaseOrderStatus(const string &purchaseOrderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPurchaseOrderStatusWithOptions(purchaseOrderId, headers, runtime);
}

/**
 * @summary Retrieves the purchaser\\"s shop.
 *
 * @description Retrieves the purchaser\\"s shop.
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
 * @summary Retrieves the purchaser\\"s shop.
 *
 * @description Retrieves the purchaser\\"s shop.
 *
 * @return GetPurchaserShopResponse
 */
GetPurchaserShopResponse Client::getPurchaserShop(const string &purchaserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPurchaserShopWithOptions(purchaserId, headers, runtime);
}

/**
 * @summary Retrieve details of an after-sales order.
 *
 * @description Retrieve after-sales order details
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
 * @summary Retrieve details of an after-sales order.
 *
 * @description Retrieve after-sales order details
 *
 * @return GetRefundOrderResponse
 */
GetRefundOrderResponse Client::getRefundOrder(const string &disputeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRefundOrderWithOptions(disputeId, headers, runtime);
}

/**
 * @summary Query the details of a product in the selection pool.
 *
 * @description Retrieve product details from the selection pool using the product ID. You can also specify a region code to check regional inventory.
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
 * @summary Query the details of a product in the selection pool.
 *
 * @description Retrieve product details from the selection pool using the product ID. You can also specify a region code to check regional inventory.
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
 * @summary Queries sales information for products in the selection pool.
 *
 * @description Queries sales information for products in the selection pool. Distributors can call this operation to check product sales details, such as product status. Use the divisionCode input parameter to check whether a product is available for sale in a specific region. We recommend using a five-level administrative division code (township or subdistrict level).
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
 * @summary Queries sales information for products in the selection pool.
 *
 * @description Queries sales information for products in the selection pool. Distributors can call this operation to check product sales details, such as product status. Use the divisionCode input parameter to check whether a product is available for sale in a specific region. We recommend using a five-level administrative division code (township or subdistrict level).
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
 * @summary Lists categories.
 *
 * @description Retrieves all subcategories for a parent category ID, or the details for a specific category ID.
 * If the parent category ID (parentCategoryId) is 0, the API returns the top-level categories under the root category.
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
 * @summary Lists categories.
 *
 * @description Retrieves all subcategories for a parent category ID, or the details for a specific category ID.
 * If the parent category ID (parentCategoryId) is 0, the API returns the top-level categories under the root category.
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
 * @summary Query logistics information for an order.
 *
 * @description Retrieves logistics information for an order.
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
 * @summary Query logistics information for an order.
 *
 * @description Retrieves logistics information for an order.
 *
 * @return ListLogisticsOrdersResponse
 */
ListLogisticsOrdersResponse Client::listLogisticsOrders(const string &orderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogisticsOrdersWithOptions(orderId, headers, runtime);
}

/**
 * @summary Lists purchaser shops.
 *
 * @description Lists purchaser shops.
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
 * @summary Lists purchaser shops.
 *
 * @description Lists purchaser shops.
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
 * @summary Query product sales information for the selection pool in batches.
 *
 * @description You can query product sales information for the selection pool in batches. Distributors can call this operation to retrieve product sales details, such as product status. Use the divisionCode input parameter to check whether products are available for sale in a specific region. We recommend that you pass a five-level address code (town or street level).
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
 * @summary Query product sales information for the selection pool in batches.
 *
 * @description You can query product sales information for the selection pool in batches. Distributors can call this operation to retrieve product sales details, such as product status. Use the divisionCode input parameter to check whether products are available for sale in a specific region. We recommend that you pass a five-level address code (town or street level).
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
 * @summary Retrieves a list of products from a product selection pool.
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
 * @summary Retrieves a list of products from a product selection pool.
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
 * @summary Query SKU sales information for items in the selection pool in batch.
 *
 * @description Query SKU sales information for items in the selection pool in batch. Distributors can call this API to retrieve batch details about SKU sales status and other attributes. To determine whether SKUs are sellable in a specific region, use the divisionCode parameter—preferably a five-level administrative division code for townships or subdistricts.
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
 * @summary Query SKU sales information for items in the selection pool in batch.
 *
 * @description Query SKU sales information for items in the selection pool in batch. Distributors can call this API to retrieve batch details about SKU sales status and other attributes. To determine whether SKUs are sellable in a specific region, use the divisionCode parameter—preferably a five-level administrative division code for townships or subdistricts.
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
 * @summary Queries child division codes.
 *
 * @description Queries child division codes.
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
 * @summary Queries child division codes.
 *
 * @description Queries child division codes.
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
 * @summary Queries a list of orders.
 *
 * @description Queries a list of orders.
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
 * @summary Queries a list of orders.
 *
 * @description Queries a list of orders.
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
 * @summary Renders a purchase order and returns both sellable and unsellable products. Customers can then select the sellable products to place their orders.
 *
 * @description >Warning: 
 * This API will be offline soon. For purchase order rendering, use the SplitPurchaseOrder API, which supports both purchase order rendering and splitting.
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
 * @summary Renders a purchase order and returns both sellable and unsellable products. Customers can then select the sellable products to place their orders.
 *
 * @description >Warning: 
 * This API will be offline soon. For purchase order rendering, use the SplitPurchaseOrder API, which supports both purchase order rendering and splitting.
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
 * @summary Reverse Single Rendering
 *
 * @description Renders a refund order.
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
 * @summary Reverse Single Rendering
 *
 * @description Renders a refund order.
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
 * @summary The product search API is a paginated interface for searching products based on various criteria.
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
 * @summary The product search API is a paginated interface for searching products based on various criteria.
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
 * @summary The distributor takes delivery of goods.
 *
 * @description Distributors use this API to add products to their selection group.
 * > We recommend that distributors who onboard on or after January 1, 2025 use this API. For more information about adding products and the related impact, see the [product best practices](https://help.aliyun.com/zh/linkedmall/user-guide/product-interface-best-practices?spm=a2c4g.11186623.help-menu-88587.d_2_2_0_8_0.58122056oN3crP\\&scm=20140722.H_2869668._.OR_help-T_cn~zh-V_1#lFENl).
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
 * @summary The distributor takes delivery of goods.
 *
 * @description Distributors use this API to add products to their selection group.
 * > We recommend that distributors who onboard on or after January 1, 2025 use this API. For more information about adding products and the related impact, see the [product best practices](https://help.aliyun.com/zh/linkedmall/user-guide/product-interface-best-practices?spm=a2c4g.11186623.help-menu-88587.d_2_2_0_8_0.58122056oN3crP\\&scm=20140722.H_2869668._.OR_help-T_cn~zh-V_1#lFENl).
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
 * @summary Removes products from a distributor\\"s stock.
 *
 * @description Distributors use this API to remove products from their stock.
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
 * @summary Removes products from a distributor\\"s stock.
 *
 * @description Distributors use this API to remove products from their stock.
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
 * @summary Splits a purchase order and renders the resulting parent-child order structure. This API returns a list of items based on the final parent-child order structure. Distributors can use this response to render the final parent-child order layout, which simplifies receiving the purchase order creation success message and backfilling parent-child order information later.
 *
 * @description Call this API before creating a purchase order. It returns two lists: one for sellable items and one for unsellable items. The sellable items list follows the final parent-child order split structure.
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
 * @summary Splits a purchase order and renders the resulting parent-child order structure. This API returns a list of items based on the final parent-child order structure. Distributors can use this response to render the final parent-child order layout, which simplifies receiving the purchase order creation success message and backfilling parent-child order information later.
 *
 * @description Call this API before creating a purchase order. It returns two lists: one for sellable items and one for unsellable items. The sellable items list follows the final parent-child order split structure.
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