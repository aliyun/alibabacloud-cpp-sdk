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
       * @summary Use this API to order, renew, and modify specific products, such as monthly resource plans for Elastic Desktop Service (EDS) Enterprise Edition.
       *
       * @description <props="china">
       * Before calling this API, make sure you understand how Wuying Workspace is billed and its [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws).
       * <props="intl">
       * Before calling this API, make sure you understand how Wuying Workspace is billed and its [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560).
       * If you do not specify automatic payment, this API does not handle the payment. You must use the returned order ID to construct a payment URL. The order becomes active and the resource is provisioned only after the payment is complete.
       *
       * @param tmpReq CreateMultiOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrderWithOptions(const Models::CreateMultiOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this API to order, renew, and modify specific products, such as monthly resource plans for Elastic Desktop Service (EDS) Enterprise Edition.
       *
       * @description <props="china">
       * Before calling this API, make sure you understand how Wuying Workspace is billed and its [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws).
       * <props="intl">
       * Before calling this API, make sure you understand how Wuying Workspace is billed and its [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560).
       * If you do not specify automatic payment, this API does not handle the payment. You must use the returned order ID to construct a payment URL. The order becomes active and the resource is provisioned only after the payment is complete.
       *
       * @param request CreateMultiOrderRequest
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrder(const Models::CreateMultiOrderRequest &request);

      /**
       * @summary Queries a list of agents and their usage information.
       *
       * @description ## Usage notes
       * - **Pagination**: This operation supports pagination by using the `NextToken` and `MaxResults` parameters. For the first request, set `NextToken` to an empty string.
       * - **Filtering**: Use the `AgentType` and `AgentIds` parameters to filter the results.
       * - **Status filtering**: Use the `Status` parameter to filter agents by status. Valid values are 0 (deleted) and 1 (active).
       * - **Sorting**: By default, the results are sorted by `id` in ascending order.
       * - **Additional parameter for anonymous edition**: The `FillInstance` parameter automatically populates the ID of the JVS_COPILOT agent that is associated with the current user.
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgentsWithOptions(const Models::DescribeCreditPackageAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of agents and their usage information.
       *
       * @description ## Usage notes
       * - **Pagination**: This operation supports pagination by using the `NextToken` and `MaxResults` parameters. For the first request, set `NextToken` to an empty string.
       * - **Filtering**: Use the `AgentType` and `AgentIds` parameters to filter the results.
       * - **Status filtering**: Use the `Status` parameter to filter agents by status. Valid values are 0 (deleted) and 1 (active).
       * - **Sorting**: By default, the results are sorted by `id` in ascending order.
       * - **Additional parameter for anonymous edition**: The `FillInstance` parameter automatically populates the ID of the JVS_COPILOT agent that is associated with the current user.
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgents(const Models::DescribeCreditPackageAgentsRequest &request);

      /**
       * @summary Queries credit usage by a specified dimension such as user, credit package, or agent.
       *
       * @description ## Operation description
       * This API operation queries credit usage details based on the dimension specified by `UsageType` (User, CreditPackage, or Agent). The response includes the total, remaining, and used credits of the current credit package, hourly consumption samples, alert thresholds, period quotas, and other information.
       * - **User**: User dimension. Returns the aggregated usage and remaining credits across all active credit packages for the current user.
       * - **CreditPackage**: Credit package dimension. Returns the total, remaining, and consumption samples for a specified credit package instance.
       * - **Agent**: Agent dimension. Returns the cumulative usage, current period usage, quota, alert, and other information for a specified agent.
       * **Notes**:
       * - The `InstanceIds` parameter can be omitted when `UsageType=User`. Set this parameter to the credit package instance ID when `UsageType=CreditPackage`, or to the AgentId when `UsageType=Agent`.
       * - Anonymous requests support the `FillInstance` parameter. If `InstanceIds` is not explicitly specified and `FillInstance=true`, the server automatically populates the bound `JVS_COPILOT` AgentId based on the current logon `wyId`.
       * - Time window constants: The `dayUsedCredit` statistics window is `now - ONE_DAY_MILLIS`, and the `weekUsedCredit` statistics window is `now - ONE_WEEK_MILLIS`.
       * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
       *
       * @param request DescribeCreditUsageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfoWithOptions(const Models::DescribeCreditUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries credit usage by a specified dimension such as user, credit package, or agent.
       *
       * @description ## Operation description
       * This API operation queries credit usage details based on the dimension specified by `UsageType` (User, CreditPackage, or Agent). The response includes the total, remaining, and used credits of the current credit package, hourly consumption samples, alert thresholds, period quotas, and other information.
       * - **User**: User dimension. Returns the aggregated usage and remaining credits across all active credit packages for the current user.
       * - **CreditPackage**: Credit package dimension. Returns the total, remaining, and consumption samples for a specified credit package instance.
       * - **Agent**: Agent dimension. Returns the cumulative usage, current period usage, quota, alert, and other information for a specified agent.
       * **Notes**:
       * - The `InstanceIds` parameter can be omitted when `UsageType=User`. Set this parameter to the credit package instance ID when `UsageType=CreditPackage`, or to the AgentId when `UsageType=Agent`.
       * - Anonymous requests support the `FillInstance` parameter. If `InstanceIds` is not explicitly specified and `FillInstance=true`, the server automatically populates the bound `JVS_COPILOT` AgentId based on the current logon `wyId`.
       * - Time window constants: The `dayUsedCredit` statistics window is `now - ONE_DAY_MILLIS`, and the `weekUsedCredit` statistics window is `now - ONE_WEEK_MILLIS`.
       * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
       *
       * @param request DescribeCreditUsageInfoRequest
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfo(const Models::DescribeCreditUsageInfoRequest &request);

      /**
       * @summary Retrieves resource deduction and usage statistics based on specified criteria.
       *
       * @description ## Request
       * - This API supports GET and POST methods.
       * - The `periods` parameter is a JSON array of `PeriodParam` objects, each containing the `periodUnit` and `baseTime` fields.
       * - The `resourceTypes` parameter is a JSON array of resource type strings.
       * - The `startTime` and `endTime` parameters are timestamps that define the query\\"s time range.
       * - The `nextToken`, `maxResults`, `pageNo`, and `pageSize` parameters control pagination and the number of results to return.
       * - The API throws a `SalesClientException` if the `resourceTypes` parameter contains an invalid value or if the `periods` parameter fails JSON parsing.
       *
       * @param request DescribeDeductionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeductionStatisticResponse
       */
      Models::DescribeDeductionStatisticResponse describeDeductionStatisticWithOptions(const Models::DescribeDeductionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves resource deduction and usage statistics based on specified criteria.
       *
       * @description ## Request
       * - This API supports GET and POST methods.
       * - The `periods` parameter is a JSON array of `PeriodParam` objects, each containing the `periodUnit` and `baseTime` fields.
       * - The `resourceTypes` parameter is a JSON array of resource type strings.
       * - The `startTime` and `endTime` parameters are timestamps that define the query\\"s time range.
       * - The `nextToken`, `maxResults`, `pageNo`, and `pageSize` parameters control pagination and the number of results to return.
       * - The API throws a `SalesClientException` if the `resourceTypes` parameter contains an invalid value or if the `periods` parameter fails JSON parsing.
       *
       * @param request DescribeDeductionStatisticRequest
       * @return DescribeDeductionStatisticResponse
       */
      Models::DescribeDeductionStatisticResponse describeDeductionStatistic(const Models::DescribeDeductionStatisticRequest &request);

      /**
       * @summary Retrieves information about delivery addresses.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeliveryAddressResponse
       */
      Models::DescribeDeliveryAddressResponse describeDeliveryAddressWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about delivery addresses.
       *
       * @return DescribeDeliveryAddressResponse
       */
      Models::DescribeDeliveryAddressResponse describeDeliveryAddress();

      /**
       * @summary Queries prices for Elastic Desktop Service products, covering order types such as purchase, renewal, configuration change, and cancellation.
       *
       * @description <props="china">
       * Before using this interface, ensure you understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) for Wuying Workspace.
       *
       * @param request DescribeMultiPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPriceWithOptions(const Models::DescribeMultiPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries prices for Elastic Desktop Service products, covering order types such as purchase, renewal, configuration change, and cancellation.
       *
       * @description <props="china">
       * Before using this interface, ensure you understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) for Wuying Workspace.
       *
       * @param request DescribeMultiPriceRequest
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPrice(const Models::DescribeMultiPriceRequest &request);

      /**
       * @summary Query deduction details for time-based packages.
       *
       * @param request DescribePackageDeductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductionsWithOptions(const Models::DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query deduction details for time-based packages.
       *
       * @param request DescribePackageDeductionsRequest
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductions(const Models::DescribePackageDeductionsRequest &request);

      /**
       * @summary Modifies the attributes of an instance.
       *
       * @param request ModifyInstancePropertiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstancePropertiesResponse
       */
      Models::ModifyInstancePropertiesResponse modifyInstancePropertiesWithOptions(const Models::ModifyInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an instance.
       *
       * @param request ModifyInstancePropertiesRequest
       * @return ModifyInstancePropertiesResponse
       */
      Models::ModifyInstancePropertiesResponse modifyInstanceProperties(const Models::ModifyInstancePropertiesRequest &request);

      /**
       * @summary Sets the credit quota for specified Agents.
       *
       * @description ## Description
       * This operation sets the credit quota for one or more Agents of a specific type.
       * ### Usage notes
       * - The `AgentType` parameter specifies the type of Agent to which the quota applies, such as `JVSClaw` or `OpenClaw`.
       * - The `AgentIds` parameter is an array of up to 100 Agent IDs.
       * - The `CreditQuota` parameter specifies the credit quota for each Agent.
       * ### Examples
       *
       * @param request SetAgentCreditQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAgentCreditQuotaResponse
       */
      Models::SetAgentCreditQuotaResponse setAgentCreditQuotaWithOptions(const Models::SetAgentCreditQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the credit quota for specified Agents.
       *
       * @description ## Description
       * This operation sets the credit quota for one or more Agents of a specific type.
       * ### Usage notes
       * - The `AgentType` parameter specifies the type of Agent to which the quota applies, such as `JVSClaw` or `OpenClaw`.
       * - The `AgentIds` parameter is an array of up to 100 Agent IDs.
       * - The `CreditQuota` parameter specifies the credit quota for each Agent.
       * ### Examples
       *
       * @param request SetAgentCreditQuotaRequest
       * @return SetAgentCreditQuotaResponse
       */
      Models::SetAgentCreditQuotaResponse setAgentCreditQuota(const Models::SetAgentCreditQuotaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
