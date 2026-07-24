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
 * @summary 检查sql语法
 *
 * @param request CheckSqlContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSqlContentResponse
 */
CheckSqlContentResponse Client::checkSqlContentWithOptions(const CheckSqlContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSqlContent()) {
    query["SqlContent"] = request.getSqlContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSqlContent"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSqlContentResponse>();
}

/**
 * @summary 检查sql语法
 *
 * @param request CheckSqlContentRequest
 * @return CheckSqlContentResponse
 */
CheckSqlContentResponse Client::checkSqlContent(const CheckSqlContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSqlContentWithOptions(request, runtime);
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

/**
 * @summary 创建 JOB
 *
 * @param request CreateComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeJobResponse
 */
CreateComputeJobResponse Client::createComputeJobWithOptions(const CreateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCuLimit()) {
    query["CuLimit"] = request.getCuLimit();
  }

  if (!!request.hasCuReserved()) {
    query["CuReserved"] = request.getCuReserved();
  }

  if (!!request.hasDraftSql()) {
    query["DraftSql"] = request.getDraftSql();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobConfig()) {
    query["JobConfig"] = request.getJobConfig();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUpgradeMode()) {
    query["UpgradeMode"] = request.getUpgradeMode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeJobResponse>();
}

/**
 * @summary 创建 JOB
 *
 * @param request CreateComputeJobRequest
 * @return CreateComputeJobResponse
 */
CreateComputeJobResponse Client::createComputeJob(const CreateComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeJobWithOptions(request, runtime);
}

/**
 * @summary  删除实例
 *
 * @param request DeleteComputeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComputeInstanceResponse
 */
DeleteComputeInstanceResponse Client::deleteComputeInstanceWithOptions(const DeleteComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComputeInstance"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComputeInstanceResponse>();
}

/**
 * @summary  删除实例
 *
 * @param request DeleteComputeInstanceRequest
 * @return DeleteComputeInstanceResponse
 */
DeleteComputeInstanceResponse Client::deleteComputeInstance(const DeleteComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除 JOB
 *
 * @param request DeleteComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComputeJobResponse
 */
DeleteComputeJobResponse Client::deleteComputeJobWithOptions(const DeleteComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComputeJobResponse>();
}

/**
 * @summary 删除 JOB
 *
 * @param request DeleteComputeJobRequest
 * @return DeleteComputeJobResponse
 */
DeleteComputeJobResponse Client::deleteComputeJob(const DeleteComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeJobWithOptions(request, runtime);
}

/**
 * @summary 查询单个实例
 *
 * @param request GetComputeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeInstanceResponse
 */
GetComputeInstanceResponse Client::getComputeInstanceWithOptions(const GetComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeInstance"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeInstanceResponse>();
}

/**
 * @summary 查询单个实例
 *
 * @param request GetComputeInstanceRequest
 * @return GetComputeInstanceResponse
 */
GetComputeInstanceResponse Client::getComputeInstance(const GetComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询 JOB 详情
 *
 * @param request GetComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeJobResponse
 */
GetComputeJobResponse Client::getComputeJobWithOptions(const GetComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeJobResponse>();
}

/**
 * @summary 查询 JOB 详情
 *
 * @param request GetComputeJobRequest
 * @return GetComputeJobResponse
 */
GetComputeJobResponse Client::getComputeJob(const GetComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeJobWithOptions(request, runtime);
}

/**
 * @summary 获取debug信息
 *
 * @param request GetJobDebugDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDebugDataResponse
 */
GetJobDebugDataResponse Client::getJobDebugDataWithOptions(const GetJobDebugDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
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
    {"action" , "GetJobDebugData"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobDebugDataResponse>();
}

/**
 * @summary 获取debug信息
 *
 * @param request GetJobDebugDataRequest
 * @return GetJobDebugDataResponse
 */
GetJobDebugDataResponse Client::getJobDebugData(const GetJobDebugDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobDebugDataWithOptions(request, runtime);
}

/**
 * @summary 查询实例列表（分页）
 *
 * @param tmpReq ListComputeInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeInstancesResponse
 */
ListComputeInstancesResponse Client::listComputeInstancesWithOptions(const ListComputeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListComputeInstancesShrinkRequest request = ListComputeInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComputeInstances"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeInstancesResponse>();
}

/**
 * @summary 查询实例列表（分页）
 *
 * @param request ListComputeInstancesRequest
 * @return ListComputeInstancesResponse
 */
ListComputeInstancesResponse Client::listComputeInstances(const ListComputeInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询实例列表（分页）
 *
 * @param tmpReq ListComputeInstancesInPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeInstancesInPageResponse
 */
ListComputeInstancesInPageResponse Client::listComputeInstancesInPageWithOptions(const ListComputeInstancesInPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListComputeInstancesInPageShrinkRequest request = ListComputeInstancesInPageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceIds()) {
    request.setInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceIds(), "InstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComputeInstancesInPage"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeInstancesInPageResponse>();
}

/**
 * @summary 查询实例列表（分页）
 *
 * @param request ListComputeInstancesInPageRequest
 * @return ListComputeInstancesInPageResponse
 */
ListComputeInstancesInPageResponse Client::listComputeInstancesInPage(const ListComputeInstancesInPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeInstancesInPageWithOptions(request, runtime);
}

/**
 * @summary 分页查询 JOB 列表
 *
 * @param request ListComputeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeJobsResponse
 */
ListComputeJobsResponse Client::listComputeJobsWithOptions(const ListComputeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.getSearch();
  }

  if (!!request.hasSortDirection()) {
    query["SortDirection"] = request.getSortDirection();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.getSortField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComputeJobs"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeJobsResponse>();
}

/**
 * @summary 分页查询 JOB 列表
 *
 * @param request ListComputeJobsRequest
 * @return ListComputeJobsResponse
 */
ListComputeJobsResponse Client::listComputeJobs(const ListComputeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeJobsWithOptions(request, runtime);
}

/**
 * @summary 查询创建 SQL 任务时支持的连接器列表
 *
 * @param request ListSupportedConnectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupportedConnectorsResponse
 */
ListSupportedConnectorsResponse Client::listSupportedConnectorsWithOptions(const ListSupportedConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSupportedConnectors"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupportedConnectorsResponse>();
}

/**
 * @summary 查询创建 SQL 任务时支持的连接器列表
 *
 * @param request ListSupportedConnectorsRequest
 * @return ListSupportedConnectorsResponse
 */
ListSupportedConnectorsResponse Client::listSupportedConnectors(const ListSupportedConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupportedConnectorsWithOptions(request, runtime);
}

/**
 * @summary 重新启动后付费实例
 *
 * @param request ReopenComputeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReopenComputeInstanceResponse
 */
ReopenComputeInstanceResponse Client::reopenComputeInstanceWithOptions(const ReopenComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReopenComputeInstance"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReopenComputeInstanceResponse>();
}

/**
 * @summary 重新启动后付费实例
 *
 * @param request ReopenComputeInstanceRequest
 * @return ReopenComputeInstanceResponse
 */
ReopenComputeInstanceResponse Client::reopenComputeInstance(const ReopenComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reopenComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary 重启 JOB
 *
 * @param request RestartComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartComputeJobResponse
 */
RestartComputeJobResponse Client::restartComputeJobWithOptions(const RestartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RestartComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartComputeJobResponse>();
}

/**
 * @summary 重启 JOB
 *
 * @param request RestartComputeJobRequest
 * @return RestartComputeJobResponse
 */
RestartComputeJobResponse Client::restartComputeJob(const RestartComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartComputeJobWithOptions(request, runtime);
}

/**
 * @summary 部署实例
 *
 * @param tmpReq StartComputeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartComputeInstanceResponse
 */
StartComputeInstanceResponse Client::startComputeInstanceWithOptions(const StartComputeInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartComputeInstanceShrinkRequest request = StartComputeInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVSwitchIds()) {
    request.setVSwitchIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVSwitchIds(), "VSwitchIds", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSelectedZones()) {
    query["SelectedZones"] = request.getSelectedZones();
  }

  if (!!request.hasServiceVersion()) {
    query["ServiceVersion"] = request.getServiceVersion();
  }

  if (!!request.hasVSwitchIdsShrink()) {
    query["VSwitchIds"] = request.getVSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartComputeInstance"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartComputeInstanceResponse>();
}

/**
 * @summary 部署实例
 *
 * @param request StartComputeInstanceRequest
 * @return StartComputeInstanceResponse
 */
StartComputeInstanceResponse Client::startComputeInstance(const StartComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建 JOB
 *
 * @param request StartComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartComputeJobResponse
 */
StartComputeJobResponse Client::startComputeJobWithOptions(const StartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCuLimit()) {
    query["CuLimit"] = request.getCuLimit();
  }

  if (!!request.hasCuReserved()) {
    query["CuReserved"] = request.getCuReserved();
  }

  if (!!request.hasDraftSql()) {
    query["DraftSql"] = request.getDraftSql();
  }

  if (!!request.hasDraftSqlStart()) {
    query["DraftSqlStart"] = request.getDraftSqlStart();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRecoveryMode()) {
    query["RecoveryMode"] = request.getRecoveryMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartComputeJobResponse>();
}

/**
 * @summary 创建 JOB
 *
 * @param request StartComputeJobRequest
 * @return StartComputeJobResponse
 */
StartComputeJobResponse Client::startComputeJob(const StartComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startComputeJobWithOptions(request, runtime);
}

/**
 * @summary 停用/释放后付费实例
 *
 * @param request StopComputeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopComputeInstanceResponse
 */
StopComputeInstanceResponse Client::stopComputeInstanceWithOptions(const StopComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopComputeInstance"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopComputeInstanceResponse>();
}

/**
 * @summary 停用/释放后付费实例
 *
 * @param request StopComputeInstanceRequest
 * @return StopComputeInstanceResponse
 */
StopComputeInstanceResponse Client::stopComputeInstance(const StopComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary 停止 JOB
 *
 * @param request StopComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopComputeJobResponse
 */
StopComputeJobResponse Client::stopComputeJobWithOptions(const StopComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopComputeJobResponse>();
}

/**
 * @summary 停止 JOB
 *
 * @param request StopComputeJobRequest
 * @return StopComputeJobResponse
 */
StopComputeJobResponse Client::stopComputeJob(const StopComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopComputeJobWithOptions(request, runtime);
}

/**
 * @summary 更新实例名称
 *
 * @param request UpdateComputeInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeInstanceNameResponse
 */
UpdateComputeInstanceNameResponse Client::updateComputeInstanceNameWithOptions(const UpdateComputeInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeInstanceName"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeInstanceNameResponse>();
}

/**
 * @summary 更新实例名称
 *
 * @param request UpdateComputeInstanceNameRequest
 * @return UpdateComputeInstanceNameResponse
 */
UpdateComputeInstanceNameResponse Client::updateComputeInstanceName(const UpdateComputeInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeInstanceNameWithOptions(request, runtime);
}

/**
 * @summary 更新 JOB
 *
 * @param request UpdateComputeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeJobResponse
 */
UpdateComputeJobResponse Client::updateComputeJobWithOptions(const UpdateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUpgradeMode()) {
    query["UpgradeMode"] = request.getUpgradeMode();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeJob"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeJobResponse>();
}

/**
 * @summary 更新 JOB
 *
 * @param request UpdateComputeJobRequest
 * @return UpdateComputeJobResponse
 */
UpdateComputeJobResponse Client::updateComputeJob(const UpdateComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeJobWithOptions(request, runtime);
}

/**
 * @summary 更新 JOB 的 CU 配额
 *
 * @param request UpdateComputeJobCuRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeJobCuResponse
 */
UpdateComputeJobCuResponse Client::updateComputeJobCuWithOptions(const UpdateComputeJobCuRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCuLimit()) {
    query["CuLimit"] = request.getCuLimit();
  }

  if (!!request.hasCuReserved()) {
    query["CuReserved"] = request.getCuReserved();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeJobCu"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeJobCuResponse>();
}

/**
 * @summary 更新 JOB 的 CU 配额
 *
 * @param request UpdateComputeJobCuRequest
 * @return UpdateComputeJobCuResponse
 */
UpdateComputeJobCuResponse Client::updateComputeJobCu(const UpdateComputeJobCuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeJobCuWithOptions(request, runtime);
}

/**
 * @summary 更新 JOB 的 SQL
 *
 * @param request UpdateComputeJobDraftSqlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeJobDraftSqlResponse
 */
UpdateComputeJobDraftSqlResponse Client::updateComputeJobDraftSqlWithOptions(const UpdateComputeJobDraftSqlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftSql()) {
    query["DraftSql"] = request.getDraftSql();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeJobDraftSql"},
    {"version" , "2026-02-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeJobDraftSqlResponse>();
}

/**
 * @summary 更新 JOB 的 SQL
 *
 * @param request UpdateComputeJobDraftSqlRequest
 * @return UpdateComputeJobDraftSqlResponse
 */
UpdateComputeJobDraftSqlResponse Client::updateComputeJobDraftSql(const UpdateComputeJobDraftSqlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeJobDraftSqlWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202