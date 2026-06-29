#include <darabonba/Core.hpp>
#include <alibabacloud/OpenITag20220616.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OpenITag20220616::Models;
namespace AlibabaCloud
{
namespace OpenITag20220616
{

AlibabaCloud::OpenITag20220616::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shenzhen" , "openitag.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "openitag.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "openitag.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "openitag.cn-beijing.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("openitag", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Assign personnel to the worker nodes (annotation, quality inspection, and validation) of an annotation job.
 *
 * @param request AddWorkNodeWorkforceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWorkNodeWorkforceResponse
 */
AddWorkNodeWorkforceResponse Client::addWorkNodeWorkforceWithOptions(const string &TenantId, const string &TaskId, const string &WorkNodeId, const AddWorkNodeWorkforceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserIds()) {
    body["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddWorkNodeWorkforce"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/worknodes/" , Darabonba::Encode::Encoder::percentEncode(WorkNodeId) , "/workforce")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWorkNodeWorkforceResponse>();
}

/**
 * @summary Assign personnel to the worker nodes (annotation, quality inspection, and validation) of an annotation job.
 *
 * @param request AddWorkNodeWorkforceRequest
 * @return AddWorkNodeWorkforceResponse
 */
AddWorkNodeWorkforceResponse Client::addWorkNodeWorkforce(const string &TenantId, const string &TaskId, const string &WorkNodeId, const AddWorkNodeWorkforceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addWorkNodeWorkforceWithOptions(TenantId, TaskId, WorkNodeId, request, headers, runtime);
}

/**
 * @summary Append data to a job.
 *
 * @param request AppendAllDataToTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppendAllDataToTaskResponse
 */
AppendAllDataToTaskResponse Client::appendAllDataToTaskWithOptions(const string &TenantId, const string &TaskId, const AppendAllDataToTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "AppendAllDataToTask"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/appendAllDataToTask")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppendAllDataToTaskResponse>();
}

/**
 * @summary Append data to a job.
 *
 * @param request AppendAllDataToTaskRequest
 * @return AppendAllDataToTaskResponse
 */
AppendAllDataToTaskResponse Client::appendAllDataToTask(const string &TenantId, const string &TaskId, const AppendAllDataToTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return appendAllDataToTaskWithOptions(TenantId, TaskId, request, headers, runtime);
}

/**
 * @summary Create an annotation job for the current tenant.
 *
 * @param request CreateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const string &TenantId, const CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary Create an annotation job for the current tenant.
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const string &TenantId, const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTaskWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary You can add a new template for the current tenant and customize the annotation template based on your business requirements.
 *
 * @param request CreateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const string &TenantId, const CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary You can add a new template for the current tenant and customize the annotation template based on your business requirements.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const string &TenantId, const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTemplateWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Add a member to the tenant.
 *
 * @param request CreateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const string &TenantId, const CreateUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountNo()) {
    body["AccountNo"] = request.getAccountNo();
  }

  if (!!request.hasAccountType()) {
    body["AccountType"] = request.getAccountType();
  }

  if (!!request.hasRole()) {
    body["Role"] = request.getRole();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/users")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Add a member to the tenant.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const string &TenantId, const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Delete a job under the current tenant.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTaskWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTask"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskResponse>();
}

/**
 * @summary Delete a job under the current tenant.
 *
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTask(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTaskWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Delete the template under the current tenant.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Delete the template under the current tenant.
 *
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const string &TenantId, const string &TemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateWithOptions(TenantId, TemplateId, headers, runtime);
}

/**
 * @summary Delete a member within a tenant.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const string &TenantId, const string &UserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(UserId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Delete a member within a tenant.
 *
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const string &TenantId, const string &UserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUserWithOptions(TenantId, UserId, headers, runtime);
}

/**
 * @summary Export the result data of an annotation job.
 *
 * @param request ExportAnnotationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportAnnotationsResponse
 */
ExportAnnotationsResponse Client::exportAnnotationsWithOptions(const string &TenantId, const string &TaskId, const ExportAnnotationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssPath()) {
    query["OssPath"] = request.getOssPath();
  }

  if (!!request.hasRegisterDataset()) {
    query["RegisterDataset"] = request.getRegisterDataset();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportAnnotations"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/annotations/export")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportAnnotationsResponse>();
}

/**
 * @summary Export the result data of an annotation job.
 *
 * @param request ExportAnnotationsRequest
 * @return ExportAnnotationsResponse
 */
ExportAnnotationsResponse Client::exportAnnotations(const string &TenantId, const string &TaskId, const ExportAnnotationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportAnnotationsWithOptions(TenantId, TaskId, request, headers, runtime);
}

/**
 * @summary Query the information of a single annotation export result.
 *
 * @param request GetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const string &TenantId, const string &JobId, const GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(JobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary Query the information of a single annotation export result.
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const string &TenantId, const string &JobId, const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobWithOptions(TenantId, JobId, request, headers, runtime);
}

/**
 * @summary Query the information of a single subtask package.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubtaskResponse
 */
GetSubtaskResponse Client::getSubtaskWithOptions(const string &TenantId, const string &TaskID, const string &SubtaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubtask"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskID) , "/subtasks/" , Darabonba::Encode::Encoder::percentEncode(SubtaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubtaskResponse>();
}

/**
 * @summary Query the information of a single subtask package.
 *
 * @return GetSubtaskResponse
 */
GetSubtaskResponse Client::getSubtask(const string &TenantId, const string &TaskID, const string &SubtaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSubtaskWithOptions(TenantId, TaskID, SubtaskId, headers, runtime);
}

/**
 * @summary Query a single annotated data item in a subtask package.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubtaskItemResponse
 */
GetSubtaskItemResponse Client::getSubtaskItemWithOptions(const string &TenantId, const string &TaskId, const string &SubtaskId, const string &ItemId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubtaskItem"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/subtasks/" , Darabonba::Encode::Encoder::percentEncode(SubtaskId) , "/items/" , Darabonba::Encode::Encoder::percentEncode(ItemId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubtaskItemResponse>();
}

/**
 * @summary Query a single annotated data item in a subtask package.
 *
 * @return GetSubtaskItemResponse
 */
GetSubtaskItemResponse Client::getSubtaskItem(const string &TenantId, const string &TaskId, const string &SubtaskId, const string &ItemId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSubtaskItemWithOptions(TenantId, TaskId, SubtaskId, ItemId, headers, runtime);
}

/**
 * @summary Query the information of a single annotation job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Query the information of a single annotation job.
 *
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Query the current statistics information of a job.
 *
 * @param request GetTaskStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatisticsResponse
 */
GetTaskStatisticsResponse Client::getTaskStatisticsWithOptions(const string &TenantId, const string &TaskId, const GetTaskStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatType()) {
    query["StatType"] = request.getStatType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatistics"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/statistics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatisticsResponse>();
}

/**
 * @summary Query the current statistics information of a job.
 *
 * @param request GetTaskStatisticsRequest
 * @return GetTaskStatisticsResponse
 */
GetTaskStatisticsResponse Client::getTaskStatistics(const string &TenantId, const string &TaskId, const GetTaskStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskStatisticsWithOptions(TenantId, TaskId, request, headers, runtime);
}

/**
 * @summary Query the current status of a job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatusWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatus"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/status")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatusResponse>();
}

/**
 * @summary Query the current status of a job.
 *
 * @return GetTaskStatusResponse
 */
GetTaskStatusResponse Client::getTaskStatus(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskStatusWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Query the current template information of a job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskTemplateResponse
 */
GetTaskTemplateResponse Client::getTaskTemplateWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskTemplate"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/template")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskTemplateResponse>();
}

/**
 * @summary Query the current template information of a job.
 *
 * @return GetTaskTemplateResponse
 */
GetTaskTemplateResponse Client::getTaskTemplate(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskTemplateWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Query job template questions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskTemplateQuestionsResponse
 */
GetTaskTemplateQuestionsResponse Client::getTaskTemplateQuestionsWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskTemplateQuestions"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/template/questions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskTemplateQuestionsResponse>();
}

/**
 * @summary Query job template questions.
 *
 * @return GetTaskTemplateQuestionsResponse
 */
GetTaskTemplateQuestionsResponse Client::getTaskTemplateQuestions(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskTemplateQuestionsWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Query the data display information in the job template.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskTemplateViewsResponse
 */
GetTaskTemplateViewsResponse Client::getTaskTemplateViewsWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskTemplateViews"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/template/views")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskTemplateViewsResponse>();
}

/**
 * @summary Query the data display information in the job template.
 *
 * @return GetTaskTemplateViewsResponse
 */
GetTaskTemplateViewsResponse Client::getTaskTemplateViews(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskTemplateViewsWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Query the personnel configuration information of each node in a job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskWorkforceResponse
 */
GetTaskWorkforceResponse Client::getTaskWorkforceWithOptions(const string &TenantId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskWorkforce"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/workforce")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskWorkforceResponse>();
}

/**
 * @summary Query the personnel configuration information of each node in a job.
 *
 * @return GetTaskWorkforceResponse
 */
GetTaskWorkforceResponse Client::getTaskWorkforce(const string &TenantId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWorkforceWithOptions(TenantId, TaskId, headers, runtime);
}

/**
 * @summary Query statistics of each member in a job.
 *
 * @param request GetTaskWorkforceStatisticRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskWorkforceStatisticResponse
 */
GetTaskWorkforceStatisticResponse Client::getTaskWorkforceStatisticWithOptions(const string &TenantId, const string &TaskId, const GetTaskWorkforceStatisticRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatType()) {
    query["StatType"] = request.getStatType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskWorkforceStatistic"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/workforce/statistic")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskWorkforceStatisticResponse>();
}

