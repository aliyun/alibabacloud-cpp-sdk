#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaStreaming20260202.hpp>
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
using namespace AlibabaCloud::AlikafkaStreaming20260202::Models;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{

AlibabaCloud::AlikafkaStreaming20260202::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("alikafkastreaming", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建 流计算实例
 *
 * @param request CreateComputeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeInstanceResponse
 */
CreateComputeInstanceResponse Client::createComputeInstanceWithOptions(const CreateComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPaidType()) {
    query["PaidType"] = request.getPaidType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateComputeInstance"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeInstanceResponse>();
}

/**
 * @summary 创建 流计算实例
 *
 * @param request CreateComputeInstanceRequest
 * @return CreateComputeInstanceResponse
 */
CreateComputeInstanceResponse Client::createComputeInstance(const CreateComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeInstanceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202