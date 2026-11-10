#include <darabonba/Core.hpp>
#include <alibabacloud/InternetBankOpen20240612.hpp>
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
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::InternetBankOpen20240612::Models;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{

AlibabaCloud::InternetBankOpen20240612::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "InternetBankOpen";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("internetbankopen", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 数据产品统一调用入口
 *
 * @param request InvokeDataProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeDataProductResponse
 */
InvokeDataProductResponse Client::invokeDataProductWithOptions(const InvokeDataProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasProductCode()) {
    query["productCode"] = request.getProductCode();
  }

  if (!!request.hasServiceParameters()) {
    query["serviceParameters"] = request.getServiceParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvokeDataProduct"},
    {"version" , "2024-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pop/api/v1/rpc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeDataProductResponse>();
}

/**
 * @summary 数据产品统一调用入口
 *
 * @param request InvokeDataProductRequest
 * @return InvokeDataProductResponse
 */
InvokeDataProductResponse Client::invokeDataProduct(const InvokeDataProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return invokeDataProductWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612