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
       * @summary Cancels a refund order.
       *
       * @description Cancel a refund order.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRefundOrderResponse
       */
      Models::CancelRefundOrderResponse cancelRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a refund order.
       *
       * @description Cancel a refund order.
       *
       * @return CancelRefundOrderResponse
       */
      Models::CancelRefundOrderResponse cancelRefundOrder(const string &disputeId);

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
      Models::ConfirmDisburseResponse confirmDisburseWithOptions(const Models::ConfirmDisburseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms the receipt of goods.
       *
       * @description Confirms the receipt of goods.
       *
       * @param request ConfirmDisburseRequest
       * @return ConfirmDisburseResponse
       */
      Models::ConfirmDisburseResponse confirmDisburse(const Models::ConfirmDisburseRequest &request);

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
      Models::CreateGoodsShippingNoticeResponse createGoodsShippingNoticeWithOptions(const Models::CreateGoodsShippingNoticeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Backfill shipping notice information.
       *
       * @description Backfill shipping notice information.
       *
       * @param request CreateGoodsShippingNoticeRequest
       * @return CreateGoodsShippingNoticeResponse
       */
      Models::CreateGoodsShippingNoticeResponse createGoodsShippingNotice(const Models::CreateGoodsShippingNoticeRequest &request);

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
      Models::CreatePurchaseOrderResponse createPurchaseOrderWithOptions(const Models::CreatePurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreatePurchaseOrderResponse createPurchaseOrder(const Models::CreatePurchaseOrderRequest &request);

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
      Models::CreateRefundOrderResponse createRefundOrderWithOptions(const Models::CreateRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a support ticket.
       *
       * @description Creates a refund order.
       *
       * @param request CreateRefundOrderRequest
       * @return CreateRefundOrderResponse
       */
      Models::CreateRefundOrderResponse createRefundOrder(const Models::CreateRefundOrderRequest &request);

      /**
       * @summary Queries the details of an order.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderResponse
       */
      Models::GetOrderResponse getOrderWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an order.
       *
       * @return GetOrderResponse
       */
      Models::GetOrderResponse getOrder(const string &orderId);

      /**
       * @summary Retrieve the purchase order status.
       *
       * @description Retrieve the transaction order status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaseOrderStatusResponse
       */
      Models::GetPurchaseOrderStatusResponse getPurchaseOrderStatusWithOptions(const string &purchaseOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the purchase order status.
       *
       * @description Retrieve the transaction order status.
       *
       * @return GetPurchaseOrderStatusResponse
       */
      Models::GetPurchaseOrderStatusResponse getPurchaseOrderStatus(const string &purchaseOrderId);

      /**
       * @summary Retrieves the purchaser\\"s shop.
       *
       * @description Retrieves the purchaser\\"s shop.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaserShopResponse
       */
      Models::GetPurchaserShopResponse getPurchaserShopWithOptions(const string &purchaserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the purchaser\\"s shop.
       *
       * @description Retrieves the purchaser\\"s shop.
       *
       * @return GetPurchaserShopResponse
       */
      Models::GetPurchaserShopResponse getPurchaserShop(const string &purchaserId);

      /**
       * @summary Retrieve details of an after-sales order.
       *
       * @description Retrieve after-sales order details
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRefundOrderResponse
       */
      Models::GetRefundOrderResponse getRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details of an after-sales order.
       *
       * @description Retrieve after-sales order details
       *
       * @return GetRefundOrderResponse
       */
      Models::GetRefundOrderResponse getRefundOrder(const string &disputeId);

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
      Models::GetSelectionProductResponse getSelectionProductWithOptions(const string &productId, const Models::GetSelectionProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a product in the selection pool.
       *
       * @description Retrieve product details from the selection pool using the product ID. You can also specify a region code to check regional inventory.
       *
       * @param request GetSelectionProductRequest
       * @return GetSelectionProductResponse
       */
      Models::GetSelectionProductResponse getSelectionProduct(const string &productId, const Models::GetSelectionProductRequest &request);

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
      Models::GetSelectionProductSaleInfoResponse getSelectionProductSaleInfoWithOptions(const string &productId, const Models::GetSelectionProductSaleInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries sales information for products in the selection pool.
       *
       * @description Queries sales information for products in the selection pool. Distributors can call this operation to check product sales details, such as product status. Use the divisionCode input parameter to check whether a product is available for sale in a specific region. We recommend using a five-level administrative division code (township or subdistrict level).
       *
       * @param request GetSelectionProductSaleInfoRequest
       * @return GetSelectionProductSaleInfoResponse
       */
      Models::GetSelectionProductSaleInfoResponse getSelectionProductSaleInfo(const string &productId, const Models::GetSelectionProductSaleInfoRequest &request);

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
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists categories.
       *
       * @description Retrieves all subcategories for a parent category ID, or the details for a specific category ID.
       * If the parent category ID (parentCategoryId) is 0, the API returns the top-level categories under the root category.
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @summary Query logistics information for an order.
       *
       * @description Retrieves logistics information for an order.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogisticsOrdersResponse
       */
      Models::ListLogisticsOrdersResponse listLogisticsOrdersWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query logistics information for an order.
       *
       * @description Retrieves logistics information for an order.
       *
       * @return ListLogisticsOrdersResponse
       */
      Models::ListLogisticsOrdersResponse listLogisticsOrders(const string &orderId);

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
      Models::ListPurchaserShopsResponse listPurchaserShopsWithOptions(const Models::ListPurchaserShopsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists purchaser shops.
       *
       * @description Lists purchaser shops.
       *
       * @param request ListPurchaserShopsRequest
       * @return ListPurchaserShopsResponse
       */
      Models::ListPurchaserShopsResponse listPurchaserShops(const Models::ListPurchaserShopsRequest &request);

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
      Models::ListSelectionProductSaleInfosResponse listSelectionProductSaleInfosWithOptions(const Models::ListSelectionProductSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query product sales information for the selection pool in batches.
       *
       * @description You can query product sales information for the selection pool in batches. Distributors can call this operation to retrieve product sales details, such as product status. Use the divisionCode input parameter to check whether products are available for sale in a specific region. We recommend that you pass a five-level address code (town or street level).
       *
       * @param request ListSelectionProductSaleInfosRequest
       * @return ListSelectionProductSaleInfosResponse
       */
      Models::ListSelectionProductSaleInfosResponse listSelectionProductSaleInfos(const Models::ListSelectionProductSaleInfosRequest &request);

      /**
       * @summary Retrieves a list of products from a product selection pool.
       *
       * @param request ListSelectionProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionProductsResponse
       */
      Models::ListSelectionProductsResponse listSelectionProductsWithOptions(const Models::ListSelectionProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of products from a product selection pool.
       *
       * @param request ListSelectionProductsRequest
       * @return ListSelectionProductsResponse
       */
      Models::ListSelectionProductsResponse listSelectionProducts(const Models::ListSelectionProductsRequest &request);

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
      Models::ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfosWithOptions(const Models::ListSelectionSkuSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query SKU sales information for items in the selection pool in batch.
       *
       * @description Query SKU sales information for items in the selection pool in batch. Distributors can call this API to retrieve batch details about SKU sales status and other attributes. To determine whether SKUs are sellable in a specific region, use the divisionCode parameter—preferably a five-level administrative division code for townships or subdistricts.
       *
       * @param request ListSelectionSkuSaleInfosRequest
       * @return ListSelectionSkuSaleInfosResponse
       */
      Models::ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfos(const Models::ListSelectionSkuSaleInfosRequest &request);

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
      Models::QueryChildDivisionCodeResponse queryChildDivisionCodeWithOptions(const Models::QueryChildDivisionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries child division codes.
       *
       * @description Queries child division codes.
       *
       * @param request QueryChildDivisionCodeRequest
       * @return QueryChildDivisionCodeResponse
       */
      Models::QueryChildDivisionCodeResponse queryChildDivisionCode(const Models::QueryChildDivisionCodeRequest &request);

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
      Models::QueryOrdersResponse queryOrdersWithOptions(const Models::QueryOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of orders.
       *
       * @description Queries a list of orders.
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
       * @summary Reverse Single Rendering
       *
       * @description Renders a refund order.
       *
       * @param request RenderRefundOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenderRefundOrderResponse
       */
      Models::RenderRefundOrderResponse renderRefundOrderWithOptions(const Models::RenderRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reverse Single Rendering
       *
       * @description Renders a refund order.
       *
       * @param request RenderRefundOrderRequest
       * @return RenderRefundOrderResponse
       */
      Models::RenderRefundOrderResponse renderRefundOrder(const Models::RenderRefundOrderRequest &request);

      /**
       * @summary The product search API is a paginated interface for searching products based on various criteria.
       *
       * @param request SearchProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchProductsResponse
       */
      Models::SearchProductsResponse searchProductsWithOptions(const Models::SearchProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The product search API is a paginated interface for searching products based on various criteria.
       *
       * @param request SearchProductsRequest
       * @return SearchProductsResponse
       */
      Models::SearchProductsResponse searchProducts(const Models::SearchProductsRequest &request);

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
      Models::SelectionGroupAddProductResponse selectionGroupAddProductWithOptions(const Models::SelectionGroupAddProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The distributor takes delivery of goods.
       *
       * @description Distributors use this API to add products to their selection group.
       * > We recommend that distributors who onboard on or after January 1, 2025 use this API. For more information about adding products and the related impact, see the [product best practices](https://help.aliyun.com/zh/linkedmall/user-guide/product-interface-best-practices?spm=a2c4g.11186623.help-menu-88587.d_2_2_0_8_0.58122056oN3crP\\&scm=20140722.H_2869668._.OR_help-T_cn~zh-V_1#lFENl).
       *
       * @param request SelectionGroupAddProductRequest
       * @return SelectionGroupAddProductResponse
       */
      Models::SelectionGroupAddProductResponse selectionGroupAddProduct(const Models::SelectionGroupAddProductRequest &request);

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
      Models::SelectionGroupRemoveProductResponse selectionGroupRemoveProductWithOptions(const Models::SelectionGroupRemoveProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes products from a distributor\\"s stock.
       *
       * @description Distributors use this API to remove products from their stock.
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