/**
 * @summary Query statistics of each member in a job.
 *
 * @param request GetTaskWorkforceStatisticRequest
 * @return GetTaskWorkforceStatisticResponse
 */
GetTaskWorkforceStatisticResponse Client::getTaskWorkforceStatistic(const string &TenantId, const string &TaskId, const GetTaskWorkforceStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWorkforceStatisticWithOptions(TenantId, TaskId, request, headers, runtime);
}

/**
 * @summary Query template information under a tenant.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Query template information under a tenant.
 *
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const string &TenantId, const string &TemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateWithOptions(TenantId, TemplateId, headers, runtime);
}

/**
 * @summary Query question information such as Radio and Multiple Choice in a template.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateQuestionsResponse
 */
GetTemplateQuestionsResponse Client::getTemplateQuestionsWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateQuestions"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId) , "/questions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateQuestionsResponse>();
}

/**
 * @summary Query question information such as Radio and Multiple Choice in a template.
 *
 * @return GetTemplateQuestionsResponse
 */
GetTemplateQuestionsResponse Client::getTemplateQuestions(const string &TenantId, const string &TemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateQuestionsWithOptions(TenantId, TemplateId, headers, runtime);
}

/**
 * @summary Query the display information such as images, text, and audio in the template.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateViewResponse
 */
