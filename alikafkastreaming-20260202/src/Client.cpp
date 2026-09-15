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
  this->_endpointRule = "regional";
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
 * @description ## 请求说明
 * - 该接口支持通过 GET 或 POST 方法调用。
 * - 必须提供 `InstanceId`、`JobName` 和 `SqlContent` 参数，其中 `SqlContent` 是待校验的 Flink SQL 语句。
 * - 返回结果中，`Data.Valid` 字段指示 SQL 是否通过校验；若未通过，则错误详情位于 `Data.ErrorList` 中。
 * - 当前版本要求同时传入实例 ID (`InstanceId`) 和作业名称 (`JobName`) 以构建作业上下文。
 * - 接口返回成功仅表示校验流程执行完成，并不直接反映 SQL 的有效性，请检查 `Data.Valid` 字段来确定 SQL 是否有效。
 * - 错误码和异常处理请参考文档中的“错误码”部分。
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
 * @description ## 请求说明
 * - 该接口支持通过 GET 或 POST 方法调用。
 * - 必须提供 `InstanceId`、`JobName` 和 `SqlContent` 参数，其中 `SqlContent` 是待校验的 Flink SQL 语句。
 * - 返回结果中，`Data.Valid` 字段指示 SQL 是否通过校验；若未通过，则错误详情位于 `Data.ErrorList` 中。
 * - 当前版本要求同时传入实例 ID (`InstanceId`) 和作业名称 (`JobName`) 以构建作业上下文。
 * - 接口返回成功仅表示校验流程执行完成，并不直接反映 SQL 的有效性，请检查 `Data.Valid` 字段来确定 SQL 是否有效。
 * - 错误码和异常处理请参考文档中的“错误码”部分。
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
 * @description 创建一个计算实例。接口只完成购买阶段；创建成功后需调用 StartComputeInstance 完成网络配置和部署。
 * - API 版本：2026-02-02
 * - Action：CreateComputeInstance
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
 * @description 创建一个计算实例。接口只完成购买阶段；创建成功后需调用 StartComputeInstance 完成网络配置和部署。
 * - API 版本：2026-02-02
 * - Action：CreateComputeInstance
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
 * @description ## 请求说明
 * - 该API用于在指定的运行中的计算实例上创建一个新的Flink SQL作业。
 * - 创建后的作业将处于`INIT`状态。
 * - 用户可以通过设置`CuLimit`和`CuReserved`来控制作业的资源使用情况。
 * - `Remark`字段允许用户为作业添加备注信息，便于管理和识别。
 * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
 * - 如果尝试创建同名作业，则会返回错误提示。
 * - 计算实例必须处于运行状态才能成功创建作业。
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description ## 请求说明
 * - 该API用于在指定的运行中的计算实例上创建一个新的Flink SQL作业。
 * - 创建后的作业将处于`INIT`状态。
 * - 用户可以通过设置`CuLimit`和`CuReserved`来控制作业的资源使用情况。
 * - `Remark`字段允许用户为作业添加备注信息，便于管理和识别。
 * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
 * - 如果尝试创建同名作业，则会返回错误提示。
 * - 计算实例必须处于运行状态才能成功创建作业。
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
 * @description 删除处于待部署、已停止或已释放状态的计算实例。
 * - API版本：2026-02-02
 * - Action：DeleteComputeInstance
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
 * @description 删除处于待部署、已停止或已释放状态的计算实例。
 * - API版本：2026-02-02
 * - Action：DeleteComputeInstance
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
 * @description ## 请求说明
 * - 该接口用于删除一个特定的计算作业。
 * - 成功调用此接口仅表示删除请求已被系统接受，并非立即完成删除操作。
 * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
 * - 如果计算实例或作业处于不允许删除的状态（例如：非运行状态），则会返回相应的错误信息。
 * - 删除操作不可逆，请谨慎使用。
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
 * @description ## 请求说明
 * - 该接口用于删除一个特定的计算作业。
 * - 成功调用此接口仅表示删除请求已被系统接受，并非立即完成删除操作。
 * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
 * - 如果计算实例或作业处于不允许删除的状态（例如：非运行状态），则会返回相应的错误信息。
 * - 删除操作不可逆，请谨慎使用。
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
 * @description ## 请求说明
 * - 本接口用于查询指定计算作业的详情。
 * - 支持使用 GET 或 POST 方法进行请求。
 * - 所有时间字段以 Unix 时间戳形式返回，单位为毫秒。
 * - 必须提供 `RegionId`、`InstanceId` 和 `JobName` 参数。
 * - 授权操作为 `alikafkastreaming:GetComputeJob`，访问级别为读取（Read）。
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
 * @description ## 请求说明
 * - 本接口用于查询指定计算作业的详情。
 * - 支持使用 GET 或 POST 方法进行请求。
 * - 所有时间字段以 Unix 时间戳形式返回，单位为毫秒。
 * - 必须提供 `RegionId`、`InstanceId` 和 `JobName` 参数。
 * - 授权操作为 `alikafkastreaming:GetComputeJob`，访问级别为读取（Read）。
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

  if (!!request.hasInstanceIdsShrink()) {
    query["InstanceIds"] = request.getInstanceIdsShrink();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @description ## 请求说明
 * - 该接口支持通过 `MaxResults` 和 `NextToken` 参数进行游标分页查询。
 * - 首次请求时不需要传递 `NextToken`，后续请求需使用上一次响应中返回的 `NextToken` 值。
 * - 支持按作业名称或备注搜索，并可选择不同的排序字段和方向。
 * - 返回的时间字段均为 Unix 时间戳（单位：毫秒）。
 * - 授权操作为 `alikafkastreaming:ListComputeJobs`，访问级别为列出（List），适用于全部资源。
 *
 * @param request ListComputeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeJobsResponse
 */
ListComputeJobsResponse Client::listComputeJobsWithOptions(const ListComputeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
 * @description ## 请求说明
 * - 该接口支持通过 `MaxResults` 和 `NextToken` 参数进行游标分页查询。
 * - 首次请求时不需要传递 `NextToken`，后续请求需使用上一次响应中返回的 `NextToken` 值。
 * - 支持按作业名称或备注搜索，并可选择不同的排序字段和方向。
 * - 返回的时间字段均为 Unix 时间戳（单位：毫秒）。
 * - 授权操作为 `alikafkastreaming:ListComputeJobs`，访问级别为列出（List），适用于全部资源。
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
 * @description 重新启用一个已停止的后付费计算实例。接口返回成功表示启用请求已受理。
 * - API版本：2026-02-02
 * - Action：ReopenComputeInstance
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description 重新启用一个已停止的后付费计算实例。接口返回成功表示启用请求已受理。
 * - API版本：2026-02-02
 * - Action：ReopenComputeInstance
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
 * @description 为处于待部署状态的计算实例配置网络并发起部署。
 * - API 版本：2026-02-02
 * - Action：StartComputeInstance
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

  if (!!request.hasVSwitchIdsShrink()) {
    query["VSwitchIds"] = request.getVSwitchIdsShrink();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description 为处于待部署状态的计算实例配置网络并发起部署。
 * - API 版本：2026-02-02
 * - Action：StartComputeInstance
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
 * @description ## 请求说明
 * - `RecoveryMode` 支持两种模式：`savepoint` 和 `stateless`。如果选择 `savepoint` 模式但没有可用的 savepoint，则会返回错误。
 * - `CuLimit` 和 `CuReserved` 参数分别用来设定作业的 CU 上限和预留 CU 数量，支持整数或小数形式输入。
 * - 确保提供的 `RegionId`, `InstanceId`, 和 `JobName` 参数值正确且存在，否则将导致请求失败。
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description ## 请求说明
 * - `RecoveryMode` 支持两种模式：`savepoint` 和 `stateless`。如果选择 `savepoint` 模式但没有可用的 savepoint，则会返回错误。
 * - `CuLimit` 和 `CuReserved` 参数分别用来设定作业的 CU 上限和预留 CU 数量，支持整数或小数形式输入。
 * - 确保提供的 `RegionId`, `InstanceId`, 和 `JobName` 参数值正确且存在，否则将导致请求失败。
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
 * @description 停止一个正在运行的后付费计算实例。接口返回成功表示停止请求已受理。
 * - API 版本：2026-02-02
 * - Action：StopComputeInstance
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description 停止一个正在运行的后付费计算实例。接口返回成功表示停止请求已受理。
 * - API 版本：2026-02-02
 * - Action：StopComputeInstance
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
 * @description ## 请求说明
 * - 该接口用于停止指定的计算作业生产或 Debug 运行实例。
 * - 接口返回成功表示停止请求已被受理，但并不意味着作业立即停止。
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description ## 请求说明
 * - 该接口用于停止指定的计算作业生产或 Debug 运行实例。
 * - 接口返回成功表示停止请求已被受理，但并不意味着作业立即停止。
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
 * @description 修改计算实例名称。实例需处于部署准备阶段或运行中状态。
 * - API 版本：2026-02-02
 * - Action：UpdateComputeInstanceName
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description 修改计算实例名称。实例需处于部署准备阶段或运行中状态。
 * - API 版本：2026-02-02
 * - Action：UpdateComputeInstanceName
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
 * @description ## 请求说明
 * - 确保提供的 `InstanceId` 和 `JobName` 是有效的，否则将返回错误。
 * - 如果实例状态不在运行中，则不允许执行此操作。
 * - 当前作业状态如果为调试任务正在运行或变更中，则不支持修改。
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description ## 请求说明
 * - 确保提供的 `InstanceId` 和 `JobName` 是有效的，否则将返回错误。
 * - 如果实例状态不在运行中，则不允许执行此操作。
 * - 当前作业状态如果为调试任务正在运行或变更中，则不支持修改。
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
 * @description ## 请求说明
 * 本API允许用户修改特定计算作业的计算单元（CU）上限和预留CU数量。在调用此接口前，请确保提供的`InstanceId`和`JobName`正确无误，并且实例处于运行状态。此外，注意检查`CuLimit`与`CuReserved`参数的有效性和合理性，避免因超出限制或不符合业务逻辑导致请求失败。
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description ## 请求说明
 * 本API允许用户修改特定计算作业的计算单元（CU）上限和预留CU数量。在调用此接口前，请确保提供的`InstanceId`和`JobName`正确无误，并且实例处于运行状态。此外，注意检查`CuLimit`与`CuReserved`参数的有效性和合理性，避免因超出限制或不符合业务逻辑导致请求失败。
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
 * @description ## 请求说明
 * 本接口用于更新特定计算实例下的某个计算作业所保存的Flink SQL草稿内容。请确保提供的`InstanceId`和`JobName`准确无误，并且该作业当前状态支持进行SQL修改操作。
 * - **注意事项**：
 *   - 确保目标实例处于运行状态。
 *   - 当前作业状态需允许修改SQL，即作业不应处于调试或变更过程中。
 *   - `DraftSql`参数应包含完整的、格式正确的Flink SQL语句。
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @description ## 请求说明
 * 本接口用于更新特定计算实例下的某个计算作业所保存的Flink SQL草稿内容。请确保提供的`InstanceId`和`JobName`准确无误，并且该作业当前状态支持进行SQL修改操作。
 * - **注意事项**：
 *   - 确保目标实例处于运行状态。
 *   - 当前作业状态需允许修改SQL，即作业不应处于调试或变更过程中。
 *   - `DraftSql`参数应包含完整的、格式正确的Flink SQL语句。
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