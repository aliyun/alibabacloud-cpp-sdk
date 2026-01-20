#include <darabonba/Core.hpp>
#include <alibabacloud/PaiFeatureStore20230621.hpp>
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
using namespace AlibabaCloud::PaiFeatureStore20230621::Models;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{

AlibabaCloud::PaiFeatureStore20230621::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("paifeaturestore", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 检测资源连接状态。
 *
 * @param request CheckInstanceDatasourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckInstanceDatasourceResponse
 */
CheckInstanceDatasourceResponse Client::checkInstanceDatasourceWithOptions(const string &InstanceId, const CheckInstanceDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckInstanceDatasource"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/action/checkdatasource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckInstanceDatasourceResponse>();
}

/**
 * @summary 检测资源连接状态。
 *
 * @param request CheckInstanceDatasourceRequest
 * @return CheckInstanceDatasourceResponse
 */
CheckInstanceDatasourceResponse Client::checkInstanceDatasource(const string &InstanceId, const CheckInstanceDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkInstanceDatasourceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 检查FG配置内容是否正确，是否满足所有规则。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckModelFeatureFGFeatureResponse
 */
CheckModelFeatureFGFeatureResponse Client::checkModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckModelFeatureFGFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId) , "/action/checkfgfeature")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckModelFeatureFGFeatureResponse>();
}

/**
 * @summary 检查FG配置内容是否正确，是否满足所有规则。
 *
 * @return CheckModelFeatureFGFeatureResponse
 */
CheckModelFeatureFGFeatureResponse Client::checkModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkModelFeatureFGFeatureWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

/**
 * @summary 创建数据源。
 *
 * @param request CreateDatasourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasourceResponse
 */
CreateDatasourceResponse Client::createDatasourceWithOptions(const string &InstanceId, const CreateDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasource"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasourceResponse>();
}

/**
 * @summary 创建数据源。
 *
 * @param request CreateDatasourceRequest
 * @return CreateDatasourceResponse
 */
CreateDatasourceResponse Client::createDatasource(const string &InstanceId, const CreateDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasourceWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建特征实体
 *
 * @param request CreateFeatureEntityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFeatureEntityResponse
 */
CreateFeatureEntityResponse Client::createFeatureEntityWithOptions(const string &InstanceId, const CreateFeatureEntityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJoinId()) {
    body["JoinId"] = request.getJoinId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasParentFeatureEntityId()) {
    body["ParentFeatureEntityId"] = request.getParentFeatureEntityId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFeatureEntity"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureentities")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFeatureEntityResponse>();
}

/**
 * @summary 创建特征实体
 *
 * @param request CreateFeatureEntityRequest
 * @return CreateFeatureEntityResponse
 */
