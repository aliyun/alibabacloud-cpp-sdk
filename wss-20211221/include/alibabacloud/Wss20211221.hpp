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
       * @summary Places, renews, or modifies orders for specific products of Elastic Desktop Service (EDS) Enterprise Edition, such as monthly duration packages.
       *
       * @description <props="china">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of EDS.
       * <props="intl">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560) of EDS.
       * If automatic payment is not specified, this operation does not process the payment. You must use the order ID returned by this operation to construct a payment redirect URL and complete the payment before the order takes effect and the resources are provisioned.
       *
       * @param tmpReq CreateMultiOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrderWithOptions(const Models::CreateMultiOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Places, renews, or modifies orders for specific products of Elastic Desktop Service (EDS) Enterprise Edition, such as monthly duration packages.
       *
       * @description <props="china">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of EDS.
       * <props="intl">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560) of EDS.
       * If automatic payment is not specified, this operation does not process the payment. You must use the order ID returned by this operation to construct a payment redirect URL and complete the payment before the order takes effect and the resources are provisioned.
       *
       * @param request CreateMultiOrderRequest
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrder(const Models::CreateMultiOrderRequest &request);

      /**
       * @summary Queries the list of Agents and usage summary information under the current username.
       *
       * @description ## Request description
       * - **Paging support**: Use the `NextToken` and `MaxResults` parameters for paging. Set `NextToken` to an empty character string for the first request.
       * - **Filtering**: Use the `AgentType` and `AgentIds` parameters to filter the returned Agent list.
       * - **Status filtering**: Use the `Status` parameter to filter Agents by status (0: deleted, 1: active).
       * - **Sorting**: Results are sorted by `id` in ascending order by default.
       * - **Additional parameter for anonymous edition**: The `FillInstance` parameter automatically populates the bound JVS_COPILOT AgentId of the currently logged-on user.
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgentsWithOptions(const Models::DescribeCreditPackageAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Agents and usage summary information under the current username.
       *
       * @description ## Request description
       * - **Paging support**: Use the `NextToken` and `MaxResults` parameters for paging. Set `NextToken` to an empty character string for the first request.
       * - **Filtering**: Use the `AgentType` and `AgentIds` parameters to filter the returned Agent list.
       * - **Status filtering**: Use the `Status` parameter to filter Agents by status (0: deleted, 1: active).
       * - **Sorting**: Results are sorted by `id` in ascending order by default.
       * - **Additional parameter for anonymous edition**: The `FillInstance` parameter automatically populates the bound JVS_COPILOT AgentId of the currently logged-on user.
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgents(const Models::DescribeCreditPackageAgentsRequest &request);

      /**
       * @summary Queries credit usage details by a specified dimension such as user, credit package, or agent.
       *
       * @description ## Request description
       * This API queries credit usage details based on the dimension specified by `UsageType` (User / CreditPackage / Agent). The response includes the total credits, remaining credits, used credits, hourly consumption samples, alert thresholds, and period quotas of the current credit package.
       * - **User**: User dimension. Returns the aggregated usage and remaining credits of all active credit packages for the current user.
       * - **CreditPackage**: Credit package dimension. Returns the total credits, remaining credits, and consumption samples of a specified credit package instance.
       * - **Agent**: Agent dimension. Returns the cumulative usage, current period usage, quota, and alert information of a specified agent.
       * **Notes**:
       * - The `InstanceIds` parameter can be omitted when `UsageType=User`. Pass a credit package instance ID when `UsageType=CreditPackage`, or pass an AgentId when `UsageType=Agent`.
       * - Anonymous requests support the `FillInstance` parameter. When `InstanceIds` is not explicitly provided and `FillInstance=true`, the server automatically populates the bound `JVS_COPILOT` AgentId based on the current logon `wyId`.
       * - Time window constants: The `dayUsedCredit` statistics window is `now - ONE_DAY_MILLIS`, and the `weekUsedCredit` statistics window is `now - ONE_WEEK_MILLIS`.
       * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
       *
       * @param request DescribeCreditUsageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfoWithOptions(const Models::DescribeCreditUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries credit usage details by a specified dimension such as user, credit package, or agent.
       *
       * @description ## Request description
       * This API queries credit usage details based on the dimension specified by `UsageType` (User / CreditPackage / Agent). The response includes the total credits, remaining credits, used credits, hourly consumption samples, alert thresholds, and period quotas of the current credit package.
       * - **User**: User dimension. Returns the aggregated usage and remaining credits of all active credit packages for the current user.
       * - **CreditPackage**: Credit package dimension. Returns the total credits, remaining credits, and consumption samples of a specified credit package instance.
       * - **Agent**: Agent dimension. Returns the cumulative usage, current period usage, quota, and alert information of a specified agent.
       * **Notes**:
       * - The `InstanceIds` parameter can be omitted when `UsageType=User`. Pass a credit package instance ID when `UsageType=CreditPackage`, or pass an AgentId when `UsageType=Agent`.
       * - Anonymous requests support the `FillInstance` parameter. When `InstanceIds` is not explicitly provided and `FillInstance=true`, the server automatically populates the bound `JVS_COPILOT` AgentId based on the current logon `wyId`.
       * - Time window constants: The `dayUsedCredit` statistics window is `now - ONE_DAY_MILLIS`, and the `weekUsedCredit` statistics window is `now - ONE_WEEK_MILLIS`.
       * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
       *
       * @param request DescribeCreditUsageInfoRequest
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfo(const Models::DescribeCreditUsageInfoRequest &request);

      /**
       * @summary Retrieves resource deduction and usage statistics based on specified conditions.
       *
       * @description ## Request description
       * - This operation supports GET and POST methods.
       * - The `periods` parameter is in JSON array format. Each element is a `PeriodParam` object that contains the `periodUnit` and `baseTime` fields.
       * - The `resourceTypes` parameter is in JSON array format and contains multiple resource type strings.
       * - The `startTime` and `endTime` parameters are in timestamp format and specify the time range for the query.
       * - Pagination parameters include `nextToken`, `maxResults`, `pageNo`, and `pageSize`, which control the number and pagination of returned results.
       * - When the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
       *
       * @param request DescribeDeductionStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeductionStatisticResponse
       */
      Models::DescribeDeductionStatisticResponse describeDeductionStatisticWithOptions(const Models::DescribeDeductionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves resource deduction and usage statistics based on specified conditions.
       *
       * @description ## Request description
       * - This operation supports GET and POST methods.
       * - The `periods` parameter is in JSON array format. Each element is a `PeriodParam` object that contains the `periodUnit` and `baseTime` fields.
       * - The `resourceTypes` parameter is in JSON array format and contains multiple resource type strings.
       * - The `startTime` and `endTime` parameters are in timestamp format and specify the time range for the query.
       * - Pagination parameters include `nextToken`, `maxResults`, `pageNo`, and `pageSize`, which control the number and pagination of returned results.
       * - When the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
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
       * @summary Queries the prices of Elastic Desktop Service products, including prices for new purchases, renewals, specification changes, and unsubscriptions.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing of Elastic Desktop Service and its [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws).
       *
       * @param request DescribeMultiPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPriceWithOptions(const Models::DescribeMultiPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of Elastic Desktop Service products, including prices for new purchases, renewals, specification changes, and unsubscriptions.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing of Elastic Desktop Service and its [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws).
       *
       * @param request DescribeMultiPriceRequest
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPrice(const Models::DescribeMultiPriceRequest &request);

      /**
       * @summary Queries the deduction details of a core-hour package.
       *
       * @param request DescribePackageDeductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductionsWithOptions(const Models::DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deduction details of a core-hour package.
       *
       * @param request DescribePackageDeductionsRequest
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductions(const Models::DescribePackageDeductionsRequest &request);

      /**
       * @summary Queries AI credit deductions.
       *
       * @description ## Operation description
       * - This operation supports GET and POST methods.
       * - The `periods` parameter is in JSON array format. Each element is a `PeriodParam` object that contains the `periodUnit` and `baseTime` fields.
       * - The `resourceTypes` parameter is in JSON array format and contains multiple resource type strings.
       * - The `startTime` and `endTime` parameters are in timestamp format and specify the time range for the query.
       * - Pagination parameters include `nextToken`, `maxResults`, `pageNo`, and `pageSize`, which control the number of returned results and pagination.
       * - When the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
       *
       * @param request DescribeRunIdDeductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRunIdDeductionsResponse
       */
      Models::DescribeRunIdDeductionsResponse describeRunIdDeductionsWithOptions(const Models::DescribeRunIdDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AI credit deductions.
       *
       * @description ## Operation description
       * - This operation supports GET and POST methods.
       * - The `periods` parameter is in JSON array format. Each element is a `PeriodParam` object that contains the `periodUnit` and `baseTime` fields.
       * - The `resourceTypes` parameter is in JSON array format and contains multiple resource type strings.
       * - The `startTime` and `endTime` parameters are in timestamp format and specify the time range for the query.
       * - Pagination parameters include `nextToken`, `maxResults`, `pageNo`, and `pageSize`, which control the number of returned results and pagination.
       * - When the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
       *
       * @param request DescribeRunIdDeductionsRequest
       * @return DescribeRunIdDeductionsResponse
       */
      Models::DescribeRunIdDeductionsResponse describeRunIdDeductions(const Models::DescribeRunIdDeductionsRequest &request);

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
