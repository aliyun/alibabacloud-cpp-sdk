#include <darabonba/Core.hpp>
#include <alibabacloud/EcsWorkbench20220220.hpp>
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
using namespace AlibabaCloud::EcsWorkbench20220220::Models;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{

AlibabaCloud::EcsWorkbench20220220::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ecs-workbench", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取实例录屏配置
 *
 * @param request GetInstanceRecordConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceRecordConfigResponse
 */
GetInstanceRecordConfigResponse Client::getInstanceRecordConfigWithOptions(const GetInstanceRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceRecordConfig"},
    {"version" , "2022-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceRecordConfigResponse>();
}

/**
 * @summary 获取实例录屏配置
 *
 * @param request GetInstanceRecordConfigRequest
 * @return GetInstanceRecordConfigResponse
 */
GetInstanceRecordConfigResponse Client::getInstanceRecordConfig(const GetInstanceRecordConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceRecordConfigWithOptions(request, runtime);
}

/**
 * @summary 获取实例录屏记录列表
 *
 * @param request ListInstanceRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceRecordsResponse
 */
ListInstanceRecordsResponse Client::listInstanceRecordsWithOptions(const ListInstanceRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstanceRecords"},
    {"version" , "2022-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceRecordsResponse>();
}

/**
 * @summary 获取实例录屏记录列表
 *
 * @param request ListInstanceRecordsRequest
 * @return ListInstanceRecordsResponse
 */
ListInstanceRecordsResponse Client::listInstanceRecords(const ListInstanceRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceRecordsWithOptions(request, runtime);
}

/**
 * @summary 查看实例Workbench登录后执行命令的历史列表。
 *
 * @param request ListTerminalCommandsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTerminalCommandsResponse
 */
ListTerminalCommandsResponse Client::listTerminalCommandsWithOptions(const ListTerminalCommandsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTerminalSessionToken()) {
    body["TerminalSessionToken"] = request.terminalSessionToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTerminalCommands"},
    {"version" , "2022-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTerminalCommandsResponse>();
}

/**
 * @summary 查看实例Workbench登录后执行命令的历史列表。
 *
 * @param request ListTerminalCommandsRequest
 * @return ListTerminalCommandsResponse
 */
ListTerminalCommandsResponse Client::listTerminalCommands(const ListTerminalCommandsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTerminalCommandsWithOptions(request, runtime);
}

/**
 * @summary 登录实例
 *
 * @param request LoginInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoginInstanceResponse
 */
LoginInstanceResponse Client::loginInstanceWithOptions(const LoginInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceLoginInfo()) {
    query["InstanceLoginInfo"] = request.instanceLoginInfo();
  }

  if (!!request.hasPartnerInfo()) {
    query["PartnerInfo"] = request.partnerInfo();
  }

  if (!!request.hasUserAccount()) {
    query["UserAccount"] = request.userAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LoginInstance"},
    {"version" , "2022-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoginInstanceResponse>();
}

/**
 * @summary 登录实例
 *
 * @param request LoginInstanceRequest
 * @return LoginInstanceResponse
 */
LoginInstanceResponse Client::loginInstance(const LoginInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loginInstanceWithOptions(request, runtime);
}

/**
 * @summary 设置实例录屏配置
 *
 * @param request SetInstanceRecordConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetInstanceRecordConfigResponse
 */
SetInstanceRecordConfigResponse Client::setInstanceRecordConfigWithOptions(const SetInstanceRecordConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasExpirationDays()) {
    body["ExpirationDays"] = request.expirationDays();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRecordStorageTarget()) {
    body["RecordStorageTarget"] = request.recordStorageTarget();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetInstanceRecordConfig"},
    {"version" , "2022-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetInstanceRecordConfigResponse>();
}

/**
 * @summary 设置实例录屏配置
 *
 * @param request SetInstanceRecordConfigRequest
 * @return SetInstanceRecordConfigResponse
 */
SetInstanceRecordConfigResponse Client::setInstanceRecordConfig(const SetInstanceRecordConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setInstanceRecordConfigWithOptions(request, runtime);
}

/**
 * @summary 查看实例录屏内容
 *
 * @param request ViewInstanceRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ViewInstanceRecordsResponse
 */
ViewInstanceRecordsResponse Client::viewInstanceRecordsWithOptions(const ViewInstanceRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTerminalSessionToken()) {
    body["TerminalSessionToken"] = request.terminalSessionToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ViewInstanceRecords"},
    {"version" , "2022-02-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ViewInstanceRecordsResponse>();
}

/**
 * @summary 查看实例录屏内容
 *
 * @param request ViewInstanceRecordsRequest
 * @return ViewInstanceRecordsResponse
 */
ViewInstanceRecordsResponse Client::viewInstanceRecords(const ViewInstanceRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return viewInstanceRecordsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220