CreateFeatureEntityResponse Client::createFeatureEntity(const string &InstanceId, const CreateFeatureEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFeatureEntityWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建特征视图。
 *
 * @param request CreateFeatureViewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFeatureViewResponse
 */
CreateFeatureViewResponse Client::createFeatureViewWithOptions(const string &InstanceId, const CreateFeatureViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasFeatureEntityId()) {
    body["FeatureEntityId"] = request.getFeatureEntityId();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegisterDatasourceId()) {
    body["RegisterDatasourceId"] = request.getRegisterDatasourceId();
  }

  if (!!request.hasRegisterTable()) {
    body["RegisterTable"] = request.getRegisterTable();
  }

  if (!!request.hasSyncOnlineTable()) {
    body["SyncOnlineTable"] = request.getSyncOnlineTable();
  }

  if (!!request.hasTTL()) {
    body["TTL"] = request.getTTL();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.getTags();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWriteMethod()) {
    body["WriteMethod"] = request.getWriteMethod();
  }

  if (!!request.hasWriteToFeatureDB()) {
    body["WriteToFeatureDB"] = request.getWriteToFeatureDB();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFeatureView"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFeatureViewResponse>();
}

/**
 * @summary 创建特征视图。
 *
 * @param request CreateFeatureViewRequest
 * @return CreateFeatureViewResponse
 */
CreateFeatureViewResponse Client::createFeatureView(const string &InstanceId, const CreateFeatureViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFeatureViewWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建Feature Store实例。
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary 创建Feature Store实例。
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建大模型调用信息配置
 *
 * @param request CreateLLMConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLLMConfigResponse
 */
CreateLLMConfigResponse Client::createLLMConfigWithOptions(const string &InstanceId, const CreateLLMConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasBaseUrl()) {
    body["BaseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasBatchSize()) {
    body["BatchSize"] = request.getBatchSize();
  }

  if (!!request.hasMaxTokens()) {
    body["MaxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRps()) {
    body["Rps"] = request.getRps();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLLMConfig"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/llmconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLLMConfigResponse>();
}

/**
 * @summary 创建大模型调用信息配置
 *
 * @param request CreateLLMConfigRequest
 * @return CreateLLMConfigResponse
 */
CreateLLMConfigResponse Client::createLLMConfig(const string &InstanceId, const CreateLLMConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLLMConfigWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建label表
 *
 * @param request CreateLabelTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLabelTableResponse
 */
CreateLabelTableResponse Client::createLabelTableWithOptions(const string &InstanceId, const CreateLabelTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.getDatasourceId();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLabelTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labeltables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLabelTableResponse>();
}

/**
 * @summary 创建label表
 *
 * @param request CreateLabelTableRequest
 * @return CreateLabelTableResponse
 */
CreateLabelTableResponse Client::createLabelTable(const string &InstanceId, const CreateLabelTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLabelTableWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建模型特征。
 *
 * @param request CreateModelFeatureRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelFeatureResponse
 */
CreateModelFeatureResponse Client::createModelFeatureWithOptions(const string &InstanceId, const CreateModelFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFeatures()) {
    body["Features"] = request.getFeatures();
  }

  if (!!request.hasLabelPriorityLevel()) {
    body["LabelPriorityLevel"] = request.getLabelPriorityLevel();
  }

  if (!!request.hasLabelTableId()) {
    body["LabelTableId"] = request.getLabelTableId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSequenceFeatureViewIds()) {
    body["SequenceFeatureViewIds"] = request.getSequenceFeatureViewIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModelFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelFeatureResponse>();
}

/**
 * @summary 创建模型特征。
 *
 * @param request CreateModelFeatureRequest
 * @return CreateModelFeatureResponse
 */
CreateModelFeatureResponse Client::createModelFeature(const string &InstanceId, const CreateModelFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelFeatureWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建FeatureStore项目
 *
 * @param request CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const string &InstanceId, const CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOfflineDatasourceId()) {
    body["OfflineDatasourceId"] = request.getOfflineDatasourceId();
  }

  if (!!request.hasOfflineLifeCycle()) {
    body["OfflineLifeCycle"] = request.getOfflineLifeCycle();
  }

  if (!!request.hasOnlineDatasourceId()) {
    body["OnlineDatasourceId"] = request.getOnlineDatasourceId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary 创建FeatureStore项目
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const string &InstanceId, const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建feature store服务账户角色
 *
 * @param request CreateServiceIdentityRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceIdentityRoleResponse
 */
CreateServiceIdentityRoleResponse Client::createServiceIdentityRoleWithOptions(const CreateServiceIdentityRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceIdentityRole"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/serviceidentityroles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceIdentityRoleResponse>();
}

/**
 * @summary 创建feature store服务账户角色
 *
 * @param request CreateServiceIdentityRoleRequest
 * @return CreateServiceIdentityRoleResponse
 */
CreateServiceIdentityRoleResponse Client::createServiceIdentityRole(const CreateServiceIdentityRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceIdentityRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 删除指定数据源。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasourceResponse
 */
DeleteDatasourceResponse Client::deleteDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasource"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources/" , Darabonba::Encode::Encoder::percentEncode(DatasourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasourceResponse>();
}

/**
 * @summary 删除指定数据源。
 *
 * @return DeleteDatasourceResponse
 */
DeleteDatasourceResponse Client::deleteDatasource(const string &InstanceId, const string &DatasourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasourceWithOptions(InstanceId, DatasourceId, headers, runtime);
}

/**
 * @summary 删除指定特征实体
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFeatureEntityResponse
 */
DeleteFeatureEntityResponse Client::deleteFeatureEntityWithOptions(const string &InstanceId, const string &FeatureEntityId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFeatureEntity"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureentities/" , Darabonba::Encode::Encoder::percentEncode(FeatureEntityId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFeatureEntityResponse>();
}

/**
 * @summary 删除指定特征实体
 *
 * @return DeleteFeatureEntityResponse
 */
DeleteFeatureEntityResponse Client::deleteFeatureEntity(const string &InstanceId, const string &FeatureEntityId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFeatureEntityWithOptions(InstanceId, FeatureEntityId, headers, runtime);
}

/**
 * @summary 删除指定特征视图。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFeatureViewResponse
 */
DeleteFeatureViewResponse Client::deleteFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFeatureView"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFeatureViewResponse>();
}

/**
 * @summary 删除指定特征视图。
 *
 * @return DeleteFeatureViewResponse
 */
DeleteFeatureViewResponse Client::deleteFeatureView(const string &InstanceId, const string &FeatureViewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFeatureViewWithOptions(InstanceId, FeatureViewId, headers, runtime);
}

/**
 * @summary 删除大模型调用信息配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLLMConfigResponse
 */
DeleteLLMConfigResponse Client::deleteLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLLMConfig"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/llmconfigs/" , Darabonba::Encode::Encoder::percentEncode(LLMConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLLMConfigResponse>();
}

/**
 * @summary 删除大模型调用信息配置
 *
 * @return DeleteLLMConfigResponse
 */
DeleteLLMConfigResponse Client::deleteLLMConfig(const string &InstanceId, const string &LLMConfigId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLLMConfigWithOptions(InstanceId, LLMConfigId, headers, runtime);
}

/**
 * @summary 删除label表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLabelTableResponse
 */
DeleteLabelTableResponse Client::deleteLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLabelTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labeltables/" , Darabonba::Encode::Encoder::percentEncode(LabelTableId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLabelTableResponse>();
}

/**
 * @summary 删除label表
 *
 * @return DeleteLabelTableResponse
 */
DeleteLabelTableResponse Client::deleteLabelTable(const string &InstanceId, const string &LabelTableId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLabelTableWithOptions(InstanceId, LabelTableId, headers, runtime);
}

/**
 * @summary 删除指定模型特征。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelFeatureResponse
 */
DeleteModelFeatureResponse Client::deleteModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelFeatureResponse>();
}

/**
 * @summary 删除指定模型特征。
 *
 * @return DeleteModelFeatureResponse
 */
DeleteModelFeatureResponse Client::deleteModelFeature(const string &InstanceId, const string &ModelFeatureId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelFeatureWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

/**
 * @summary 删除指定Feature Store项目。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary 删除指定Feature Store项目。
 *
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const string &InstanceId, const string &ProjectId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectWithOptions(InstanceId, ProjectId, headers, runtime);
}

/**
 * @summary 导出训练集表。
 *
 * @param request ExportModelFeatureTrainingSetTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportModelFeatureTrainingSetTableResponse
 */
ExportModelFeatureTrainingSetTableResponse Client::exportModelFeatureTrainingSetTableWithOptions(const string &InstanceId, const string &ModelFeatureId, const ExportModelFeatureTrainingSetTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFeatureViewConfig()) {
    body["FeatureViewConfig"] = request.getFeatureViewConfig();
  }

  if (!!request.hasLabelInputConfig()) {
    body["LabelInputConfig"] = request.getLabelInputConfig();
  }

  if (!!request.hasRealTimeIterateInterval()) {
    body["RealTimeIterateInterval"] = request.getRealTimeIterateInterval();
  }

  if (!!request.hasRealTimePartitionCountValue()) {
    body["RealTimePartitionCountValue"] = request.getRealTimePartitionCountValue();
  }

  if (!!request.hasTrainingSetConfig()) {
    body["TrainingSetConfig"] = request.getTrainingSetConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExportModelFeatureTrainingSetTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId) , "/action/exporttrainingsettable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportModelFeatureTrainingSetTableResponse>();
}

/**
 * @summary 导出训练集表。
 *
 * @param request ExportModelFeatureTrainingSetTableRequest
 * @return ExportModelFeatureTrainingSetTableResponse
 */
ExportModelFeatureTrainingSetTableResponse Client::exportModelFeatureTrainingSetTable(const string &InstanceId, const string &ModelFeatureId, const ExportModelFeatureTrainingSetTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return exportModelFeatureTrainingSetTableWithOptions(InstanceId, ModelFeatureId, request, headers, runtime);
}

/**
 * @summary 获取数据源详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasourceResponse
 */
GetDatasourceResponse Client::getDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasource"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources/" , Darabonba::Encode::Encoder::percentEncode(DatasourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasourceResponse>();
}

/**
 * @summary 获取数据源详细信息。
 *
 * @return GetDatasourceResponse
 */
GetDatasourceResponse Client::getDatasource(const string &InstanceId, const string &DatasourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasourceWithOptions(InstanceId, DatasourceId, headers, runtime);
}

/**
 * @summary 获取数据源下指定表的详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasourceTableResponse
 */
GetDatasourceTableResponse Client::getDatasourceTableWithOptions(const string &InstanceId, const string &DatasourceId, const string &TableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasourceTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources/" , Darabonba::Encode::Encoder::percentEncode(DatasourceId) , "/tables/" , Darabonba::Encode::Encoder::percentEncode(TableName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasourceTableResponse>();
}

/**
 * @summary 获取数据源下指定表的详细信息。
 *
 * @return GetDatasourceTableResponse
 */
GetDatasourceTableResponse Client::getDatasourceTable(const string &InstanceId, const string &DatasourceId, const string &TableName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasourceTableWithOptions(InstanceId, DatasourceId, TableName, headers, runtime);
}

/**
 * @summary 获取特征实体详细信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureEntityResponse
 */
GetFeatureEntityResponse Client::getFeatureEntityWithOptions(const string &InstanceId, const string &FeatureEntityId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureEntity"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureentities/" , Darabonba::Encode::Encoder::percentEncode(FeatureEntityId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureEntityResponse>();
}

/**
 * @summary 获取特征实体详细信息
 *
 * @return GetFeatureEntityResponse
 */
GetFeatureEntityResponse Client::getFeatureEntity(const string &InstanceId, const string &FeatureEntityId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFeatureEntityWithOptions(InstanceId, FeatureEntityId, headers, runtime);
}

/**
 * @summary 获取特征视图详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureViewResponse
 */
GetFeatureViewResponse Client::getFeatureViewWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureView"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureViewResponse>();
}

/**
 * @summary 获取特征视图详细信息。
 *
 * @return GetFeatureViewResponse
 */
GetFeatureViewResponse Client::getFeatureView(const string &InstanceId, const string &FeatureViewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFeatureViewWithOptions(InstanceId, FeatureViewId, headers, runtime);
}

/**
 * @summary 获取实例详细信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary 获取实例详细信息
 *
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &InstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(InstanceId, headers, runtime);
}

/**
 * @summary 获取 LLMConfig 信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLLMConfigResponse
 */
GetLLMConfigResponse Client::getLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const string &RegionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLLMConfig"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/llmconfigs/" , Darabonba::Encode::Encoder::percentEncode(LLMConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLLMConfigResponse>();
}

/**
 * @summary 获取 LLMConfig 信息
 *
 * @return GetLLMConfigResponse
 */
GetLLMConfigResponse Client::getLLMConfig(const string &InstanceId, const string &LLMConfigId, const string &RegionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLLMConfigWithOptions(InstanceId, LLMConfigId, RegionId, headers, runtime);
}

/**
 * @summary 获取Label表详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLabelTableResponse
 */
GetLabelTableResponse Client::getLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLabelTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labeltables/" , Darabonba::Encode::Encoder::percentEncode(LabelTableId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLabelTableResponse>();
}

/**
 * @summary 获取Label表详细信息。
 *
 * @return GetLabelTableResponse
 */
GetLabelTableResponse Client::getLabelTable(const string &InstanceId, const string &LabelTableId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLabelTableWithOptions(InstanceId, LabelTableId, headers, runtime);
}

/**
 * @summary 获取模型特征详情。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelFeatureResponse
 */
GetModelFeatureResponse Client::getModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelFeatureResponse>();
}

/**
 * @summary 获取模型特征详情。
 *
 * @return GetModelFeatureResponse
 */
GetModelFeatureResponse Client::getModelFeature(const string &InstanceId, const string &ModelFeatureId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelFeatureWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

/**
 * @summary 获取模型特征的FG特征配置信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelFeatureFGFeatureResponse
 */
GetModelFeatureFGFeatureResponse Client::getModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelFeatureFGFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId) , "/fgfeature")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelFeatureFGFeatureResponse>();
}

/**
 * @summary 获取模型特征的FG特征配置信息。
 *
 * @return GetModelFeatureFGFeatureResponse
 */
GetModelFeatureFGFeatureResponse Client::getModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelFeatureFGFeatureWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

/**
 * @summary 获取模型特征的fg.json文件配置信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelFeatureFGInfoResponse
 */
GetModelFeatureFGInfoResponse Client::getModelFeatureFGInfoWithOptions(const string &InstanceId, const string &ModelFeatureId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelFeatureFGInfo"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId) , "/fginfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelFeatureFGInfoResponse>();
}

/**
 * @summary 获取模型特征的fg.json文件配置信息。
 *
 * @return GetModelFeatureFGInfoResponse
 */
GetModelFeatureFGInfoResponse Client::getModelFeatureFGInfo(const string &InstanceId, const string &ModelFeatureId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelFeatureFGInfoWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

/**
 * @summary 获取指定Feature Store项目详细信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary 获取指定Feature Store项目详细信息。
 *
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const string &InstanceId, const string &ProjectId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectWithOptions(InstanceId, ProjectId, headers, runtime);
}

/**
 * @summary 获取项目下特征实体详细信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectFeatureEntityResponse
 */
GetProjectFeatureEntityResponse Client::getProjectFeatureEntityWithOptions(const string &InstanceId, const string &ProjectId, const string &FeatureEntityName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectFeatureEntity"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/featureentities/" , Darabonba::Encode::Encoder::percentEncode(FeatureEntityName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectFeatureEntityResponse>();
}

/**
 * @summary 获取项目下特征实体详细信息
 *
 * @return GetProjectFeatureEntityResponse
 */
GetProjectFeatureEntityResponse Client::getProjectFeatureEntity(const string &InstanceId, const string &ProjectId, const string &FeatureEntityName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectFeatureEntityWithOptions(InstanceId, ProjectId, FeatureEntityName, headers, runtime);
}

/**
 * @summary 获取feature store服务账户角色。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceIdentityRoleResponse
 */
GetServiceIdentityRoleResponse Client::getServiceIdentityRoleWithOptions(const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceIdentityRole"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/serviceidentityroles/" , Darabonba::Encode::Encoder::percentEncode(RoleName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceIdentityRoleResponse>();
}

/**
 * @summary 获取feature store服务账户角色。
 *
 * @return GetServiceIdentityRoleResponse
 */
GetServiceIdentityRoleResponse Client::getServiceIdentityRole(const string &RoleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceIdentityRoleWithOptions(RoleName, headers, runtime);
}

/**
 * @summary 获取任务详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const string &InstanceId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary 获取任务详情
 *
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const string &InstanceId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWithOptions(InstanceId, TaskId, headers, runtime);
}

/**
 * @summary 获取数据源下所有特征视图信息。
 *
 * @param request ListDatasourceFeatureViewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasourceFeatureViewsResponse
 */
ListDatasourceFeatureViewsResponse Client::listDatasourceFeatureViewsWithOptions(const string &InstanceId, const string &DatasourceId, const ListDatasourceFeatureViewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasShowStorageUsage()) {
    query["ShowStorageUsage"] = request.getShowStorageUsage();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasourceFeatureViews"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources/" , Darabonba::Encode::Encoder::percentEncode(DatasourceId) , "/featureviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasourceFeatureViewsResponse>();
}

/**
 * @summary 获取数据源下所有特征视图信息。
 *
 * @param request ListDatasourceFeatureViewsRequest
 * @return ListDatasourceFeatureViewsResponse
 */
ListDatasourceFeatureViewsResponse Client::listDatasourceFeatureViews(const string &InstanceId, const string &DatasourceId, const ListDatasourceFeatureViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasourceFeatureViewsWithOptions(InstanceId, DatasourceId, request, headers, runtime);
}

/**
 * @summary 获取数据源下所有表。
 *
 * @param request ListDatasourceTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasourceTablesResponse
 */
ListDatasourceTablesResponse Client::listDatasourceTablesWithOptions(const string &InstanceId, const string &DatasourceId, const ListDatasourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasourceTables"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources/" , Darabonba::Encode::Encoder::percentEncode(DatasourceId) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasourceTablesResponse>();
}

/**
 * @summary 获取数据源下所有表。
 *
 * @param request ListDatasourceTablesRequest
 * @return ListDatasourceTablesResponse
 */
ListDatasourceTablesResponse Client::listDatasourceTables(const string &InstanceId, const string &DatasourceId, const ListDatasourceTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasourceTablesWithOptions(InstanceId, DatasourceId, request, headers, runtime);
}

/**
 * @summary 获取数据源列表。
 *
 * @param request ListDatasourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasourcesResponse
 */
ListDatasourcesResponse Client::listDatasourcesWithOptions(const string &InstanceId, const ListDatasourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasources"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasourcesResponse>();
}

/**
 * @summary 获取数据源列表。
 *
 * @param request ListDatasourcesRequest
 * @return ListDatasourcesResponse
 */
ListDatasourcesResponse Client::listDatasources(const string &InstanceId, const ListDatasourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasourcesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 创建特征实体列表
 *
 * @param tmpReq ListFeatureEntitiesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureEntitiesResponse
 */
ListFeatureEntitiesResponse Client::listFeatureEntitiesWithOptions(const string &InstanceId, const ListFeatureEntitiesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFeatureEntitiesShrinkRequest request = ListFeatureEntitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFeatureEntityIds()) {
    request.setFeatureEntityIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFeatureEntityIds(), "FeatureEntityIds", "simple"));
  }

  json query = {};
  if (!!request.hasFeatureEntityIdsShrink()) {
    query["FeatureEntityIds"] = request.getFeatureEntityIdsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentFeatureEntityId()) {
    query["ParentFeatureEntityId"] = request.getParentFeatureEntityId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureEntities"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureentities")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureEntitiesResponse>();
}

/**
 * @summary 创建特征实体列表
 *
 * @param request ListFeatureEntitiesRequest
 * @return ListFeatureEntitiesResponse
 */
ListFeatureEntitiesResponse Client::listFeatureEntities(const string &InstanceId, const ListFeatureEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureEntitiesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取特征字段血缘关系。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureViewFieldRelationshipsResponse
 */
ListFeatureViewFieldRelationshipsResponse Client::listFeatureViewFieldRelationshipsWithOptions(const string &InstanceId, const string &FeatureViewId, const string &FieldName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureViewFieldRelationships"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId) , "/fields/" , Darabonba::Encode::Encoder::percentEncode(FieldName) , "/relationships")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureViewFieldRelationshipsResponse>();
}

/**
 * @summary 获取特征字段血缘关系。
 *
 * @return ListFeatureViewFieldRelationshipsResponse
 */
ListFeatureViewFieldRelationshipsResponse Client::listFeatureViewFieldRelationships(const string &InstanceId, const string &FeatureViewId, const string &FieldName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureViewFieldRelationshipsWithOptions(InstanceId, FeatureViewId, FieldName, headers, runtime);
}

/**
 * @summary 获取特征视图下的在线特征数据。
 *
 * @param tmpReq ListFeatureViewOnlineFeaturesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureViewOnlineFeaturesResponse
 */
ListFeatureViewOnlineFeaturesResponse Client::listFeatureViewOnlineFeaturesWithOptions(const string &InstanceId, const string &FeatureViewId, const ListFeatureViewOnlineFeaturesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFeatureViewOnlineFeaturesShrinkRequest request = ListFeatureViewOnlineFeaturesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJoinIds()) {
    request.setJoinIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJoinIds(), "JoinIds", "json"));
  }

  json query = {};
  if (!!request.hasJoinIdsShrink()) {
    query["JoinIds"] = request.getJoinIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureViewOnlineFeatures"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId) , "/onlinefeatures")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureViewOnlineFeaturesResponse>();
}

/**
 * @summary 获取特征视图下的在线特征数据。
 *
 * @param request ListFeatureViewOnlineFeaturesRequest
 * @return ListFeatureViewOnlineFeaturesResponse
 */
ListFeatureViewOnlineFeaturesResponse Client::listFeatureViewOnlineFeatures(const string &InstanceId, const string &FeatureViewId, const ListFeatureViewOnlineFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureViewOnlineFeaturesWithOptions(InstanceId, FeatureViewId, request, headers, runtime);
}

/**
 * @summary 获取特征视图血缘关系。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureViewRelationshipsResponse
 */
ListFeatureViewRelationshipsResponse Client::listFeatureViewRelationshipsWithOptions(const string &InstanceId, const string &FeatureViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureViewRelationships"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId) , "/relationships")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureViewRelationshipsResponse>();
}

/**
 * @summary 获取特征视图血缘关系。
 *
 * @return ListFeatureViewRelationshipsResponse
 */
ListFeatureViewRelationshipsResponse Client::listFeatureViewRelationships(const string &InstanceId, const string &FeatureViewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureViewRelationshipsWithOptions(InstanceId, FeatureViewId, headers, runtime);
}

/**
 * @summary 获取特征视图列表。
 *
 * @param tmpReq ListFeatureViewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeatureViewsResponse
 */
ListFeatureViewsResponse Client::listFeatureViewsWithOptions(const string &InstanceId, const ListFeatureViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFeatureViewsShrinkRequest request = ListFeatureViewsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFeatureViewIds()) {
    request.setFeatureViewIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFeatureViewIds(), "FeatureViewIds", "simple"));
  }

  json query = {};
  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.getFeatureName();
  }

  if (!!request.hasFeatureViewIdsShrink()) {
    query["FeatureViewIds"] = request.getFeatureViewIdsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatureViews"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeatureViewsResponse>();
}

