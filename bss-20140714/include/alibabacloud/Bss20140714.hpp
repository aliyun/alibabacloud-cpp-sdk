// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BSS20140714_HPP_
#define ALIBABACLOUD_BSS20140714_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Bss20140714Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Bss20140714.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建订单
       *
       * @param request CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建订单
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary 获取现金明细
       *
       * @param request DescribeCashDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCashDetailResponse
       */
      Models::DescribeCashDetailResponse describeCashDetailWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取现金明细
       *
       * @return DescribeCashDetailResponse
       */
      Models::DescribeCashDetailResponse describeCashDetail();

      /**
       * @summary 查询卡券列表
       *
       * @param request DescribeCouponListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCouponListResponse
       */
      Models::DescribeCouponListResponse describeCouponListWithOptions(const Models::DescribeCouponListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询卡券列表
       *
       * @param request DescribeCouponListRequest
       * @return DescribeCouponListResponse
       */
      Models::DescribeCouponListResponse describeCouponList(const Models::DescribeCouponListRequest &request);

      /**
       * @summary 生产开通回调接口
       *
       * @param request OpenCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenCallbackResponse
       */
      Models::OpenCallbackResponse openCallbackWithOptions(const Models::OpenCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生产开通回调接口
       *
       * @param request OpenCallbackRequest
       * @return OpenCallbackResponse
       */
      Models::OpenCallbackResponse openCallback(const Models::OpenCallbackRequest &request);

      /**
       * @summary 订单询价
       *
       * @param request QueryForCssOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryForCssOrderResponse
       */
      Models::QueryForCssOrderResponse queryForCssOrderWithOptions(const Models::QueryForCssOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订单询价
       *
       * @param request QueryForCssOrderRequest
       * @return QueryForCssOrderResponse
       */
      Models::QueryForCssOrderResponse queryForCssOrder(const Models::QueryForCssOrderRequest &request);

      /**
       * @summary vnoBatchRefundOrder
       *
       * @param request VnoBatchRefundOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VnoBatchRefundOrderResponse
       */
      Models::VnoBatchRefundOrderResponse vnoBatchRefundOrderWithOptions(const Models::VnoBatchRefundOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary vnoBatchRefundOrder
       *
       * @param request VnoBatchRefundOrderRequest
       * @return VnoBatchRefundOrderResponse
       */
      Models::VnoBatchRefundOrderResponse vnoBatchRefundOrder(const Models::VnoBatchRefundOrderRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
