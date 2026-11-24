#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaStreaming20260202.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AlikafkaStreaming20260202::Models;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{

AlibabaCloud::AlikafkaStreaming20260202::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "AlikafkaStreaming";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
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
 * @summary Validates whether a specified Flink SQL statement complies with the specifications.
 *
 * @description ## Operation description
 * - You can invoke this operation by using the GET or POST method.
 * - You must specify the `InstanceId`, `JobName`, and `SqlContent` parameters. The `SqlContent` parameter specifies the Flink SQL statement to be validated.
 * - In the response, the `Data.Valid` field indicates whether the SQL statement passed the validation. If the validation fails, the fault details are returned in the `Data.ErrorList` field.
 * - The current version requires both the instance ID (`InstanceId`) and the job name (`JobName`) to build the job context.
 * - A successful response only indicates that the system starts to execute the validation flow. It does not directly indicate whether the SQL statement is valid. Check the `Data.Valid` field to determine whether the SQL statement is valid.
 * - For error codes and exception handling, refer to the Error codes section in the References.
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
 * @summary Validates whether a specified Flink SQL statement complies with the specifications.
 *
 * @description ## Operation description
 * - You can invoke this operation by using the GET or POST method.
 * - You must specify the `InstanceId`, `JobName`, and `SqlContent` parameters. The `SqlContent` parameter specifies the Flink SQL statement to be validated.
 * - In the response, the `Data.Valid` field indicates whether the SQL statement passed the validation. If the validation fails, the fault details are returned in the `Data.ErrorList` field.
 * - The current version requires both the instance ID (`InstanceId`) and the job name (`JobName`) to build the job context.
 * - A successful response only indicates that the system starts to execute the validation flow. It does not directly indicate whether the SQL statement is valid. Check the `Data.Valid` field to determine whether the SQL statement is valid.
 * - For error codes and exception handling, refer to the Error codes section in the References.
 *
 * @param request CheckSqlContentRequest
 * @return CheckSqlContentResponse
 */
CheckSqlContentResponse Client::checkSqlContent(const CheckSqlContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSqlContentWithOptions(request, runtime);
}

/**
 * @summary Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
 *
 * @description Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
 * - API version: 2026-02-02
 * - Action: CreateComputeInstance
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
 * @summary Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
 *
 * @description Creates a compute instance. This operation only completes the purchase phase. After the instance is created, call StartComputeInstance to complete network configuration and deployment.
 * - API version: 2026-02-02
 * - Action: CreateComputeInstance
 *
 * @param request CreateComputeInstanceRequest
 * @return CreateComputeInstanceResponse
 */
