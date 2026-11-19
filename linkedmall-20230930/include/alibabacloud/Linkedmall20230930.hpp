// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_LINKEDMALL20230930_HPP_
#define ALIBABACLOUD_LINKEDMALL20230930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Linkedmall20230930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Linkedmall20230930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels an after-sales ticket.
       *
       * @description Cancels an after-sales ticket.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRefundOrderResponse
       */
      Models::CancelRefundOrderResponse cancelRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an after-sales ticket.
       *
       * @description Cancels an after-sales ticket.
       *
       * @return CancelRefundOrderResponse
       */
      Models::CancelRefundOrderResponse cancelRefundOrder(const string &disputeId);

      /**
       * @summary Confirms receipt.
       *
       * @description Confirms receipt.
       *
       * @param request ConfirmDisburseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmDisburseResponse
       */
      Models::ConfirmDisburseResponse confirmDisburseWithOptions(const Models::ConfirmDisburseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms receipt.
       *
       * @description Confirms receipt.
       *
       * @param request ConfirmDisburseRequest
       * @return ConfirmDisburseResponse
       */
      Models::ConfirmDisburseResponse confirmDisburse(const Models::ConfirmDisburseRequest &request);

      /**
       * @summary Backfills the waybill information.
       *
       * @description Backfills the waybill information.
       *
       * @param request CreateGoodsShippingNoticeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGoodsShippingNoticeResponse
       */
      Models::CreateGoodsShippingNoticeResponse createGoodsShippingNoticeWithOptions(const Models::CreateGoodsShippingNoticeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backfills the waybill information.
       *
       * @description Backfills the waybill information.
       *
       * @param request CreateGoodsShippingNoticeRequest
       * @return CreateGoodsShippingNoticeResponse
       */
      Models::CreateGoodsShippingNoticeResponse createGoodsShippingNotice(const Models::CreateGoodsShippingNoticeRequest &request);

      /**
       * @summary Creates a purchase order and returns the purchase order ID. The order creation result is notified through messages. After the order is created, you can query the orders associated with the purchase order by calling the order API.
       *
       * @description Creates a purchase order and returns the purchase order ID. The order creation result is notified through messages. After the order is created, you can query the orders associated with the purchase order by calling the order API.
       * >Warning: Because purchase order creation is an asynchronous task, if an error (such as a 503 error code) is returned when a distributor calls this API, do not immediately process consumer refunds on the business side. Wait for and consume the PurchaseOrderCreate message (the purchase order creation result message) to check the order status (for example, consume the order status synchronization message to check the order status) before you process business logic to prevent financial losses.
       * >Notice: If you do not receive the PurchaseOrderCreate message (the purchase order creation result message) after you call the purchase order creation API, submit a ticket in the technical integration group to check the cause.
       *
       * @param request CreatePurchaseOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePurchaseOrderResponse
       */
      Models::CreatePurchaseOrderResponse createPurchaseOrderWithOptions(const Models::CreatePurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a purchase order and returns the purchase order ID. The order creation result is notified through messages. After the order is created, you can query the orders associated with the purchase order by calling the order API.
       *
       * @description Creates a purchase order and returns the purchase order ID. The order creation result is notified through messages. After the order is created, you can query the orders associated with the purchase order by calling the order API.
       * >Warning: Because purchase order creation is an asynchronous task, if an error (such as a 503 error code) is returned when a distributor calls this API, do not immediately process consumer refunds on the business side. Wait for and consume the PurchaseOrderCreate message (the purchase order creation result message) to check the order status (for example, consume the order status synchronization message to check the order status) before you process business logic to prevent financial losses.
       * >Notice: If you do not receive the PurchaseOrderCreate message (the purchase order creation result message) after you call the purchase order creation API, submit a ticket in the technical integration group to check the cause.
       *
       * @param request CreatePurchaseOrderRequest
       * @return CreatePurchaseOrderResponse
       */
      Models::CreatePurchaseOrderResponse createPurchaseOrder(const Models::CreatePurchaseOrderRequest &request);

      /**
       * @summary Creates an after-sales ticket.
       *
       * @description Creates an after-sales ticket.
       *
       * @param request CreateRefundOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRefundOrderResponse
       */
      Models::CreateRefundOrderResponse createRefundOrderWithOptions(const Models::CreateRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an after-sales ticket.
       *
       * @description Creates an after-sales ticket.
       *
       * @param request CreateRefundOrderRequest
       * @return CreateRefundOrderResponse
       */
      Models::CreateRefundOrderResponse createRefundOrder(const Models::CreateRefundOrderRequest &request);

      /**
       * @summary Queries the details of the main order.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderResponse
       */
      Models::GetOrderResponse getOrderWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the main order.
       *
       * @return GetOrderResponse
       */
      Models::GetOrderResponse getOrder(const string &orderId);

      /**
       * @summary Retrieves the status of a purchase order.
       *
       * @description Retrieves the status of a transaction order.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaseOrderStatusResponse
       */
      Models::GetPurchaseOrderStatusResponse getPurchaseOrderStatusWithOptions(const string &purchaseOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the status of a purchase order.
       *
       * @description Retrieves the status of a transaction order.
       *
       * @return GetPurchaseOrderStatusResponse
       */
      Models::GetPurchaseOrderStatusResponse getPurchaseOrderStatus(const string &purchaseOrderId);

      /**
       * @summary Retrieves the purchaser store.
       *
       * @description Retrieves the purchaser store.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaserShopResponse
       */
      Models::GetPurchaserShopResponse getPurchaserShopWithOptions(const string &purchaserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the purchaser store.
       *
       * @description Retrieves the purchaser store.
       *
       * @return GetPurchaserShopResponse
       */
      Models::GetPurchaserShopResponse getPurchaserShop(const string &purchaserId);

      /**
       * @summary Retrieves the details of an after-sales ticket.
       *
       * @description Retrieves the details of an after-sales ticket.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRefundOrderResponse
       */
      Models::GetRefundOrderResponse getRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an after-sales ticket.
       *
       * @description Retrieves the details of an after-sales ticket.
       *
       * @return GetRefundOrderResponse
       */
      Models::GetRefundOrderResponse getRefundOrder(const string &disputeId);

      /**
       * @summary Queries the details of products in the selection pool.
       *
       * @description Queries the details of products in the selection pool by product ID. You can specify a division code to query the regional inventory of the product.
       *
       * @param request GetSelectionProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSelectionProductResponse
       */
      Models::GetSelectionProductResponse getSelectionProductWithOptions(const string &productId, const Models::GetSelectionProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of products in the selection pool.
       *
       * @description Queries the details of products in the selection pool by product ID. You can specify a division code to query the regional inventory of the product.
       *
       * @param request GetSelectionProductRequest
       * @return GetSelectionProductResponse
       */
      Models::GetSelectionProductResponse getSelectionProduct(const string &productId, const Models::GetSelectionProductRequest &request);

      /**
       * @summary Queries the sales information of products in the selection pool.
       *
       * @description Queries the sales information of products in the selection pool. Distributors can call this operation to query product sales information, such as product status. Pass the divisionCode parameter (a level-5 address code for a town or sub-district is recommended) to check whether the product is available for sale in the specified region.
       *
       * @param request GetSelectionProductSaleInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSelectionProductSaleInfoResponse
       */
      Models::GetSelectionProductSaleInfoResponse getSelectionProductSaleInfoWithOptions(const string &productId, const Models::GetSelectionProductSaleInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sales information of products in the selection pool.
       *
       * @description Queries the sales information of products in the selection pool. Distributors can call this operation to query product sales information, such as product status. Pass the divisionCode parameter (a level-5 address code for a town or sub-district is recommended) to check whether the product is available for sale in the specified region.
       *
       * @param request GetSelectionProductSaleInfoRequest
       * @return GetSelectionProductSaleInfoResponse
       */
      Models::GetSelectionProductSaleInfoResponse getSelectionProductSaleInfo(const string &productId, const Models::GetSelectionProductSaleInfoRequest &request);

      /**
       * @summary Queries a list of categories.
       *
       * @description Queries all subcategories based on a parent category ID, or queries category details based on a category ID. If the parent category ID (parentCategoryId) is set to 0, the first-level categories under the root category are returned.
       *
       * @param request ListCategoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of categories.
       *
       * @description Queries all subcategories based on a parent category ID, or queries category details based on a category ID. If the parent category ID (parentCategoryId) is set to 0, the first-level categories under the root category are returned.
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @summary Queries the logistics information of an order.
       *
       * @description Queries the logistics information of an order.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogisticsOrdersResponse
       */
      Models::ListLogisticsOrdersResponse listLogisticsOrdersWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logistics information of an order.
       *
       * @description Queries the logistics information of an order.
       *
       * @return ListLogisticsOrdersResponse
       */
      Models::ListLogisticsOrdersResponse listLogisticsOrders(const string &orderId);

      /**
       * @summary Retrieves a list of purchaser shops.
       *
       * @description Retrieves a list of purchaser shops.
       *
       * @param request ListPurchaserShopsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPurchaserShopsResponse
       */
      Models::ListPurchaserShopsResponse listPurchaserShopsWithOptions(const Models::ListPurchaserShopsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of purchaser shops.
       *
       * @description Retrieves a list of purchaser shops.
       *
       * @param request ListPurchaserShopsRequest
       * @return ListPurchaserShopsResponse
       */
      Models::ListPurchaserShopsResponse listPurchaserShops(const Models::ListPurchaserShopsRequest &request);

      /**
       * @summary Queries the sales information of products in the selection pool in batches.
       *
       * @description Queries the sales information of products in the selection pool in batches. Distributors can call this operation to batch query product sales information, such as product status. You can use the divisionCode parameter (we recommend passing a level-5 address code for a town or sub-district) to batch query whether a product is available for sale in a specific region.
       *
       * @param request ListSelectionProductSaleInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionProductSaleInfosResponse
       */
      Models::ListSelectionProductSaleInfosResponse listSelectionProductSaleInfosWithOptions(const Models::ListSelectionProductSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sales information of products in the selection pool in batches.
       *
       * @description Queries the sales information of products in the selection pool in batches. Distributors can call this operation to batch query product sales information, such as product status. You can use the divisionCode parameter (we recommend passing a level-5 address code for a town or sub-district) to batch query whether a product is available for sale in a specific region.
       *
       * @param request ListSelectionProductSaleInfosRequest
       * @return ListSelectionProductSaleInfosResponse
       */
      Models::ListSelectionProductSaleInfosResponse listSelectionProductSaleInfos(const Models::ListSelectionProductSaleInfosRequest &request);

      /**
       * @summary Queries the list of products in the product selection pool.
       *
       * @param request ListSelectionProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionProductsResponse
       */
      Models::ListSelectionProductsResponse listSelectionProductsWithOptions(const Models::ListSelectionProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of products in the product selection pool.
       *
       * @param request ListSelectionProductsRequest
       * @return ListSelectionProductsResponse
       */
      Models::ListSelectionProductsResponse listSelectionProducts(const Models::ListSelectionProductsRequest &request);

      /**
       * @summary Queries the sales information of SKUs in a selection pool in batches.
       *
       * @description Batch query of SKU sales information in a selection pool: Distributors can call this operation to query SKU sales information in batches, such as SKU status. You can use the divisionCode parameter to query whether SKUs are available for sale in a specific region in batches. We recommend that you specify a level-5 division code, such as a town or sub-district code.
       *
       * @param request ListSelectionSkuSaleInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionSkuSaleInfosResponse
       */
      Models::ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfosWithOptions(const Models::ListSelectionSkuSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sales information of SKUs in a selection pool in batches.
       *
       * @description Batch query of SKU sales information in a selection pool: Distributors can call this operation to query SKU sales information in batches, such as SKU status. You can use the divisionCode parameter to query whether SKUs are available for sale in a specific region in batches. We recommend that you specify a level-5 division code, such as a town or sub-district code.
       *
       * @param request ListSelectionSkuSaleInfosRequest
       * @return ListSelectionSkuSaleInfosResponse
       */
      Models::ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfos(const Models::ListSelectionSkuSaleInfosRequest &request);

      /**
       * @summary Queries the sub-region codes.
       *
       * @description Queries the sub-region codes.
       *
       * @param request QueryChildDivisionCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChildDivisionCodeResponse
       */
      Models::QueryChildDivisionCodeResponse queryChildDivisionCodeWithOptions(const Models::QueryChildDivisionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the sub-region codes.
       *
       * @description Queries the sub-region codes.
       *
       * @param request QueryChildDivisionCodeRequest
       * @return QueryChildDivisionCodeResponse
       */
      Models::QueryChildDivisionCodeResponse queryChildDivisionCode(const Models::QueryChildDivisionCodeRequest &request);

      /**
       * @summary Lists orders.
       *
       * @description Lists orders.
       *
       * @param request QueryOrdersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrdersWithOptions(const Models::QueryOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists orders.
       *
       * @description Lists orders.
       *
       * @param request QueryOrdersRequest
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrders(const Models::QueryOrdersRequest &request);

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
      Models::RenderPurchaseOrderResponse renderPurchaseOrderWithOptions(const Models::RenderPurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renders a purchase order and returns both sellable and unsellable products. Customers can then select the sellable products to place their orders.
       *
       * @description >Warning: 
       * This API will be offline soon. For purchase order rendering, use the SplitPurchaseOrder API, which supports both purchase order rendering and splitting.
       *
       * @param request RenderPurchaseOrderRequest
       * @return RenderPurchaseOrderResponse
       */
      Models::RenderPurchaseOrderResponse renderPurchaseOrder(const Models::RenderPurchaseOrderRequest &request);

      /**
       * @summary Renders a reverse order.
       *
       * @description Renders an after-sales order.
       *
       * @param request RenderRefundOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenderRefundOrderResponse
       */
      Models::RenderRefundOrderResponse renderRefundOrderWithOptions(const Models::RenderRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renders a reverse order.
       *
       * @description Renders an after-sales order.
       *
       * @param request RenderRefundOrderRequest
       * @return RenderRefundOrderResponse
       */
      Models::RenderRefundOrderResponse renderRefundOrder(const Models::RenderRefundOrderRequest &request);

      /**
       * @summary Queries products based on various conditions and returns paginated results.
       *
       * @description Performs a paged query on the product list based on the page number and paging size.
       *
       * @param request SearchProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchProductsResponse
       */
      Models::SearchProductsResponse searchProductsWithOptions(const Models::SearchProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries products based on various conditions and returns paginated results.
       *
       * @description Performs a paged query on the product list based on the page number and paging size.
       *
       * @param request SearchProductsRequest
       * @return SearchProductsResponse
       */
      Models::SearchProductsResponse searchProducts(const Models::SearchProductsRequest &request);

      /**
       * @summary Adds products to the selection pool for a distributor.
       *
       * @description Distributors can use this API operation to add products to the selection pool.
       * > Integrate this API operation if you are a distributor customer who registered on or after January 1, 2025. For details about the import operations and their impacts, refer to [Product best practices](https://www.alibabacloud.com/help/en/linkedmall/user-guide/product-interface-best-practices#lFENl).
       *
       * @param request SelectionGroupAddProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectionGroupAddProductResponse
       */
      Models::SelectionGroupAddProductResponse selectionGroupAddProductWithOptions(const Models::SelectionGroupAddProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds products to the selection pool for a distributor.
       *
       * @description Distributors can use this API operation to add products to the selection pool.
       * > Integrate this API operation if you are a distributor customer who registered on or after January 1, 2025. For details about the import operations and their impacts, refer to [Product best practices](https://www.alibabacloud.com/help/en/linkedmall/user-guide/product-interface-best-practices#lFENl).
       *
       * @param request SelectionGroupAddProductRequest
       * @return SelectionGroupAddProductResponse
       */
      Models::SelectionGroupAddProductResponse selectionGroupAddProduct(const Models::SelectionGroupAddProductRequest &request);

      /**
       * @summary Dispatches products for a distributor.
       *
       * @description Allows a distributor to dispatch products.
       *
       * @param request SelectionGroupRemoveProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectionGroupRemoveProductResponse
       */
      Models::SelectionGroupRemoveProductResponse selectionGroupRemoveProductWithOptions(const Models::SelectionGroupRemoveProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dispatches products for a distributor.
       *
       * @description Allows a distributor to dispatch products.
       *
       * @param request SelectionGroupRemoveProductRequest
       * @return SelectionGroupRemoveProductResponse
       */
      Models::SelectionGroupRemoveProductResponse selectionGroupRemoveProduct(const Models::SelectionGroupRemoveProductRequest &request);

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
      Models::SplitPurchaseOrderResponse splitPurchaseOrderWithOptions(const Models::SplitPurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Splits a purchase order and renders the resulting parent-child order structure. This API returns a list of items based on the final parent-child order structure. Distributors can use this response to render the final parent-child order layout, which simplifies receiving the purchase order creation success message and backfilling parent-child order information later.
       *
       * @description Call this API before creating a purchase order. It returns two lists: one for sellable items and one for unsellable items. The sellable items list follows the final parent-child order split structure.
       *
       * @param request SplitPurchaseOrderRequest
       * @return SplitPurchaseOrderResponse
       */
      Models::SplitPurchaseOrderResponse splitPurchaseOrder(const Models::SplitPurchaseOrderRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
