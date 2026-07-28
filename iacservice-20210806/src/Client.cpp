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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-zhangjiakou" , "iac.cn-zhangjiakou.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds shared accounts.
 *
 * @description Per-user call frequency: 100 calls per second.
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
 * @summary Adds shared accounts.
 *
 * @description Per-user call frequency: 100 calls per second.
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
 * @summary Associate drift detection configuration
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
 * @summary Associate drift detection configuration
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
 * @summary Associates resources with a group.
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
 * @summary Associates resources with a group.
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
 * @summary Associates parameter sets.
 *
 * @description After creating a parameter set, you need to associate it with a resource. Valid values for the resource type:
 * - Module: template
 * - ModuleVersion: template version
 * - Task: node.
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
 * @summary Associates parameter sets.
 *
 * @description After creating a parameter set, you need to associate it with a resource. Valid values for the resource type:
 * - Module: template
 * - ModuleVersion: template version
 * - Task: node.
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
 * @summary Cancels a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Cancels a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a drift detection configuration that supports manual or scheduled triggering.
 *
 * @description ## Request Description  
 * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
 * - Each element in the `alarmConfigs` list must specify the alerting method `type` and the corresponding alerting address `address`.  
 * - If the `enabled` parameter is not explicitly set, its default value is `true`, meaning newly created detection configurations are enabled by default.  
 * - It is recommended to use a UUID as the value of `clientToken` to ensure request idempotence.
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
 * @summary Creates a drift detection configuration that supports manual or scheduled triggering.
 *
 * @description ## Request Description  
 * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
 * - Each element in the `alarmConfigs` list must specify the alerting method `type` and the corresponding alerting address `address`.  
 * - If the `enabled` parameter is not explicitly set, its default value is `true`, meaning newly created detection configurations are enabled by default.  
 * - It is recommended to use a UUID as the value of `clientToken` to ensure request idempotence.
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
 * @summary Creates a group.
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
 * @summary Creates a group.
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
 * @summary Creates a job and runs a task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a job and runs a task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a Terraform template. Multiple source methods are supported, such as OSS import, Registry import, file upload, and online editing.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a Terraform template. Multiple source methods are supported, such as OSS import, Registry import, file upload, and online editing.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Publishes a new version for a specified template.
 *
 * @description ## Operation description
 * - Use the `clientToken` parameter to ensure idempotence of the request and prevent duplicate submissions caused by network retries.
 * - Use semantic versioning (such as `v1.0.0`).
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
 * @summary Publishes a new version for a specified template.
 *
 * @description ## Operation description
 * - Use the `clientToken` parameter to ensure idempotence of the request and prevent duplicate submissions caused by network retries.
 * - Use semantic versioning (such as `v1.0.0`).
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
 * @summary Adds a new parameter set. You can set the name, description, and parameter list.
 *
 * @description ## Operation description
 * - This operation creates a new parameter set.
 * - The name field is required and can be up to 128 characters in length.
 * - Each element in the parameters array must contain the name field. Other fields are optional.
 * - Use the clientToken field to ensure the idempotence of the request.
 * - The request header must contain authentication information to ensure secure access.
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
 * @summary Adds a new parameter set. You can set the name, description, and parameter list.
 *
 * @description ## Operation description
 * - This operation creates a new parameter set.
 * - The name field is required and can be up to 128 characters in length.
 * - Each element in the parameters array must contain the name field. Other fields are optional.
 * - Use the clientToken field to ensure the idempotence of the request.
 * - The request header must contain authentication information to ensure secure access.
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
 * @summary Creates a project.
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
 * @summary Creates a project.
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
 * @summary Creates a Registry template.
 *
 * @description Per-user call frequency: 100 calls per second.
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
 * @summary Creates a Registry template.
 *
 * @description Per-user call frequency: 100 calls per second.
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
 * @summary Creates a workspace.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a workspace.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Creates a resource stack and triggers deployment.
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

  if (!!request.hasParameterSetIds()) {
    body["parameterSetIds"] = request.getParameterSetIds();
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
 * @summary Creates a resource stack and triggers deployment.
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
 * @summary Creates a node.
 *
 * @description Single-user call frequency: 100 calls per second.
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

  if (!!request.hasParameterSetIds()) {
    body["parameterSetIds"] = request.getParameterSetIds();
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

  if (!!request.hasSkipRegionValidation()) {
    body["skipRegionValidation"] = request.getSkipRegionValidation();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTaskBackend()) {
    body["taskBackend"] = request.getTaskBackend();
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
 * @summary Creates a node.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Delete drift detection configuration
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
 * @summary Delete drift detection configuration
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
 * @summary Deletes a group.
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
 * @summary Deletes a group.
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
 * @summary Deletes a specified template and all its versions.
 *
 * @description ## Operation description
 * - This operation deletes a specified template.
 * - Deletion is irreversible. Proceed with caution.
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
 * @summary Deletes a specified template and all its versions.
 *
 * @description ## Operation description
 * - This operation deletes a specified template.
 * - Deletion is irreversible. Proceed with caution.
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
 * @summary Deletes a specified parameter set by parameter set ID.
 *
 * @description Deletes a specified parameter set.
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
 * @summary Deletes a specified parameter set by parameter set ID.
 *
 * @description Deletes a specified parameter set.
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
 * @summary Deletes a project.
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
 * @summary Deletes a project.
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
 * @summary Deletes a Registry template.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a Registry template.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a Registry template version.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a Registry template version.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a workspace.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a workspace.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Deletes a stack.
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
 * @summary Deletes a stack.
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
 * @summary Deletes a node.
 *
 * @description Single-user call frequency: 100 calls per second.
 * Deletes a node. If the node has resources that have not been destroyed, the node cannot be deleted.
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
 * @summary Deletes a node.
 *
 * @description Single-user call frequency: 100 calls per second.
 * Deletes a node. If the node has resources that have not been destroyed, the node cannot be deleted.
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
 * @summary Initiates a state file consistency check.
 *
 * @description This API is used to perform drift detection on the state files of resource orchestration tasks and stack tasks in the automated service desk.
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
 * @summary Initiates a state file consistency check.
 *
 * @description This API is used to perform drift detection on the state files of resource orchestration tasks and stack tasks in the automated service desk.
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
 * @summary Disassociate drift detection configuration
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
 * @summary Disassociate drift detection configuration
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
 * @summary Dissociates a resource group.
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
 * @summary Dissociates a resource group.
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
 * @summary Dissociates a parameter set from other resources.
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
 * @summary Dissociates a parameter set from other resources.
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
 * @summary Executes a Module officially provided by Alibaba Cloud Terraform.
 *
 * @description This API operation is used to execute Terraform Module code to create or update cloud resources. Before using this API operation, make sure that all required authentication information is correctly configured and that the Terraform code corresponding to the Module meets the expected functional requirements.
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
 * @summary Executes a Module officially provided by Alibaba Cloud Terraform.
 *
 * @description This API operation is used to execute Terraform Module code to create or update cloud resources. Before using this API operation, make sure that all required authentication information is correctly configured and that the Terraform code corresponding to the Module meets the expected functional requirements.
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
 * @summary Runs a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Runs a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Executes TerraformApply.
 *
 * @description Executes the Terraform Apply command to create or update cloud resources based on the provided Terraform code. This API can handle complex scenarios such as operations that depend on a previous state.
 * Before calling this API, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
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
 * @summary Executes TerraformApply.
 *
 * @description Executes the Terraform Apply command to create or update cloud resources based on the provided Terraform code. This API can handle complex scenarios such as operations that depend on a previous state.
 * Before calling this API, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
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
 * @summary Executes Terraform Destroy.
 *
 * @description Executes the Terraform Destroy command to destroy resources created by Terraform.
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
 * @summary Executes Terraform Destroy.
 *
 * @description Executes the Terraform Destroy command to destroy resources created by Terraform.
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
 * @summary Executes a Terraform plan.
 *
 * @description Executes a Terraform Plan command by using the provided Terraform code to create or update cloud resources. This API operation can handle complex scenarios such as operations that depend on a previous state.
 * Before calling this API operation, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
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
 * @summary Executes a Terraform plan.
 *
 * @description Executes a Terraform Plan command by using the provided Terraform code to create or update cloud resources. This API operation can handle complex scenarios such as operations that depend on a previous state.
 * Before calling this API operation, ensure that all required authentication information is properly configured and that the Terraform code meets the expected functional requirements.
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
 * @summary Generates Terraform HCL template code.
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
 * @summary Generates Terraform HCL template code.
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
 * @summary Retrieve drift detection configuration
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
 * @summary Retrieve drift detection configuration
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
 * @summary Retrieves the result of a Terraform run.
 *
 * @description Retrieves the result of a Terraform run.
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
 * @summary Retrieves the result of a Terraform run.
 *
 * @description Retrieves the result of a Terraform run.
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
 * @summary Queries a group.
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
 * @summary Queries a group.
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
 * @summary Retrieves job information.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves job information.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Queries the details of a specified template.
 *
 * @description ## Operation description
 * You can call this operation to query the details of a specified template, including but not limited to the template name, description, source, status, and latest version. You must specify the template ID and include authentication information in the request.
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
 * @summary Queries the details of a specified template.
 *
 * @description ## Operation description
 * You can call this operation to query the details of a specified template, including but not limited to the template name, description, source, status, and latest version. You must specify the template ID and include authentication information in the request.
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
 * @summary Queries the details of a specific version of a specified template.
 *
 * @description ## Operation description
 * You can call this operation to query the details of a specific version of a specified template, including the version number, description, and release time. Make sure that the template ID and version number are correct.
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
 * @summary Queries the details of a specific version of a specified template.
 *
 * @description ## Operation description
 * You can call this operation to query the details of a specific version of a specified template, including the version number, description, and release time. Make sure that the template ID and version number are correct.
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
 * @summary Retrieves the details of a parameter set by parameter set ID.
 *
 * @description ## Description
 * - This operation retrieves detailed parameter set information by specifying a parameterSetId.
 * - Authentication is required to call this operation.
 * - If the request succeeds, the response includes detailed data such as the parameter set name, description, and parameter list.
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
 * @summary Retrieves the details of a parameter set by parameter set ID.
 *
 * @description ## Description
 * - This operation retrieves detailed parameter set information by specifying a parameterSetId.
 * - Authentication is required to call this operation.
 * - If the request succeeds, the response includes detailed data such as the parameter set name, description, and parameter list.
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
 * @summary Queries a project.
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
 * @summary Queries a project.
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
 * @summary Retrieves the resource documentation of a Terraform provider.
 *
 * @param request GetProviderDocumentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProviderDocumentResponse
 */
GetProviderDocumentResponse Client::getProviderDocumentWithOptions(const GetProviderDocumentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProviderVersion()) {
    query["providerVersion"] = request.getProviderVersion();
  }

  if (!!request.hasTerraformResourceType()) {
    query["terraformResourceType"] = request.getTerraformResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProviderDocument"},
    {"version" , "2021-08-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/version/terraform/provider/document")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProviderDocumentResponse>();
}

/**
 * @summary Retrieves the resource documentation of a Terraform provider.
 *
 * @param request GetProviderDocumentRequest
 * @return GetProviderDocumentResponse
 */
GetProviderDocumentResponse Client::getProviderDocument(const GetProviderDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProviderDocumentWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a Registry module.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a Registry module.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a Registry template version.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a Registry template version.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a workspace.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a workspace.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries the details of a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Queries the details of a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves resource type information.
 *
 * @description ## Request description.
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
 * @summary Retrieves resource type information.
 *
 * @description ## Request description.
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
 * @summary Queries a stack.
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
 * @summary Queries a stack.
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
 * @summary Queries the list of deployments for a stack.
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
 * @summary Queries the list of deployments for a stack.
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
 * @summary Retrieves the trigger result of a stack.
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
 * @summary Retrieves the trigger result of a stack.
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
 * @summary Retrieves the details of a task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves the details of a task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves the detection result of a state file.
 *
 * @description This API is used to retrieve the detection results of state files for resource orchestration tasks and stack tasks on the automation service desk.
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
 * @summary Retrieves the detection result of a state file.
 *
 * @description This API is used to retrieve the detection results of state files for resource orchestration tasks and stack tasks on the automation service desk.
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
 * @summary List drift detection associations
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
 * @summary List drift detection associations
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
 * @summary List drift detection configurations
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
 * @summary List drift detection configurations
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
 * @summary Retrieves the list of official Terraform Module examples.
 *
 * @description This operation queries the example information of Terraform Modules officially provided by Alibaba Cloud.
 * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
 * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModuleExamples operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
 * - You can use keyword, namespaceName, moduleName, moduleVersion, and exampleName as conditional filter settings to narrow down the search scope. Multiple filter conditions have a logical `AND` relationship, and only resources that meet all filter conditions are returned.
 *   - keyword: optional. Searches by keyword and supports fuzzy match on exampleName. For example, if keyword is set to ecs, module examples whose names contain ecs are returned.
 *   - namespaceName: optional. Filters module examples by a specific workspace. For example, if namespaceName is set to alibaba, module examples in the alibaba workspace are returned.
 *   - moduleName: optional. Filters module examples by a specific module name. For example, if moduleName is set to ecs, module examples whose module name is ecs are returned.
 *   - moduleVersion: optional. Filters module examples by a specific module version. For example, if moduleVersion is set to 1.0.0, module examples whose module version is 1.0.0 are returned.
 *   - exampleName: optional. Filters module examples by a specific example name. For example, if exampleName is set to ecs, module examples whose example name is ecs are returned.
 * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates processing of query results.
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
 * @summary Retrieves the list of official Terraform Module examples.
 *
 * @description This operation queries the example information of Terraform Modules officially provided by Alibaba Cloud.
 * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
 * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModuleExamples operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
 * - You can use keyword, namespaceName, moduleName, moduleVersion, and exampleName as conditional filter settings to narrow down the search scope. Multiple filter conditions have a logical `AND` relationship, and only resources that meet all filter conditions are returned.
 *   - keyword: optional. Searches by keyword and supports fuzzy match on exampleName. For example, if keyword is set to ecs, module examples whose names contain ecs are returned.
 *   - namespaceName: optional. Filters module examples by a specific workspace. For example, if namespaceName is set to alibaba, module examples in the alibaba workspace are returned.
 *   - moduleName: optional. Filters module examples by a specific module name. For example, if moduleName is set to ecs, module examples whose module name is ecs are returned.
 *   - moduleVersion: optional. Filters module examples by a specific module version. For example, if moduleVersion is set to 1.0.0, module examples whose module version is 1.0.0 are returned.
 *   - exampleName: optional. Filters module examples by a specific example name. For example, if exampleName is set to ecs, module examples whose example name is ecs are returned.
 * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates processing of query results.
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
 * @summary Lists the version information of official Terraform modules provided by Alibaba Cloud.
 *
 * @description This operation queries the version information of official Terraform modules provided by Alibaba Cloud.
 * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
 * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
 * - You can use keyword, namespaceName, moduleName, and moduleVersion as conditional filter Settings to narrow the search scope. Multiple filter conditions have a logical `AND` relationship. Only resources that meet all filter conditions are returned.
 *   - keyword: optional. Performs a fuzzy match on the module name. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
 *   - namespaceName: optional. Filters modules by a specific workspace. For example, if namespaceName is set to alibaba, modules whose workspace is alibaba are returned. When moduleName is specified, namespaceName must also be specified. You can call the ListExplorerRegistryModule operation to obtain the namespaceName information.
 *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, modules whose name is ecs are returned.
 *   - moduleVersion: optional. Filters modules by a specific version. For example, if moduleVersion is set to 1.0.0, modules whose version is 1.0.0 are returned.
 * The response contains the request ID, total number of entries, data on the current page, and pagination information, which facilitates the processing of query results.
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
 * @summary Lists the version information of official Terraform modules provided by Alibaba Cloud.
 *
 * @description This operation queries the version information of official Terraform modules provided by Alibaba Cloud.
 * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
 * - If `nextToken` is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If the `NextToken` parameter is not specified, the first page of data is returned by default.
 * - You can use keyword, namespaceName, moduleName, and moduleVersion as conditional filter Settings to narrow the search scope. Multiple filter conditions have a logical `AND` relationship. Only resources that meet all filter conditions are returned.
 *   - keyword: optional. Performs a fuzzy match on the module name. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
 *   - namespaceName: optional. Filters modules by a specific workspace. For example, if namespaceName is set to alibaba, modules whose workspace is alibaba are returned. When moduleName is specified, namespaceName must also be specified. You can call the ListExplorerRegistryModule operation to obtain the namespaceName information.
 *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, modules whose name is ecs are returned.
 *   - moduleVersion: optional. Filters modules by a specific version. For example, if moduleVersion is set to 1.0.0, modules whose version is 1.0.0 are returned.
 * The response contains the request ID, total number of entries, data on the current page, and pagination information, which facilitates the processing of query results.
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
 * @summary Lists information about official Terraform modules provided by Alibaba Cloud.
 *
 * @description This operation queries information about official Terraform modules provided by Alibaba Cloud.
 * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
 * - If the `nextToken` parameter is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If you do not specify the `NextToken` parameter, the first page of data is returned by default.
 * - You can use keyword and moduleName as filter conditions to narrow the search scope. Multiple filter conditions are evaluated by using a logical `AND`. Only resources that meet all filter conditions are returned.
 *   - keyword: optional. Searches by keyword through fuzzy matching against ModuleName. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
 *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, only the module whose name is exactly ecs is returned.
 * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates the processing of query results.
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
 * @summary Lists information about official Terraform modules provided by Alibaba Cloud.
 *
 * @description This operation queries information about official Terraform modules provided by Alibaba Cloud.
 * You can use the `maxResults` parameter to adjust the maximum number of entries to return.
 * - If the `nextToken` parameter is not included in the response, no more data is available. Otherwise, more data is available. To query the next page, set the `nextToken` parameter of the ListExplorerRegistryModules operation to the `nextToken` value returned in the previous response. If you do not specify the `NextToken` parameter, the first page of data is returned by default.
 * - You can use keyword and moduleName as filter conditions to narrow the search scope. Multiple filter conditions are evaluated by using a logical `AND`. Only resources that meet all filter conditions are returned.
 *   - keyword: optional. Searches by keyword through fuzzy matching against ModuleName. For example, if keyword is set to ecs, modules whose names contain ecs are returned.
 *   - moduleName: optional. Filters modules by a specific name. For example, if moduleName is set to ecs, only the module whose name is exactly ecs is returned.
 * The response contains the request ID, total number of entries, data of the current page, and pagination information, which facilitates the processing of query results.
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
 * @summary Queries the list of groups.
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
 * @summary Queries the list of groups.
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
 * @summary Queries a list of jobs.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Queries a list of jobs.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves a list of template versions.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves a list of template versions.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves a list of templates for the current user, with support for pagination and conditional filtering.
 *
 * @description ## Operation description
 * This operation lists all Terraform templates for the current user. You can specify query parameters to implement pagination, fuzzy match template names, and filter templates by source or status. You can also filter templates by tag for more granular results.
 * ### Notes
 * - Use the pageNumber and pageSize parameters to control the number of returned results.
 * - Use the name parameter to perform a fuzzy match on template names.
 * - Use the source parameter to filter templates by source, such as OSS import or file upload.
 * - Use the status parameter to filter templates by status, such as Created or Published.
 * - Tag-based filtering requires a JSON-formatted string, for example, `[{"key":"env","value":"prod"}]`.
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
 * @summary Retrieves a list of templates for the current user, with support for pagination and conditional filtering.
 *
 * @description ## Operation description
 * This operation lists all Terraform templates for the current user. You can specify query parameters to implement pagination, fuzzy match template names, and filter templates by source or status. You can also filter templates by tag for more granular results.
 * ### Notes
 * - Use the pageNumber and pageSize parameters to control the number of returned results.
 * - Use the name parameter to perform a fuzzy match on template names.
 * - Use the source parameter to filter templates by source, such as OSS import or file upload.
 * - Use the status parameter to filter templates by status, such as Created or Published.
 * - Tag-based filtering requires a JSON-formatted string, for example, `[{"key":"env","value":"prod"}]`.
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
 * @summary Lists the parameter sets associated with a resource.
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
 * @summary Lists the parameter sets associated with a resource.
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
 * @summary Queries and retrieves a paginated list of parameter sets with keyword search support.
 *
 * @description ## Operation description
 * This operation queries all parameter sets in the system. You can filter results by keyword and paginate the results. Authentication information is required.
 * ### Notes
 * - The keyword parameter can be used to perform a fuzzy match on parameter sets by name or description.
 * - Pagination is controlled by pageNumber and pageSize. Results start from the first page by default. Set pageSize to a reasonable value to avoid performance issues.
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

  if (!!request.hasKmsKeyId()) {
    query["kmsKeyId"] = request.getKmsKeyId();
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
 * @summary Queries and retrieves a paginated list of parameter sets with keyword search support.
 *
 * @description ## Operation description
 * This operation queries all parameter sets in the system. You can filter results by keyword and paginate the results. Authentication information is required.
 * ### Notes
 * - The keyword parameter can be used to perform a fuzzy match on parameter sets by name or description.
 * - Pagination is controlled by pageNumber and pageSize. Results start from the first page by default. Set pageSize to a reasonable value to avoid performance issues.
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
 * @summary Queries the list of all products.
 *
 * @description ## Operation description
 * - **Keyword search**: Use the `keyword` parameter for fuzzy matching.
 * - **Paged query**: Use `nextToken` for pagination and `maxResults` to specify the maximum number of results per page (default: 100, maximum: 200).
 * - **Terraform Provider version**: The optional `terraformProviderVersion` parameter filters products associated with a specific Provider version.
 * - **Response structure**: The response contains the request ID, total number of entries, data of the current page, and pagination information for easy processing of query results.
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
 * @summary Queries the list of all products.
 *
 * @description ## Operation description
 * - **Keyword search**: Use the `keyword` parameter for fuzzy matching.
 * - **Paged query**: Use `nextToken` for pagination and `maxResults` to specify the maximum number of results per page (default: 100, maximum: 200).
 * - **Terraform Provider version**: The optional `terraformProviderVersion` parameter filters products associated with a specific Provider version.
 * - **Response structure**: The response contains the request ID, total number of entries, data of the current page, and pagination information for easy processing of query results.
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
 * @summary Queries the list of projects.
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
 * @summary Queries the list of projects.
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
 * @summary Queries the list of Registry template versions.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries the list of Registry template versions.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a list of registry modules.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries a list of registry modules.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries the list of workspaces.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Queries the list of workspaces.
 *
 * @description Single-user call frequency: 200 calls per second.
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
 * @summary Retrieves the list of versions for a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Retrieves the list of versions for a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Queries the list of resource export tasks.
 *
 * @description Rate limit per user: 100 calls per second.
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
 * @summary Queries the list of resource export tasks.
 *
 * @description Rate limit per user: 100 calls per second.
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
 * @summary Queries a list of resource types by filter conditions with pagination support.
 *
 * @description ## Operation description
 * This API operation allows you to perform a conditional query for a list of resource types based on conditions such as product code, Terraform provider version, child class, status, and keyword. The results include detailed information about each resource, such as the product code, status, status effective version, child class, Terraform provider version, and resource type code. Paging is supported to facilitate handling large amounts of data.
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
 * @summary Queries a list of resource types by filter conditions with pagination support.
 *
 * @description ## Operation description
 * This API operation allows you to perform a conditional query for a list of resource types based on conditions such as product code, Terraform provider version, child class, status, and keyword. The results include detailed information about each resource, such as the product code, status, status effective version, child class, Terraform provider version, and resource type code. Paging is supported to facilitate handling large amounts of data.
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
 * @summary Retrieves the resources of a node.
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
 * @summary Retrieves the resources of a node.
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
 * @summary Queries the list of stack configurations.
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
 * @summary Queries the list of stack configurations.
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
 * @summary Queries the list of stacks.
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

  if (!!request.hasKmsKeyId()) {
    query["kmsKeyId"] = request.getKmsKeyId();
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
 * @summary Queries the list of stacks.
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
 * @summary Queries a list of tasks.
 *
 * @description The maximum number of times that a single user can call this operation per second: 100.
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

  if (!!request.hasKmsKeyId()) {
    query["kmsKeyId"] = request.getKmsKeyId();
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
 * @summary Queries a list of tasks.
 *
 * @description The maximum number of times that a single user can call this operation per second: 100.
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
 * @summary Retrieves the list of Terraform provider versions.
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
 * @summary Retrieves the list of Terraform provider versions.
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
 * @summary Supports resource import and removal for state files.
 *
 * @description This API is used to manage state files for resource orchestration tasks and stack tasks on the automated service desk.
 * Before using this API, make sure that all required authentication information is correctly configured and that the Terraform code meets the expected functional requirements.
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
 * @summary Supports resource import and removal for state files.
 *
 * @description This API is used to manage state files for resource orchestration tasks and stack tasks on the automated service desk.
 * Before using this API, make sure that all required authentication information is correctly configured and that the Terraform code meets the expected functional requirements.
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
 * @summary After a job is created, you can perform the **Cancel** operation to stop the job while it is running.
 * After a job reaches the pending confirmation state, you can perform the **Abolish** operation to stop the job, or perform the **Execute** operation to continue the job execution.
 *
 * @description Per-user call frequency: 100 calls per second.
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
 * @summary After a job is created, you can perform the **Cancel** operation to stop the job while it is running.
 * After a job reaches the pending confirmation state, you can perform the **Abolish** operation to stop the job, or perform the **Execute** operation to continue the job execution.
 *
 * @description Per-user call frequency: 100 calls per second.
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
 * @summary Publishes a Registry template version.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Publishes a Registry template version.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Removes a shared account.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Removes a shared account.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Trigger Stack execution
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
 * @summary Trigger Stack execution
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
 * @summary Updates the drift detection configuration information for the specified ID.
 *
 * @description ## Request Description  
 * - `detectConfigId` is a required parameter used to identify the specific detection configuration to update.  
 * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
 * - Each element in the `alarmConfigs` list must include an alert type (`type`) and an address (`address`).  
 * - If you do not want to change certain properties (such as `name`, `description`, etc.), you can omit these fields from the request body.
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
 * @summary Updates the drift detection configuration information for the specified ID.
 *
 * @description ## Request Description  
 * - `detectConfigId` is a required parameter used to identify the specific detection configuration to update.  
 * - When `triggerType` is set to `Cron`, a valid `cronExpression` must be provided.  
 * - Each element in the `alarmConfigs` list must include an alert type (`type`) and an address (`address`).  
 * - If you do not want to change certain properties (such as `name`, `description`, etc.), you can omit these fields from the request body.
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
 * @summary Updates an Explorer template.
 *
 * @description Updates an Explorer template.
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
 * @summary Updates an Explorer template.
 *
 * @description Updates an Explorer template.
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
 * @summary Modifies a group.
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
 * @summary Modifies a group.
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
 * @summary Updates the name, description, tags, and other information of a specified template.
 *
 * @description ## Operation description
 * - This operation allows you to modify the basic attributes of an existing template, including but not limited to the template name, description, and tags.
 * - The update operation does not affect the content or version information of the template.
 * - To enable or disable deletion protection, use the deletionProtection parameter.
 * - Use clientToken to ensure the idempotence of the request and avoid duplicate submissions caused by network issues.
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
 * @summary Updates the name, description, tags, and other information of a specified template.
 *
 * @description ## Operation description
 * - This operation allows you to modify the basic attributes of an existing template, including but not limited to the template name, description, and tags.
 * - The update operation does not affect the content or version information of the template.
 * - To enable or disable deletion protection, use the deletionProtection parameter.
 * - Use clientToken to ensure the idempotence of the request and avoid duplicate submissions caused by network issues.
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
 * @summary Updates the attributes of a specified parameter set, such as the name and description.
 *
 * @description ## Operation description
 * - This operation allows you to modify the basic information of an existing parameter set, including the name and description.
 * - If the request includes the parameters field, the parameter list in the parameter set is updated.
 * - The clientToken field can be used to ensure the idempotence of the request.
 * - The update operation requires a valid parameterSetId as a path parameter.
 * - The request must include authentication information to pass identity verification.
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
 * @summary Updates the attributes of a specified parameter set, such as the name and description.
 *
 * @description ## Operation description
 * - This operation allows you to modify the basic information of an existing parameter set, including the name and description.
 * - If the request includes the parameters field, the parameter list in the parameter set is updated.
 * - The clientToken field can be used to ensure the idempotence of the request.
 * - The update operation requires a valid parameterSetId as a path parameter.
 * - The request must include authentication information to pass identity verification.
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
 * @summary Updates project information.
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
 * @summary Updates project information.
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
 * @summary Updates a Registry template.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Updates a Registry template.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Modifies a workspace.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Modifies a workspace.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Modifies a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Modifies a resource export task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Modifies a stack. When the configuration changes, a stack deployment is triggered.
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
 * @summary Modifies a stack. When the configuration changes, a stack deployment is triggered.
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
 * @summary Updates the properties of a task.
 *
 * @description Single-user call frequency: 100 calls per second.
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

  if (!!request.hasSkipRegionValidation()) {
    body["skipRegionValidation"] = request.getSkipRegionValidation();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
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
 * @summary Updates the properties of a task.
 *
 * @description Single-user call frequency: 100 calls per second.
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
 * @summary Uploads a template.
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
 * @summary Uploads a template.
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
 * @summary Performs a dry run on a template.
 *
 * @description Performs a dry run on the content of a Terraform configuration file.
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
 * @summary Performs a dry run on a template.
 *
 * @description Performs a dry run on the content of a Terraform configuration file.
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
 * @summary Performs a dry run on a template.
 *
 * @description Performs a dry run on the content of a Terraform configuration file.
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