// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_INTLMARKET20250812_HPP_
#define ALIBABACLOUD_INTLMARKET20250812_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IntlMarket20250812Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IntlMarket20250812.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntlMarket20250812
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建云市场订单
       *
       * @param request CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建云市场订单
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary 询价
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 询价
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IntlMarket20250812
#endif
