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
       * @summary 取消逆向单
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRefundOrderResponse
       */
      Models::CancelRefundOrderResponse cancelRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消逆向单
       *
       * @return CancelRefundOrderResponse
       */
      Models::CancelRefundOrderResponse cancelRefundOrder(const string &disputeId);

      /**
       * @summary 确认收货（订单）
       *
       * @param request ConfirmDisburseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmDisburseResponse
       */
      Models::ConfirmDisburseResponse confirmDisburseWithOptions(const Models::ConfirmDisburseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认收货（订单）
       *
       * @param request ConfirmDisburseRequest
       * @return ConfirmDisburseResponse
       */
      Models::ConfirmDisburseResponse confirmDisburse(const Models::ConfirmDisburseRequest &request);

      /**
       * @summary 提交运单信息
       *
       * @param request CreateGoodsShippingNoticeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGoodsShippingNoticeResponse
       */
      Models::CreateGoodsShippingNoticeResponse createGoodsShippingNoticeWithOptions(const Models::CreateGoodsShippingNoticeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交运单信息
       *
       * @param request CreateGoodsShippingNoticeRequest
       * @return CreateGoodsShippingNoticeResponse
       */
      Models::CreateGoodsShippingNoticeResponse createGoodsShippingNotice(const Models::CreateGoodsShippingNoticeRequest &request);

      /**
       * @summary 创建采购单
       *
       * @param request CreatePurchaseOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePurchaseOrderResponse
       */
      Models::CreatePurchaseOrderResponse createPurchaseOrderWithOptions(const Models::CreatePurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建采购单
       *
       * @param request CreatePurchaseOrderRequest
       * @return CreatePurchaseOrderResponse
       */
      Models::CreatePurchaseOrderResponse createPurchaseOrder(const Models::CreatePurchaseOrderRequest &request);

      /**
       * @summary 创建逆向单
       *
       * @param request CreateRefundOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRefundOrderResponse
       */
      Models::CreateRefundOrderResponse createRefundOrderWithOptions(const Models::CreateRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建逆向单
       *
       * @param request CreateRefundOrderRequest
       * @return CreateRefundOrderResponse
       */
      Models::CreateRefundOrderResponse createRefundOrder(const Models::CreateRefundOrderRequest &request);

      /**
       * @summary 查询主单详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrderResponse
       */
      Models::GetOrderResponse getOrderWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主单详情
       *
       * @return GetOrderResponse
       */
      Models::GetOrderResponse getOrder(const string &orderId);

      /**
       * @summary 查询采购单状态
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaseOrderStatusResponse
       */
      Models::GetPurchaseOrderStatusResponse getPurchaseOrderStatusWithOptions(const string &purchaseOrderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询采购单状态
       *
       * @return GetPurchaseOrderStatusResponse
       */
      Models::GetPurchaseOrderStatusResponse getPurchaseOrderStatus(const string &purchaseOrderId);

      /**
       * @summary 查询分销商店铺
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPurchaserShopResponse
       */
      Models::GetPurchaserShopResponse getPurchaserShopWithOptions(const string &purchaserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询分销商店铺
       *
       * @return GetPurchaserShopResponse
       */
      Models::GetPurchaserShopResponse getPurchaserShop(const string &purchaserId);

      /**
       * @summary 查询逆向单详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRefundOrderResponse
       */
      Models::GetRefundOrderResponse getRefundOrderWithOptions(const string &disputeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询逆向单详情
       *
       * @return GetRefundOrderResponse
       */
      Models::GetRefundOrderResponse getRefundOrder(const string &disputeId);

      /**
       * @summary 查询选品池商品详情
       *
       * @param request GetSelectionProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSelectionProductResponse
       */
      Models::GetSelectionProductResponse getSelectionProductWithOptions(const string &productId, const Models::GetSelectionProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询选品池商品详情
       *
       * @param request GetSelectionProductRequest
       * @return GetSelectionProductResponse
       */
      Models::GetSelectionProductResponse getSelectionProduct(const string &productId, const Models::GetSelectionProductRequest &request);

      /**
       * @summary 查询选品池商品库存
       *
       * @param request GetSelectionProductSaleInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSelectionProductSaleInfoResponse
       */
      Models::GetSelectionProductSaleInfoResponse getSelectionProductSaleInfoWithOptions(const string &productId, const Models::GetSelectionProductSaleInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询选品池商品库存
       *
       * @param request GetSelectionProductSaleInfoRequest
       * @return GetSelectionProductSaleInfoResponse
       */
      Models::GetSelectionProductSaleInfoResponse getSelectionProductSaleInfo(const string &productId, const Models::GetSelectionProductSaleInfoRequest &request);

      /**
       * @summary 查询类目
       *
       * @param request ListCategoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询类目
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @summary 查询物流信息（订单）
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogisticsOrdersResponse
       */
      Models::ListLogisticsOrdersResponse listLogisticsOrdersWithOptions(const string &orderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询物流信息（订单）
       *
       * @return ListLogisticsOrdersResponse
       */
      Models::ListLogisticsOrdersResponse listLogisticsOrders(const string &orderId);

      /**
       * @summary 采购方店铺列表查询
       *
       * @param request ListPurchaserShopsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPurchaserShopsResponse
       */
      Models::ListPurchaserShopsResponse listPurchaserShopsWithOptions(const Models::ListPurchaserShopsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 采购方店铺列表查询
       *
       * @param request ListPurchaserShopsRequest
       * @return ListPurchaserShopsResponse
       */
      Models::ListPurchaserShopsResponse listPurchaserShops(const Models::ListPurchaserShopsRequest &request);

      /**
       * @summary 批量查询选品池商品库存
       *
       * @param request ListSelectionProductSaleInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionProductSaleInfosResponse
       */
      Models::ListSelectionProductSaleInfosResponse listSelectionProductSaleInfosWithOptions(const Models::ListSelectionProductSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询选品池商品库存
       *
       * @param request ListSelectionProductSaleInfosRequest
       * @return ListSelectionProductSaleInfosResponse
       */
      Models::ListSelectionProductSaleInfosResponse listSelectionProductSaleInfos(const Models::ListSelectionProductSaleInfosRequest &request);

      /**
       * @summary 查询商品列表
       *
       * @param request ListSelectionProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionProductsResponse
       */
      Models::ListSelectionProductsResponse listSelectionProductsWithOptions(const Models::ListSelectionProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询商品列表
       *
       * @param request ListSelectionProductsRequest
       * @return ListSelectionProductsResponse
       */
      Models::ListSelectionProductsResponse listSelectionProducts(const Models::ListSelectionProductsRequest &request);

      /**
       * @summary 批量查询选品池商品SKU库存
       *
       * @param request ListSelectionSkuSaleInfosRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSelectionSkuSaleInfosResponse
       */
      Models::ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfosWithOptions(const Models::ListSelectionSkuSaleInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询选品池商品SKU库存
       *
       * @param request ListSelectionSkuSaleInfosRequest
       * @return ListSelectionSkuSaleInfosResponse
       */
      Models::ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfos(const Models::ListSelectionSkuSaleInfosRequest &request);

      /**
       * @summary 查询地址divisionCode
       *
       * @param request QueryChildDivisionCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryChildDivisionCodeResponse
       */
      Models::QueryChildDivisionCodeResponse queryChildDivisionCodeWithOptions(const Models::QueryChildDivisionCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询地址divisionCode
       *
       * @param request QueryChildDivisionCodeRequest
       * @return QueryChildDivisionCodeResponse
       */
      Models::QueryChildDivisionCodeResponse queryChildDivisionCode(const Models::QueryChildDivisionCodeRequest &request);

      /**
       * @summary 查询主单列表
       *
       * @param request QueryOrdersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrdersWithOptions(const Models::QueryOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主单列表
       *
       * @param request QueryOrdersRequest
       * @return QueryOrdersResponse
       */
      Models::QueryOrdersResponse queryOrders(const Models::QueryOrdersRequest &request);

      /**
       * @summary 渲染采购单
       *
       * @param request RenderPurchaseOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenderPurchaseOrderResponse
       */
      Models::RenderPurchaseOrderResponse renderPurchaseOrderWithOptions(const Models::RenderPurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 渲染采购单
       *
       * @param request RenderPurchaseOrderRequest
       * @return RenderPurchaseOrderResponse
       */
      Models::RenderPurchaseOrderResponse renderPurchaseOrder(const Models::RenderPurchaseOrderRequest &request);

      /**
       * @summary 逆向单渲染
       *
       * @param request RenderRefundOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenderRefundOrderResponse
       */
      Models::RenderRefundOrderResponse renderRefundOrderWithOptions(const Models::RenderRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 逆向单渲染
       *
       * @param request RenderRefundOrderRequest
       * @return RenderRefundOrderResponse
       */
      Models::RenderRefundOrderResponse renderRefundOrder(const Models::RenderRefundOrderRequest &request);

      /**
       * @summary 搜索商品
       *
       * @param request SearchProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchProductsResponse
       */
      Models::SearchProductsResponse searchProductsWithOptions(const Models::SearchProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索商品
       *
       * @param request SearchProductsRequest
       * @return SearchProductsResponse
       */
      Models::SearchProductsResponse searchProducts(const Models::SearchProductsRequest &request);

      /**
       * @summary 入库操作
       *
       * @param request SelectionGroupAddProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectionGroupAddProductResponse
       */
      Models::SelectionGroupAddProductResponse selectionGroupAddProductWithOptions(const Models::SelectionGroupAddProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 入库操作
       *
       * @param request SelectionGroupAddProductRequest
       * @return SelectionGroupAddProductResponse
       */
      Models::SelectionGroupAddProductResponse selectionGroupAddProduct(const Models::SelectionGroupAddProductRequest &request);

      /**
       * @summary 出库操作
       *
       * @param request SelectionGroupRemoveProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectionGroupRemoveProductResponse
       */
      Models::SelectionGroupRemoveProductResponse selectionGroupRemoveProductWithOptions(const Models::SelectionGroupRemoveProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 出库操作
       *
       * @param request SelectionGroupRemoveProductRequest
       * @return SelectionGroupRemoveProductResponse
       */
      Models::SelectionGroupRemoveProductResponse selectionGroupRemoveProduct(const Models::SelectionGroupRemoveProductRequest &request);

      /**
       * @summary 渲染拆分采购单
       *
       * @param request SplitPurchaseOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SplitPurchaseOrderResponse
       */
      Models::SplitPurchaseOrderResponse splitPurchaseOrderWithOptions(const Models::SplitPurchaseOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 渲染拆分采购单
       *
       * @param request SplitPurchaseOrderRequest
       * @return SplitPurchaseOrderResponse
       */
      Models::SplitPurchaseOrderResponse splitPurchaseOrder(const Models::SplitPurchaseOrderRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
