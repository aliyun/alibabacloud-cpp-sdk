#include <darabonba/Core.hpp>
#include <alibabacloud/Consolecs20160406.hpp>
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
using namespace AlibabaCloud::Consolecs20160406::Models;
namespace AlibabaCloud
{
namespace Consolecs20160406
{

AlibabaCloud::Consolecs20160406::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("consolecs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request GetOpenApiListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpenApiListResponse
 */
GetOpenApiListResponse Client::getOpenApiListWithOptions(const GetOpenApiListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpenApiList"},
    {"version" , "2016-04-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpenApiListResponse>();
}

/**
 * @param request GetOpenApiListRequest
 * @return GetOpenApiListResponse
 */
GetOpenApiListResponse Client::getOpenApiList(const GetOpenApiListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpenApiListWithOptions(request, runtime);
}

/**
 * @param request ListConsoleProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConsoleProductResponse
 */
ListConsoleProductResponse Client::listConsoleProductWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListConsoleProduct"},
    {"version" , "2016-04-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConsoleProductResponse>();
}

/**
 * @return ListConsoleProductResponse
 */
ListConsoleProductResponse Client::listConsoleProduct() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConsoleProductWithOptions(runtime);
}
} // namespace AlibabaCloud
} // namespace Consolecs20160406