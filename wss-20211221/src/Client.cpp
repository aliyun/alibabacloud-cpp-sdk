#include <darabonba/Core.hpp>
#include <alibabacloud/Wss20211221.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Wss20211221::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Wss20211221
{

AlibabaCloud::Wss20211221::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "wss.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "wss.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
CreateMultiOrderResponse Client::createMultiOrder(const CreateMultiOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultiOrderWithOptions(request, runtime);
}

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
DescribeCreditPackageAgentsResponse Client::describeCreditPackageAgents(const DescribeCreditPackageAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreditPackageAgentsWithOptions(request, runtime);
}

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
DescribeCreditUsageInfoResponse Client::describeCreditUsageInfoWithOptions(const DescribeCreditUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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
DescribeCreditUsageInfoResponse Client::describeCreditUsageInfo(const DescribeCreditUsageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreditUsageInfoWithOptions(request, runtime);
}

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
DescribeDeductionStatisticResponse Client::describeDeductionStatistic(const DescribeDeductionStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeductionStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about delivery addresses.
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
 * @summary Retrieves information about delivery addresses.
 *
 * @return DescribeDeliveryAddressResponse
 */
DescribeDeliveryAddressResponse Client::describeDeliveryAddress() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeliveryAddressWithOptions(runtime);
}

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
 * @summary Queries prices for Elastic Desktop Service products, covering order types such as purchase, renewal, configuration change, and cancellation.
 *
 * @description <props="china">
 * Before using this interface, ensure you understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) for Wuying Workspace.
 *
 * @param request DescribeMultiPriceRequest
 * @return DescribeMultiPriceResponse
 */
DescribeMultiPriceResponse Client::describeMultiPrice(const DescribeMultiPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiPriceWithOptions(request, runtime);
}

/**
 * @summary Query deduction details for time-based packages.
 *
 * @param request DescribePackageDeductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackageDeductionsResponse
 */
DescribePackageDeductionsResponse Client::describePackageDeductionsWithOptions(const DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Query deduction details for time-based packages.
 *
 * @param request DescribePackageDeductionsRequest
 * @return DescribePackageDeductionsResponse
 */
DescribePackageDeductionsResponse Client::describePackageDeductions(const DescribePackageDeductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackageDeductionsWithOptions(request, runtime);
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
SetAgentCreditQuotaResponse Client::setAgentCreditQuota(const SetAgentCreditQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAgentCreditQuotaWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Wss20211221