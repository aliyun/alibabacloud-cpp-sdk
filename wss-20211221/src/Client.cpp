#include <darabonba/Core.hpp>
#include <alibabacloud/Wss20211221.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Wss20211221::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Wss20211221
{

AlibabaCloud::Wss20211221::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "wss";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("wss", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

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
CreateMultiOrderResponse Client::createMultiOrderWithOptions(const CreateMultiOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMultiOrderShrinkRequest request = CreateMultiOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperties()) {
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperties(), "Properties", "json"));
  }

  json query = {};
  if (!!request.hasChannelCookie()) {
    query["ChannelCookie"] = request.getChannelCookie();
  }

  if (!!request.hasOrderItems()) {
    query["OrderItems"] = request.getOrderItems();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPropertiesShrink()) {
    query["Properties"] = request.getPropertiesShrink();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMultiOrder"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultiOrderResponse>();
}

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
CreateMultiOrderResponse Client::createMultiOrder(const CreateMultiOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultiOrderWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query for AI model invocation records based on specified conditions.
 *
 * @description ## Request description
 * - This operation performs a paging query for AI model invocation details of the current Alibaba Cloud account within a specified business edition, region, and time range.
 * - You can filter results by model invocation request ID, requested model, and user ID.
 * - Query results are returned in descending order of invocation time.
 * - By default, this operation queries data from 00:00:00 (UTC+8) of the current day to the current time. The query time range cannot exceed 30 days and cannot start earlier than three calendar months before the current time.
 * - You can only query data for the primary account to which the current caller identity belongs. You cannot specify other accounts.
 * - The product of PageNumber and PageSize cannot exceed 1,000,000.
 * - If BizType is not specified, the default value is Enterprise Edition.
 * - If GatewayRegion is not specified, the default value is Shanghai for the China site and Singapore for the international site.
 *
 * @param request DescribeAICallDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAICallDetailsResponse
 */
DescribeAICallDetailsResponse Client::describeAICallDetailsWithOptions(const DescribeAICallDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGatewayRegion()) {
    query["GatewayRegion"] = request.getGatewayRegion();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchRequestId()) {
    query["SearchRequestId"] = request.getSearchRequestId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWyIds()) {
    query["WyIds"] = request.getWyIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAICallDetails"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAICallDetailsResponse>();
}

/**
 * @summary Performs a paging query for AI model invocation records based on specified conditions.
 *
 * @description ## Request description
 * - This operation performs a paging query for AI model invocation details of the current Alibaba Cloud account within a specified business edition, region, and time range.
 * - You can filter results by model invocation request ID, requested model, and user ID.
 * - Query results are returned in descending order of invocation time.
 * - By default, this operation queries data from 00:00:00 (UTC+8) of the current day to the current time. The query time range cannot exceed 30 days and cannot start earlier than three calendar months before the current time.
 * - You can only query data for the primary account to which the current caller identity belongs. You cannot specify other accounts.
 * - The product of PageNumber and PageSize cannot exceed 1,000,000.
 * - If BizType is not specified, the default value is Enterprise Edition.
 * - If GatewayRegion is not specified, the default value is Shanghai for the China site and Singapore for the international site.
 *
 * @param request DescribeAICallDetailsRequest
 * @return DescribeAICallDetailsResponse
 */
DescribeAICallDetailsResponse Client::describeAICallDetails(const DescribeAICallDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAICallDetailsWithOptions(request, runtime);
}

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
DescribeCreditPackageAgentsResponse Client::describeCreditPackageAgentsWithOptions(const DescribeCreditPackageAgentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentIds()) {
    query["AgentIds"] = request.getAgentIds();
  }

  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCreditPackageAgents"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCreditPackageAgentsResponse>();
}

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
DescribeCreditPackageAgentsResponse Client::describeCreditPackageAgents(const DescribeCreditPackageAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreditPackageAgentsWithOptions(request, runtime);
}

