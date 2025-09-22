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
 * @param tmpReq CreateAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstanceWithOptions(const CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppInstanceShrinkRequest request = CreateAppInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBInstanceConfig()) {
    request.setDBInstanceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.DBInstanceConfig(), "DBInstanceConfig", "json"));
  }

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

  if (!!request.hasDBInstanceConfigShrink()) {
    query["DBInstanceConfig"] = request.DBInstanceConfigShrink();
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

  if (!!request.hasRAGEnabled()) {
    query["RAGEnabled"] = request.RAGEnabled();
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
 * @summary 查看实例存储配置
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfigWithOptions(const DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeInstanceStorageConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceStorageConfigResponse>();
}

/**
 * @summary 查看实例存储配置
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary 修改Supabase Auth相关配置
 *
 * @param tmpReq ModifyInstanceAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAuthConfigResponse
 */
ModifyInstanceAuthConfigResponse Client::modifyInstanceAuthConfigWithOptions(const ModifyInstanceAuthConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceAuthConfigShrinkRequest request = ModifyInstanceAuthConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigList()) {
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.configListShrink();
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
    {"action" , "ModifyInstanceAuthConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAuthConfigResponse>();
}

/**
 * @summary 修改Supabase Auth相关配置
 *
 * @param request ModifyInstanceAuthConfigRequest
 * @return ModifyInstanceAuthConfigResponse
 */
ModifyInstanceAuthConfigResponse Client::modifyInstanceAuthConfig(const ModifyInstanceAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAuthConfigWithOptions(request, runtime);
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

/**
 * @summary 修改实例存储配置
 *
 * @param tmpReq ModifyInstanceStorageConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceStorageConfigResponse
 */
ModifyInstanceStorageConfigResponse Client::modifyInstanceStorageConfigWithOptions(const ModifyInstanceStorageConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceStorageConfigShrinkRequest request = ModifyInstanceStorageConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigList()) {
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.configListShrink();
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
    {"action" , "ModifyInstanceStorageConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceStorageConfigResponse>();
}

/**
 * @summary 修改实例存储配置
 *
 * @param request ModifyInstanceStorageConfigRequest
 * @return ModifyInstanceStorageConfigResponse
 */
ModifyInstanceStorageConfigResponse Client::modifyInstanceStorageConfig(const ModifyInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary 重置实例密码
 *
 * @param request ResetInstancePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePasswordWithOptions(const ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.dashboardPassword();
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
    {"action" , "ResetInstancePassword"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetInstancePasswordResponse>();
}

/**
 * @summary 重置实例密码
 *
 * @param request ResetInstancePasswordRequest
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePassword(const ResetInstancePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetInstancePasswordWithOptions(request, runtime);
}

/**
 * @summary 重启实例
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "RestartInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary 重启实例
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary 启动实例
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "StartInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary 启动实例
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary 暂停实例
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "StopInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary 暂停实例
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RdsAi20250507