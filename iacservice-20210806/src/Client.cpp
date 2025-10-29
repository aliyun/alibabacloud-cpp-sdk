#include <darabonba/Core.hpp>
#include <alibabacloud/IaCService20210806.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::IaCService20210806::Models;
namespace AlibabaCloud
{
namespace IaCService20210806
{

AlibabaCloud::IaCService20210806::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("iacservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 新增共享账号信息
 *
 * @param request AddSharedAccountsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSharedAccountsResponse
 */
AddSharedAccountsResponse Client::addSharedAccountsWithOptions(const AddSharedAccountsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountIds()) {
    body["accountIds"] = request.accountIds();
  }

  if (!!request.hasResourceId()) {
    body["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddSharedAccounts"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/sharedAccounts")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSharedAccountsResponse>();
}

/**
 * @summary 新增共享账号信息
 *
 * @param request AddSharedAccountsRequest
 * @return AddSharedAccountsResponse
 */
AddSharedAccountsResponse Client::addSharedAccounts(const AddSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addSharedAccountsWithOptions(request, headers, runtime);
}

/**
 * @summary 分组关联
 *
 * @param request AssociateGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateGroupResponse
 */
AssociateGroupResponse Client::associateGroupWithOptions(const string &groupId, const AssociateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.projectId();
  }

  if (!!request.hasResourceIds()) {
    body["resourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AssociateGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/associate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateGroupResponse>();
}

/**
 * @summary 分组关联
 *
 * @param request AssociateGroupRequest
 * @return AssociateGroupResponse
 */
AssociateGroupResponse Client::associateGroup(const string &groupId, const AssociateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return associateGroupWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 取消资源导出任务
 *
 * @param request CancelResourceExportTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelResourceExportTaskResponse
 */
CancelResourceExportTaskResponse Client::cancelResourceExportTaskWithOptions(const string &exportTaskId, const CancelResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelResourceExportTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks/cancel/" , Darabonba::Encode::Encoder::percentEncode(exportTaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelResourceExportTaskResponse>();
}

/**
 * @summary 取消资源导出任务
 *
 * @param request CancelResourceExportTaskRequest
 * @return CancelResourceExportTaskResponse
 */
CancelResourceExportTaskResponse Client::cancelResourceExportTask(const string &exportTaskId, const CancelResourceExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

/**
 * @summary 创建分组
 *
 * @param request CreateGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoDestroy()) {
    body["autoDestroy"] = request.autoDestroy();
  }

  if (!!request.hasAutoTrigger()) {
    body["autoTrigger"] = request.autoTrigger();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasForcedSetting()) {
    body["forcedSetting"] = request.forcedSetting();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasNotifyConfig()) {
    body["notifyConfig"] = request.notifyConfig();
  }

  if (!!request.hasNotifyOperationTypes()) {
    body["notifyOperationTypes"] = request.notifyOperationTypes();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.projectId();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.ramRole();
  }

  if (!!request.hasReportExportField()) {
    body["reportExportField"] = request.reportExportField();
  }

  if (!!request.hasReportExportPath()) {
    body["reportExportPath"] = request.reportExportPath();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  if (!!request.hasTriggerConfig()) {
    body["triggerConfig"] = request.triggerConfig();
  }

  if (!!request.hasTriggerResourceType()) {
    body["triggerResourceType"] = request.triggerResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupResponse>();
}

/**
 * @summary 创建分组
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建作业
 *
 * @param request CreateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const string &taskId, const CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasSubCommand()) {
    body["subCommand"] = request.subCommand();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary 创建作业
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const string &taskId, const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createJobWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary 创建模板
 *
 * @param request CreateModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModuleResponse
 */
CreateModuleResponse Client::createModuleWithOptions(const CreateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.groupInfo();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasSource()) {
    body["source"] = request.source();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.sourcePath();
  }

  if (!!request.hasStatePath()) {
    body["statePath"] = request.statePath();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasVersionStrategy()) {
    body["versionStrategy"] = request.versionStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModuleResponse>();
}

/**
 * @summary 创建模板
 *
 * @param request CreateModuleRequest
 * @return CreateModuleResponse
 */
CreateModuleResponse Client::createModule(const CreateModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModuleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建模板版本
 *
 * @param request CreateModuleVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModuleVersionResponse
 */
CreateModuleVersionResponse Client::createModuleVersionWithOptions(const string &moduleId, const CreateModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModuleVersion"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/" , Darabonba::Encode::Encoder::percentEncode(moduleId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModuleVersionResponse>();
}

/**
 * @summary 创建模板版本
 *
 * @param request CreateModuleVersionRequest
 * @return CreateModuleVersionResponse
 */
CreateModuleVersionResponse Client::createModuleVersion(const string &moduleId, const CreateModuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModuleVersionWithOptions(moduleId, request, headers, runtime);
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/project")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 创建RegistryModule
 *
 * @param request CreateRegistryModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRegistryModuleResponse
 */
CreateRegistryModuleResponse Client::createRegistryModuleWithOptions(const CreateRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcl()) {
    body["acl"] = request.acl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.moduleName();
  }

  if (!!request.hasNamespaceName()) {
    body["namespaceName"] = request.namespaceName();
  }

  if (!!request.hasProvider()) {
    body["provider"] = request.provider();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRegistryModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRegistryModuleResponse>();
}

/**
 * @summary 创建RegistryModule
 *
 * @param request CreateRegistryModuleRequest
 * @return CreateRegistryModuleResponse
 */
CreateRegistryModuleResponse Client::createRegistryModule(const CreateRegistryModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRegistryModuleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建工作空间
 *
 * @param request CreateRegistryNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRegistryNamespaceResponse
 */
CreateRegistryNamespaceResponse Client::createRegistryNamespaceWithOptions(const CreateRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcl()) {
    body["acl"] = request.acl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasMaintainer()) {
    body["maintainer"] = request.maintainer();
  }

  if (!!request.hasNamespaceName()) {
    body["namespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRegistryNamespace"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryNamespace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRegistryNamespaceResponse>();
}

/**
 * @summary 创建工作空间
 *
 * @param request CreateRegistryNamespaceRequest
 * @return CreateRegistryNamespaceResponse
 */
CreateRegistryNamespaceResponse Client::createRegistryNamespace(const CreateRegistryNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRegistryNamespaceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建导出任务
 *
 * @param request CreateResourceExportTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceExportTaskResponse
 */
CreateResourceExportTaskResponse Client::createResourceExportTaskWithOptions(const CreateResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasExportToModule()) {
    body["exportToModule"] = request.exportToModule();
  }

  if (!!request.hasIncludeRules()) {
    body["includeRules"] = request.includeRules();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.ramRole();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.terraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.triggerStrategy();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.variables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResourceExportTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceExportTaskResponse>();
}

/**
 * @summary 创建导出任务
 *
 * @param request CreateResourceExportTaskRequest
 * @return CreateResourceExportTaskResponse
 */
CreateResourceExportTaskResponse Client::createResourceExportTask(const CreateResourceExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceExportTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建任务
 *
 * @param request CreateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoApply()) {
    body["autoApply"] = request.autoApply();
  }

  if (!!request.hasAutoDestroy()) {
    body["autoDestroy"] = request.autoDestroy();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.groupInfo();
  }

  if (!!request.hasInitModuleState()) {
    body["initModuleState"] = request.initModuleState();
  }

  if (!!request.hasModuleId()) {
    body["moduleId"] = request.moduleId();
  }

  if (!!request.hasModuleVersion()) {
    body["moduleVersion"] = request.moduleVersion();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasProtectionStrategy()) {
    body["protectionStrategy"] = request.protectionStrategy();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.ramRole();
  }

  if (!!request.hasSkipPropertyValidation()) {
    body["skipPropertyValidation"] = request.skipPropertyValidation();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasTaskBackend()) {
    body["taskBackend"] = request.taskBackend();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.terraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.triggerStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary 创建任务
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 删除分组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupResponse>();
}

/**
 * @summary 删除分组
 *
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGroupWithOptions(groupId, headers, runtime);
}

/**
 * @summary 删除模板
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModuleResponse
 */
DeleteModuleResponse Client::deleteModuleWithOptions(const string &moduleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/" , Darabonba::Encode::Encoder::percentEncode(moduleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModuleResponse>();
}

/**
 * @summary 删除模板
 *
 * @return DeleteModuleResponse
 */
DeleteModuleResponse Client::deleteModule(const string &moduleId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModuleWithOptions(moduleId, headers, runtime);
}

/**
 * @summary 删除项目
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const string &projectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/project/" , Darabonba::Encode::Encoder::percentEncode(projectId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary 删除项目
 *
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const string &projectId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectWithOptions(projectId, headers, runtime);
}

/**
 * @summary 删除RegistryModule
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistryModuleResponse
 */
DeleteRegistryModuleResponse Client::deleteRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRegistryModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModule/" , Darabonba::Encode::Encoder::percentEncode(namespaceName) , "/" , Darabonba::Encode::Encoder::percentEncode(moduleName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRegistryModuleResponse>();
}

/**
 * @summary 删除RegistryModule
 *
 * @return DeleteRegistryModuleResponse
 */
DeleteRegistryModuleResponse Client::deleteRegistryModule(const string &namespaceName, const string &moduleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRegistryModuleWithOptions(namespaceName, moduleName, headers, runtime);
}

/**
 * @summary 删除RegistryModule版本
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistryModuleVersionResponse
 */
DeleteRegistryModuleVersionResponse Client::deleteRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRegistryModuleVersion"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModuleVersion/" , Darabonba::Encode::Encoder::percentEncode(namespaceName) , "/" , Darabonba::Encode::Encoder::percentEncode(moduleName) , "/" , Darabonba::Encode::Encoder::percentEncode(version))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRegistryModuleVersionResponse>();
}

/**
 * @summary 删除RegistryModule版本
 *
 * @return DeleteRegistryModuleVersionResponse
 */
DeleteRegistryModuleVersionResponse Client::deleteRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRegistryModuleVersionWithOptions(namespaceName, moduleName, version, headers, runtime);
}

/**
 * @summary 删除工作空间
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistryNamespaceResponse
 */
DeleteRegistryNamespaceResponse Client::deleteRegistryNamespaceWithOptions(const string &namespaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRegistryNamespace"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryNamespace/" , Darabonba::Encode::Encoder::percentEncode(namespaceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRegistryNamespaceResponse>();
}

/**
 * @summary 删除工作空间
 *
 * @return DeleteRegistryNamespaceResponse
 */
DeleteRegistryNamespaceResponse Client::deleteRegistryNamespace(const string &namespaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRegistryNamespaceWithOptions(namespaceName, headers, runtime);
}

/**
 * @summary 删除资源导出任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceExportTaskResponse
 */
DeleteResourceExportTaskResponse Client::deleteResourceExportTaskWithOptions(const string &exportTaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResourceExportTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks/" , Darabonba::Encode::Encoder::percentEncode(exportTaskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceExportTaskResponse>();
}

/**
 * @summary 删除资源导出任务
 *
 * @return DeleteResourceExportTaskResponse
 */
DeleteResourceExportTaskResponse Client::deleteResourceExportTask(const string &exportTaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceExportTaskWithOptions(exportTaskId, headers, runtime);
}

/**
 * @summary 删除任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskResponse>();
}

/**
 * @summary 删除任务
 *
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTaskWithOptions(taskId, headers, runtime);
}

/**
 * @summary 取消关联分组
 *
 * @param request DissociateGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateGroupResponse
 */
DissociateGroupResponse Client::dissociateGroupWithOptions(const string &projectId, const string &groupId, const DissociateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasResourceIds()) {
    body["resourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DissociateGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/dissociate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateGroupResponse>();
}

/**
 * @summary 取消关联分组
 *
 * @param request DissociateGroupRequest
 * @return DissociateGroupResponse
 */
DissociateGroupResponse Client::dissociateGroup(const string &projectId, const string &groupId, const DissociateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dissociateGroupWithOptions(projectId, groupId, request, headers, runtime);
}

/**
 * @summary 执行RegistryModule
 *
 * @param request ExecuteRegistryModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteRegistryModuleResponse
 */
ExecuteRegistryModuleResponse Client::executeRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const ExecuteRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.parameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteRegistryModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModule/" , Darabonba::Encode::Encoder::percentEncode(namespaceName) , "/" , Darabonba::Encode::Encoder::percentEncode(moduleName) , "/execution")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteRegistryModuleResponse>();
}

/**
 * @summary 执行RegistryModule
 *
 * @param request ExecuteRegistryModuleRequest
 * @return ExecuteRegistryModuleResponse
 */
ExecuteRegistryModuleResponse Client::executeRegistryModule(const string &namespaceName, const string &moduleName, const ExecuteRegistryModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeRegistryModuleWithOptions(namespaceName, moduleName, request, headers, runtime);
}

/**
 * @summary 执行资源导出任务
 *
 * @param request ExecuteResourceExportTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteResourceExportTaskResponse
 */
ExecuteResourceExportTaskResponse Client::executeResourceExportTaskWithOptions(const string &exportTaskId, const ExecuteResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteResourceExportTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks/execute/" , Darabonba::Encode::Encoder::percentEncode(exportTaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteResourceExportTaskResponse>();
}

/**
 * @summary 执行资源导出任务
 *
 * @param request ExecuteResourceExportTaskRequest
 * @return ExecuteResourceExportTaskResponse
 */
ExecuteResourceExportTaskResponse Client::executeResourceExportTask(const string &exportTaskId, const ExecuteResourceExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

/**
 * @summary 执行TerraformApply
 *
 * @param request ExecuteTerraformApplyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTerraformApplyResponse
 */
ExecuteTerraformApplyResponse Client::executeTerraformApplyWithOptions(const ExecuteTerraformApplyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasStateId()) {
    body["stateId"] = request.stateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTerraformApply"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraform/execution/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTerraformApplyResponse>();
}

/**
 * @summary 执行TerraformApply
 *
 * @param request ExecuteTerraformApplyRequest
 * @return ExecuteTerraformApplyResponse
 */
ExecuteTerraformApplyResponse Client::executeTerraformApply(const ExecuteTerraformApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTerraformApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 执行TerraformDestroy
 *
 * @param request ExecuteTerraformDestroyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTerraformDestroyResponse
 */
ExecuteTerraformDestroyResponse Client::executeTerraformDestroyWithOptions(const ExecuteTerraformDestroyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasStateId()) {
    body["stateId"] = request.stateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTerraformDestroy"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraform/execution/destroy")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTerraformDestroyResponse>();
}

/**
 * @summary 执行TerraformDestroy
 *
 * @param request ExecuteTerraformDestroyRequest
 * @return ExecuteTerraformDestroyResponse
 */
ExecuteTerraformDestroyResponse Client::executeTerraformDestroy(const ExecuteTerraformDestroyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTerraformDestroyWithOptions(request, headers, runtime);
}

/**
 * @summary 执行TerraformPlan
 *
 * @param request ExecuteTerraformPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTerraformPlanResponse
 */
ExecuteTerraformPlanResponse Client::executeTerraformPlanWithOptions(const ExecuteTerraformPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasStateId()) {
    body["stateId"] = request.stateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTerraformPlan"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraform/execution/plan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTerraformPlanResponse>();
}

/**
 * @summary 执行TerraformPlan
 *
 * @param request ExecuteTerraformPlanRequest
 * @return ExecuteTerraformPlanResponse
 */
ExecuteTerraformPlanResponse Client::executeTerraformPlan(const ExecuteTerraformPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeTerraformPlanWithOptions(request, headers, runtime);
}

/**
 * @summary 获取Terraform运行结果
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecuteStateResponse
 */
GetExecuteStateResponse Client::getExecuteStateWithOptions(const string &stateId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExecuteState"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraform/execution/" , Darabonba::Encode::Encoder::percentEncode(stateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExecuteStateResponse>();
}

/**
 * @summary 获取Terraform运行结果
 *
 * @return GetExecuteStateResponse
 */
GetExecuteStateResponse Client::getExecuteState(const string &stateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExecuteStateWithOptions(stateId, headers, runtime);
}

/**
 * @summary 查询分组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupResponse>();
}

/**
 * @summary 查询分组
 *
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGroupWithOptions(groupId, headers, runtime);
}

/**
 * @summary 作业详情
 *
 * @param request GetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const string &taskId, const string &jobId, const GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskType()) {
    query["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary 作业详情
 *
 * @param request GetJobRequest
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const string &taskId, const string &jobId, const GetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobWithOptions(taskId, jobId, request, headers, runtime);
}

/**
 * @summary 获取模板详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModuleResponse
 */
GetModuleResponse Client::getModuleWithOptions(const string &moduleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/" , Darabonba::Encode::Encoder::percentEncode(moduleId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModuleResponse>();
}

/**
 * @summary 获取模板详情
 *
 * @return GetModuleResponse
 */
GetModuleResponse Client::getModule(const string &moduleId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModuleWithOptions(moduleId, headers, runtime);
}

/**
 * @summary 模板版本详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModuleVersionResponse
 */
GetModuleVersionResponse Client::getModuleVersionWithOptions(const string &moduleId, const string &moduleVersion, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModuleVersion"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/" , Darabonba::Encode::Encoder::percentEncode(moduleId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(moduleVersion))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModuleVersionResponse>();
}

/**
 * @summary 模板版本详情
 *
 * @return GetModuleVersionResponse
 */
GetModuleVersionResponse Client::getModuleVersion(const string &moduleId, const string &moduleVersion) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModuleVersionWithOptions(moduleId, moduleVersion, headers, runtime);
}

/**
 * @summary 查询项目
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const string &projectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/project/" , Darabonba::Encode::Encoder::percentEncode(projectId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary 查询项目
 *
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const string &projectId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectWithOptions(projectId, headers, runtime);
}

/**
 * @summary 获取RegistryModule信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistryModuleResponse
 */
GetRegistryModuleResponse Client::getRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegistryModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModule/" , Darabonba::Encode::Encoder::percentEncode(namespaceName) , "/" , Darabonba::Encode::Encoder::percentEncode(moduleName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegistryModuleResponse>();
}

/**
 * @summary 获取RegistryModule信息
 *
 * @return GetRegistryModuleResponse
 */
GetRegistryModuleResponse Client::getRegistryModule(const string &namespaceName, const string &moduleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegistryModuleWithOptions(namespaceName, moduleName, headers, runtime);
}

/**
 * @summary 获取RegistryModule版本信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistryModuleVersionResponse
 */
GetRegistryModuleVersionResponse Client::getRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegistryModuleVersion"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModuleVersion/" , Darabonba::Encode::Encoder::percentEncode(namespaceName) , "/" , Darabonba::Encode::Encoder::percentEncode(moduleName) , "/" , Darabonba::Encode::Encoder::percentEncode(version))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegistryModuleVersionResponse>();
}

/**
 * @summary 获取RegistryModule版本信息
 *
 * @return GetRegistryModuleVersionResponse
 */
GetRegistryModuleVersionResponse Client::getRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegistryModuleVersionWithOptions(namespaceName, moduleName, version, headers, runtime);
}

/**
 * @summary 获取工作空间信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistryNamespaceResponse
 */
GetRegistryNamespaceResponse Client::getRegistryNamespaceWithOptions(const string &namespaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegistryNamespace"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryNamespace/" , Darabonba::Encode::Encoder::percentEncode(namespaceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegistryNamespaceResponse>();
}

/**
 * @summary 获取工作空间信息
 *
 * @return GetRegistryNamespaceResponse
 */
GetRegistryNamespaceResponse Client::getRegistryNamespace(const string &namespaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegistryNamespaceWithOptions(namespaceName, headers, runtime);
}

/**
 * @summary 查询导出任务详情
 *
 * @param request GetResourceExportTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceExportTaskResponse
 */
GetResourceExportTaskResponse Client::getResourceExportTaskWithOptions(const string &exportTaskId, const GetResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportVersion()) {
    query["exportVersion"] = request.exportVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceExportTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks/" , Darabonba::Encode::Encoder::percentEncode(exportTaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceExportTaskResponse>();
}

/**
 * @summary 查询导出任务详情
 *
 * @param request GetResourceExportTaskRequest
 * @return GetResourceExportTaskResponse
 */
GetResourceExportTaskResponse Client::getResourceExportTask(const string &exportTaskId, const GetResourceExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

/**
 * @summary 获取资源类型信息
 *
 * @param request GetResourceTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceTypeResponse
 */
GetResourceTypeResponse Client::getResourceTypeWithOptions(const string &resourceType, const GetResourceTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasFilterReadOnly()) {
    query["filterReadOnly"] = request.filterReadOnly();
  }

  if (!!request.hasTerraformProviderVersion()) {
    query["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceType"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourceType/" , Darabonba::Encode::Encoder::percentEncode(resourceType))},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<GetResourceTypeResponse>();
}

/**
 * @summary 获取资源类型信息
 *
 * @param request GetResourceTypeRequest
 * @return GetResourceTypeResponse
 */
GetResourceTypeResponse Client::getResourceType(const string &resourceType, const GetResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceTypeWithOptions(resourceType, request, headers, runtime);
}

/**
 * @summary 查询任务详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary 查询任务详情
 *
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWithOptions(taskId, headers, runtime);
}

/**
 * @summary 获取Explorer的egistryModule版本示例列表
 *
 * @param request ListExplorerRegistryModuleExamplesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExplorerRegistryModuleExamplesResponse
 */
ListExplorerRegistryModuleExamplesResponse Client::listExplorerRegistryModuleExamplesWithOptions(const ListExplorerRegistryModuleExamplesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExampleName()) {
    query["exampleName"] = request.exampleName();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.moduleName();
  }

  if (!!request.hasModuleVersion()) {
    query["moduleVersion"] = request.moduleVersion();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.namespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExplorerRegistryModuleExamples"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/explorerRegistryModule/example")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<ListExplorerRegistryModuleExamplesResponse>();
}

/**
 * @summary 获取Explorer的egistryModule版本示例列表
 *
 * @param request ListExplorerRegistryModuleExamplesRequest
 * @return ListExplorerRegistryModuleExamplesResponse
 */
ListExplorerRegistryModuleExamplesResponse Client::listExplorerRegistryModuleExamples(const ListExplorerRegistryModuleExamplesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExplorerRegistryModuleExamplesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取Explorer的egistryModule版本列表
 *
 * @param request ListExplorerRegistryModuleVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExplorerRegistryModuleVersionsResponse
 */
ListExplorerRegistryModuleVersionsResponse Client::listExplorerRegistryModuleVersionsWithOptions(const ListExplorerRegistryModuleVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.moduleName();
  }

  if (!!request.hasModuleVersion()) {
    query["moduleVersion"] = request.moduleVersion();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.namespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExplorerRegistryModuleVersions"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/explorerRegistryModule/version")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<ListExplorerRegistryModuleVersionsResponse>();
}

/**
 * @summary 获取Explorer的egistryModule版本列表
 *
 * @param request ListExplorerRegistryModuleVersionsRequest
 * @return ListExplorerRegistryModuleVersionsResponse
 */
ListExplorerRegistryModuleVersionsResponse Client::listExplorerRegistryModuleVersions(const ListExplorerRegistryModuleVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExplorerRegistryModuleVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取Explorer的Registry Module列表
 *
 * @param request ListExplorerRegistryModulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExplorerRegistryModulesResponse
 */
ListExplorerRegistryModulesResponse Client::listExplorerRegistryModulesWithOptions(const ListExplorerRegistryModulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.moduleName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExplorerRegistryModules"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/explorerRegistryModule")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<ListExplorerRegistryModulesResponse>();
}

/**
 * @summary 获取Explorer的Registry Module列表
 *
 * @param request ListExplorerRegistryModulesRequest
 * @return ListExplorerRegistryModulesResponse
 */
ListExplorerRegistryModulesResponse Client::listExplorerRegistryModules(const ListExplorerRegistryModulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExplorerRegistryModulesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询分组列表
 *
 * @param tmpReq ListGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupResponse
 */
ListGroupResponse Client::listGroupWithOptions(const ListGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGroupShrinkRequest request = ListGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.projectId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupResponse>();
}

/**
 * @summary 查询分组列表
 *
 * @param request ListGroupRequest
 * @return ListGroupResponse
 */
ListGroupResponse Client::listGroup(const ListGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 作业列表
 *
 * @param request ListJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const string &taskId, const ListJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary 作业列表
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const string &taskId, const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobsWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary 模板版本列表
 *
 * @param request ListModuleVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModuleVersionResponse
 */
ListModuleVersionResponse Client::listModuleVersionWithOptions(const string &moduleId, const ListModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

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
    {"action" , "ListModuleVersion"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/" , Darabonba::Encode::Encoder::percentEncode(moduleId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModuleVersionResponse>();
}

/**
 * @summary 模板版本列表
 *
 * @param request ListModuleVersionRequest
 * @return ListModuleVersionResponse
 */
ListModuleVersionResponse Client::listModuleVersion(const string &moduleId, const ListModuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModuleVersionWithOptions(moduleId, request, headers, runtime);
}

/**
 * @summary 列举模板
 *
 * @param tmpReq ListModulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModulesResponse
 */
ListModulesResponse Client::listModulesWithOptions(const ListModulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModulesShrinkRequest request = ListModulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasGroupId()) {
    query["groupId"] = request.groupId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.moduleName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.projectId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModules"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModulesResponse>();
}

/**
 * @summary 列举模板
 *
 * @param request ListModulesRequest
 * @return ListModulesResponse
 */
ListModulesResponse Client::listModules(const ListModulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModulesWithOptions(request, headers, runtime);
}

/**
 * @summary 所有产品列表
 *
 * @param request ListProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasSupportTerraformer()) {
    query["supportTerraformer"] = request.supportTerraformer();
  }

  if (!!request.hasTerraformProviderVersion()) {
    query["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/products")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary 所有产品列表
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProductsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询项目列表
 *
 * @param tmpReq ListProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProjectWithOptions(const ListProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectShrinkRequest request = ListProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProject"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/project")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectResponse>();
}

/**
 * @summary 查询项目列表
 *
 * @param request ListProjectRequest
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProject(const ListProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 获取RegistryModule版本列表
 *
 * @param request ListRegistryModuleVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegistryModuleVersionsResponse
 */
ListRegistryModuleVersionsResponse Client::listRegistryModuleVersionsWithOptions(const ListRegistryModuleVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.moduleName();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.namespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegistryModuleVersions"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModuleVersion")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegistryModuleVersionsResponse>();
}

/**
 * @summary 获取RegistryModule版本列表
 *
 * @param request ListRegistryModuleVersionsRequest
 * @return ListRegistryModuleVersionsResponse
 */
ListRegistryModuleVersionsResponse Client::listRegistryModuleVersions(const ListRegistryModuleVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegistryModuleVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取RegistryModule列表
 *
 * @param request ListRegistryModulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegistryModulesResponse
 */
ListRegistryModulesResponse Client::listRegistryModulesWithOptions(const ListRegistryModulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.namespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegistryModules"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegistryModulesResponse>();
}

/**
 * @summary 获取RegistryModule列表
 *
 * @param request ListRegistryModulesRequest
 * @return ListRegistryModulesResponse
 */
ListRegistryModulesResponse Client::listRegistryModules(const ListRegistryModulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegistryModulesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取工作空间列表
 *
 * @param request ListRegistryNamespacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegistryNamespacesResponse
 */
ListRegistryNamespacesResponse Client::listRegistryNamespacesWithOptions(const ListRegistryNamespacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegistryNamespaces"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryNamespace")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegistryNamespacesResponse>();
}

/**
 * @summary 获取工作空间列表
 *
 * @param request ListRegistryNamespacesRequest
 * @return ListRegistryNamespacesResponse
 */
ListRegistryNamespacesResponse Client::listRegistryNamespaces(const ListRegistryNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRegistryNamespacesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取任务版本列表
 *
 * @param request ListResourceExportTaskVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceExportTaskVersionsResponse
 */
ListResourceExportTaskVersionsResponse Client::listResourceExportTaskVersionsWithOptions(const string &exportTaskId, const ListResourceExportTaskVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportVersion()) {
    query["exportVersion"] = request.exportVersion();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceExportTaskVersions"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks/" , Darabonba::Encode::Encoder::percentEncode(exportTaskId) , "/exportVersions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceExportTaskVersionsResponse>();
}

/**
 * @summary 获取任务版本列表
 *
 * @param request ListResourceExportTaskVersionsRequest
 * @return ListResourceExportTaskVersionsResponse
 */
ListResourceExportTaskVersionsResponse Client::listResourceExportTaskVersions(const string &exportTaskId, const ListResourceExportTaskVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceExportTaskVersionsWithOptions(exportTaskId, request, headers, runtime);
}

/**
 * @summary 查询导出任务列表
 *
 * @param request ListResourceExportTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceExportTasksResponse
 */
ListResourceExportTasksResponse Client::listResourceExportTasksWithOptions(const ListResourceExportTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportTaskId()) {
    query["exportTaskId"] = request.exportTaskId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

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
    {"action" , "ListResourceExportTasks"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceExportTasksResponse>();
}

/**
 * @summary 查询导出任务列表
 *
 * @param request ListResourceExportTasksRequest
 * @return ListResourceExportTasksResponse
 */
ListResourceExportTasksResponse Client::listResourceExportTasks(const ListResourceExportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceExportTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 资源类型列表
 *
 * @param tmpReq ListResourceTypesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypesWithOptions(const ListResourceTypesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourceTypesShrinkRequest request = ListResourceTypesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTerraformResourceTypes()) {
    request.setTerraformResourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.terraformResourceTypes(), "terraformResourceTypes", "simple"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.product();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.sort();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasSubcategory()) {
    query["subcategory"] = request.subcategory();
  }

  if (!!request.hasSupportTerraformer()) {
    query["supportTerraformer"] = request.supportTerraformer();
  }

  if (!!request.hasTerraformProviderVersion()) {
    query["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  if (!!request.hasTerraformResourceTypesShrink()) {
    query["terraformResourceTypes"] = request.terraformResourceTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTypes"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourceTypes")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<ListResourceTypesResponse>();
}

/**
 * @summary 资源类型列表
 *
 * @param request ListResourceTypesRequest
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypes(const ListResourceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourceTypesWithOptions(request, headers, runtime);
}

/**
 * @summary 任务列表
 *
 * @param tmpReq ListTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTasksShrinkRequest request = ListTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasGroupId()) {
    query["groupId"] = request.groupId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasModuleId()) {
    query["moduleId"] = request.moduleId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.projectId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary 任务列表
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTasksWithOptions(request, headers, runtime);
}

/**
 * @summary terraformProvider版本
 *
 * @param request ListTerraformProviderVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTerraformProviderVersionsResponse
 */
ListTerraformProviderVersionsResponse Client::listTerraformProviderVersionsWithOptions(const ListTerraformProviderVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasUsage()) {
    query["usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTerraformProviderVersions"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/version/terraform/provider")},
    {"method" , "GET"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.pathname(), params.bodyType(), req, runtime)).get<ListTerraformProviderVersionsResponse>();
}

/**
 * @summary terraformProvider版本
 *
 * @param request ListTerraformProviderVersionsRequest
 * @return ListTerraformProviderVersionsResponse
 */
ListTerraformProviderVersionsResponse Client::listTerraformProviderVersions(const ListTerraformProviderVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTerraformProviderVersionsWithOptions(request, headers, runtime);
}

/**
 * @summary 控制作业
 *
 * @param request OperateJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateJobResponse
 */
OperateJobResponse Client::operateJobWithOptions(const string &taskId, const string &jobId, const string &operationType, const OperateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["comment"] = request.comment();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateJob"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/operation/" , Darabonba::Encode::Encoder::percentEncode(operationType))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateJobResponse>();
}

/**
 * @summary 控制作业
 *
 * @param request OperateJobRequest
 * @return OperateJobResponse
 */
OperateJobResponse Client::operateJob(const string &taskId, const string &jobId, const string &operationType, const OperateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return operateJobWithOptions(taskId, jobId, operationType, request, headers, runtime);
}

/**
 * @summary 发布RegistryModule版本
 *
 * @param request PublishRegistryModuleVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRegistryModuleVersionResponse
 */
PublishRegistryModuleVersionResponse Client::publishRegistryModuleVersionWithOptions(const PublishRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.moduleName();
  }

  if (!!request.hasNamespaceName()) {
    body["namespaceName"] = request.namespaceName();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishRegistryModuleVersion"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModuleVersion")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRegistryModuleVersionResponse>();
}

/**
 * @summary 发布RegistryModule版本
 *
 * @param request PublishRegistryModuleVersionRequest
 * @return PublishRegistryModuleVersionResponse
 */
PublishRegistryModuleVersionResponse Client::publishRegistryModuleVersion(const PublishRegistryModuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishRegistryModuleVersionWithOptions(request, headers, runtime);
}

/**
 * @summary 删除共享账号信息
 *
 * @param tmpReq RemoveSharedAccountsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSharedAccountsResponse
 */
RemoveSharedAccountsResponse Client::removeSharedAccountsWithOptions(const RemoveSharedAccountsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveSharedAccountsShrinkRequest request = RemoveSharedAccountsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "accountIds", "simple"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["accountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSharedAccounts"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/sharedAccounts")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSharedAccountsResponse>();
}

/**
 * @summary 删除共享账号信息
 *
 * @param request RemoveSharedAccountsRequest
 * @return RemoveSharedAccountsResponse
 */
RemoveSharedAccountsResponse Client::removeSharedAccounts(const RemoveSharedAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeSharedAccountsWithOptions(request, headers, runtime);
}

/**
 * @summary 修改ExplorerModule
 *
 * @param request UpdateExplorerModuleAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExplorerModuleAttributeResponse
 */
UpdateExplorerModuleAttributeResponse Client::updateExplorerModuleAttributeWithOptions(const string &explorerModuleId, const UpdateExplorerModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExplorerModuleAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/explorerModule/" , Darabonba::Encode::Encoder::percentEncode(explorerModuleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExplorerModuleAttributeResponse>();
}

/**
 * @summary 修改ExplorerModule
 *
 * @param request UpdateExplorerModuleAttributeRequest
 * @return UpdateExplorerModuleAttributeResponse
 */
UpdateExplorerModuleAttributeResponse Client::updateExplorerModuleAttribute(const string &explorerModuleId, const UpdateExplorerModuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExplorerModuleAttributeWithOptions(explorerModuleId, request, headers, runtime);
}

/**
 * @summary 修改分组
 *
 * @param request UpdateGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const string &groupId, const UpdateGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoDestroy()) {
    body["autoDestroy"] = request.autoDestroy();
  }

  if (!!request.hasAutoTrigger()) {
    body["autoTrigger"] = request.autoTrigger();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasForcedSetting()) {
    body["forcedSetting"] = request.forcedSetting();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasNotifyConfig()) {
    body["notifyConfig"] = request.notifyConfig();
  }

  if (!!request.hasNotifyOperationTypes()) {
    body["notifyOperationTypes"] = request.notifyOperationTypes();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.ramRole();
  }

  if (!!request.hasReportExportField()) {
    body["reportExportField"] = request.reportExportField();
  }

  if (!!request.hasReportExportPath()) {
    body["reportExportPath"] = request.reportExportPath();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  if (!!request.hasTriggerConfig()) {
    body["triggerConfig"] = request.triggerConfig();
  }

  if (!!request.hasTriggerResourceType()) {
    body["triggerResourceType"] = request.triggerResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/group/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupResponse>();
}

/**
 * @summary 修改分组
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const string &groupId, const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateGroupWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 更新模板
 *
 * @param request UpdateModuleAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModuleAttributeResponse
 */
UpdateModuleAttributeResponse Client::updateModuleAttributeWithOptions(const string &moduleId, const UpdateModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.groupInfo();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.sourcePath();
  }

  if (!!request.hasStatePath()) {
    body["statePath"] = request.statePath();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasVersionStrategy()) {
    body["versionStrategy"] = request.versionStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModuleAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/" , Darabonba::Encode::Encoder::percentEncode(moduleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModuleAttributeResponse>();
}

/**
 * @summary 更新模板
 *
 * @param request UpdateModuleAttributeRequest
 * @return UpdateModuleAttributeResponse
 */
UpdateModuleAttributeResponse Client::updateModuleAttribute(const string &moduleId, const UpdateModuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModuleAttributeWithOptions(moduleId, request, headers, runtime);
}

/**
 * @summary 修改项目
 *
 * @param request UpdateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const string &projectId, const UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/project/" , Darabonba::Encode::Encoder::percentEncode(projectId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary 修改项目
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const string &projectId, const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 修改RegistryModule
 *
 * @param request UpdateRegistryModuleAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRegistryModuleAttributeResponse
 */
UpdateRegistryModuleAttributeResponse Client::updateRegistryModuleAttributeWithOptions(const string &namespaceName, const string &moduleName, const UpdateRegistryModuleAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcl()) {
    body["acl"] = request.acl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRegistryModuleAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryModule/" , Darabonba::Encode::Encoder::percentEncode(namespaceName) , "/" , Darabonba::Encode::Encoder::percentEncode(moduleName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRegistryModuleAttributeResponse>();
}

/**
 * @summary 修改RegistryModule
 *
 * @param request UpdateRegistryModuleAttributeRequest
 * @return UpdateRegistryModuleAttributeResponse
 */
UpdateRegistryModuleAttributeResponse Client::updateRegistryModuleAttribute(const string &namespaceName, const string &moduleName, const UpdateRegistryModuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRegistryModuleAttributeWithOptions(namespaceName, moduleName, request, headers, runtime);
}

/**
 * @summary 修改工作空间
 *
 * @param request UpdateRegistryNamespaceAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRegistryNamespaceAttributeResponse
 */
UpdateRegistryNamespaceAttributeResponse Client::updateRegistryNamespaceAttributeWithOptions(const string &namespaceName, const UpdateRegistryNamespaceAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAcl()) {
    body["acl"] = request.acl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRegistryNamespaceAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/registryNamespace/" , Darabonba::Encode::Encoder::percentEncode(namespaceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRegistryNamespaceAttributeResponse>();
}

/**
 * @summary 修改工作空间
 *
 * @param request UpdateRegistryNamespaceAttributeRequest
 * @return UpdateRegistryNamespaceAttributeResponse
 */
UpdateRegistryNamespaceAttributeResponse Client::updateRegistryNamespaceAttribute(const string &namespaceName, const UpdateRegistryNamespaceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRegistryNamespaceAttributeWithOptions(namespaceName, request, headers, runtime);
}

/**
 * @summary 更新导出任务
 *
 * @param request UpdateResourceExportTaskAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceExportTaskAttributeResponse
 */
UpdateResourceExportTaskAttributeResponse Client::updateResourceExportTaskAttributeWithOptions(const string &exportTaskId, const UpdateResourceExportTaskAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasExportToModule()) {
    body["exportToModule"] = request.exportToModule();
  }

  if (!!request.hasIncludeRules()) {
    body["includeRules"] = request.includeRules();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.ramRole();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.terraformProviderVersion();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.terraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.triggerStrategy();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.variables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResourceExportTaskAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/exportTasks/" , Darabonba::Encode::Encoder::percentEncode(exportTaskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceExportTaskAttributeResponse>();
}

/**
 * @summary 更新导出任务
 *
 * @param request UpdateResourceExportTaskAttributeRequest
 * @return UpdateResourceExportTaskAttributeResponse
 */
UpdateResourceExportTaskAttributeResponse Client::updateResourceExportTaskAttribute(const string &exportTaskId, const UpdateResourceExportTaskAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceExportTaskAttributeWithOptions(exportTaskId, request, headers, runtime);
}

/**
 * @summary 修改任务
 *
 * @param request UpdateTaskAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskAttributeResponse
 */
UpdateTaskAttributeResponse Client::updateTaskAttributeWithOptions(const string &taskId, const UpdateTaskAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoApply()) {
    body["autoApply"] = request.autoApply();
  }

  if (!!request.hasAutoDestroy()) {
    body["autoDestroy"] = request.autoDestroy();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.groupInfo();
  }

  if (!!request.hasInitModuleState()) {
    body["initModuleState"] = request.initModuleState();
  }

  if (!!request.hasModuleVersion()) {
    body["moduleVersion"] = request.moduleVersion();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasProtectionStrategy()) {
    body["protectionStrategy"] = request.protectionStrategy();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.ramRole();
  }

  if (!!request.hasSkipPropertyValidation()) {
    body["skipPropertyValidation"] = request.skipPropertyValidation();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.terraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.triggerStrategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTaskAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskAttributeResponse>();
}

/**
 * @summary 修改任务
 *
 * @param request UpdateTaskAttributeRequest
 * @return UpdateTaskAttributeResponse
 */
UpdateTaskAttributeResponse Client::updateTaskAttribute(const string &taskId, const UpdateTaskAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTaskAttributeWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary 模版预检
 *
 * @param request ValidateModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateModuleResponse
 */
FutrueGenerator<ValidateModuleResponse> Client::validateModuleWithSSE(const ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasCodeMap()) {
    body["codeMap"] = request.codeMap();
  }

  if (!!request.hasSource()) {
    body["source"] = request.source();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.sourcePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ValidateModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/module/validation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<ValidateModuleResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 模版预检
 *
 * @param request ValidateModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateModuleResponse
 */
ValidateModuleResponse Client::validateModuleWithOptions(const ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasCodeMap()) {
    body["codeMap"] = request.codeMap();
  }

  if (!!request.hasSource()) {
    body["source"] = request.source();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.sourcePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ValidateModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/module/validation")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateModuleResponse>();
}

/**
 * @summary 模版预检
 *
 * @param request ValidateModuleRequest
 * @return ValidateModuleResponse
 */
ValidateModuleResponse Client::validateModule(const ValidateModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateModuleWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace IaCService20210806