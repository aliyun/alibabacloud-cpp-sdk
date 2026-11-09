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
       * @summary Creates an order, renews, or modifies the configuration of specific products such as the monthly duration package for Wuying Workspace Enterprise Edition.
       *
       * @description <props="china">Make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Wuying Workspace before you call this operation.
       * <props="intl">Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560) of Wuying Workspace before you call this operation.
       * If automatic payment is not specified, this operation does not process the payment. You must use the order ID returned by this operation to construct a payment redirect URL and complete the payment. The order takes effect and resources are provisioned only after the payment is completed.
       *
       * @param tmpReq CreateMultiOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrderWithOptions(const Models::CreateMultiOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order, renews, or modifies the configuration of specific products such as the monthly duration package for Wuying Workspace Enterprise Edition.
       *
       * @description <props="china">Make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Wuying Workspace before you call this operation.
       * <props="intl">Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560) of Wuying Workspace before you call this operation.
       * If automatic payment is not specified, this operation does not process the payment. You must use the order ID returned by this operation to construct a payment redirect URL and complete the payment. The order takes effect and resources are provisioned only after the payment is completed.
       *
       * @param request CreateMultiOrderRequest
       * @return CreateMultiOrderResponse
       */
      Models::CreateMultiOrderResponse createMultiOrder(const Models::CreateMultiOrderRequest &request);

      /**
       * @summary Queries the list of agents and usage summary information under the current username.
       *
       * @description ## Operation description
       * - **Paging**: Use the `NextToken` and `MaxResults` parameters for paging. Set `NextToken` to an empty character string for the first request.
       * - **Filtering**: Use the `AgentType` and `AgentIds` parameters to filter the returned agent list.
       * - **Status filtering**: Use the `Status` parameter to filter agents by status. Valid values: 0 (deleted) and 1 (active).
       * - **Sorting**: Results are sorted by `id` in ascending order by default.
       * - **Additional parameter for anonymous edition**: The `FillInstance` parameter automatically populates the bound JVS_COPILOT AgentId of the currently logged-on user.
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgentsWithOptions(const Models::DescribeCreditPackageAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of agents and usage summary information under the current username.
       *
       * @description ## Operation description
       * - **Paging**: Use the `NextToken` and `MaxResults` parameters for paging. Set `NextToken` to an empty character string for the first request.
       * - **Filtering**: Use the `AgentType` and `AgentIds` parameters to filter the returned agent list.
       * - **Status filtering**: Use the `Status` parameter to filter agents by status. Valid values: 0 (deleted) and 1 (active).
       * - **Sorting**: Results are sorted by `id` in ascending order by default.
       * - **Additional parameter for anonymous edition**: The `FillInstance` parameter automatically populates the bound JVS_COPILOT AgentId of the currently logged-on user.
       *
       * @param request DescribeCreditPackageAgentsRequest
       * @return DescribeCreditPackageAgentsResponse
       */
      Models::DescribeCreditPackageAgentsResponse describeCreditPackageAgents(const Models::DescribeCreditPackageAgentsRequest &request);

      /**
       * @summary Queries the credit usage of users, credit packages, or agents based on a specified dimension.
       *
       * @description ## Request description
       * This API queries credit usage details based on the dimension specified by `UsageType` (User, CreditPackage, Agent, or EndUser). The response includes the total amount, remaining amount, and used amount of the current credit package, hourly consumption samples, alert thresholds, and periodic quotas.
       * - **User**: The user dimension. Returns the total used amount and remaining amount of all active credit packages for the current user.
       * - **CreditPackage**: The credit package dimension. Returns the total amount, remaining amount, and consumption samples of a specified credit package instance.
       * - **Agent**: The agent dimension. Returns the cumulative used amount, current period used amount, quota, and alerts for a specified agent.
       * - **EndUser**: The Wuying user dimension. Returns the shared credit usage, pay-as-you-go credit usage, and total credit usage for the current period of a Wuying user.
       * **Note**:
       * - The `InstanceIds` parameter can be omitted when `UsageType` is set to `User`. Set it to the credit package instance ID when `UsageType` is `CreditPackage`, the agent ID when `UsageType` is `Agent`, and the Wuying ID when `UsageType` is `EndUser`.
       * - Anonymous requests support the `FillInstance` parameter. If `InstanceIds` is not explicitly provided and `FillInstance` is set to `true`, the server automatically populates the bound `JVS_COPILOT` agent ID based on the currently logged-in `wyId`.
       * - Time window constants: The statistical window for `dayUsedCredit` is `now - ONE_DAY_MILLIS`, and the statistical window for `weekUsedCredit` is `now - ONE_WEEK_MILLIS`.
       * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
       *
       * @param request DescribeCreditUsageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreditUsageInfoResponse
       */
      Models::DescribeCreditUsageInfoResponse describeCreditUsageInfoWithOptions(const Models::DescribeCreditUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credit usage of users, credit packages, or agents based on a specified dimension.
       *
       * @description ## Request description
       * This API queries credit usage details based on the dimension specified by `UsageType` (User, CreditPackage, Agent, or EndUser). The response includes the total amount, remaining amount, and used amount of the current credit package, hourly consumption samples, alert thresholds, and periodic quotas.
       * - **User**: The user dimension. Returns the total used amount and remaining amount of all active credit packages for the current user.
       * - **CreditPackage**: The credit package dimension. Returns the total amount, remaining amount, and consumption samples of a specified credit package instance.
       * - **Agent**: The agent dimension. Returns the cumulative used amount, current period used amount, quota, and alerts for a specified agent.
       * - **EndUser**: The Wuying user dimension. Returns the shared credit usage, pay-as-you-go credit usage, and total credit usage for the current period of a Wuying user.
       * **Note**:
       * - The `InstanceIds` parameter can be omitted when `UsageType` is set to `User`. Set it to the credit package instance ID when `UsageType` is `CreditPackage`, the agent ID when `UsageType` is `Agent`, and the Wuying ID when `UsageType` is `EndUser`.
       * - Anonymous requests support the `FillInstance` parameter. If `InstanceIds` is not explicitly provided and `FillInstance` is set to `true`, the server automatically populates the bound `JVS_COPILOT` agent ID based on the currently logged-in `wyId`.
       * - Time window constants: The statistical window for `dayUsedCredit` is `now - ONE_DAY_MILLIS`, and the statistical window for `weekUsedCredit` is `now - ONE_WEEK_MILLIS`.
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
       * - If the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
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
       * - If the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
       *
       * @param request DescribeDeductionStatisticRequest
       * @return DescribeDeductionStatisticResponse
       */
      Models::DescribeDeductionStatisticResponse describeDeductionStatistic(const Models::DescribeDeductionStatisticRequest &request);

      /**
       * @summary Queries logistics address information.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeliveryAddressResponse
       */
      Models::DescribeDeliveryAddressResponse describeDeliveryAddressWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries logistics address information.
       *
       * @return DescribeDeliveryAddressResponse
       */
      Models::DescribeDeliveryAddressResponse describeDeliveryAddress();

      /**
       * @summary Queries deduction group information.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
       *
       * @param request DescribeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroupsWithOptions(const Models::DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries deduction group information.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
       *
       * @param request DescribeGroupsRequest
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroups(const Models::DescribeGroupsRequest &request);

      /**
       * @summary Queries the renewal methods.
       *
       * @description Filters instances by resource type, instance, and region, and uses paging to query the auto-renewal status.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(const Models::DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the renewal methods.
       *
       * @description Filters instances by resource type, instance, and region, and uses paging to query the auto-renewal status.
       *
       * @param request DescribeInstanceAutoRenewalAttributeRequest
       * @return DescribeInstanceAutoRenewalAttributeResponse
       */
      Models::DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(const Models::DescribeInstanceAutoRenewalAttributeRequest &request);

      /**
       * @summary Queries the prices of Elastic Desktop Service products for order types such as new purchases, renewals, configuration changes, and unsubscriptions.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
       *
       * @param request DescribeMultiPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPriceWithOptions(const Models::DescribeMultiPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of Elastic Desktop Service products for order types such as new purchases, renewals, configuration changes, and unsubscriptions.
       *
       * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
       *
       * @param request DescribeMultiPriceRequest
       * @return DescribeMultiPriceResponse
       */
      Models::DescribeMultiPriceResponse describeMultiPrice(const Models::DescribeMultiPriceRequest &request);

      /**
       * @summary Queries the deduction details of core-hour packages.
       *
       * @param request DescribePackageDeductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductionsWithOptions(const Models::DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deduction details of core-hour packages.
       *
       * @param request DescribePackageDeductionsRequest
       * @return DescribePackageDeductionsResponse
       */
      Models::DescribePackageDeductionsResponse describePackageDeductions(const Models::DescribePackageDeductionsRequest &request);

      /**
       * @summary Queries AI credit deductions.
       *
       * @description ## Request description
       * - This operation supports the GET and POST methods.
       * - The periods parameter is in JSON array format. Each element is a PeriodParam object that contains the periodUnit and baseTime fields.
       * - The resourceTypes parameter is in JSON array format and contains multiple resource type strings.
       * - The startTime and endTime parameters are in timestamp format and specify the time range for the query.
       * - The pagination parameters include nextToken, maxResults, pageNo, and pageSize, which are used to control the number of returned results and pagination.
       * - If the resourceTypes parameter contains invalid values or the JSON parsing of the periods parameter fails, a SalesClientException is thrown.
       *
       * @param request DescribeRunIdDeductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRunIdDeductionsResponse
       */
      Models::DescribeRunIdDeductionsResponse describeRunIdDeductionsWithOptions(const Models::DescribeRunIdDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AI credit deductions.
       *
       * @description ## Request description
       * - This operation supports the GET and POST methods.
       * - The periods parameter is in JSON array format. Each element is a PeriodParam object that contains the periodUnit and baseTime fields.
       * - The resourceTypes parameter is in JSON array format and contains multiple resource type strings.
       * - The startTime and endTime parameters are in timestamp format and specify the time range for the query.
       * - The pagination parameters include nextToken, maxResults, pageNo, and pageSize, which are used to control the number of returned results and pagination.
       * - If the resourceTypes parameter contains invalid values or the JSON parsing of the periods parameter fails, a SalesClientException is thrown.
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
       * @summary Sets the credit usage quota for a specified Agent.
       *
       * @description ## Operation description
       * You can use this API operation to set the credit usage quota for a specific type of Agent. Batch setting of quotas for multiple Agents is supported.
       * ### Before you begin
       * - The `AgentType` parameter specifies the type of Agent for which you want to set the quota, such as `JVSClaw` or `OpenClaw`.
       * - The `AgentIds` parameter is an array that can contain up to 100 Agent IDs.
       * - The `CreditQuota` parameter specifies the credit usage quota for each Agent.
       * ### Examples
       *
       * @param request SetAgentCreditQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAgentCreditQuotaResponse
       */
      Models::SetAgentCreditQuotaResponse setAgentCreditQuotaWithOptions(const Models::SetAgentCreditQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the credit usage quota for a specified Agent.
       *
       * @description ## Operation description
       * You can use this API operation to set the credit usage quota for a specific type of Agent. Batch setting of quotas for multiple Agents is supported.
       * ### Before you begin
       * - The `AgentType` parameter specifies the type of Agent for which you want to set the quota, such as `JVSClaw` or `OpenClaw`.
       * - The `AgentIds` parameter is an array that can contain up to 100 Agent IDs.
       * - The `CreditQuota` parameter specifies the credit usage quota for each Agent.
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