/**
 * @summary 获取特征视图列表。
 *
 * @param request ListFeatureViewsRequest
 * @return ListFeatureViewsResponse
 */
ListFeatureViewsResponse Client::listFeatureViews(const string &InstanceId, const ListFeatureViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeatureViewsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取Feature Store实例列表。
 *
 * @param request ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary 获取Feature Store实例列表。
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取大模型调用信息配置
 *
 * @param request ListLLMConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLLMConfigsResponse
 */
ListLLMConfigsResponse Client::listLLMConfigsWithOptions(const string &InstanceId, const ListLLMConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLLMConfigs"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/llmconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLLMConfigsResponse>();
}

/**
 * @summary 获取大模型调用信息配置
 *
 * @param request ListLLMConfigsRequest
 * @return ListLLMConfigsResponse
 */
ListLLMConfigsResponse Client::listLLMConfigs(const string &InstanceId, const ListLLMConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLLMConfigsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取Label表列表。
 *
 * @param tmpReq ListLabelTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLabelTablesResponse
 */
ListLabelTablesResponse Client::listLabelTablesWithOptions(const string &InstanceId, const ListLabelTablesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListLabelTablesShrinkRequest request = ListLabelTablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelTableIds()) {
    request.setLabelTableIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelTableIds(), "LabelTableIds", "simple"));
  }

  json query = {};
  if (!!request.hasLabelTableIdsShrink()) {
    query["LabelTableIds"] = request.getLabelTableIdsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLabelTables"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labeltables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLabelTablesResponse>();
}

