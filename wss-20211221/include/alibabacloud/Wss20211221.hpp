// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WSS20211221_HPP_
#define ALIBABACLOUD_WSS20211221_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Wss20211221Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Wss20211221.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 多商品组合下单
       *
       * @param tmpReq CreateMultiOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrderWithOptions(const Models::CreateMultiOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多商品组合下单
       *
       * @param request CreateMultiOrderRequest
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrder(const Models::CreateMultiOrderRequest &request);

      /**
       * @summary 查询物流地址
       *
       * @param request DescribeDeliveryAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeliveryAddressResponse
       */
      Models::DescribeDeliveryAddressResponse describeDeliveryAddressWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询物流地址
       *
       * @return DescribeDeliveryAddressResponse
       */
      Models::DescribeDeliveryAddressResponse describeDeliveryAddress();

      /**
       * @summary 批量询价
       *
       * @param request DescribeMultiPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPriceWithOptions(const Models::DescribeMultiPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量询价
       *
       * @param request DescribeMultiPriceRequest
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPrice(const Models::DescribeMultiPriceRequest &request);

      /**
       * @summary 查询核时包抵扣明细
       *
       * @param request DescribePackageDeductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductionsWithOptions(const Models::DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询核时包抵扣明细
       *
       * @param request DescribePackageDeductionsRequest
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductions(const Models::DescribePackageDeductionsRequest &request);

      /**
       * @summary 更新实例属性
       *
       * @param request ModifyInstancePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstancePropertiesResponse
       */
      Models::ModifyInstancePropertiesResponse modifyInstancePropertiesWithOptions(const Models::ModifyInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例属性
       *
       * @param request ModifyInstancePropertiesRequest
       * @return ModifyInstancePropertiesResponse
       */
      Models::ModifyInstancePropertiesResponse modifyInstanceProperties(const Models::ModifyInstancePropertiesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