CreateComputeInstanceResponse Client::createComputeInstance(const CreateComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a Flink SQL job on a running compute instance.
 *
 * @description ## Request description
 * - This API creates a new Flink SQL job on a specified running compute instance.
 * - The created job is in the `INIT` state.
 * - You can control the resource usage of the job by setting `CuLimit` and `CuReserved`.
 * - The `Remark` field allows you to add remarks to the job for easier management and identification.
 * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
 * - If you attempt to create a job with a duplicate name, an error is returned.
 * - The compute instance must be in the running state to successfully create a job.
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
 * @summary Creates a Flink SQL job on a running compute instance.
 *
 * @description ## Request description
 * - This API creates a new Flink SQL job on a specified running compute instance.
 * - The created job is in the `INIT` state.
 * - You can control the resource usage of the job by setting `CuLimit` and `CuReserved`.
 * - The `Remark` field allows you to add remarks to the job for easier management and identification.
 * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
 * - If you attempt to create a job with a duplicate name, an error is returned.
 * - The compute instance must be in the running state to successfully create a job.
 *
 * @param request CreateComputeJobRequest
 * @return CreateComputeJobResponse
 */
CreateComputeJobResponse Client::createComputeJob(const CreateComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a compute instance that is in the pending deployment, stopped, or released state.
 *
 * @description Deletes a compute instance that is in the pending deployment, stopped, or released state.
 * - API version: 2026-02-02
 * - Action: DeleteComputeInstance
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
 * @summary Deletes a compute instance that is in the pending deployment, stopped, or released state.
 *
 * @description Deletes a compute instance that is in the pending deployment, stopped, or released state.
 * - API version: 2026-02-02
 * - Action: DeleteComputeInstance
 *
 * @param request DeleteComputeInstanceRequest
 * @return DeleteComputeInstanceResponse
 */
DeleteComputeInstanceResponse Client::deleteComputeInstance(const DeleteComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified compute job. A successful request indicates that the deletion request has been accepted.
 *
 * @description ## Request description
 * - This operation deletes a specific compute job.
 * - A successful call to this operation only indicates that the deletion request has been accepted by the system. The deletion is not completed immediately.
 * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
 * - If the compute instance or job is in a state that does not allow deletion, such as a non-running state, an error message is returned.
 * - The deletion operation is irreversible. Proceed with caution.
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
 * @summary Deletes a specified compute job. A successful request indicates that the deletion request has been accepted.
 *
 * @description ## Request description
 * - This operation deletes a specific compute job.
 * - A successful call to this operation only indicates that the deletion request has been accepted by the system. The deletion is not completed immediately.
 * - Make sure that the `RegionId`, `InstanceId`, and `JobName` parameters are accurate. Otherwise, the request may fail.
 * - If the compute instance or job is in a state that does not allow deletion, such as a non-running state, an error message is returned.
 * - The deletion operation is irreversible. Proceed with caution.
 *
 * @param request DeleteComputeJobRequest
 * @return DeleteComputeJobResponse
 */
DeleteComputeJobResponse Client::deleteComputeJob(const DeleteComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified compute instance.
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
 * @summary Queries the details of a specified compute instance.
 *
 * @param request GetComputeInstanceRequest
 * @return GetComputeInstanceResponse
 */
GetComputeInstanceResponse Client::getComputeInstance(const GetComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a compute job in Alikafka Streaming by using a parameter query.
 *
 * @description ## Request description
 * - This operation queries the details of a specified compute job.
 * - You can use the GET or POST method to send requests.
 * - The `RegionId`, `InstanceId`, and `JobName` parameters are required.
 * - The authorization action is `alikafkastreaming:GetComputeJob`, and the access level is Read.
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
 * @summary Queries the details of a compute job in Alikafka Streaming by using a parameter query.
 *
 * @description ## Request description
 * - This operation queries the details of a specified compute job.
 * - You can use the GET or POST method to send requests.
 * - The `RegionId`, `InstanceId`, and `JobName` parameters are required.
 * - The authorization action is `alikafkastreaming:GetComputeJob`, and the access level is Read.
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
 * @summary Queries compute instances under the current account by using paging.
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
 * @summary Queries compute instances under the current account by using paging.
 *
 * @param request ListComputeInstancesInPageRequest
 * @return ListComputeInstancesInPageResponse
 */
ListComputeInstancesInPageResponse Client::listComputeInstancesInPage(const ListComputeInstancesInPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeInstancesInPageWithOptions(request, runtime);
}

/**
 * @summary Queries all job information under a specified compute instance by using paging.
 *
 * @description ## Request description
 * - This operation supports a cursor-based paged query by using the `MaxResults` and `NextToken` parameters.
 * - You do not need to specify `NextToken` in the first request. For subsequent requests, use the `NextToken` value returned in the previous response.
 * - You can search by job name or remark, and specify different sorting fields and directions.
 * - The authorization action is `alikafkastreaming:ListComputeJobs`. The access level is List, which applies to all resources.
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
 * @summary Queries all job information under a specified compute instance by using paging.
 *
 * @description ## Request description
 * - This operation supports a cursor-based paged query by using the `MaxResults` and `NextToken` parameters.
 * - You do not need to specify `NextToken` in the first request. For subsequent requests, use the `NextToken` value returned in the previous response.
 * - You can search by job name or remark, and specify different sorting fields and directions.
 * - The authorization action is `alikafkastreaming:ListComputeJobs`. The access level is List, which applies to all resources.
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
 * @summary Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
 *
 * @description Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
 * - API version: 2026-02-02
 * - Action: ReopenComputeInstance
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
 * @summary Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
 *
 * @description Re-enables a stopped pay-as-you-go compute instance. A successful response indicates that the re-enablement request has been accepted.
 * - API version: 2026-02-02
 * - Action: ReopenComputeInstance
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
 * @summary Configures the network and deploys a compute instance in the pending deployment state.
 *
 * @description Configures the network and deploys a compute instance in the pending deployment state.
 * - API version: 2026-02-02
 * - Action: StartComputeInstance
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
 * @summary Configures the network and deploys a compute instance in the pending deployment state.
 *
 * @description Configures the network and deploys a compute instance in the pending deployment state.
 * - API version: 2026-02-02
 * - Action: StartComputeInstance
 *
 * @param request StartComputeInstanceRequest
 * @return StartComputeInstanceResponse
 */
StartComputeInstanceResponse Client::startComputeInstance(const StartComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts, resumes, or debugs a compute job.
 *
 * @description ## Request description
 * - `RecoveryMode` supports two modes: `savepoint` and `stateless`. If you select the `savepoint` mode but no savepoint is available, an error is returned.
 * - The `CuLimit` and `CuReserved` parameters are used to set the CU limit and the number of reserved CUs for the job, respectively. Integers and decimals are supported.
 * - Make sure that the values of the `RegionId`, `InstanceId`, and `JobName` parameters are correct and exist. Otherwise, the request fails.
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
 * @summary Starts, resumes, or debugs a compute job.
 *
 * @description ## Request description
 * - `RecoveryMode` supports two modes: `savepoint` and `stateless`. If you select the `savepoint` mode but no savepoint is available, an error is returned.
 * - The `CuLimit` and `CuReserved` parameters are used to set the CU limit and the number of reserved CUs for the job, respectively. Integers and decimals are supported.
 * - Make sure that the values of the `RegionId`, `InstanceId`, and `JobName` parameters are correct and exist. Otherwise, the request fails.
 *
 * @param request StartComputeJobRequest
 * @return StartComputeJobResponse
 */
StartComputeJobResponse Client::startComputeJob(const StartComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startComputeJobWithOptions(request, runtime);
}

/**
 * @summary Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
 *
 * @description Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
 * - API version: 2026-02-02
 * - Action: StopComputeInstance
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
 * @summary Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
 *
 * @description Stops a running pay-as-you-go compute instance. A successful response indicates that the stop request has been accepted.
 * - API version: 2026-02-02
 * - Action: StopComputeInstance
 *
 * @param request StopComputeInstanceRequest
 * @return StopComputeInstanceResponse
 */
StopComputeInstanceResponse Client::stopComputeInstance(const StopComputeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopComputeInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops a compute job in a specified region and instance.
 *
 * @description ## Request description
 * - This operation stops the production or debug runtime instance of a specified compute job.
 * - A successful response indicates that the stop request has been accepted, but it does not mean that the job stops immediately.
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
 * @summary Stops a compute job in a specified region and instance.
 *
 * @description ## Request description
 * - This operation stops the production or debug runtime instance of a specified compute job.
 * - A successful response indicates that the stop request has been accepted, but it does not mean that the job stops immediately.
 *
 * @param request StopComputeJobRequest
 * @return StopComputeJobResponse
 */
StopComputeJobResponse Client::stopComputeJob(const StopComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopComputeJobWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
 *
 * @description Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
 * - API version: 2026-02-02
 * - Action: UpdateComputeInstanceName
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
 * @summary Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
 *
 * @description Updates the name of a compute instance. The instance must be in the deployment preparation or running state.
 * - API version: 2026-02-02
 * - Action: UpdateComputeInstanceName
 *
 * @param request UpdateComputeInstanceNameRequest
 * @return UpdateComputeInstanceNameResponse
 */
UpdateComputeInstanceNameResponse Client::updateComputeInstanceName(const UpdateComputeInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeInstanceNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the remarks of a specified compute job.
 *
 * @description ## Request description
 * - Ensure that the provided `InstanceId` and `JobName` are valid. Otherwise, an error is returned.
 * - You cannot execute this operation if the instance is not in the running state.
 * - Modifications are not supported if the current job is running as a debug node or undergoing changes.
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
 * @summary Modifies the remarks of a specified compute job.
 *
 * @description ## Request description
 * - Ensure that the provided `InstanceId` and `JobName` are valid. Otherwise, an error is returned.
 * - You cannot execute this operation if the instance is not in the running state.
 * - Modifications are not supported if the current job is running as a debug node or undergoing changes.
 *
 * @param request UpdateComputeJobRequest
 * @return UpdateComputeJobResponse
 */
UpdateComputeJobResponse Client::updateComputeJob(const UpdateComputeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeJobWithOptions(request, runtime);
}

/**
 * @summary Modifies the compute unit (CU) limit and the number of reserved CUs for a specified compute job.
 *
 * @description ## Request description
 * This operation allows you to modify the compute unit (CU) limit and the number of reserved CUs for a specific compute job. Before calling this operation, ensure that the specified `InstanceId` and `JobName` are correct and that the instance is in the running state. Additionally, verify the validity and reasonableness of the `CuLimit` and `CuReserved` parameters to prevent request failures caused by exceeding limits or violating business logic.
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
 * @summary Modifies the compute unit (CU) limit and the number of reserved CUs for a specified compute job.
 *
 * @description ## Request description
 * This operation allows you to modify the compute unit (CU) limit and the number of reserved CUs for a specific compute job. Before calling this operation, ensure that the specified `InstanceId` and `JobName` are correct and that the instance is in the running state. Additionally, verify the validity and reasonableness of the `CuLimit` and `CuReserved` parameters to prevent request failures caused by exceeding limits or violating business logic.
 *
 * @param request UpdateComputeJobCuRequest
 * @return UpdateComputeJobCuResponse
 */
UpdateComputeJobCuResponse Client::updateComputeJobCu(const UpdateComputeJobCuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeJobCuWithOptions(request, runtime);
}

/**
 * @summary Updates the Flink SQL draft saved for a specified compute job.
 *
 * @description ## Request description
 * This operation updates the Flink SQL draft saved for a specific compute job under a given compute instance. Make sure that the provided `InstanceId` and `JobName` are accurate, and the current status of the job supports SQL modification.
 * - **Precautions**:
 *   - Make sure that the target instance is in the running state.
 *   - The current job status must allow SQL modification. The job must not be undergoing debugging or modification.
 *   - The `DraftSql` parameter must contain a complete and correctly formatted Flink SQL statement.
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
 * @summary Updates the Flink SQL draft saved for a specified compute job.
 *
 * @description ## Request description
 * This operation updates the Flink SQL draft saved for a specific compute job under a given compute instance. Make sure that the provided `InstanceId` and `JobName` are accurate, and the current status of the job supports SQL modification.
 * - **Precautions**:
 *   - Make sure that the target instance is in the running state.
 *   - The current job status must allow SQL modification. The job must not be undergoing debugging or modification.
 *   - The `DraftSql` parameter must contain a complete and correctly formatted Flink SQL statement.
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