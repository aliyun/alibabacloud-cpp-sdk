#include <darabonba/Core.hpp>
#include <alibabacloud/RdsAi20250507.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::RdsAi20250507::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace RdsAi20250507
{

AlibabaCloud::RdsAi20250507::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("rdsai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建应用服务实例
 *
 * @param request CreateAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstanceWithOptions(const CreateAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.dashboardPassword();
  }

  if (!!request.hasDashboardUsername()) {
    query["DashboardUsername"] = request.dashboardUsername();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.databasePassword();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasPublicNetworkAccessEnabled()) {
    query["PublicNetworkAccessEnabled"] = request.publicNetworkAccessEnabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInstanceResponse>();
}

/**
 * @summary 创建应用服务实例
 *
 * @param request CreateAppInstanceRequest
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstance(const CreateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除应用服务实例
 *
 * @param request DeleteAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstanceWithOptions(const DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstanceResponse>();
}

/**
 * @summary 删除应用服务实例
 *
 * @param request DeleteAppInstanceRequest
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstance(const DeleteAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询应用服务详情
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttributeWithOptions(const DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppInstanceAttribute"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppInstanceAttributeResponse>();
}

/**
 * @summary 查询应用服务详情
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttribute(const DescribeAppInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询应用服务列表
 *
 * @param request DescribeAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstancesResponse
 */
DescribeAppInstancesResponse Client::describeAppInstancesWithOptions(const DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppInstances"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppInstancesResponse>();
}

/**
 * @summary 查询应用服务列表
 *
 * @param request DescribeAppInstancesRequest
 * @return DescribeAppInstancesResponse
 */
DescribeAppInstancesResponse Client::describeAppInstances(const DescribeAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppInstancesWithOptions(request, runtime);
}

/**
 * @summary 查看实例认证信息
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfoWithOptions(const DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAuthInfo"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAuthInfoResponse>();
}

/**
 * @summary 查看实例认证信息
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfo(const DescribeInstanceAuthInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAuthInfoWithOptions(request, runtime);
}

/**
 * @summary 查看服务连接信息
 *
 * @param request DescribeInstanceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpointsWithOptions(const DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceEndpoints"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceEndpointsResponse>();
}

/**
 * @summary 查看服务连接信息
 *
 * @param request DescribeInstanceEndpointsRequest
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpoints(const DescribeInstanceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceEndpointsWithOptions(request, runtime);
}

/**
 * @summary 查询服务白名单
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelistWithOptions(const DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceIpWhitelist"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceIpWhitelistResponse>();
}

/**
 * @summary 查询服务白名单
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelist(const DescribeInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary 修改服务白名单
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelistWithOptions(const ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasIpWhitelist()) {
    query["IpWhitelist"] = request.ipWhitelist();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceIpWhitelist"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceIpWhitelistResponse>();
}

/**
 * @summary 修改服务白名单
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelist(const ModifyInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceIpWhitelistWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RdsAi20250507