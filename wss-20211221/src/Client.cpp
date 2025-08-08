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
  this->_endpointRule = "";
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
 * @summary 多商品组合下单
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
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.properties(), "Properties", "json"));
  }

  json query = {};
  if (!!request.hasOrderItems()) {
    query["OrderItems"] = request.orderItems();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasPropertiesShrink()) {
    query["Properties"] = request.propertiesShrink();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.resellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateMultiOrderResponse>();
}

/**
 * @summary 多商品组合下单
 *
 * @param request CreateMultiOrderRequest
 * @return CreateMultiOrderResponse
 */
CreateMultiOrderResponse Client::createMultiOrder(const CreateMultiOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMultiOrderWithOptions(request, runtime);
}

/**
 * @summary 查询物流地址
 *
 * @param request DescribeDeliveryAddressRequest
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeDeliveryAddressResponse>();
}

/**
 * @summary 查询物流地址
 *
 * @return DescribeDeliveryAddressResponse
 */
DescribeDeliveryAddressResponse Client::describeDeliveryAddress() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeliveryAddressWithOptions(runtime);
}

/**
 * @summary 批量询价
 *
 * @param request DescribeMultiPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMultiPriceResponse
 */
DescribeMultiPriceResponse Client::describeMultiPriceWithOptions(const DescribeMultiPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderItems()) {
    query["OrderItems"] = request.orderItems();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasPackageCode()) {
    query["PackageCode"] = request.packageCode();
  }

  if (!!request.hasResellerOwnerUid()) {
    query["ResellerOwnerUid"] = request.resellerOwnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMultiPriceResponse>();
}

/**
 * @summary 批量询价
 *
 * @param request DescribeMultiPriceRequest
 * @return DescribeMultiPriceResponse
 */
DescribeMultiPriceResponse Client::describeMultiPrice(const DescribeMultiPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMultiPriceWithOptions(request, runtime);
}

/**
 * @summary 查询核时包抵扣明细
 *
 * @param request DescribePackageDeductionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackageDeductionsResponse
 */
DescribePackageDeductionsResponse Client::describePackageDeductionsWithOptions(const DescribePackageDeductionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasPackageIds()) {
    query["PackageIds"] = request.packageIds();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.resourceTypes();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribePackageDeductionsResponse>();
}

/**
 * @summary 查询核时包抵扣明细
 *
 * @param request DescribePackageDeductionsRequest
 * @return DescribePackageDeductionsResponse
 */
DescribePackageDeductionsResponse Client::describePackageDeductions(const DescribePackageDeductionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackageDeductionsWithOptions(request, runtime);
}

/**
 * @summary 更新实例属性
 *
 * @param request ModifyInstancePropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstancePropertiesResponse
 */
ModifyInstancePropertiesResponse Client::modifyInstancePropertiesWithOptions(const ModifyInstancePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyInstancePropertiesResponse>();
}

/**
 * @summary 更新实例属性
 *
 * @param request ModifyInstancePropertiesRequest
 * @return ModifyInstancePropertiesResponse
 */
ModifyInstancePropertiesResponse Client::modifyInstanceProperties(const ModifyInstancePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstancePropertiesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Wss20211221