GetTemplateViewResponse Client::getTemplateViewWithOptions(const string &TenantId, const string &TemplateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateView"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId) , "/views")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateViewResponse>();
}

/**
 * @summary Query the display information such as images, text, and audio in the template.
 *
 * @return GetTemplateViewResponse
 */
GetTemplateViewResponse Client::getTemplateView(const string &TenantId, const string &TemplateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateViewWithOptions(TenantId, TemplateId, headers, runtime);
}

/**
 * @summary Query information about the iTAG tenant.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTenantResponse
 */
GetTenantResponse Client::getTenantWithOptions(const string &TenantId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTenant"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTenantResponse>();
}

/**
 * @summary Query information about the iTAG tenant.
 *
 * @return GetTenantResponse
 */
GetTenantResponse Client::getTenant(const string &TenantId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTenantWithOptions(TenantId, headers, runtime);
}

/**
 * @summary Query the details of a single member in a tenant.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const string &TenantId, const string &UserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(UserId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Query the details of a single member in a tenant.
 *
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const string &TenantId, const string &UserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserWithOptions(TenantId, UserId, headers, runtime);
}

/**
 * @summary Displays a list of all exported annotation results.
 *
 * @param request ListJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const string &TenantId, const ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Displays a list of all exported annotation results.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const string &TenantId, const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobsWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Display the annotation data of a single subtask package.
 *
 * @param request ListSubtaskItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubtaskItemsResponse
 */
ListSubtaskItemsResponse Client::listSubtaskItemsWithOptions(const string &TenantId, const string &TaskID, const string &SubtaskId, const ListSubtaskItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubtaskItems"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskID) , "/subtasks/" , Darabonba::Encode::Encoder::percentEncode(SubtaskId) , "/items")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubtaskItemsResponse>();
}

/**
 * @summary Display the annotation data of a single subtask package.
 *
 * @param request ListSubtaskItemsRequest
 * @return ListSubtaskItemsResponse
 */
ListSubtaskItemsResponse Client::listSubtaskItems(const string &TenantId, const string &TaskID, const string &SubtaskId, const ListSubtaskItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubtaskItemsWithOptions(TenantId, TaskID, SubtaskId, request, headers, runtime);
}

/**
 * @summary Displays the list of subtask packages.
 *
 * @param request ListSubtasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubtasksResponse
 */
ListSubtasksResponse Client::listSubtasksWithOptions(const string &TenantId, const string &TaskID, const ListSubtasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubtasks"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskID) , "/subtasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubtasksResponse>();
}

/**
 * @summary Displays the list of subtask packages.
 *
 * @param request ListSubtasksRequest
 * @return ListSubtasksResponse
 */
ListSubtasksResponse Client::listSubtasks(const string &TenantId, const string &TaskID, const ListSubtasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubtasksWithOptions(TenantId, TaskID, request, headers, runtime);
}