/**
 * @summary Queries the credit usage of users, credit packages, or agents by specified dimension.
 *
 * @description ## Request description
 * This API queries credit usage details based on the dimension specified by `UsageType` (User, CreditPackage, Agent, or EndUser). The response includes the total amount, remaining amount, and used amount of the current credit package, hourly consumption samples, alert thresholds, and periodic quotas.
 * - **User**: The user dimension. Returns the total used amount and remaining amount of all active credit packages for the current user.
 * - **CreditPackage**: The credit package dimension. Returns the total amount, remaining amount, and consumption samples of the specified credit package instance.
 * - **Agent**: The agent dimension. Returns the cumulative used amount, current period used amount, quota, and alerts for the specified agent.
 * - **EndUser**: The Wuying user dimension. Returns the shared credit usage, pay-as-you-go credit usage, and total credit usage for the current period of the Wuying user.
 * **Note**:
 * - The `InstanceIds` parameter can be omitted when `UsageType=User`. Pass the credit package instance ID when `UsageType=CreditPackage`, the `AgentId` when `UsageType=Agent`, and the `WyId` when `UsageType=EndUser`.
 * - Anonymous requests support the `FillInstance` parameter. If `InstanceIds` is not explicitly passed and `FillInstance=true`, the server automatically fills in the bound `JVS_COPILOT` AgentId based on the currently logged-in `wyId`.
 * - Time window constants: The statistical window for `dayUsedCredit` is `now - ONE_DAY_MILLIS`, and the statistical window for `weekUsedCredit` is `now - ONE_WEEK_MILLIS`.
 * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
 *
 * @param request DescribeCreditUsageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCreditUsageInfoResponse
 */
DescribeCreditUsageInfoResponse Client::describeCreditUsageInfoWithOptions(const DescribeCreditUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  if (!!request.hasUsageType()) {
    query["UsageType"] = request.getUsageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCreditUsageInfo"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCreditUsageInfoResponse>();
}

/**
 * @summary Queries the credit usage of users, credit packages, or agents by specified dimension.
 *
 * @description ## Request description
 * This API queries credit usage details based on the dimension specified by `UsageType` (User, CreditPackage, Agent, or EndUser). The response includes the total amount, remaining amount, and used amount of the current credit package, hourly consumption samples, alert thresholds, and periodic quotas.
 * - **User**: The user dimension. Returns the total used amount and remaining amount of all active credit packages for the current user.
 * - **CreditPackage**: The credit package dimension. Returns the total amount, remaining amount, and consumption samples of the specified credit package instance.
 * - **Agent**: The agent dimension. Returns the cumulative used amount, current period used amount, quota, and alerts for the specified agent.
 * - **EndUser**: The Wuying user dimension. Returns the shared credit usage, pay-as-you-go credit usage, and total credit usage for the current period of the Wuying user.
 * **Note**:
 * - The `InstanceIds` parameter can be omitted when `UsageType=User`. Pass the credit package instance ID when `UsageType=CreditPackage`, the `AgentId` when `UsageType=Agent`, and the `WyId` when `UsageType=EndUser`.
 * - Anonymous requests support the `FillInstance` parameter. If `InstanceIds` is not explicitly passed and `FillInstance=true`, the server automatically fills in the bound `JVS_COPILOT` AgentId based on the currently logged-in `wyId`.
 * - Time window constants: The statistical window for `dayUsedCredit` is `now - ONE_DAY_MILLIS`, and the statistical window for `weekUsedCredit` is `now - ONE_WEEK_MILLIS`.
 * - The consumption samples in `currentCreditConsumeList` are aggregated by hour and may have an asynchronous synchronization delay of up to 5 minutes.
 *
 * @param request DescribeCreditUsageInfoRequest
 * @return DescribeCreditUsageInfoResponse
 */
DescribeCreditUsageInfoResponse Client::describeCreditUsageInfo(const DescribeCreditUsageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreditUsageInfoWithOptions(request, runtime);
}

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
DescribeDeductionStatisticResponse Client::describeDeductionStatisticWithOptions(const DescribeDeductionStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasPeriods()) {
    query["Periods"] = request.getPeriods();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeductionStatistic"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeductionStatisticResponse>();
}

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
DescribeDeductionStatisticResponse Client::describeDeductionStatistic(const DescribeDeductionStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeductionStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries logistics address information.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeliveryAddressResponse
 */
DescribeDeliveryAddressResponse Client::describeDeliveryAddressWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDeliveryAddress"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeliveryAddressResponse>();
}

/**
 * @summary Queries logistics address information.
 *
 * @return DescribeDeliveryAddressResponse
 */
DescribeDeliveryAddressResponse Client::describeDeliveryAddress() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeliveryAddressWithOptions(runtime);
}