/**
 * @summary 获取Label表列表。
 *
 * @param request ListLabelTablesRequest
 * @return ListLabelTablesResponse
 */
ListLabelTablesResponse Client::listLabelTables(const string &InstanceId, const ListLabelTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLabelTablesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取注册FG特征时模型特征下可选的所有特征。
 *
 * @param request ListModelFeatureAvailableFeaturesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelFeatureAvailableFeaturesResponse
 */
ListModelFeatureAvailableFeaturesResponse Client::listModelFeatureAvailableFeaturesWithOptions(const string &InstanceId, const string &ModelFeatureId, const ListModelFeatureAvailableFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.getFeatureName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelFeatureAvailableFeatures"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId) , "/availablefeatures")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelFeatureAvailableFeaturesResponse>();
}

/**
 * @summary 获取注册FG特征时模型特征下可选的所有特征。
 *
 * @param request ListModelFeatureAvailableFeaturesRequest
 * @return ListModelFeatureAvailableFeaturesResponse
 */
ListModelFeatureAvailableFeaturesResponse Client::listModelFeatureAvailableFeatures(const string &InstanceId, const string &ModelFeatureId, const ListModelFeatureAvailableFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelFeatureAvailableFeaturesWithOptions(InstanceId, ModelFeatureId, request, headers, runtime);
}

/**
 * @summary 获取模型特征列表。
 *
 * @param tmpReq ListModelFeaturesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelFeaturesResponse
 */
ListModelFeaturesResponse Client::listModelFeaturesWithOptions(const string &InstanceId, const ListModelFeaturesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModelFeaturesShrinkRequest request = ListModelFeaturesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModelFeatureIds()) {
    request.setModelFeatureIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModelFeatureIds(), "ModelFeatureIds", "simple"));
  }

  json query = {};
  if (!!request.hasModelFeatureIdsShrink()) {
    query["ModelFeatureIds"] = request.getModelFeatureIdsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelFeatures"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelFeaturesResponse>();
}