/**
 * @summary Displays the list of annotation jobs for the current tenant.
 *
 * @param request ListTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const string &TenantId, const ListTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary Displays the list of annotation jobs for the current tenant.
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const string &TenantId, const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTasksWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Display the template list of the current tenant.
 *
 * @param tmpReq ListTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const string &TenantId, const ListTemplatesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTemplatesShrinkRequest request = ListTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.getTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary Display the template list of the current tenant.
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const string &TenantId, const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplatesWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Query iTAG tenants under an Alibaba Cloud account.
 *
 * @param request ListTenantsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantsResponse
 */
ListTenantsResponse Client::listTenantsWithOptions(const ListTenantsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTenants"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantsResponse>();
}

/**
 * @summary Query iTAG tenants under an Alibaba Cloud account.
 *
 * @param request ListTenantsRequest
 * @return ListTenantsResponse
 */
ListTenantsResponse Client::listTenants(const ListTenantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTenantsWithOptions(request, headers, runtime);
}

/**
 * @summary Displays all annotate members under the current tenant.
 *
 * @param request ListUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const string &TenantId, const ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Displays all annotate members under the current tenant.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const string &TenantId, const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUsersWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Delete Node Personnel
 *
 * @param request RemoveWorkNodeWorkforceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveWorkNodeWorkforceResponse
 */
RemoveWorkNodeWorkforceResponse Client::removeWorkNodeWorkforceWithOptions(const string &TenantId, const string &TaskId, const string &WorkNodeId, const RemoveWorkNodeWorkforceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserIds()) {
    body["UserIds"] = request.getUserIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveWorkNodeWorkforce"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/worknodes/" , Darabonba::Encode::Encoder::percentEncode(WorkNodeId) , "/workforce")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveWorkNodeWorkforceResponse>();
}

/**
 * @summary Delete Node Personnel
 *
 * @param request RemoveWorkNodeWorkforceRequest
 * @return RemoveWorkNodeWorkforceResponse
 */
RemoveWorkNodeWorkforceResponse Client::removeWorkNodeWorkforce(const string &TenantId, const string &TaskId, const string &WorkNodeId, const RemoveWorkNodeWorkforceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeWorkNodeWorkforceWithOptions(TenantId, TaskId, WorkNodeId, request, headers, runtime);
}

/**
 * @summary Modify a job under the current tenant.
 *
 * @param request UpdateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskResponse
 */
UpdateTaskResponse Client::updateTaskWithOptions(const string &TenantId, const string &TaskId, const UpdateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTask"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskResponse>();
}

/**
 * @summary Modify a job under the current tenant.
 *
 * @param request UpdateTaskRequest
 * @return UpdateTaskResponse
 */
UpdateTaskResponse Client::updateTask(const string &TenantId, const string &TaskId, const UpdateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTaskWithOptions(TenantId, TaskId, request, headers, runtime);
}

/**
 * @summary Update job members.
 *
 * @param request UpdateTaskWorkforceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskWorkforceResponse
 */
UpdateTaskWorkforceResponse Client::updateTaskWorkforceWithOptions(const string &TenantId, const string &TaskId, const UpdateTaskWorkforceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkforce()) {
    body["Workforce"] = request.getWorkforce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTaskWorkforce"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/workforce")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskWorkforceResponse>();
}

/**
 * @summary Update job members.
 *
 * @param request UpdateTaskWorkforceRequest
 * @return UpdateTaskWorkforceResponse
 */
UpdateTaskWorkforceResponse Client::updateTaskWorkforce(const string &TenantId, const string &TaskId, const UpdateTaskWorkforceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTaskWorkforceWithOptions(TenantId, TaskId, request, headers, runtime);
}

/**
 * @summary Modify the template under the current tenant.
 *
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &TenantId, const string &TemplateId, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/templates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary Modify the template under the current tenant.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &TenantId, const string &TemplateId, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(TenantId, TemplateId, request, headers, runtime);
}

/**
 * @summary Modify the information of an iTAG tenant.
 *
 * @param request UpdateTenantRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTenantResponse
 */
UpdateTenantResponse Client::updateTenantWithOptions(const string &TenantId, const UpdateTenantRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasTenantName()) {
    body["TenantName"] = request.getTenantName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTenant"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTenantResponse>();
}

/**
 * @summary Modify the information of an iTAG tenant.
 *
 * @param request UpdateTenantRequest
 * @return UpdateTenantResponse
 */
UpdateTenantResponse Client::updateTenant(const string &TenantId, const UpdateTenantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTenantWithOptions(TenantId, request, headers, runtime);
}

/**
 * @summary Update member information within a tenant.
 *
 * @param request UpdateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const string &TenantId, const string &UserId, const UpdateUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRole()) {
    body["Role"] = request.getRole();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2022-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/api/v1/tenants/" , Darabonba::Encode::Encoder::percentEncode(TenantId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(UserId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Update member information within a tenant.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const string &TenantId, const string &UserId, const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserWithOptions(TenantId, UserId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace OpenITag20220616