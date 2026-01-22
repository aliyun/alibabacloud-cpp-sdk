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
 * @summary 创建指标平台
 *
 * @param tmpReq CreateAgentPlatformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentPlatformResponse
 */
CreateAgentPlatformResponse Client::createAgentPlatformWithOptions(const CreateAgentPlatformRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentPlatformShrinkRequest request = CreateAgentPlatformShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAiPlatformConfig()) {
    request.setAiPlatformConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAiPlatformConfig(), "AiPlatformConfig", "json"));
  }

  json query = {};
  if (!!request.hasAiPlatformConfigShrink()) {
    query["AiPlatformConfig"] = request.getAiPlatformConfigShrink();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgentPlatform"},
    {"version" , "2025-08-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentPlatformResponse>();
}

/**
 * @summary 创建指标平台
 *
 * @param request CreateAgentPlatformRequest
 * @return CreateAgentPlatformResponse
 */
CreateAgentPlatformResponse Client::createAgentPlatform(const CreateAgentPlatformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentPlatformWithOptions(request, runtime);
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
    request.setRayConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRayConfig(), "RayConfig", "json"));
  }

  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPlatformName()) {
    query["PlatformName"] = request.getPlatformName();
  }

  if (!!request.hasRayConfigShrink()) {
    query["RayConfig"] = request.getRayConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasWebserverSpecName()) {
    query["WebserverSpecName"] = request.getWebserverSpecName();
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
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlatformName()) {
    query["PlatformName"] = request.getPlatformName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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

/**
 * @summary 查询具身智能平台资源用量
 *
 * @param request GetEmbodiedAIPlatformResourceUsageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmbodiedAIPlatformResourceUsageInfoResponse
 */
GetEmbodiedAIPlatformResourceUsageInfoResponse Client::getEmbodiedAIPlatformResourceUsageInfoWithOptions(const GetEmbodiedAIPlatformResourceUsageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPlatformName()) {
    query["PlatformName"] = request.getPlatformName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmbodiedAIPlatformResourceUsageInfo"},
    {"version" , "2025-08-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmbodiedAIPlatformResourceUsageInfoResponse>();
}

/**
 * @summary 查询具身智能平台资源用量
 *
 * @param request GetEmbodiedAIPlatformResourceUsageInfoRequest
 * @return GetEmbodiedAIPlatformResourceUsageInfoResponse
 */
GetEmbodiedAIPlatformResourceUsageInfoResponse Client::getEmbodiedAIPlatformResourceUsageInfo(const GetEmbodiedAIPlatformResourceUsageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEmbodiedAIPlatformResourceUsageInfoWithOptions(request, runtime);
}

/**
 * @summary 重置具身智能平台密码
 *
 * @param request ResetEmbodiedAIPlatformPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetEmbodiedAIPlatformPasswordResponse
 */
ResetEmbodiedAIPlatformPasswordResponse Client::resetEmbodiedAIPlatformPasswordWithOptions(const ResetEmbodiedAIPlatformPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.getDBClusterId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPlatformName()) {
    query["PlatformName"] = request.getPlatformName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetEmbodiedAIPlatformPassword"},
    {"version" , "2025-08-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetEmbodiedAIPlatformPasswordResponse>();
}

/**
 * @summary 重置具身智能平台密码
 *
 * @param request ResetEmbodiedAIPlatformPasswordRequest
 * @return ResetEmbodiedAIPlatformPasswordResponse
 */
ResetEmbodiedAIPlatformPasswordResponse Client::resetEmbodiedAIPlatformPassword(const ResetEmbodiedAIPlatformPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetEmbodiedAIPlatformPasswordWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ADBAI20250812