#include <darabonba/Core.hpp>
#include <alibabacloud/ADBAI20250812.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::ADBAI20250812::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ADBAI20250812
{

AlibabaCloud::ADBAI20250812::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("adbai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建具身智能平台
 *
 * @param tmpReq CreateEmbodiedAIPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEmbodiedAIPlatformResponse
 */
CreateEmbodiedAIPlatformResponse Client::createEmbodiedAIPlatformWithOptions(const CreateEmbodiedAIPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEmbodiedAIPlatformShrinkRequest request = CreateEmbodiedAIPlatformShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRayConfig()) {
    request.setRayConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rayConfig(), "RayConfig", "json"));
  }

  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasPlatformName()) {
    query["PlatformName"] = request.platformName();
  }

  if (!!request.hasRayConfigShrink()) {
    query["RayConfig"] = request.rayConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWebserverSpecName()) {
    query["WebserverSpecName"] = request.webserverSpecName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEmbodiedAIPlatform"},
    {"version" , "2025-08-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEmbodiedAIPlatformResponse>();
}

/**
 * @summary 创建具身智能平台
 *
 * @param request CreateEmbodiedAIPlatformRequest
 * @return CreateEmbodiedAIPlatformResponse
 */
CreateEmbodiedAIPlatformResponse Client::createEmbodiedAIPlatform(const CreateEmbodiedAIPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEmbodiedAIPlatformWithOptions(request, runtime);
}

/**
 * @summary 查询具身智能平台
 *
 * @param request DescribeEmbodiedAIPlatformsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEmbodiedAIPlatformsResponse
 */
DescribeEmbodiedAIPlatformsResponse Client::describeEmbodiedAIPlatformsWithOptions(const DescribeEmbodiedAIPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlatformName()) {
    query["PlatformName"] = request.platformName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEmbodiedAIPlatforms"},
    {"version" , "2025-08-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEmbodiedAIPlatformsResponse>();
}

/**
 * @summary 查询具身智能平台
 *
 * @param request DescribeEmbodiedAIPlatformsRequest
 * @return DescribeEmbodiedAIPlatformsResponse
 */
DescribeEmbodiedAIPlatformsResponse Client::describeEmbodiedAIPlatforms(const DescribeEmbodiedAIPlatformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEmbodiedAIPlatformsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ADBAI20250812