/**
 * @summary 获取模型特征列表。
 *
 * @param request ListModelFeaturesRequest
 * @return ListModelFeaturesResponse
 */
ListModelFeaturesResponse Client::listModelFeatures(const string &InstanceId, const ListModelFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelFeaturesWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取项目下的所有特征视图、特征信息。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectFeatureViewsResponse
 */
ListProjectFeatureViewsResponse Client::listProjectFeatureViewsWithOptions(const string &InstanceId, const string &ProjectId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectFeatureViews"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/featureviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectFeatureViewsResponse>();
}

/**
 * @summary 获取项目下的所有特征视图、特征信息。
 *
 * @return ListProjectFeatureViewsResponse
 */
ListProjectFeatureViewsResponse Client::listProjectFeatureViews(const string &InstanceId, const string &ProjectId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectFeatureViewsWithOptions(InstanceId, ProjectId, headers, runtime);
}

/**
 * @summary 获取项目下所有特征信息
 *
 * @param request ListProjectFeaturesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectFeaturesResponse
 */
ListProjectFeaturesResponse Client::listProjectFeaturesWithOptions(const string &InstanceId, const string &ProjectId, const ListProjectFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.getAliasName();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectFeatures"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId) , "/features")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectFeaturesResponse>();
}

/**
 * @summary 获取项目下所有特征信息
 *
 * @param request ListProjectFeaturesRequest
 * @return ListProjectFeaturesResponse
 */
ListProjectFeaturesResponse Client::listProjectFeatures(const string &InstanceId, const string &ProjectId, const ListProjectFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectFeaturesWithOptions(InstanceId, ProjectId, request, headers, runtime);
}

/**
 * @summary 获取Feature Store项目列表。
 *
 * @param tmpReq ListProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const string &InstanceId, const ListProjectsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectsShrinkRequest request = ListProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProjectIds()) {
    request.setProjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProjectIds(), "ProjectIds", "simple"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectIdsShrink()) {
    query["ProjectIds"] = request.getProjectIdsShrink();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary 获取Feature Store项目列表。
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const string &InstanceId, const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectsWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 获取任务日志列表
 *
 * @param request ListTaskLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskLogsResponse
 */
ListTaskLogsResponse Client::listTaskLogsWithOptions(const string &InstanceId, const string &TaskId, const ListTaskLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListTaskLogs"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskLogsResponse>();
}

/**
 * @summary 获取任务日志列表
 *
 * @param request ListTaskLogsRequest
 * @return ListTaskLogsResponse
 */
ListTaskLogsResponse Client::listTaskLogs(const string &InstanceId, const string &TaskId, const ListTaskLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTaskLogsWithOptions(InstanceId, TaskId, request, headers, runtime);
}

/**
 * @summary 获取任务列表
 *
 * @param tmpReq ListTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const string &InstanceId, const ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTasksShrinkRequest request = ListTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIds(), "TaskIds", "simple"));
  }

  json query = {};
  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskIdsShrink()) {
    query["TaskIds"] = request.getTaskIdsShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary 获取任务列表
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const string &InstanceId, const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTasksWithOptions(InstanceId, request, headers, runtime);
}

/**
 * @summary 将特征视图的离线数据发布/同步到线上。
 *
 * @param request PublishFeatureViewTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishFeatureViewTableResponse
 */
PublishFeatureViewTableResponse Client::publishFeatureViewTableWithOptions(const string &InstanceId, const string &FeatureViewId, const PublishFeatureViewTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasEventTime()) {
    body["EventTime"] = request.getEventTime();
  }

  if (!!request.hasMode()) {
    body["Mode"] = request.getMode();
  }

  if (!!request.hasOfflineToOnline()) {
    body["OfflineToOnline"] = request.getOfflineToOnline();
  }

  if (!!request.hasPartitions()) {
    body["Partitions"] = request.getPartitions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishFeatureViewTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId) , "/action/publishtable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishFeatureViewTableResponse>();
}

