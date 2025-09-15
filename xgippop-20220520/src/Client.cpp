#include <darabonba/Core.hpp>
#include <alibabacloud/XgipPop20220520.hpp>
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
using namespace AlibabaCloud::XgipPop20220520::Models;
namespace AlibabaCloud
{
namespace XgipPop20220520
{

AlibabaCloud::XgipPop20220520::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("xgippop", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 订购qos云产品服务
 *
 * @param request OrderQosProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OrderQosProductResponse
 */
OrderQosProductResponse Client::orderQosProductWithOptions(const OrderQosProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProvice()) {
    query["Provice"] = request.provice();
  }

  json body = {};
  if (!!request.hasAliUid()) {
    body["AliUid"] = request.aliUid();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasIPv6()) {
    body["IPv6"] = request.IPv6();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIpType()) {
    body["IpType"] = request.ipType();
  }

  if (!!request.hasMobileNumber()) {
    body["MobileNumber"] = request.mobileNumber();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasPrivateIpv4()) {
    body["PrivateIpv4"] = request.privateIpv4();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.productId();
  }

  if (!!request.hasPublicIpv4()) {
    body["PublicIpv4"] = request.publicIpv4();
  }

  if (!!request.hasQosRequestId()) {
    body["QosRequestId"] = request.qosRequestId();
  }

  if (!!request.hasTargetIpList()) {
    body["TargetIpList"] = request.targetIpList();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  if (!!request.hasUnitNum()) {
    body["UnitNum"] = request.unitNum();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OrderQosProduct"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OrderQosProductResponse>();
}

/**
 * @summary 订购qos云产品服务
 *
 * @param request OrderQosProductRequest
 * @return OrderQosProductResponse
 */
OrderQosProductResponse Client::orderQosProduct(const OrderQosProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return orderQosProductWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace XgipPop20220520