/**
 * @summary Queries deduction group information.
 *
 * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
 *
 * @param request DescribeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroupsWithOptions(const DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupResourceTypes()) {
    query["GroupResourceTypes"] = request.getGroupResourceTypes();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStates()) {
    query["States"] = request.getStates();
  }

  if (!!request.hasTimeUsingPeriod()) {
    query["TimeUsingPeriod"] = request.getTimeUsingPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroups"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupsResponse>();
}

/**
 * @summary Queries deduction group information.
 *
 * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
 *
 * @param request DescribeGroupsRequest
 * @return DescribeGroupsResponse
 */
DescribeGroupsResponse Client::describeGroups(const DescribeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the renewal methods.
 *
 * @description Filters instances by resource type, instance, and region, and uses paging to query the auto-renewal status.
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttributeWithOptions(const DescribeInstanceAutoRenewalAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewal()) {
    query["AutoRenewal"] = request.getAutoRenewal();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasResourceTypeList()) {
    query["ResourceTypeList"] = request.getResourceTypeList();
  }

  if (!!request.hasSearchRegionId()) {
    query["SearchRegionId"] = request.getSearchRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAutoRenewalAttribute"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAutoRenewalAttributeResponse>();
}

/**
 * @summary Queries the renewal methods.
 *
 * @description Filters instances by resource type, instance, and region, and uses paging to query the auto-renewal status.
 *
 * @param request DescribeInstanceAutoRenewalAttributeRequest
 * @return DescribeInstanceAutoRenewalAttributeResponse
 */
DescribeInstanceAutoRenewalAttributeResponse Client::describeInstanceAutoRenewalAttribute(const DescribeInstanceAutoRenewalAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAutoRenewalAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries sold instances and their quotas and properties by paging based on resource type, instance ID, business resource ID, and status.
 *
 * @description Queries sold instances and their quotas and properties by paging based on resource type, instance ID, business resource ID, and status.
 *
 * @param request DescribeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstancesWithOptions(const DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNoResourceId()) {
    query["NoResourceId"] = request.getNoResourceId();
  }

  if (!!request.hasPropertyKeyList()) {
    query["PropertyKeyList"] = request.getPropertyKeyList();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStateList()) {
    query["StateList"] = request.getStateList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstances"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstancesResponse>();
}

/**
 * @summary Queries sold instances and their quotas and properties by paging based on resource type, instance ID, business resource ID, and status.
 *
 * @description Queries sold instances and their quotas and properties by paging based on resource type, instance ID, business resource ID, and status.
 *
 * @param request DescribeInstancesRequest
 * @return DescribeInstancesResponse
 */
DescribeInstancesResponse Client::describeInstances(const DescribeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the prices of Elastic Desktop Service products for order types such as new purchases, renewals, configuration changes, and unsubscriptions.
 *
 * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
 *
 * @param request DescribeMultiPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultiPriceResponse
 */
DescribeMultiPriceResponse Client::describeMultiPriceWithOptions(const DescribeMultiPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderItems()) {
    query["OrderItems"] = request.getOrderItems();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPackageCode()) {
    query["PackageCode"] = request.getPackageCode();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.getResellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMultiPrice"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMultiPriceResponse>();
}

/**
 * @summary Queries the prices of Elastic Desktop Service products for order types such as new purchases, renewals, configuration changes, and unsubscriptions.
 *
 * @description <props="china">Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of Elastic Desktop Service.
 *
 * @param request DescribeMultiPriceRequest
 * @return DescribeMultiPriceResponse
 */
DescribeMultiPriceResponse Client::describeMultiPrice(const DescribeMultiPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the deduction details of core-hour packages.
 *
 * @param request DescribePackageDeductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackageDeductionsResponse
 */
DescribePackageDeductionsResponse Client::describePackageDeductionsWithOptions(const DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasAgentTypes()) {
    query["AgentTypes"] = request.getAgentTypes();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasConsumeWyId()) {
    query["ConsumeWyId"] = request.getConsumeWyId();
  }

  if (!!request.hasConsumeWyIds()) {
    query["ConsumeWyIds"] = request.getConsumeWyIds();
  }

  if (!!request.hasDeductionRequestId()) {
    query["DeductionRequestId"] = request.getDeductionRequestId();
  }

  if (!!request.hasDeductionTypes()) {
    query["DeductionTypes"] = request.getDeductionTypes();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupResourceTypes()) {
    query["GroupResourceTypes"] = request.getGroupResourceTypes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIdType()) {
    query["InstanceIdType"] = request.getInstanceIdType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasPackageIds()) {
    query["PackageIds"] = request.getPackageIds();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasRunIdList()) {
    query["RunIdList"] = request.getRunIdList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWyId()) {
    query["WyId"] = request.getWyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePackageDeductions"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePackageDeductionsResponse>();
}

/**
 * @summary Queries the deduction details of core-hour packages.
 *
 * @param request DescribePackageDeductionsRequest
 * @return DescribePackageDeductionsResponse
 */
DescribePackageDeductionsResponse Client::describePackageDeductions(const DescribePackageDeductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackageDeductionsWithOptions(request, runtime);
}

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
DescribeRunIdDeductionsResponse Client::describeRunIdDeductionsWithOptions(const DescribeRunIdDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasAgentTypes()) {
    query["AgentTypes"] = request.getAgentTypes();
  }

  if (!!request.hasAliUid()) {
    query["AliUid"] = request.getAliUid();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasConsumeWyId()) {
    query["ConsumeWyId"] = request.getConsumeWyId();
  }

  if (!!request.hasConsumeWyIds()) {
    query["ConsumeWyIds"] = request.getConsumeWyIds();
  }

  if (!!request.hasDeductionRequestId()) {
    query["DeductionRequestId"] = request.getDeductionRequestId();
  }

  if (!!request.hasDeductionTypes()) {
    query["DeductionTypes"] = request.getDeductionTypes();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupByFields()) {
    query["GroupByFields"] = request.getGroupByFields();
  }

  if (!!request.hasGroupResourceTypes()) {
    query["GroupResourceTypes"] = request.getGroupResourceTypes();
  }

  if (!!request.hasGroupSeparator()) {
    query["GroupSeparator"] = request.getGroupSeparator();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIdType()) {
    query["InstanceIdType"] = request.getInstanceIdType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPackageIds()) {
    query["PackageIds"] = request.getPackageIds();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.getResourceTypes();
  }

  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasRunIdList()) {
    query["RunIdList"] = request.getRunIdList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasWyId()) {
    query["WyId"] = request.getWyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRunIdDeductions"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRunIdDeductionsResponse>();
}

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
DescribeRunIdDeductionsResponse Client::describeRunIdDeductions(const DescribeRunIdDeductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRunIdDeductionsWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an instance.
 *
 * @param request ModifyInstancePropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstancePropertiesResponse
 */
ModifyInstancePropertiesResponse Client::modifyInstancePropertiesWithOptions(const ModifyInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasProperties()) {
    query["Properties"] = request.getProperties();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceProperties"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstancePropertiesResponse>();
}

/**
 * @summary Modifies the attributes of an instance.
 *
 * @param request ModifyInstancePropertiesRequest
 * @return ModifyInstancePropertiesResponse
 */
ModifyInstancePropertiesResponse Client::modifyInstanceProperties(const ModifyInstancePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstancePropertiesWithOptions(request, runtime);
}

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
SetAgentCreditQuotaResponse Client::setAgentCreditQuotaWithOptions(const SetAgentCreditQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentIds()) {
    query["AgentIds"] = request.getAgentIds();
  }

  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCreditQuota()) {
    query["CreditQuota"] = request.getCreditQuota();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAgentCreditQuota"},
    {"version" , "2021-12-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAgentCreditQuotaResponse>();
}

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
SetAgentCreditQuotaResponse Client::setAgentCreditQuota(const SetAgentCreditQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAgentCreditQuotaWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Wss20211221