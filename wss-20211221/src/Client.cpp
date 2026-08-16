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
    {"ap-southeast-1" , "wss.ap-southeast-1.aliyuncs.com"},
    {"cn-shanghai" , "wss.cn-shanghai.aliyuncs.com"}
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
 * @summary Places, renews, or modifies orders for specific products of Elastic Desktop Service (EDS) Enterprise Edition, such as monthly duration packages.
 *
 * @description <props="china">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws) of EDS.
 * <props="intl">Before you use this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/cloud-desktop?#J_8623712560) of EDS.
 * If automatic payment is not specified, this operation does not process the payment. You must use the order ID returned by this operation to construct a payment redirect URL and complete the payment before the order takes effect and the resources are provisioned.
 *
 * @param request CreateMultiOrderRequest
 * @return CreateMultiOrderResponse
 */
CreateMultiOrderResponse Client::createMultiOrder(const CreateMultiOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultiOrderWithOptions(request, runtime);
}

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
DescribeCreditPackageAgentsResponse Client::describeCreditPackageAgents(const DescribeCreditPackageAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreditPackageAgentsWithOptions(request, runtime);
}

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
 * - When the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
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
 * - When the `resourceTypes` parameter contains invalid values or the `periods` parameter fails JSON parsing, a `SalesClientException` exception is thrown.
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
 * @summary Queries the prices of Elastic Desktop Service products, including prices for new purchases, renewals, specification changes, and unsubscriptions.
 *
 * @description <props="china">Before you call this operation, make sure that you fully understand the billing of Elastic Desktop Service and its [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws).
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
 * @summary Queries the prices of Elastic Desktop Service products, including prices for new purchases, renewals, specification changes, and unsubscriptions.
 *
 * @description <props="china">Before you call this operation, make sure that you fully understand the billing of Elastic Desktop Service and its [pricing](https://www.aliyun.com/price/product?#/gws/detail/gws).
 *
 * @param request DescribeMultiPriceRequest
 * @return DescribeMultiPriceResponse
 */
DescribeMultiPriceResponse Client::describeMultiPrice(const DescribeMultiPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the deduction details of a core-hour package.
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
 * @summary Queries the deduction details of a core-hour package.
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

  if (!!request.hasInstanceIdType()) {
    query["InstanceIdType"] = request.getInstanceIdType();
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