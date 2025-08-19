#include <darabonba/Core.hpp>
#include <alibabacloud/EsServerless20230627.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::EsServerless20230627::Models;
namespace AlibabaCloud
{
namespace EsServerless20230627
{

AlibabaCloud::EsServerless20230627::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("es-serverless", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 撤销规格审批
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSpecReviewTaskResponse
 */
CancelSpecReviewTaskResponse Client::cancelSpecReviewTaskWithOptions(const string &appName, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelSpecReviewTask"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/spec-review-tasks/" , Darabonba::Http::URL::percentEncode(taskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelSpecReviewTaskResponse>();
}

/**
 * @summary 撤销规格审批
 *
 * @return CancelSpecReviewTaskResponse
 */
CancelSpecReviewTaskResponse Client::cancelSpecReviewTask(const string &appName, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelSpecReviewTaskWithOptions(appName, taskId, headers, runtime);
}

/**
 * @summary 创建Serverless应用
 *
 * @param request CreateAppRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppResponse
 */
CreateAppResponse Client::createAppWithOptions(const CreateAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["appName"] = request.appName();
  }

  if (!!request.hasAuthentication()) {
    body["authentication"] = request.authentication();
  }

  if (!!request.hasChargeType()) {
    body["chargeType"] = request.chargeType();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasNetwork()) {
    body["network"] = request.network();
  }

  if (!!request.hasPrivateNetwork()) {
    body["privateNetwork"] = request.privateNetwork();
  }

  if (!!request.hasQuotaInfo()) {
    body["quotaInfo"] = request.quotaInfo();
  }

  if (!!request.hasRegionId()) {
    body["regionId"] = request.regionId();
  }

  if (!!request.hasScenario()) {
    body["scenario"] = request.scenario();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApp"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppResponse>();
}

/**
 * @summary 创建Serverless应用
 *
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAppWithOptions(request, headers, runtime);
}

/**
 * @summary 创建端点
 *
 * @param request CreateEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpointWithOptions(const CreateEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  json body = {};
  if (!!request.hasEndpointZones()) {
    body["endpointZones"] = request.endpointZones();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEndpoint"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/endpoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEndpointResponse>();
}

/**
 * @summary 创建端点
 *
 * @param request CreateEndpointRequest
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpoint(const CreateEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEndpointWithOptions(request, headers, runtime);
}

/**
 * @summary 创建快照
 *
 * @param request CreateSnapshotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const string &appName, const string &repository, const CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasIndices()) {
    body["indices"] = request.indices();
  }

  if (!!request.hasSnapshot()) {
    body["snapshot"] = request.snapshot();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/snapshot-repositories/" , Darabonba::Http::URL::percentEncode(repository) , "/snapshots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary 创建快照
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const string &appName, const string &repository, const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSnapshotWithOptions(appName, repository, request, headers, runtime);
}

/**
 * @summary 删除Serverless应用。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteAppWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApp"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppResponse>();
}

/**
 * @summary 删除Serverless应用。
 *
 * @return DeleteAppResponse
 */
DeleteAppResponse Client::deleteApp(const string &appName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAppWithOptions(appName, headers, runtime);
}

/**
 * @summary 删除词典
 *
 * @param request DeleteDictRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDictResponse
 */
DeleteDictResponse Client::deleteDictWithOptions(const string &appName, const DeleteDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDict"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/dicts/actions/remove")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDictResponse>();
}

/**
 * @summary 删除词典
 *
 * @param request DeleteDictRequest
 * @return DeleteDictResponse
 */
DeleteDictResponse Client::deleteDict(const string &appName, const DeleteDictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDictWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 删除端点
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpointWithOptions(const string &endpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEndpoint"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/endpoints/" , Darabonba::Http::URL::percentEncode(endpointId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEndpointResponse>();
}

/**
 * @summary 删除端点
 *
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpoint(const string &endpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEndpointWithOptions(endpointId, headers, runtime);
}

/**
 * @summary 删除快照
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const string &appName, const string &repository, const string &snapshot, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/snapshot-repositories/" , Darabonba::Http::URL::percentEncode(repository) , "/snapshots/" , Darabonba::Http::URL::percentEncode(snapshot))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary 删除快照
 *
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const string &appName, const string &repository, const string &snapshot) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSnapshotWithOptions(appName, repository, snapshot, headers, runtime);
}

/**
 * @summary 获取Serverless应用详情
 *
 * @param request GetAppRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppResponse
 */
GetAppResponse Client::getAppWithOptions(const string &appName, const GetAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetailed()) {
    query["detailed"] = request.detailed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApp"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppResponse>();
}

/**
 * @summary 获取Serverless应用详情
 *
 * @param request GetAppRequest
 * @return GetAppResponse
 */
GetAppResponse Client::getApp(const string &appName, const GetAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAppWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 获取Serverless应用配额详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppQuotaResponse
 */
GetAppQuotaResponse Client::getAppQuotaWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppQuota"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/quota")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppQuotaResponse>();
}

/**
 * @summary 获取Serverless应用配额详情
 *
 * @return GetAppQuotaResponse
 */
GetAppQuotaResponse Client::getAppQuota(const string &appName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAppQuotaWithOptions(appName, headers, runtime);
}

/**
 * @summary 获取监控数据
 *
 * @param request GetMonitorDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonitorDataResponse
 */
GetMonitorDataResponse Client::getMonitorDataWithOptions(const GetMonitorDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "GetMonitorData"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/emon/metrics/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonitorDataResponse>();
}

/**
 * @summary 获取监控数据
 *
 * @param request GetMonitorDataRequest
 * @return GetMonitorDataResponse
 */
GetMonitorDataResponse Client::getMonitorData(const GetMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonitorDataWithOptions(request, headers, runtime);
}

/**
 * @summary 获取自动备份配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSnapshotSettingResponse
 */
GetSnapshotSettingResponse Client::getSnapshotSettingWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSnapshotSetting"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/auto-snapshot-setting")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSnapshotSettingResponse>();
}

/**
 * @summary 获取自动备份配置
 *
 * @return GetSnapshotSettingResponse
 */
GetSnapshotSettingResponse Client::getSnapshotSetting(const string &appName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSnapshotSettingWithOptions(appName, headers, runtime);
}

/**
 * @summary 获取配额审批详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSpecReviewTaskResponse
 */
GetSpecReviewTaskResponse Client::getSpecReviewTaskWithOptions(const string &appName, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSpecReviewTask"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/spec-review-tasks/" , Darabonba::Http::URL::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSpecReviewTaskResponse>();
}

/**
 * @summary 获取配额审批详情
 *
 * @return GetSpecReviewTaskResponse
 */
GetSpecReviewTaskResponse Client::getSpecReviewTask(const string &appName, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSpecReviewTaskWithOptions(appName, taskId, headers, runtime);
}

/**
 * @summary 查看Serverless应用列表
 *
 * @param request ListAppsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppsResponse
 */
ListAppsResponse Client::listAppsWithOptions(const ListAppsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["appName"] = request.appName();
  }

