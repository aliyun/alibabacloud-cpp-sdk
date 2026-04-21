#include <darabonba/Core.hpp>
#include <alibabacloud/IaCService20210806.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::IaCService20210806::Models;
namespace AlibabaCloud
{
namespace IaCService20210806
{

AlibabaCloud::IaCService20210806::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
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
    body["accountIds"] = request.getAccountIds();
  }

  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
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
 * @summary 将参数集关联资源
 *
 * @param request AssociateDetectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateDetectConfigResponse
 */
AssociateDetectConfigResponse Client::associateDetectConfigWithOptions(const AssociateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDetectConfigId()) {
    body["detectConfigId"] = request.getDetectConfigId();
  }

  if (!!request.hasTargetId()) {
    body["targetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    body["targetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AssociateDetectConfig"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig/operations/associate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateDetectConfigResponse>();
}

/**
 * @summary 将参数集关联资源
 *
 * @param request AssociateDetectConfigRequest
 * @return AssociateDetectConfigResponse
 */
AssociateDetectConfigResponse Client::associateDetectConfig(const AssociateDetectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return associateDetectConfigWithOptions(request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasResourceIds()) {
    body["resourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
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
 * @summary 将参数集关联资源
 *
 * @param request AssociateParameterSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateParameterSetResponse
 */
AssociateParameterSetResponse Client::associateParameterSetWithOptions(const AssociateParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParameterSetIds()) {
    body["parameterSetIds"] = request.getParameterSetIds();
  }

  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AssociateParameterSet"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets/operations/associate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateParameterSetResponse>();
}

/**
 * @summary 将参数集关联资源
 *
 * @param request AssociateParameterSetRequest
 * @return AssociateParameterSetResponse
 */
AssociateParameterSetResponse Client::associateParameterSet(const AssociateParameterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return associateParameterSetWithOptions(request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
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
 * @summary 创建偏差检测配置
 *
 * @param request CreateDetectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDetectConfigResponse
 */
CreateDetectConfigResponse Client::createDetectConfigWithOptions(const CreateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmConfigs()) {
    body["alarmConfigs"] = request.getAlarmConfigs();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCronExpression()) {
    body["cronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDetectConfigName()) {
    body["detectConfigName"] = request.getDetectConfigName();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasTriggerType()) {
    body["triggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDetectConfig"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDetectConfigResponse>();
}

/**
 * @summary 创建偏差检测配置
 *
 * @param request CreateDetectConfigRequest
 * @return CreateDetectConfigResponse
 */
CreateDetectConfigResponse Client::createDetectConfig(const CreateDetectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDetectConfigWithOptions(request, headers, runtime);
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
    body["autoDestroy"] = request.getAutoDestroy();
  }

  if (!!request.hasAutoTrigger()) {
    body["autoTrigger"] = request.getAutoTrigger();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasForcedSetting()) {
    body["forcedSetting"] = request.getForcedSetting();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotifyConfig()) {
    body["notifyConfig"] = request.getNotifyConfig();
  }

  if (!!request.hasNotifyOperationTypes()) {
    body["notifyOperationTypes"] = request.getNotifyOperationTypes();
  }

  if (!!request.hasProjectId()) {
    body["projectId"] = request.getProjectId();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasReportExportField()) {
    body["reportExportField"] = request.getReportExportField();
  }

  if (!!request.hasReportExportPath()) {
    body["reportExportPath"] = request.getReportExportPath();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.getTerraformProviderVersion();
  }

  if (!!request.hasTriggerConfig()) {
    body["triggerConfig"] = request.getTriggerConfig();
  }

  if (!!request.hasTriggerResourceType()) {
    body["triggerResourceType"] = request.getTriggerResourceType();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasSubCommand()) {
    body["subCommand"] = request.getSubCommand();
  }

  if (!!request.hasTaskType()) {
    body["taskType"] = request.getTaskType();
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
 * @summary Create Module
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.getGroupInfo();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.getSourcePath();
  }

  if (!!request.hasStatePath()) {
    body["statePath"] = request.getStatePath();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasVersionStrategy()) {
    body["versionStrategy"] = request.getVersionStrategy();
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
 * @summary Create Module
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
 * @summary Publish a template version.
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
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
 * @summary Publish a template version.
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
 * @summary 创建参数集
 *
 * @param request CreateParameterSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParameterSetResponse
 */
CreateParameterSetResponse Client::createParameterSetWithOptions(const CreateParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateParameterSet"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParameterSetResponse>();
}

/**
 * @summary 创建参数集
 *
 * @param request CreateParameterSetRequest
 * @return CreateParameterSetResponse
 */
CreateParameterSetResponse Client::createParameterSet(const CreateParameterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createParameterSetWithOptions(request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
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
    body["acl"] = request.getAcl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.getModuleName();
  }

  if (!!request.hasNamespaceName()) {
    body["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasProvider()) {
    body["provider"] = request.getProvider();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
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
    body["acl"] = request.getAcl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasMaintainer()) {
    body["maintainer"] = request.getMaintainer();
  }

  if (!!request.hasNamespaceName()) {
    body["namespaceName"] = request.getNamespaceName();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExportToModule()) {
    body["exportToModule"] = request.getExportToModule();
  }

  if (!!request.hasIncludeRules()) {
    body["includeRules"] = request.getIncludeRules();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.getTerraformProviderVersion();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.getTerraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.getTriggerStrategy();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
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
 * @summary 创建资源栈
 *
 * @param request CreateStackRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStackResponse
 */
CreateStackResponse Client::createStackWithOptions(const CreateStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.getSourcePath();
  }

  if (!!request.hasWorkingDirectory()) {
    body["workingDirectory"] = request.getWorkingDirectory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStack"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStackResponse>();
}

/**
 * @summary 创建资源栈
 *
 * @param request CreateStackRequest
 * @return CreateStackResponse
 */
CreateStackResponse Client::createStack(const CreateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createStackWithOptions(request, headers, runtime);
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
    body["autoApply"] = request.getAutoApply();
  }

  if (!!request.hasAutoDestroy()) {
    body["autoDestroy"] = request.getAutoDestroy();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.getGroupInfo();
  }

  if (!!request.hasInitModuleState()) {
    body["initModuleState"] = request.getInitModuleState();
  }

  if (!!request.hasModuleId()) {
    body["moduleId"] = request.getModuleId();
  }

  if (!!request.hasModuleVersion()) {
    body["moduleVersion"] = request.getModuleVersion();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasProtectionStrategy()) {
    body["protectionStrategy"] = request.getProtectionStrategy();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasSkipPropertyValidation()) {
    body["skipPropertyValidation"] = request.getSkipPropertyValidation();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTaskBackend()) {
    body["taskBackend"] = request.getTaskBackend();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.getTerraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.getTriggerStrategy();
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
 * @summary 删除偏差检测配置
 *
 * @param request DeleteDetectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDetectConfigResponse
 */
DeleteDetectConfigResponse Client::deleteDetectConfigWithOptions(const string &detectConfigId, const DeleteDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDetectConfig"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig/" , Darabonba::Encode::Encoder::percentEncode(detectConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDetectConfigResponse>();
}

/**
 * @summary 删除偏差检测配置
 *
 * @param request DeleteDetectConfigRequest
 * @return DeleteDetectConfigResponse
 */
DeleteDetectConfigResponse Client::deleteDetectConfig(const string &detectConfigId, const DeleteDetectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDetectConfigWithOptions(detectConfigId, request, headers, runtime);
}

/**
 * @summary 删除分组
 *
 * @param request DeleteGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const string &groupId, const DeleteGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const string &groupId, const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteGroupWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 删除模板
 *
 * @param request DeleteModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModuleResponse
 */
DeleteModuleResponse Client::deleteModuleWithOptions(const string &moduleId, const DeleteModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteModuleRequest
 * @return DeleteModuleResponse
 */
DeleteModuleResponse Client::deleteModule(const string &moduleId, const DeleteModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModuleWithOptions(moduleId, request, headers, runtime);
}

/**
 * @summary 删除参数集
 *
 * @param request DeleteParameterSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParameterSetResponse
 */
DeleteParameterSetResponse Client::deleteParameterSetWithOptions(const string &parameterSetId, const DeleteParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteParameterSet"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets/" , Darabonba::Encode::Encoder::percentEncode(parameterSetId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParameterSetResponse>();
}

/**
 * @summary 删除参数集
 *
 * @param request DeleteParameterSetRequest
 * @return DeleteParameterSetResponse
 */
DeleteParameterSetResponse Client::deleteParameterSet(const string &parameterSetId, const DeleteParameterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteParameterSetWithOptions(parameterSetId, request, headers, runtime);
}

/**
 * @summary 删除项目
 *
 * @param request DeleteProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const string &projectId, const DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const string &projectId, const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 删除RegistryModule
 *
 * @param request DeleteRegistryModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistryModuleResponse
 */
DeleteRegistryModuleResponse Client::deleteRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const DeleteRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteRegistryModuleRequest
 * @return DeleteRegistryModuleResponse
 */
DeleteRegistryModuleResponse Client::deleteRegistryModule(const string &namespaceName, const string &moduleName, const DeleteRegistryModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRegistryModuleWithOptions(namespaceName, moduleName, request, headers, runtime);
}

/**
 * @summary 删除RegistryModule版本
 *
 * @param request DeleteRegistryModuleVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistryModuleVersionResponse
 */
DeleteRegistryModuleVersionResponse Client::deleteRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const DeleteRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteRegistryModuleVersionRequest
 * @return DeleteRegistryModuleVersionResponse
 */
DeleteRegistryModuleVersionResponse Client::deleteRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version, const DeleteRegistryModuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRegistryModuleVersionWithOptions(namespaceName, moduleName, version, request, headers, runtime);
}

/**
 * @summary 删除工作空间
 *
 * @param request DeleteRegistryNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistryNamespaceResponse
 */
DeleteRegistryNamespaceResponse Client::deleteRegistryNamespaceWithOptions(const string &namespaceName, const DeleteRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteRegistryNamespaceRequest
 * @return DeleteRegistryNamespaceResponse
 */
DeleteRegistryNamespaceResponse Client::deleteRegistryNamespace(const string &namespaceName, const DeleteRegistryNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRegistryNamespaceWithOptions(namespaceName, request, headers, runtime);
}

/**
 * @summary 删除资源导出任务
 *
 * @param request DeleteResourceExportTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceExportTaskResponse
 */
DeleteResourceExportTaskResponse Client::deleteResourceExportTaskWithOptions(const string &exportTaskId, const DeleteResourceExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteResourceExportTaskRequest
 * @return DeleteResourceExportTaskResponse
 */
DeleteResourceExportTaskResponse Client::deleteResourceExportTask(const string &exportTaskId, const DeleteResourceExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceExportTaskWithOptions(exportTaskId, request, headers, runtime);
}

/**
 * @summary 删除资源栈
 *
 * @param request DeleteStackRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStackResponse
 */
DeleteStackResponse Client::deleteStackWithOptions(const string &stackId, const DeleteStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCleanResources()) {
    query["cleanResources"] = request.getCleanResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStack"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/" , Darabonba::Encode::Encoder::percentEncode(stackId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStackResponse>();
}

/**
 * @summary 删除资源栈
 *
 * @param request DeleteStackRequest
 * @return DeleteStackResponse
 */
DeleteStackResponse Client::deleteStack(const string &stackId, const DeleteStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteStackWithOptions(stackId, request, headers, runtime);
}

/**
 * @summary 删除任务
 *
 * @param request DeleteTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTaskWithOptions(const string &taskId, const DeleteTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request DeleteTaskRequest
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTask(const string &taskId, const DeleteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTaskWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary 发起状态文件一致性检测
 *
 * @param request DetectTerraformStateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectTerraformStateResponse
 */
DetectTerraformStateResponse Client::detectTerraformStateWithOptions(const DetectTerraformStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasIdentifier()) {
    body["identifier"] = request.getIdentifier();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DetectTerraformState"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detect")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectTerraformStateResponse>();
}

/**
 * @summary 发起状态文件一致性检测
 *
 * @param request DetectTerraformStateRequest
 * @return DetectTerraformStateResponse
 */
DetectTerraformStateResponse Client::detectTerraformState(const DetectTerraformStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return detectTerraformStateWithOptions(request, headers, runtime);
}

/**
 * @summary 解除参数集关联资源关系
 *
 * @param request DissociateDetectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateDetectConfigResponse
 */
DissociateDetectConfigResponse Client::dissociateDetectConfigWithOptions(const DissociateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDetectConfigId()) {
    body["detectConfigId"] = request.getDetectConfigId();
  }

  if (!!request.hasTargetId()) {
    body["targetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    body["targetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DissociateDetectConfig"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig/operations/dissociate")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateDetectConfigResponse>();
}

/**
 * @summary 解除参数集关联资源关系
 *
 * @param request DissociateDetectConfigRequest
 * @return DissociateDetectConfigResponse
 */
DissociateDetectConfigResponse Client::dissociateDetectConfig(const DissociateDetectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dissociateDetectConfigWithOptions(request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasResourceIds()) {
    body["resourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
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
 * @summary 解除参数集关联资源关系
 *
 * @param request DissociateParameterSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateParameterSetResponse
 */
DissociateParameterSetResponse Client::dissociateParameterSetWithOptions(const DissociateParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParameterSetIds()) {
    body["parameterSetIds"] = request.getParameterSetIds();
  }

  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DissociateParameterSet"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets/operations/dissociate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateParameterSetResponse>();
}

/**
 * @summary 解除参数集关联资源关系
 *
 * @param request DissociateParameterSetRequest
 * @return DissociateParameterSetResponse
 */
DissociateParameterSetResponse Client::dissociateParameterSet(const DissociateParameterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dissociateParameterSetWithOptions(request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
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
    body["clientToken"] = request.getClientToken();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasStateId()) {
    body["stateId"] = request.getStateId();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasStateId()) {
    body["stateId"] = request.getStateId();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasStateId()) {
    body["stateId"] = request.getStateId();
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
 * @summary 生成模板
 *
 * @param request GenerateModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateModuleResponse
 */
GenerateModuleResponse Client::generateModuleWithOptions(const GenerateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGenerateSource()) {
    body["generateSource"] = request.getGenerateSource();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    body["regionId"] = request.getRegionId();
  }

  if (!!request.hasSyntax()) {
    body["syntax"] = request.getSyntax();
  }

  if (!!request.hasTemplate()) {
    body["template"] = request.getTemplate();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.getTerraformProviderVersion();
  }

  if (!!request.hasTerraformResourceType()) {
    body["terraformResourceType"] = request.getTerraformResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/explorer/generate/module")},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GenerateModuleResponse>();
}

/**
 * @summary 生成模板
 *
 * @param request GenerateModuleRequest
 * @return GenerateModuleResponse
 */
GenerateModuleResponse Client::generateModule(const GenerateModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateModuleWithOptions(request, headers, runtime);
}

/**
 * @summary 偏差检测配置详情
 *
 * @param request GetDetectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDetectConfigResponse
 */
GetDetectConfigResponse Client::getDetectConfigWithOptions(const string &detectConfigId, const GetDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDetectConfig"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig/" , Darabonba::Encode::Encoder::percentEncode(detectConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDetectConfigResponse>();
}

/**
 * @summary 偏差检测配置详情
 *
 * @param request GetDetectConfigRequest
 * @return GetDetectConfigResponse
 */
GetDetectConfigResponse Client::getDetectConfig(const string &detectConfigId, const GetDetectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDetectConfigWithOptions(detectConfigId, request, headers, runtime);
}

/**
 * @summary 获取Terraform运行结果
 *
 * @param request GetExecuteStateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecuteStateResponse
 */
GetExecuteStateResponse Client::getExecuteStateWithOptions(const string &stateId, const GetExecuteStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetExecuteStateRequest
 * @return GetExecuteStateResponse
 */
GetExecuteStateResponse Client::getExecuteState(const string &stateId, const GetExecuteStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExecuteStateWithOptions(stateId, request, headers, runtime);
}

/**
 * @summary 查询分组
 *
 * @param request GetGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const string &groupId, const GetGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const string &groupId, const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getGroupWithOptions(groupId, request, headers, runtime);
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
    query["taskType"] = request.getTaskType();
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
 * @summary Get Module Details
 *
 * @param request GetModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModuleResponse
 */
GetModuleResponse Client::getModuleWithOptions(const string &moduleId, const GetModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @summary Get Module Details
 *
 * @param request GetModuleRequest
 * @return GetModuleResponse
 */
GetModuleResponse Client::getModule(const string &moduleId, const GetModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModuleWithOptions(moduleId, request, headers, runtime);
}

/**
 * @summary 模板版本详情
 *
 * @param request GetModuleVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModuleVersionResponse
 */
GetModuleVersionResponse Client::getModuleVersionWithOptions(const string &moduleId, const string &moduleVersion, const GetModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetModuleVersionRequest
 * @return GetModuleVersionResponse
 */
GetModuleVersionResponse Client::getModuleVersion(const string &moduleId, const string &moduleVersion, const GetModuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModuleVersionWithOptions(moduleId, moduleVersion, request, headers, runtime);
}

/**
 * @summary 参数集详情
 *
 * @param request GetParameterSetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParameterSetResponse
 */
GetParameterSetResponse Client::getParameterSetWithOptions(const string &parameterSetId, const GetParameterSetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetParameterSet"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets/" , Darabonba::Encode::Encoder::percentEncode(parameterSetId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParameterSetResponse>();
}

/**
 * @summary 参数集详情
 *
 * @param request GetParameterSetRequest
 * @return GetParameterSetResponse
 */
GetParameterSetResponse Client::getParameterSet(const string &parameterSetId, const GetParameterSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getParameterSetWithOptions(parameterSetId, request, headers, runtime);
}

/**
 * @summary 查询项目
 *
 * @param request GetProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const string &projectId, const GetProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const string &projectId, const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 获取RegistryModule信息
 *
 * @param request GetRegistryModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistryModuleResponse
 */
GetRegistryModuleResponse Client::getRegistryModuleWithOptions(const string &namespaceName, const string &moduleName, const GetRegistryModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetRegistryModuleRequest
 * @return GetRegistryModuleResponse
 */
GetRegistryModuleResponse Client::getRegistryModule(const string &namespaceName, const string &moduleName, const GetRegistryModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegistryModuleWithOptions(namespaceName, moduleName, request, headers, runtime);
}

/**
 * @summary 获取RegistryModule版本信息
 *
 * @param request GetRegistryModuleVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistryModuleVersionResponse
 */
GetRegistryModuleVersionResponse Client::getRegistryModuleVersionWithOptions(const string &namespaceName, const string &moduleName, const string &version, const GetRegistryModuleVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetRegistryModuleVersionRequest
 * @return GetRegistryModuleVersionResponse
 */
GetRegistryModuleVersionResponse Client::getRegistryModuleVersion(const string &namespaceName, const string &moduleName, const string &version, const GetRegistryModuleVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegistryModuleVersionWithOptions(namespaceName, moduleName, version, request, headers, runtime);
}

/**
 * @summary 获取工作空间信息
 *
 * @param request GetRegistryNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegistryNamespaceResponse
 */
GetRegistryNamespaceResponse Client::getRegistryNamespaceWithOptions(const string &namespaceName, const GetRegistryNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetRegistryNamespaceRequest
 * @return GetRegistryNamespaceResponse
 */
GetRegistryNamespaceResponse Client::getRegistryNamespace(const string &namespaceName, const GetRegistryNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRegistryNamespaceWithOptions(namespaceName, request, headers, runtime);
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
    query["exportVersion"] = request.getExportVersion();
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
    query["acceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasFilterReadOnly()) {
    query["filterReadOnly"] = request.getFilterReadOnly();
  }

  if (!!request.hasTerraformProviderVersion()) {
    query["terraformProviderVersion"] = request.getTerraformProviderVersion();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<GetResourceTypeResponse>();
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
 * @summary 获取资源栈
 *
 * @param request GetStackRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackResponse
 */
GetStackResponse Client::getStackWithOptions(const string &stackId, const GetStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStack"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/" , Darabonba::Encode::Encoder::percentEncode(stackId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackResponse>();
}

/**
 * @summary 获取资源栈
 *
 * @param request GetStackRequest
 * @return GetStackResponse
 */
GetStackResponse Client::getStack(const string &stackId, const GetStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStackWithOptions(stackId, request, headers, runtime);
}

/**
 * @summary 部署详情接口
 *
 * @param request GetStackDeploymentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackDeploymentsResponse
 */
GetStackDeploymentsResponse Client::getStackDeploymentsWithOptions(const string &stackId, const GetStackDeploymentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigVersion()) {
    query["configVersion"] = request.getConfigVersion();
  }

  if (!!request.hasDeploymentName()) {
    query["deploymentName"] = request.getDeploymentName();
  }

  if (!!request.hasDeploymentNo()) {
    query["deploymentNo"] = request.getDeploymentNo();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackDeployments"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/" , Darabonba::Encode::Encoder::percentEncode(stackId) , "/deployments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackDeploymentsResponse>();
}

/**
 * @summary 部署详情接口
 *
 * @param request GetStackDeploymentsRequest
 * @return GetStackDeploymentsResponse
 */
GetStackDeploymentsResponse Client::getStackDeployments(const string &stackId, const GetStackDeploymentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStackDeploymentsWithOptions(stackId, request, headers, runtime);
}

/**
 * @summary 获取资源栈部署结果
 *
 * @param request GetStackExecutionResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackExecutionResultResponse
 */
GetStackExecutionResultResponse Client::getStackExecutionResultWithOptions(const string &triggerId, const GetStackExecutionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackExecutionResult"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/trigger/" , Darabonba::Encode::Encoder::percentEncode(triggerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackExecutionResultResponse>();
}

/**
 * @summary 获取资源栈部署结果
 *
 * @param request GetStackExecutionResultRequest
 * @return GetStackExecutionResultResponse
 */
GetStackExecutionResultResponse Client::getStackExecutionResult(const string &triggerId, const GetStackExecutionResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStackExecutionResultWithOptions(triggerId, request, headers, runtime);
}

/**
 * @summary 查询任务详情
 *
 * @param request GetTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const string &taskId, const GetTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const string &taskId, const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary 获取状态文件检测结果
 *
 * @param request GetTerraformStateDetectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTerraformStateDetectionResponse
 */
GetTerraformStateDetectionResponse Client::getTerraformStateDetectionWithOptions(const string &detectionId, const GetTerraformStateDetectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTerraformStateDetection"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detect/" , Darabonba::Encode::Encoder::percentEncode(detectionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTerraformStateDetectionResponse>();
}

/**
 * @summary 获取状态文件检测结果
 *
 * @param request GetTerraformStateDetectionRequest
 * @return GetTerraformStateDetectionResponse
 */
GetTerraformStateDetectionResponse Client::getTerraformStateDetection(const string &detectionId, const GetTerraformStateDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTerraformStateDetectionWithOptions(detectionId, request, headers, runtime);
}

/**
 * @summary 关联到资源的偏差检测配置列表
 *
 * @param request ListDetectConfigRelationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDetectConfigRelationsResponse
 */
ListDetectConfigRelationsResponse Client::listDetectConfigRelationsWithOptions(const ListDetectConfigRelationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetectConfigId()) {
    query["detectConfigId"] = request.getDetectConfigId();
  }

  if (!!request.hasTargetId()) {
    query["targetId"] = request.getTargetId();
  }

  if (!!request.hasTargetType()) {
    query["targetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDetectConfigRelations"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig/operations/relation")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDetectConfigRelationsResponse>();
}

/**
 * @summary 关联到资源的偏差检测配置列表
 *
 * @param request ListDetectConfigRelationsRequest
 * @return ListDetectConfigRelationsResponse
 */
ListDetectConfigRelationsResponse Client::listDetectConfigRelations(const ListDetectConfigRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDetectConfigRelationsWithOptions(request, headers, runtime);
}

/**
 * @summary 偏差检测配置列表
 *
 * @param request ListDetectConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDetectConfigsResponse
 */
ListDetectConfigsResponse Client::listDetectConfigsWithOptions(const ListDetectConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetectConfigName()) {
    query["detectConfigName"] = request.getDetectConfigName();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDetectConfigs"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDetectConfigsResponse>();
}

/**
 * @summary 偏差检测配置列表
 *
 * @param request ListDetectConfigsRequest
 * @return ListDetectConfigsResponse
 */
ListDetectConfigsResponse Client::listDetectConfigs(const ListDetectConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDetectConfigsWithOptions(request, headers, runtime);
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
    query["exampleName"] = request.getExampleName();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.getModuleName();
  }

  if (!!request.hasModuleVersion()) {
    query["moduleVersion"] = request.getModuleVersion();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListExplorerRegistryModuleExamplesResponse>();
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.getModuleName();
  }

  if (!!request.hasModuleVersion()) {
    query["moduleVersion"] = request.getModuleVersion();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListExplorerRegistryModuleVersionsResponse>();
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.getModuleName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.getSort();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListExplorerRegistryModulesResponse>();
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.getProjectId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
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
  if (!!request.hasJobType()) {
    query["jobType"] = request.getJobType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.getTaskType();
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasGroupId()) {
    query["groupId"] = request.getGroupId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.getModuleName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.getProjectId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
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
 * @summary 关联到资源的参数集列表
 *
 * @param request ListParameterSetRelationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParameterSetRelationResponse
 */
ListParameterSetRelationResponse Client::listParameterSetRelationWithOptions(const ListParameterSetRelationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListParameterSetRelation"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets/operations/relation")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParameterSetRelationResponse>();
}

/**
 * @summary 关联到资源的参数集列表
 *
 * @param request ListParameterSetRelationRequest
 * @return ListParameterSetRelationResponse
 */
ListParameterSetRelationResponse Client::listParameterSetRelation(const ListParameterSetRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listParameterSetRelationWithOptions(request, headers, runtime);
}

/**
 * @summary 参数集列表
 *
 * @param request ListParameterSetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParameterSetsResponse
 */
ListParameterSetsResponse Client::listParameterSetsWithOptions(const ListParameterSetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListParameterSets"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParameterSetsResponse>();
}

/**
 * @summary 参数集列表
 *
 * @param request ListParameterSetsRequest
 * @return ListParameterSetsResponse
 */
ListParameterSetsResponse Client::listParameterSets(const ListParameterSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listParameterSetsWithOptions(request, headers, runtime);
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.getSort();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasSupportTerraformer()) {
    query["supportTerraformer"] = request.getSupportTerraformer();
  }

  if (!!request.hasTerraformProviderVersion()) {
    query["terraformProviderVersion"] = request.getTerraformProviderVersion();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListProductsResponse>();
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
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
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.getModuleName();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
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
    query["exportVersion"] = request.getExportVersion();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
    query["exportTaskId"] = request.getExportTaskId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
    request.setTerraformResourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTerraformResourceTypes(), "terraformResourceTypes", "simple"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.getProduct();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.getSort();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasSubcategory()) {
    query["subcategory"] = request.getSubcategory();
  }

  if (!!request.hasSupportTerraformer()) {
    query["supportTerraformer"] = request.getSupportTerraformer();
  }

  if (!!request.hasTerraformProviderVersion()) {
    query["terraformProviderVersion"] = request.getTerraformProviderVersion();
  }

  if (!!request.hasTerraformResourceTypesShrink()) {
    query["terraformResourceTypes"] = request.getTerraformResourceTypesShrink();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListResourceTypesResponse>();
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
 * @summary 资源列表
 *
 * @param request ListResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasSourceValue()) {
    query["sourceValue"] = request.getSourceValue();
  }

  if (!!request.hasSpecType()) {
    query["specType"] = request.getSpecType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resources/stateparser")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary 资源列表
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询资源栈配置列表
 *
 * @param request ListStackConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackConfigsResponse
 */
ListStackConfigsResponse Client::listStackConfigsWithOptions(const string &stackId, const ListStackConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackConfigs"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/" , Darabonba::Encode::Encoder::percentEncode(stackId) , "/configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackConfigsResponse>();
}

/**
 * @summary 查询资源栈配置列表
 *
 * @param request ListStackConfigsRequest
 * @return ListStackConfigsResponse
 */
ListStackConfigsResponse Client::listStackConfigs(const string &stackId, const ListStackConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStackConfigsWithOptions(stackId, request, headers, runtime);
}

/**
 * @summary 列举资源栈
 *
 * @param request ListStacksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStacksResponse
 */
ListStacksResponse Client::listStacksWithOptions(const ListStacksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStacks"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStacksResponse>();
}

/**
 * @summary 列举资源栈
 *
 * @param request ListStacksRequest
 * @return ListStacksResponse
 */
ListStacksResponse Client::listStacks(const ListStacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStacksWithOptions(request, headers, runtime);
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasGroupId()) {
    query["groupId"] = request.getGroupId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasModuleId()) {
    query["moduleId"] = request.getModuleId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["projectId"] = request.getProjectId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
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
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasUsage()) {
    query["usage"] = request.getUsage();
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
  return json(doROARequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getPathname(), params.getBodyType(), req, runtime)).get<ListTerraformProviderVersionsResponse>();
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
 * @summary 支持状态文件的资源导入和移除
 *
 * @param request ManageTerraformStateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageTerraformStateResponse
 */
ManageTerraformStateResponse Client::manageTerraformStateWithOptions(const ManageTerraformStateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasIdentifier()) {
    body["identifier"] = request.getIdentifier();
  }

  if (!!request.hasImportResourceId()) {
    body["importResourceId"] = request.getImportResourceId();
  }

  if (!!request.hasResourceIdentifier()) {
    body["resourceIdentifier"] = request.getResourceIdentifier();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ManageTerraformState"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/manage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageTerraformStateResponse>();
}

/**
 * @summary 支持状态文件的资源导入和移除
 *
 * @param request ManageTerraformStateRequest
 * @return ManageTerraformStateResponse
 */
ManageTerraformStateResponse Client::manageTerraformState(const ManageTerraformStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return manageTerraformStateWithOptions(request, headers, runtime);
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
    query["comment"] = request.getComment();
  }

  if (!!request.hasTaskType()) {
    query["taskType"] = request.getTaskType();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasModuleName()) {
    body["moduleName"] = request.getModuleName();
  }

  if (!!request.hasNamespaceName()) {
    body["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
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
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "accountIds", "simple"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["accountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
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
 * @summary 触发资源栈部署
 *
 * @param request TriggerStackExecutionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerStackExecutionResponse
 */
TriggerStackExecutionResponse Client::triggerStackExecutionWithOptions(const TriggerStackExecutionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAction()) {
    body["action"] = request.getAction();
  }

  if (!!request.hasChangedFolders()) {
    body["changedFolders"] = request.getChangedFolders();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCodePackagePath()) {
    body["codePackagePath"] = request.getCodePackagePath();
  }

  if (!!request.hasCodeVersionId()) {
    body["codeVersionId"] = request.getCodeVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TriggerStackExecution"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/trigger")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerStackExecutionResponse>();
}

/**
 * @summary 触发资源栈部署
 *
 * @param request TriggerStackExecutionRequest
 * @return TriggerStackExecutionResponse
 */
TriggerStackExecutionResponse Client::triggerStackExecution(const TriggerStackExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return triggerStackExecutionWithOptions(request, headers, runtime);
}

/**
 * @summary 更新偏差检测配置
 *
 * @param request UpdateDetectConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDetectConfigResponse
 */
UpdateDetectConfigResponse Client::updateDetectConfigWithOptions(const string &detectConfigId, const UpdateDetectConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmConfigs()) {
    body["alarmConfigs"] = request.getAlarmConfigs();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCronExpression()) {
    body["cronExpression"] = request.getCronExpression();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDetectConfigName()) {
    body["detectConfigName"] = request.getDetectConfigName();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasTriggerType()) {
    body["triggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDetectConfig"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraformState/detectConfig/" , Darabonba::Encode::Encoder::percentEncode(detectConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDetectConfigResponse>();
}

/**
 * @summary 更新偏差检测配置
 *
 * @param request UpdateDetectConfigRequest
 * @return UpdateDetectConfigResponse
 */
UpdateDetectConfigResponse Client::updateDetectConfig(const string &detectConfigId, const UpdateDetectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDetectConfigWithOptions(detectConfigId, request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
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
    body["autoDestroy"] = request.getAutoDestroy();
  }

  if (!!request.hasAutoTrigger()) {
    body["autoTrigger"] = request.getAutoTrigger();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasForcedSetting()) {
    body["forcedSetting"] = request.getForcedSetting();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasNotifyConfig()) {
    body["notifyConfig"] = request.getNotifyConfig();
  }

  if (!!request.hasNotifyOperationTypes()) {
    body["notifyOperationTypes"] = request.getNotifyOperationTypes();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasReportExportField()) {
    body["reportExportField"] = request.getReportExportField();
  }

  if (!!request.hasReportExportPath()) {
    body["reportExportPath"] = request.getReportExportPath();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.getTerraformProviderVersion();
  }

  if (!!request.hasTriggerConfig()) {
    body["triggerConfig"] = request.getTriggerConfig();
  }

  if (!!request.hasTriggerResourceType()) {
    body["triggerResourceType"] = request.getTriggerResourceType();
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
 * @summary Update Module
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.getGroupInfo();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.getSourcePath();
  }

  if (!!request.hasStatePath()) {
    body["statePath"] = request.getStatePath();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasVersionStrategy()) {
    body["versionStrategy"] = request.getVersionStrategy();
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
 * @summary Update Module
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
 * @summary 更新参数集
 *
 * @param request UpdateParameterSetAttributeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateParameterSetAttributeResponse
 */
UpdateParameterSetAttributeResponse Client::updateParameterSetAttributeWithOptions(const string &parameterSetId, const UpdateParameterSetAttributeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasParameters()) {
    body["parameters"] = request.getParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateParameterSetAttribute"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/parameterSets/" , Darabonba::Encode::Encoder::percentEncode(parameterSetId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateParameterSetAttributeResponse>();
}

/**
 * @summary 更新参数集
 *
 * @param request UpdateParameterSetAttributeRequest
 * @return UpdateParameterSetAttributeResponse
 */
UpdateParameterSetAttributeResponse Client::updateParameterSetAttribute(const string &parameterSetId, const UpdateParameterSetAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateParameterSetAttributeWithOptions(parameterSetId, request, headers, runtime);
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
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
    body["acl"] = request.getAcl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
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
    body["acl"] = request.getAcl();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExportToModule()) {
    body["exportToModule"] = request.getExportToModule();
  }

  if (!!request.hasIncludeRules()) {
    body["includeRules"] = request.getIncludeRules();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasTerraformProviderVersion()) {
    body["terraformProviderVersion"] = request.getTerraformProviderVersion();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.getTerraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.getTriggerStrategy();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.getVariables();
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
 * @summary 更新资源栈
 *
 * @param request UpdateStackRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStackResponse
 */
UpdateStackResponse Client::updateStackWithOptions(const string &stackId, const UpdateStackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.getSourcePath();
  }

  if (!!request.hasWorkingDirectory()) {
    body["workingDirectory"] = request.getWorkingDirectory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStack"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/stacks/" , Darabonba::Encode::Encoder::percentEncode(stackId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStackResponse>();
}

/**
 * @summary 更新资源栈
 *
 * @param request UpdateStackRequest
 * @return UpdateStackResponse
 */
UpdateStackResponse Client::updateStack(const string &stackId, const UpdateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateStackWithOptions(stackId, request, headers, runtime);
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
    body["autoApply"] = request.getAutoApply();
  }

  if (!!request.hasAutoDestroy()) {
    body["autoDestroy"] = request.getAutoDestroy();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasGroupInfo()) {
    body["groupInfo"] = request.getGroupInfo();
  }

  if (!!request.hasInitModuleState()) {
    body["initModuleState"] = request.getInitModuleState();
  }

  if (!!request.hasModuleVersion()) {
    body["moduleVersion"] = request.getModuleVersion();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasProtectionStrategy()) {
    body["protectionStrategy"] = request.getProtectionStrategy();
  }

  if (!!request.hasRamRole()) {
    body["ramRole"] = request.getRamRole();
  }

  if (!!request.hasSkipPropertyValidation()) {
    body["skipPropertyValidation"] = request.getSkipPropertyValidation();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTerraformVersion()) {
    body["terraformVersion"] = request.getTerraformVersion();
  }

  if (!!request.hasTriggerStrategy()) {
    body["triggerStrategy"] = request.getTriggerStrategy();
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
 * @summary 模版上传
 *
 * @param request UploadModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadModuleResponse
 */
UploadModuleResponse Client::uploadModuleWithOptions(const string &resourceType, const UploadModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModuleId()) {
    query["moduleId"] = request.getModuleId();
  }

  if (!!request.hasModuleName()) {
    query["moduleName"] = request.getModuleName();
  }

  if (!!request.hasNamespaceName()) {
    query["namespaceName"] = request.getNamespaceName();
  }

  if (!!request.hasUrl()) {
    query["url"] = request.getUrl();
  }

  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadModule"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/modules/upload/" , Darabonba::Encode::Encoder::percentEncode(resourceType))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadModuleResponse>();
}

/**
 * @summary 模版上传
 *
 * @param request UploadModuleRequest
 * @return UploadModuleResponse
 */
UploadModuleResponse Client::uploadModule(const string &resourceType, const UploadModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadModuleWithOptions(resourceType, request, headers, runtime);
}

UploadModuleResponse Client::uploadModuleAdvance(const string &resourceType, const UploadModuleAdvanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "IaCService"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  UploadModuleRequest uploadModuleReq = UploadModuleRequest();
  Utils::Utils::convert(request, uploadModuleReq);
  if (!!request.hasUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadModuleReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadModuleResponse uploadModuleResp = uploadModuleWithOptions(resourceType, uploadModuleReq, headers, runtime);
  return uploadModuleResp;
}

/**
 * @summary 模版预检
 *
 * @param request ValidateModuleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateModuleResponse
 */
FutureGenerator<ValidateModuleResponse> Client::validateModuleWithSSE(const ValidateModuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasCodeMap()) {
    body["codeMap"] = request.getCodeMap();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.getSourcePath();
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
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<ValidateModuleResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

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
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasCode()) {
    body["code"] = request.getCode();
  }

  if (!!request.hasCodeMap()) {
    body["codeMap"] = request.getCodeMap();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  if (!!request.hasSourcePath()) {
    body["sourcePath"] = request.getSourcePath();
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