/**
 * @summary 将特征视图的离线数据发布/同步到线上。
 *
 * @param request PublishFeatureViewTableRequest
 * @return PublishFeatureViewTableResponse
 */
PublishFeatureViewTableResponse Client::publishFeatureViewTable(const string &InstanceId, const string &FeatureViewId, const PublishFeatureViewTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishFeatureViewTableWithOptions(InstanceId, FeatureViewId, request, headers, runtime);
}

/**
 * @summary 停止任务。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTaskWithOptions(const string &InstanceId, const string &TaskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTask"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(TaskId) , "/action/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTaskResponse>();
}

/**
 * @summary 停止任务。
 *
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTask(const string &InstanceId, const string &TaskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTaskWithOptions(InstanceId, TaskId, headers, runtime);
}

/**
 * @summary 更新数据源信息。
 *
 * @param request UpdateDatasourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasourceResponse
 */
UpdateDatasourceResponse Client::updateDatasourceWithOptions(const string &InstanceId, const string &DatasourceId, const UpdateDatasourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.getUri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDatasource"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/datasources/" , Darabonba::Encode::Encoder::percentEncode(DatasourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasourceResponse>();
}

/**
 * @summary 更新数据源信息。
 *
 * @param request UpdateDatasourceRequest
 * @return UpdateDatasourceResponse
 */
UpdateDatasourceResponse Client::updateDatasource(const string &InstanceId, const string &DatasourceId, const UpdateDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasourceWithOptions(InstanceId, DatasourceId, request, headers, runtime);
}

/**
 * @summary 更新大模型调用信息配置
 *
 * @param request UpdateLLMConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLLMConfigResponse
 */
UpdateLLMConfigResponse Client::updateLLMConfigWithOptions(const string &InstanceId, const string &LLMConfigId, const UpdateLLMConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiKey()) {
    body["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasBaseUrl()) {
    body["BaseUrl"] = request.getBaseUrl();
  }

  if (!!request.hasBatchSize()) {
    body["BatchSize"] = request.getBatchSize();
  }

  if (!!request.hasMaxTokens()) {
    body["MaxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRps()) {
    body["Rps"] = request.getRps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLLMConfig"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/llmconfigs/" , Darabonba::Encode::Encoder::percentEncode(LLMConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLLMConfigResponse>();
}

/**
 * @summary 更新大模型调用信息配置
 *
 * @param request UpdateLLMConfigRequest
 * @return UpdateLLMConfigResponse
 */
UpdateLLMConfigResponse Client::updateLLMConfig(const string &InstanceId, const string &LLMConfigId, const UpdateLLMConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLLMConfigWithOptions(InstanceId, LLMConfigId, request, headers, runtime);
}

/**
 * @summary 更新label表。
 *
 * @param request UpdateLabelTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLabelTableResponse
 */
UpdateLabelTableResponse Client::updateLabelTableWithOptions(const string &InstanceId, const string &LabelTableId, const UpdateLabelTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.getDatasourceId();
  }

  if (!!request.hasFields()) {
    body["Fields"] = request.getFields();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLabelTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/labeltables/" , Darabonba::Encode::Encoder::percentEncode(LabelTableId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLabelTableResponse>();
}

/**
 * @summary 更新label表。
 *
 * @param request UpdateLabelTableRequest
 * @return UpdateLabelTableResponse
 */
UpdateLabelTableResponse Client::updateLabelTable(const string &InstanceId, const string &LabelTableId, const UpdateLabelTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLabelTableWithOptions(InstanceId, LabelTableId, request, headers, runtime);
}

/**
 * @summary 更新模型特征。
 *
 * @param request UpdateModelFeatureRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelFeatureResponse
 */
UpdateModelFeatureResponse Client::updateModelFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const UpdateModelFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFeatures()) {
    body["Features"] = request.getFeatures();
  }

  if (!!request.hasLabelPriorityLevel()) {
    body["LabelPriorityLevel"] = request.getLabelPriorityLevel();
  }

  if (!!request.hasLabelTableId()) {
    body["LabelTableId"] = request.getLabelTableId();
  }

  if (!!request.hasSequenceFeatureViewIds()) {
    body["SequenceFeatureViewIds"] = request.getSequenceFeatureViewIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelFeatureResponse>();
}

/**
 * @summary 更新模型特征。
 *
 * @param request UpdateModelFeatureRequest
 * @return UpdateModelFeatureResponse
 */
UpdateModelFeatureResponse Client::updateModelFeature(const string &InstanceId, const string &ModelFeatureId, const UpdateModelFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelFeatureWithOptions(InstanceId, ModelFeatureId, request, headers, runtime);
}

/**
 * @summary 更新模型特征的FG特征配置信息。
 *
 * @param request UpdateModelFeatureFGFeatureRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelFeatureFGFeatureResponse
 */
UpdateModelFeatureFGFeatureResponse Client::updateModelFeatureFGFeatureWithOptions(const string &InstanceId, const string &ModelFeatureId, const UpdateModelFeatureFGFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLookupFeatures()) {
    body["LookupFeatures"] = request.getLookupFeatures();
  }

  if (!!request.hasRawFeatures()) {
    body["RawFeatures"] = request.getRawFeatures();
  }

  if (!!request.hasReserves()) {
    body["Reserves"] = request.getReserves();
  }

  if (!!request.hasSequenceFeatures()) {
    body["SequenceFeatures"] = request.getSequenceFeatures();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelFeatureFGFeature"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/modelfeatures/" , Darabonba::Encode::Encoder::percentEncode(ModelFeatureId) , "/fgfeature")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelFeatureFGFeatureResponse>();
}

/**
 * @summary 更新模型特征的FG特征配置信息。
 *
 * @param request UpdateModelFeatureFGFeatureRequest
 * @return UpdateModelFeatureFGFeatureResponse
 */
UpdateModelFeatureFGFeatureResponse Client::updateModelFeatureFGFeature(const string &InstanceId, const string &ModelFeatureId, const UpdateModelFeatureFGFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelFeatureFGFeatureWithOptions(InstanceId, ModelFeatureId, request, headers, runtime);
}

/**
 * @summary 更新指定Feature Store项目信息。
 *
 * @param request UpdateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const string &InstanceId, const string &ProjectId, const UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/projects/" , Darabonba::Encode::Encoder::percentEncode(ProjectId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary 更新指定Feature Store项目信息。
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const string &InstanceId, const string &ProjectId, const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectWithOptions(InstanceId, ProjectId, request, headers, runtime);
}

/**
 * @summary 获取特征视图血缘关系。
 *
 * @param request WriteFeatureViewTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return WriteFeatureViewTableResponse
 */
WriteFeatureViewTableResponse Client::writeFeatureViewTableWithOptions(const string &InstanceId, const string &FeatureViewId, const WriteFeatureViewTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMode()) {
    body["Mode"] = request.getMode();
  }

  if (!!request.hasPartitions()) {
    body["Partitions"] = request.getPartitions();
  }

  if (!!request.hasUrlDatasource()) {
    body["UrlDatasource"] = request.getUrlDatasource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "WriteFeatureViewTable"},
    {"version" , "2023-06-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(InstanceId) , "/featureviews/" , Darabonba::Encode::Encoder::percentEncode(FeatureViewId) , "/action/writetable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WriteFeatureViewTableResponse>();
}

/**
 * @summary 获取特征视图血缘关系。
 *
 * @param request WriteFeatureViewTableRequest
 * @return WriteFeatureViewTableResponse
 */
WriteFeatureViewTableResponse Client::writeFeatureViewTable(const string &InstanceId, const string &FeatureViewId, const WriteFeatureViewTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return writeFeatureViewTableWithOptions(InstanceId, FeatureViewId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621