#include <darabonba/Core.hpp>
#include <alibabacloud/IntlMarket20250812.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::IntlMarket20250812::Models;
namespace AlibabaCloud
{
namespace IntlMarket20250812
{

AlibabaCloud::IntlMarket20250812::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("intlmarket", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建云市场订单
 *
 * @param request CreateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrderWithOptions(const CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommodity()) {
    query["Commodity"] = request.commodity();
  }

  if (!!request.hasOrderSouce()) {
    query["OrderSouce"] = request.orderSouce();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOrder"},
    {"version" , "2025-08-12"},
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
 * @summary 创建云市场订单
 *
 * @param request CreateOrderRequest
 * @return CreateOrderResponse
 */
CreateOrderResponse Client::createOrder(const CreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrderWithOptions(request, runtime);
}

/**
 * @summary 询价
 *
 * @param request DescribePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePriceWithOptions(const DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodity()) {
    query["Commodity"] = request.commodity();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrice"},
    {"version" , "2025-08-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePriceResponse>();
}

/**
 * @summary 询价
 *
 * @param request DescribePriceRequest
 * @return DescribePriceResponse
 */
DescribePriceResponse Client::describePrice(const DescribePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePriceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace IntlMarket20250812