  if (!!request.hasCreateTime()) {
    query["createTime"] = request.createTime();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasOrderType()) {
    query["orderType"] = request.orderType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApps"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppsResponse>();
}

/**
 * @summary 查看Serverless应用列表
 *
 * @param request ListAppsRequest
 * @return ListAppsResponse
 */
ListAppsResponse Client::listApps(const ListAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取词典列表
 *
 * @param request ListDictsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDictsResponse
 */
ListDictsResponse Client::listDictsWithOptions(const string &appName, const ListDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDicts"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/dicts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDictsResponse>();
}

/**
 * @summary 获取词典列表
 *
 * @param request ListDictsRequest
 * @return ListDictsResponse
 */
ListDictsResponse Client::listDicts(const string &appName, const ListDictsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDictsWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 获取端点信息列表
 *
 * @param request ListEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEndpointsResponse
 */
ListEndpointsResponse Client::listEndpointsWithOptions(const ListEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  if (!!request.hasVpcId()) {
    query["vpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEndpoints"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEndpointsResponse>();
}

/**
 * @summary 获取端点信息列表
 *
 * @param request ListEndpointsRequest
 * @return ListEndpointsResponse
 */
ListEndpointsResponse Client::listEndpoints(const ListEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEndpointsWithOptions(request, headers, runtime);
}

/**
 * @summary 查看索引列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndicesResponse
 */
ListIndicesResponse Client::listIndicesWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndices"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/indices")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndicesResponse>();
}

/**
 * @summary 查看索引列表
 *
 * @return ListIndicesResponse
 */
ListIndicesResponse Client::listIndices(const string &appName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndicesWithOptions(appName, headers, runtime);
}

/**
 * @summary 获取快照仓库列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotRepositoriesResponse
 */
ListSnapshotRepositoriesResponse Client::listSnapshotRepositoriesWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshotRepositories"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/snapshot-repositories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotRepositoriesResponse>();
}

/**
 * @summary 获取快照仓库列表
 *
 * @return ListSnapshotRepositoriesResponse
 */
ListSnapshotRepositoriesResponse Client::listSnapshotRepositories(const string &appName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSnapshotRepositoriesWithOptions(appName, headers, runtime);
}

/**
 * @summary 获取仓库的快照列表
 *
 * @param request ListSnapshotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshotsWithOptions(const string &appName, const ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRepository()) {
    query["repository"] = request.repository();
  }

  if (!!request.hasSnapshot()) {
    query["snapshot"] = request.snapshot();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshots"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/snapshots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotsResponse>();
}

/**
 * @summary 获取仓库的快照列表
 *
 * @param request ListSnapshotsRequest
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshots(const string &appName, const ListSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSnapshotsWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 获取规格审批列表
 *
 * @param request ListSpecReviewTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSpecReviewTasksResponse
 */
ListSpecReviewTasksResponse Client::listSpecReviewTasksWithOptions(const string &appName, const ListSpecReviewTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSize()) {
    query["size"] = request.size();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSpecReviewTasks"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/spec-review-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSpecReviewTasksResponse>();
}

/**
 * @summary 获取规格审批列表
 *
 * @param request ListSpecReviewTasksRequest
 * @return ListSpecReviewTasksResponse
 */
ListSpecReviewTasksResponse Client::listSpecReviewTasks(const string &appName, const ListSpecReviewTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSpecReviewTasksWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 编辑Serverless应用
 *
 * @param request UpdateAppRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppResponse
 */
UpdateAppResponse Client::updateAppWithOptions(const string &appName, const UpdateAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplyReason()) {
    body["applyReason"] = request.applyReason();
  }

  if (!!request.hasAuthentication()) {
    body["authentication"] = request.authentication();
  }

  if (!!request.hasContactInfo()) {
    body["contactInfo"] = request.contactInfo();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasLimiterInfo()) {
    body["limiterInfo"] = request.limiterInfo();
  }

  if (!!request.hasNetwork()) {
    body["network"] = request.network();
  }

  if (!!request.hasPrivateNetwork()) {
    body["privateNetwork"] = request.privateNetwork();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApp"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppResponse>();
}

/**
 * @summary 编辑Serverless应用
 *
 * @param request UpdateAppRequest
 * @return UpdateAppResponse
 */
UpdateAppResponse Client::updateApp(const string &appName, const UpdateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAppWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 创建或更新词典
 *
 * @param request UpdateDictRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDictResponse
 */
UpdateDictResponse Client::updateDictWithOptions(const string &appName, const UpdateDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowCover()) {
    query["allowCover"] = request.allowCover();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasFiles()) {
    body["files"] = request.files();
  }

  if (!!request.hasSourceType()) {
    body["sourceType"] = request.sourceType();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDict"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/dicts")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDictResponse>();
}

/**
 * @summary 创建或更新词典
 *
 * @param request UpdateDictRequest
 * @return UpdateDictResponse
 */
UpdateDictResponse Client::updateDict(const string &appName, const UpdateDictRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDictWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 修改端点信息
 *
 * @param request UpdateEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEndpointResponse
 */
UpdateEndpointResponse Client::updateEndpointWithOptions(const string &endpointId, const UpdateEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndpointZones()) {
    body["endpointZones"] = request.endpointZones();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEndpoint"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/endpoints/" , Darabonba::Http::URL::percentEncode(endpointId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEndpointResponse>();
}

/**
 * @summary 修改端点信息
 *
 * @param request UpdateEndpointRequest
 * @return UpdateEndpointResponse
 */
UpdateEndpointResponse Client::updateEndpoint(const string &endpointId, const UpdateEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEndpointWithOptions(endpointId, request, headers, runtime);
}

/**
 * @summary 修改应用公网配置。
 *
 * @param request UpdateNetworkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkResponse
 */
UpdateNetworkResponse Client::updateNetworkWithOptions(const string &appName, const UpdateNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateNetwork"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/networks")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNetworkResponse>();
}

/**
 * @summary 修改应用公网配置。
 *
 * @param request UpdateNetworkRequest
 * @return UpdateNetworkResponse
 */
UpdateNetworkResponse Client::updateNetwork(const string &appName, const UpdateNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNetworkWithOptions(appName, request, headers, runtime);
}

/**
 * @summary 修改自动备份配置
 *
 * @param request UpdateSnapshotSettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSnapshotSettingResponse
 */
UpdateSnapshotSettingResponse Client::updateSnapshotSettingWithOptions(const string &appName, const UpdateSnapshotSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnable()) {
    body["enable"] = request.enable();
  }

  if (!!request.hasQuartzRegex()) {
    body["quartzRegex"] = request.quartzRegex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSnapshotSetting"},
    {"version" , "2023-06-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/es-serverless/instances/" , Darabonba::Http::URL::percentEncode(appName) , "/auto-snapshot-setting")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSnapshotSettingResponse>();
}

/**
 * @summary 修改自动备份配置
 *
 * @param request UpdateSnapshotSettingRequest
 * @return UpdateSnapshotSettingResponse
 */
UpdateSnapshotSettingResponse Client::updateSnapshotSetting(const string &appName, const UpdateSnapshotSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSnapshotSettingWithOptions(appName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace EsServerless20230627