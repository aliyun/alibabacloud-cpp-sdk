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
       * @summary 查询积分包Agent列表
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgentsWithOptions(const Models::DescribeCreditPackageAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询积分包Agent列表
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgents(const Models::DescribeCreditPackageAgentsRequest &request);

      /**
       * @summary 查询积分包用量信息
       *
       * @param request DescribeCreditUsageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfoWithOptions(const Models::DescribeCreditUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询积分包用量信息
       *
       * @param request DescribeCreditUsageInfoRequest
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfo(const Models::DescribeCreditUsageInfoRequest &request);

      /**
       * @summary 查询计量消耗信息
       *
       * @param request DescribeDeductionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeductionStatisticResponse
       */
      Models::DescribeDeductionStatisticResponse describeDeductionStatisticWithOptions(const Models::DescribeDeductionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询计量消耗信息
       *
       * @param request DescribeDeductionStatisticRequest
       * @return DescribeDeductionStatisticResponse
       */
      Models::DescribeDeductionStatisticResponse describeDeductionStatistic(const Models::DescribeDeductionStatisticRequest &request);

      /**
       * @summary 查询物流地址
       *
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

      /**
       * @summary 批量设置Agent积分配额
       *
       * @param request SetAgentCreditQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAgentCreditQuotaResponse
       */
      Models::SetAgentCreditQuotaResponse setAgentCreditQuotaWithOptions(const Models::SetAgentCreditQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量设置Agent积分配额
       *
       * @param request SetAgentCreditQuotaRequest
       * @return SetAgentCreditQuotaResponse
       */
      Models::SetAgentCreditQuotaResponse setAgentCreditQuota(const Models::SetAgentCreditQuotaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
