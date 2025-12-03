#include <darabonba/Core.hpp>
#include <alibabacloud/Bss20140714.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Bss20140714::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Bss20140714
{

AlibabaCloud::Bss20140714::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bss", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建订单
 *
 * @param request CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamStr()) {
    query["paramStr"] = request.paramStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrder"},
    {"version" , "2014-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrderResponse>();
}

/**
 * @summary 创建订单
 *
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @summary 获取现金明细
 *
 * @param request DescribeCashDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCashDetailResponse
 */
DescribeCashDetailResponse Client::describeCashDetailWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeCashDetail"},
    {"version" , "2014-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCashDetailResponse>();
}

/**
 * @summary 获取现金明细
 *
 * @return DescribeCashDetailResponse
 */
DescribeCashDetailResponse Client::describeCashDetail() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCashDetailWithOptions(runtime);
}

/**
 * @summary 查询卡券列表
 *
 * @param request DescribeCouponListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCouponListResponse
 */
DescribeCouponListResponse Client::describeCouponListWithOptions(const DescribeCouponListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDeliveryTime()) {
    query["EndDeliveryTime"] = request.endDeliveryTime();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDeliveryTime()) {
    query["StartDeliveryTime"] = request.startDeliveryTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCouponList"},
    {"version" , "2014-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCouponListResponse>();
}

/**
 * @summary 查询卡券列表
 *
 * @param request DescribeCouponListRequest
 * @return DescribeCouponListResponse
 */
DescribeCouponListResponse Client::describeCouponList(const DescribeCouponListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCouponListWithOptions(request, runtime);
}

/**
 * @summary 生产开通回调接口
 *
 * @param request OpenCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenCallbackResponse
 */
OpenCallbackResponse Client::openCallbackWithOptions(const OpenCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamStr()) {
    query["paramStr"] = request.paramStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenCallback"},
    {"version" , "2014-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenCallbackResponse>();
}

/**
 * @summary 生产开通回调接口
 *
 * @param request OpenCallbackRequest
 * @return OpenCallbackResponse
 */
OpenCallbackResponse Client::openCallback(const OpenCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openCallbackWithOptions(request, runtime);
}

/**
 * @summary 订单询价
 *
 * @param request QueryForCssOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryForCssOrderResponse
 */
QueryForCssOrderResponse Client::queryForCssOrderWithOptions(const QueryForCssOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamStr()) {
    query["paramStr"] = request.paramStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryForCssOrder"},
    {"version" , "2014-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryForCssOrderResponse>();
}

/**
 * @summary 订单询价
 *
 * @param request QueryForCssOrderRequest
 * @return QueryForCssOrderResponse
 */
QueryForCssOrderResponse Client::queryForCssOrder(const QueryForCssOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryForCssOrderWithOptions(request, runtime);
}

/**
 * @summary vnoBatchRefundOrder
 *
 * @param request VnoBatchRefundOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VnoBatchRefundOrderResponse
 */
VnoBatchRefundOrderResponse Client::vnoBatchRefundOrderWithOptions(const VnoBatchRefundOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamStr()) {
    query["paramStr"] = request.paramStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "vnoBatchRefundOrder"},
    {"version" , "2014-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VnoBatchRefundOrderResponse>();
}

/**
 * @summary vnoBatchRefundOrder
 *
 * @param request VnoBatchRefundOrderRequest
 * @return VnoBatchRefundOrderResponse
 */
VnoBatchRefundOrderResponse Client::vnoBatchRefundOrder(const VnoBatchRefundOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return vnoBatchRefundOrderWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Bss20140714