#include <darabonba/Core.hpp>
#include <alibabacloud/Searchengine20211025.hpp>
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
using namespace AlibabaCloud::Searchengine20211025::Models;
namespace AlibabaCloud
{
namespace Searchengine20211025
{

AlibabaCloud::Searchengine20211025::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("searchengine", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Triggers reindexing.
 *
 * @description ## Method
 *     POST
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/actions/build-index
 *
 * @param request BuildIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuildIndexResponse
 */
BuildIndexResponse Client::buildIndexWithOptions(const string &instanceId, const BuildIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBuildMode()) {
    body["buildMode"] = request.buildMode();
  }

  if (!!request.hasDataSourceName()) {
    body["dataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasDataSourceType()) {
    body["dataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDataTimeSec()) {
    body["dataTimeSec"] = request.dataTimeSec();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.domain();
  }

  if (!!request.hasGeneration()) {
    body["generation"] = request.generation();
  }

  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  if (!!request.hasPath()) {
    body["path"] = request.path();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BuildIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/actions/build-index")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuildIndexResponse>();
}

/**
 * @summary Triggers reindexing.
 *
 * @description ## Method
 *     POST
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/actions/build-index
 *
 * @param request BuildIndexRequest
 * @return BuildIndexResponse
 */
BuildIndexResponse Client::buildIndex(const string &instanceId, const BuildIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return buildIndexWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 更换实例资源组
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const string &instanceId, const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewResourceGroupId()) {
    body["newResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/actions/change-resource-group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary 更换实例资源组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const string &instanceId, const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request CloneSqlInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneSqlInstanceResponse
 */
CloneSqlInstanceResponse Client::cloneSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const CloneSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasTargetFolderId()) {
    body["targetFolderId"] = request.targetFolderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloneSqlInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId) , "/actions/clone")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneSqlInstanceResponse>();
}

/**
 * @param request CloneSqlInstanceRequest
 * @return CloneSqlInstanceResponse
 */
CloneSqlInstanceResponse Client::cloneSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId, const CloneSqlInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cloneSqlInstanceWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

/**
 * @param request CreateAliasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAliasResponse
 */
CreateAliasResponse Client::createAliasWithOptions(const string &instanceId, const CreateAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewMode()) {
    query["newMode"] = request.newMode();
  }

  json body = {};
  if (!!request.hasAlias()) {
    body["alias"] = request.alias();
  }

  if (!!request.hasIndex()) {
    body["index"] = request.index();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlias"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/aliases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAliasResponse>();
}

/**
 * @param request CreateAliasRequest
 * @return CreateAliasResponse
 */
CreateAliasResponse Client::createAlias(const string &instanceId, const CreateAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAliasWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Creates a cluster.
 *
 * @description ### [](#method)Method
 * `POST`
 * ### [](#uri)URI
 * `/openapi/ha3/instances/{instanceId}/clusters`
 *
 * @param request CreateClusterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const string &instanceId, const CreateClusterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoLoad()) {
    body["autoLoad"] = request.autoLoad();
  }

  if (!!request.hasDataNode()) {
    body["dataNode"] = request.dataNode();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasQueryNode()) {
    body["queryNode"] = request.queryNode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary Creates a cluster.
 *
 * @description ### [](#method)Method
 * `POST`
 * ### [](#uri)URI
 * `/openapi/ha3/instances/{instanceId}/clusters`
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const string &instanceId, const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createClusterWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request CreateConfigDirRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigDirResponse
 */
CreateConfigDirResponse Client::createConfigDirWithOptions(const string &instanceId, const string &configName, const CreateConfigDirRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDirName()) {
    body["dirName"] = request.dirName();
  }

  if (!!request.hasParentFullPath()) {
    body["parentFullPath"] = request.parentFullPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConfigDir"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/dir")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigDirResponse>();
}

/**
 * @param request CreateConfigDirRequest
 * @return CreateConfigDirResponse
 */
CreateConfigDirResponse Client::createConfigDir(const string &instanceId, const string &configName, const CreateConfigDirRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConfigDirWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @param request CreateConfigFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConfigFileResponse
 */
CreateConfigFileResponse Client::createConfigFileWithOptions(const string &instanceId, const string &configName, const CreateConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileName()) {
    body["fileName"] = request.fileName();
  }

  if (!!request.hasOssPath()) {
    body["ossPath"] = request.ossPath();
  }

  if (!!request.hasParentFullPath()) {
    body["parentFullPath"] = request.parentFullPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConfigFile"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/file")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConfigFileResponse>();
}

/**
 * @param request CreateConfigFileRequest
 * @return CreateConfigFileResponse
 */
CreateConfigFileResponse Client::createConfigFile(const string &instanceId, const string &configName, const CreateConfigFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Creates data sources.
 *
 * @param request CreateDataSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const string &instanceId, const CreateDataSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasAutoBuildIndex()) {
    body["autoBuildIndex"] = request.autoBuildIndex();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.domain();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasSaroConfig()) {
    body["saroConfig"] = request.saroConfig();
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
    {"action" , "CreateDataSource"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSourceResponse>();
}

/**
 * @summary Creates data sources.
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const string &instanceId, const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDataSourceWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request CreateFolderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolderWithOptions(const string &instanceId, const string &database, const CreateFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasParent()) {
    body["parent"] = request.parent();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFolder"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/folders")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFolderResponse>();
}

/**
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const string &instanceId, const string &database, const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFolderWithOptions(instanceId, database, request, headers, runtime);
}

/**
 * @summary Creates an index.
 *
 * @description ### Method
 * ```java
 * POST
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/indexes
 * ```
 *
 * @param request CreateIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIndexResponse
 */
CreateIndexResponse Client::createIndexWithOptions(const string &instanceId, const CreateIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasBuildParallelNum()) {
    body["buildParallelNum"] = request.buildParallelNum();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasDataSource()) {
    body["dataSource"] = request.dataSource();
  }

  if (!!request.hasDataSourceInfo()) {
    body["dataSourceInfo"] = request.dataSourceInfo();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.domain();
  }

  if (!!request.hasExtend()) {
    body["extend"] = request.extend();
  }

  if (!!request.hasMergeParallelNum()) {
    body["mergeParallelNum"] = request.mergeParallelNum();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIndexResponse>();
}

/**
 * @summary Creates an index.
 *
 * @description ### Method
 * ```java
 * POST
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/indexes
 * ```
 *
 * @param request CreateIndexRequest
 * @return CreateIndexResponse
 */
CreateIndexResponse Client::createIndex(const string &instanceId, const CreateIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIndexWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Creates a Havenask instance.
 *
 * @description ### [](#)Method
 * `POST`
 * ### [](#uri)URI
 * `/api/instances?dryRun=false`
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChargeType()) {
    body["chargeType"] = request.chargeType();
  }

  if (!!request.hasComponents()) {
    body["components"] = request.components();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.order();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates a Havenask instance.
 *
 * @description ### [](#)Method
 * `POST`
 * ### [](#uri)URI
 * `/api/instances?dryRun=false`
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
 * @summary 创建模型信息
 *
 * @param request CreateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const string &instanceId, const CreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/models")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary 创建模型信息
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const string &instanceId, const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Creates a public endpoint.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePublicUrlResponse
 */
CreatePublicUrlResponse Client::createPublicUrlWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePublicUrl"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/public-url")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePublicUrlResponse>();
}

/**
 * @summary Creates a public endpoint.
 *
 * @return CreatePublicUrlResponse
 */
CreatePublicUrlResponse Client::createPublicUrl(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPublicUrlWithOptions(instanceId, headers, runtime);
}

/**
 * @param request CreateSqlInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSqlInstanceResponse
 */
CreateSqlInstanceResponse Client::createSqlInstanceWithOptions(const string &instanceId, const string &database, const CreateSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasParent()) {
    body["parent"] = request.parent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSqlInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSqlInstanceResponse>();
}

/**
 * @param request CreateSqlInstanceRequest
 * @return CreateSqlInstanceResponse
 */
CreateSqlInstanceResponse Client::createSqlInstance(const string &instanceId, const string &database, const CreateSqlInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSqlInstanceWithOptions(instanceId, database, request, headers, runtime);
}

/**
 * @summary Creates an index table.
 *
 * @param request CreateTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTableWithOptions(const string &instanceId, const CreateTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasDataProcessConfig()) {
    body["dataProcessConfig"] = request.dataProcessConfig();
  }

  if (!!request.hasDataProcessorCount()) {
    body["dataProcessorCount"] = request.dataProcessorCount();
  }

  if (!!request.hasDataSource()) {
    body["dataSource"] = request.dataSource();
  }

  if (!!request.hasFieldSchema()) {
    body["fieldSchema"] = request.fieldSchema();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasPartitionCount()) {
    body["partitionCount"] = request.partitionCount();
  }

  if (!!request.hasPrimaryKey()) {
    body["primaryKey"] = request.primaryKey();
  }

  if (!!request.hasRawSchema()) {
    body["rawSchema"] = request.rawSchema();
  }

  if (!!request.hasScene()) {
    body["scene"] = request.scene();
  }

  if (!!request.hasVectorIndex()) {
    body["vectorIndex"] = request.vectorIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTable"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableResponse>();
}

/**
 * @summary Creates an index table.
 *
 * @param request CreateTableRequest
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTable(const string &instanceId, const CreateTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTableWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 调试模型
 *
 * @param request DebugModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugModelResponse
 */
DebugModelResponse Client::debugModelWithOptions(const string &instanceId, const string &modelName, const DebugModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsOnline()) {
    query["isOnline"] = request.isOnline();
  }

  json body = {};
  if (!!request.hasInput()) {
    body["input"] = request.input();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DebugModel"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/models/" , Darabonba::Http::URL::percentEncode(modelName) , "/actions/debug")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugModelResponse>();
}

/**
 * @summary 调试模型
 *
 * @param request DebugModelRequest
 * @return DebugModelResponse
 */
DebugModelResponse Client::debugModel(const string &instanceId, const string &modelName, const DebugModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return debugModelWithOptions(instanceId, modelName, request, headers, runtime);
}

/**
 * @summary Deletes the details about advanced configurations.
 *
 * @description ## Method
 *     DELETE
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdvanceConfigResponse
 */
DeleteAdvanceConfigResponse Client::deleteAdvanceConfigWithOptions(const string &instanceId, const string &configName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAdvanceConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAdvanceConfigResponse>();
}

/**
 * @summary Deletes the details about advanced configurations.
 *
 * @description ## Method
 *     DELETE
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
 *
 * @return DeleteAdvanceConfigResponse
 */
DeleteAdvanceConfigResponse Client::deleteAdvanceConfig(const string &instanceId, const string &configName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAdvanceConfigWithOptions(instanceId, configName, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAliasResponse
 */
DeleteAliasResponse Client::deleteAliasWithOptions(const string &instanceId, const string &alias, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlias"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/aliases/" , Darabonba::Http::URL::percentEncode(alias))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAliasResponse>();
}

/**
 * @return DeleteAliasResponse
 */
DeleteAliasResponse Client::deleteAlias(const string &instanceId, const string &alias) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAliasWithOptions(instanceId, alias, headers, runtime);
}

/**
 * @param request DeleteConfigDirRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigDirResponse
 */
DeleteConfigDirResponse Client::deleteConfigDirWithOptions(const string &instanceId, const string &configName, const DeleteConfigDirRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirName()) {
    query["dirName"] = request.dirName();
  }

  if (!!request.hasParentFullPath()) {
    query["parentFullPath"] = request.parentFullPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigDir"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/dir")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigDirResponse>();
}

/**
 * @param request DeleteConfigDirRequest
 * @return DeleteConfigDirResponse
 */
DeleteConfigDirResponse Client::deleteConfigDir(const string &instanceId, const string &configName, const DeleteConfigDirRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConfigDirWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @param request DeleteConfigFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigFileResponse
 */
DeleteConfigFileResponse Client::deleteConfigFileWithOptions(const string &instanceId, const string &configName, const DeleteConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  if (!!request.hasParentFullPath()) {
    query["parentFullPath"] = request.parentFullPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfigFile"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/file")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigFileResponse>();
}

/**
 * @param request DeleteConfigFileRequest
 * @return DeleteConfigFileResponse
 */
DeleteConfigFileResponse Client::deleteConfigFile(const string &instanceId, const string &configName, const DeleteConfigFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Deletes a specified data source.
 *
 * @description ## Method
 * `DELETE`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const string &instanceId, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceResponse>();
}

/**
 * @summary Deletes a specified data source.
 *
 * @description ## Method
 * `DELETE`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
 *
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const string &instanceId, const string &dataSourceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDataSourceWithOptions(instanceId, dataSourceName, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const string &instanceId, const string &database, const string &folderId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/folders/" , Darabonba::Http::URL::percentEncode(folderId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFolderResponse>();
}

/**
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const string &instanceId, const string &database, const string &folderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFolderWithOptions(instanceId, database, folderId, headers, runtime);
}

/**
 * @summary Deletes an index.
 *
 * @description ## Method
 *     DELETE
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}?dataSource=xxx
 *
 * @param request DeleteIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIndexResponse
 */
DeleteIndexResponse Client::deleteIndexWithOptions(const string &instanceId, const string &indexName, const DeleteIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSource()) {
    query["dataSource"] = request.dataSource();
  }

  if (!!request.hasDeleteDataSource()) {
    query["deleteDataSource"] = request.deleteDataSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexResponse>();
}

/**
 * @summary Deletes an index.
 *
 * @description ## Method
 *     DELETE
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}?dataSource=xxx
 *
 * @param request DeleteIndexRequest
 * @return DeleteIndexResponse
 */
DeleteIndexResponse Client::deleteIndex(const string &instanceId, const string &indexName, const DeleteIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexWithOptions(instanceId, indexName, request, headers, runtime);
}

/**
 * @summary Deletes the version of an index.
 *
 * @description ## Method
 *     DELETE
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIndexVersionResponse
 */
DeleteIndexVersionResponse Client::deleteIndexVersionWithOptions(const string &instanceId, const string &indexName, const string &versionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIndexVersion"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/versions/" , Darabonba::Http::URL::percentEncode(versionName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIndexVersionResponse>();
}

/**
 * @summary Deletes the version of an index.
 *
 * @description ## Method
 *     DELETE
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}
 *
 * @return DeleteIndexVersionResponse
 */
DeleteIndexVersionResponse Client::deleteIndexVersion(const string &instanceId, const string &indexName, const string &versionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIndexVersionWithOptions(instanceId, indexName, versionName, headers, runtime);
}

/**
 * @summary Deletes a specified instance.
 *
 * @description ### Method
 * `DELETE`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}`
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes a specified instance.
 *
 * @description ### Method
 * `DELETE`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}`
 *
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary 删除模型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModelWithOptions(const string &instanceId, const string &modelName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModel"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/models/" , Darabonba::Http::URL::percentEncode(modelName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelResponse>();
}

/**
 * @summary 删除模型
 *
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const string &instanceId, const string &modelName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelWithOptions(instanceId, modelName, headers, runtime);
}

/**
 * @summary 删除公网域名
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePublicUrlResponse
 */
DeletePublicUrlResponse Client::deletePublicUrlWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePublicUrl"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/public-url")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePublicUrlResponse>();
}

/**
 * @summary 删除公网域名
 *
 * @return DeletePublicUrlResponse
 */
DeletePublicUrlResponse Client::deletePublicUrl(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePublicUrlWithOptions(instanceId, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSqlInstanceResponse
 */
DeleteSqlInstanceResponse Client::deleteSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSqlInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSqlInstanceResponse>();
}

/**
 * @return DeleteSqlInstanceResponse
 */
DeleteSqlInstanceResponse Client::deleteSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSqlInstanceWithOptions(instanceId, database, sqlInstanceId, headers, runtime);
}

/**
 * @summary Deletes an index table.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableResponse
 */
DeleteTableResponse Client::deleteTableWithOptions(const string &instanceId, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTable"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableResponse>();
}

/**
 * @summary Deletes an index table.
 *
 * @return DeleteTableResponse
 */
DeleteTableResponse Client::deleteTable(const string &instanceId, const string &tableName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTableWithOptions(instanceId, tableName, headers, runtime);
}

/**
 * @summary Queries available regions.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @param request ExecuteSqlInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSqlInstanceResponse
 */
ExecuteSqlInstanceResponse Client::executeSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const ExecuteSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCombineParam()) {
    body["combineParam"] = request.combineParam();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.domain();
  }

  if (!!request.hasDynamicParam()) {
    body["dynamicParam"] = request.dynamicParam();
  }

  if (!!request.hasKvpair()) {
    body["kvpair"] = request.kvpair();
  }

  if (!!request.hasParams()) {
    body["params"] = request.params();
  }

  if (!!request.hasStaticParam()) {
    body["staticParam"] = request.staticParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteSqlInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId) , "/actions/execution")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSqlInstanceResponse>();
}

/**
 * @param request ExecuteSqlInstanceRequest
 * @return ExecuteSqlInstanceResponse
 */
ExecuteSqlInstanceResponse Client::executeSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId, const ExecuteSqlInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeSqlInstanceWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

/**
 * @summary Performs a forced switchover.
 *
 * @description ### [](#)Method
 * ```java
 * PUT
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/force-switch/{fsmId}
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForceSwitchResponse
 */
ForceSwitchResponse Client::forceSwitchWithOptions(const string &instanceId, const string &fsmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ForceSwitch"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/force-switch/" , Darabonba::Http::URL::percentEncode(fsmId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForceSwitchResponse>();
}

/**
 * @summary Performs a forced switchover.
 *
 * @description ### [](#)Method
 * ```java
 * PUT
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/force-switch/{fsmId}
 * ```
 *
 * @return ForceSwitchResponse
 */
ForceSwitchResponse Client::forceSwitch(const string &instanceId, const string &fsmId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return forceSwitchWithOptions(instanceId, fsmId, headers, runtime);
}

/**
 * @summary Queries the information about an advanced configuration.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
 *
 * @param request GetAdvanceConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdvanceConfigResponse
 */
GetAdvanceConfigResponse Client::getAdvanceConfigWithOptions(const string &instanceId, const string &configName, const GetAdvanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdvanceConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdvanceConfigResponse>();
}

/**
 * @summary Queries the information about an advanced configuration.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}
 *
 * @param request GetAdvanceConfigRequest
 * @return GetAdvanceConfigResponse
 */
GetAdvanceConfigResponse Client::getAdvanceConfig(const string &instanceId, const string &configName, const GetAdvanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAdvanceConfigWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Queries the information about an advanced configuration file.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
 *
 * @param request GetAdvanceConfigFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdvanceConfigFileResponse
 */
GetAdvanceConfigFileResponse Client::getAdvanceConfigFileWithOptions(const string &instanceId, const string &configName, const GetAdvanceConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdvanceConfigFile"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/file")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdvanceConfigFileResponse>();
}

/**
 * @summary Queries the information about an advanced configuration file.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
 *
 * @param request GetAdvanceConfigFileRequest
 * @return GetAdvanceConfigFileResponse
 */
GetAdvanceConfigFileResponse Client::getAdvanceConfigFile(const string &instanceId, const string &configName, const GetAdvanceConfigFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAdvanceConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Queries the details of a cluster.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instance/{instanceId}/clusters/{clusterName}`
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterResponse
 */
GetClusterResponse Client::getClusterWithOptions(const string &instanceId, const string &clusterName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCluster"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters/" , Darabonba::Http::URL::percentEncode(clusterName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterResponse>();
}

/**
 * @summary Queries the details of a cluster.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instance/{instanceId}/clusters/{clusterName}`
 *
 * @return GetClusterResponse
 */
GetClusterResponse Client::getCluster(const string &instanceId, const string &clusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterWithOptions(instanceId, clusterName, headers, runtime);
}

/**
 * @summary Queries the runtime information about a specified cluster.
 *
 * @description ### Method
 * GET
 * ### URI
 * /openapi/ha3/instances/{instanceId}/cluster-run-time-info
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterRunTimeInfoResponse
 */
GetClusterRunTimeInfoResponse Client::getClusterRunTimeInfoWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterRunTimeInfo"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/cluster-run-time-info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterRunTimeInfoResponse>();
}

/**
 * @summary Queries the runtime information about a specified cluster.
 *
 * @description ### Method
 * GET
 * ### URI
 * /openapi/ha3/instances/{instanceId}/cluster-run-time-info
 *
 * @return GetClusterRunTimeInfoResponse
 */
GetClusterRunTimeInfoResponse Client::getClusterRunTimeInfo(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getClusterRunTimeInfoWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Obtains a data source.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceResponse
 */
GetDataSourceResponse Client::getDataSourceWithOptions(const string &instanceId, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataSource"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceResponse>();
}

/**
 * @summary Obtains a data source.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}`
 *
 * @return GetDataSourceResponse
 */
GetDataSourceResponse Client::getDataSource(const string &instanceId, const string &dataSourceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDataSourceWithOptions(instanceId, dataSourceName, headers, runtime);
}

/**
 * @summary 获取数据源部署信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceDeployResponse
 */
GetDataSourceDeployResponse Client::getDataSourceDeployWithOptions(const string &instanceId, const string &deployName, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataSourceDeploy"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/deploys/" , Darabonba::Http::URL::percentEncode(deployName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceDeployResponse>();
}

/**
 * @summary 获取数据源部署信息
 *
 * @return GetDataSourceDeployResponse
 */
GetDataSourceDeployResponse Client::getDataSourceDeploy(const string &instanceId, const string &deployName, const string &dataSourceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDataSourceDeployWithOptions(instanceId, deployName, dataSourceName, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseSchemaResponse
 */
GetDatabaseSchemaResponse Client::getDatabaseSchemaWithOptions(const string &instanceId, const string &database, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabaseSchema"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName) , "/schema")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseSchemaResponse>();
}

/**
 * @return GetDatabaseSchemaResponse
 */
GetDatabaseSchemaResponse Client::getDatabaseSchema(const string &instanceId, const string &database, const string &tableName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatabaseSchemaWithOptions(instanceId, database, tableName, headers, runtime);
}

/**
 * @summary Displays the overview of the deployment.
 *
 * @description ## Method
 * GET
 * ## URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/deploy-graph
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeployGraphResponse
 */
GetDeployGraphResponse Client::getDeployGraphWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeployGraph"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/deploy-graph")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeployGraphResponse>();
}

/**
 * @summary Displays the overview of the deployment.
 *
 * @description ## Method
 * GET
 * ## URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/deploy-graph
 * ```
 *
 * @return GetDeployGraphResponse
 */
GetDeployGraphResponse Client::getDeployGraph(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeployGraphWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries the details of an index table version.
 *
 * @description ## [](#)Method
 *     GET
 * ## [](#uri)URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file
 *
 * @param request GetFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileResponse
 */
GetFileResponse Client::getFileWithOptions(const string &instanceId, const string &indexName, const string &versionName, const GetFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFile"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/versions/" , Darabonba::Http::URL::percentEncode(versionName) , "/file")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileResponse>();
}

/**
 * @summary Queries the details of an index table version.
 *
 * @description ## [](#)Method
 *     GET
 * ## [](#uri)URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file
 *
 * @param request GetFileRequest
 * @return GetFileResponse
 */
GetFileResponse Client::getFile(const string &instanceId, const string &indexName, const string &versionName, const GetFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFileWithOptions(instanceId, indexName, versionName, request, headers, runtime);
}

/**
 * @summary Queries the information about an index version.
 *
 * @description ## [](#)Method
 *     GET
 * ## [](#uri)URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIndexResponse
 */
GetIndexResponse Client::getIndexWithOptions(const string &instanceId, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIndexResponse>();
}

/**
 * @summary Queries the information about an index version.
 *
 * @description ## [](#)Method
 *     GET
 * ## [](#uri)URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}
 *
 * @return GetIndexResponse
 */
GetIndexResponse Client::getIndex(const string &instanceId, const string &indexName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIndexWithOptions(instanceId, indexName, headers, runtime);
}

/**
 * @summary Queries the online effective policy of an index.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIndexOnlineStrategyResponse
 */
GetIndexOnlineStrategyResponse Client::getIndexOnlineStrategyWithOptions(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIndexOnlineStrategy"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/deploys/" , Darabonba::Http::URL::percentEncode(deployName) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/online-strategy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIndexOnlineStrategyResponse>();
}

/**
 * @summary Queries the online effective policy of an index.
 *
 * @return GetIndexOnlineStrategyResponse
 */
GetIndexOnlineStrategyResponse Client::getIndexOnlineStrategy(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIndexOnlineStrategyWithOptions(instanceId, dataSourceName, deployName, indexName, headers, runtime);
}

/**
 * @summary Queries the information about index versions that the current index version can be rolled back to.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIndexVersionResponse
 */
GetIndexVersionResponse Client::getIndexVersionWithOptions(const string &instanceId, const string &clusterName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIndexVersion"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters/" , Darabonba::Http::URL::percentEncode(clusterName) , "/index-version")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIndexVersionResponse>();
}

/**
 * @summary Queries the information about index versions that the current index version can be rolled back to.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
 *
 * @return GetIndexVersionResponse
 */
GetIndexVersionResponse Client::getIndexVersion(const string &instanceId, const string &clusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIndexVersionWithOptions(instanceId, clusterName, headers, runtime);
}

/**
 * @summary Queries the details of an instance based on the instance ID.
 *
 * @description ### [](#)Method
 * ```java
 * GET
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the details of an instance based on the instance ID.
 *
 * @description ### [](#)Method
 * ```java
 * GET
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}
 * ```
 *
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary 通过实例ID和模型名称查询特定模型的详细配置信息。
 *
 * @description ## 请求说明
 * - 该API用于获取指定实例下的特定模型的详细信息，包括模型类型、URL、状态等。
 * - 确保提供的`instanceId`和`modelName`是有效的，否则可能返回错误或找不到资源。
 * - 返回的数据结构中包含了模型的内容（如请求头、参数等）以及创建和更新时间，有助于了解模型的具体配置及其最新状态。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelResponse
 */
GetModelResponse Client::getModelWithOptions(const string &instanceId, const string &modelName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModel"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/models/" , Darabonba::Http::URL::percentEncode(modelName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelResponse>();
}

/**
 * @summary 通过实例ID和模型名称查询特定模型的详细配置信息。
 *
 * @description ## 请求说明
 * - 该API用于获取指定实例下的特定模型的详细信息，包括模型类型、URL、状态等。
 * - 确保提供的`instanceId`和`modelName`是有效的，否则可能返回错误或找不到资源。
 * - 返回的数据结构中包含了模型的内容（如请求头、参数等）以及创建和更新时间，有助于了解模型的具体配置及其最新状态。
 *
 * @return GetModelResponse
 */
GetModelResponse Client::getModel(const string &instanceId, const string &modelName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelWithOptions(instanceId, modelName, headers, runtime);
}

/**
 * @summary Gets the configuration information of a node.
 *
 * @param request GetNodeConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeConfigResponse
 */
GetNodeConfigResponse Client::getNodeConfigWithOptions(const string &instanceId, const GetNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["clusterName"] = request.clusterName();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/node-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeConfigResponse>();
}

/**
 * @summary Gets the configuration information of a node.
 *
 * @param request GetNodeConfigRequest
 * @return GetNodeConfigResponse
 */
GetNodeConfigResponse Client::getNodeConfig(const string &instanceId, const GetNodeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNodeConfigWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request GetSqlInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSqlInstanceResponse
 */
GetSqlInstanceResponse Client::getSqlInstanceWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const GetSqlInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVersion()) {
    query["version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSqlInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSqlInstanceResponse>();
}

/**
 * @param request GetSqlInstanceRequest
 * @return GetSqlInstanceResponse
 */
GetSqlInstanceResponse Client::getSqlInstance(const string &instanceId, const string &database, const string &sqlInstanceId, const GetSqlInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSqlInstanceWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

/**
 * @summary Queries the information about an index table.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableResponse
 */
GetTableResponse Client::getTableWithOptions(const string &instanceId, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTable"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableResponse>();
}

/**
 * @summary Queries the information about an index table.
 *
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const string &instanceId, const string &tableName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableWithOptions(instanceId, tableName, headers, runtime);
}

/**
 * @summary Queries the status of an index version based on the ID of the full index version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableGenerationResponse
 */
GetTableGenerationResponse Client::getTableGenerationWithOptions(const string &instanceId, const string &tableName, const string &generationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableGeneration"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName) , "/index_versions/" , Darabonba::Http::URL::percentEncode(generationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableGenerationResponse>();
}

/**
 * @summary Queries the status of an index version based on the ID of the full index version.
 *
 * @return GetTableGenerationResponse
 */
GetTableGenerationResponse Client::getTableGeneration(const string &instanceId, const string &tableName, const string &generationId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTableGenerationWithOptions(instanceId, tableName, generationId, headers, runtime);
}

/**
 * @summary Queries the files in an advanced configuration directory.
 *
 * @description ## Method
 * `GET`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/dir?dirName={dirName}`
 *
 * @param request ListAdvanceConfigDirRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAdvanceConfigDirResponse
 */
ListAdvanceConfigDirResponse Client::listAdvanceConfigDirWithOptions(const string &instanceId, const string &configName, const ListAdvanceConfigDirRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirName()) {
    query["dirName"] = request.dirName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAdvanceConfigDir"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/dir")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAdvanceConfigDirResponse>();
}

/**
 * @summary Queries the files in an advanced configuration directory.
 *
 * @description ## Method
 * `GET`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/dir?dirName={dirName}`
 *
 * @param request ListAdvanceConfigDirRequest
 * @return ListAdvanceConfigDirResponse
 */
ListAdvanceConfigDirResponse Client::listAdvanceConfigDir(const string &instanceId, const string &configName, const ListAdvanceConfigDirRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAdvanceConfigDirWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Obtains a list of advanced configurations.
 *
 * @description ## Sample requests
 * `GET /openapi/ha3/instances/ose-test1/advanced-configs`
 *
 * @param request ListAdvanceConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAdvanceConfigsResponse
 */
ListAdvanceConfigsResponse Client::listAdvanceConfigsWithOptions(const string &instanceId, const ListAdvanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceName()) {
    query["dataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasIndexName()) {
    query["indexName"] = request.indexName();
  }

  if (!!request.hasNewMode()) {
    query["newMode"] = request.newMode();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAdvanceConfigs"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAdvanceConfigsResponse>();
}

/**
 * @summary Obtains a list of advanced configurations.
 *
 * @description ## Sample requests
 * `GET /openapi/ha3/instances/ose-test1/advanced-configs`
 *
 * @param request ListAdvanceConfigsRequest
 * @return ListAdvanceConfigsResponse
 */
ListAdvanceConfigsResponse Client::listAdvanceConfigs(const string &instanceId, const ListAdvanceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAdvanceConfigsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAliasesResponse
 */
ListAliasesResponse Client::listAliasesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAliases"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/aliases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAliasesResponse>();
}

/**
 * @return ListAliasesResponse
 */
ListAliasesResponse Client::listAliases(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAliasesWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries cluster names.
 *
 * @description ### Method
 * GET
 * ### URI
 * /openapi/ha3/instances/{instanceId}/cluster-names
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterNamesResponse
 */
ListClusterNamesResponse Client::listClusterNamesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterNames"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/cluster-names")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterNamesResponse>();
}

/**
 * @summary Queries cluster names.
 *
 * @description ### Method
 * GET
 * ### URI
 * /openapi/ha3/instances/{instanceId}/cluster-names
 *
 * @return ListClusterNamesResponse
 */
ListClusterNamesResponse Client::listClusterNames() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterNamesWithOptions(headers, runtime);
}

/**
 * @summary Queries cluster tasks.
 *
 * @description ### Method
 * ```java
 * GET
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/cluster-tasks
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterTasksResponse
 */
ListClusterTasksResponse Client::listClusterTasksWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterTasks"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/cluster-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterTasksResponse>();
}

/**
 * @summary Queries cluster tasks.
 *
 * @description ### Method
 * ```java
 * GET
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/cluster-tasks
 * ```
 *
 * @return ListClusterTasksResponse
 */
ListClusterTasksResponse Client::listClusterTasks(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClusterTasksWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries clusters.
 *
 * @description ### Method
 * ```java
 * GET
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/clusters
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries clusters.
 *
 * @description ### Method
 * ```java
 * GET
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/clusters
 * ```
 *
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listClustersWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries the schema information about a data source.
 *
 * @description ## Method
 * `GET`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/schemas`
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceSchemasResponse
 */
ListDataSourceSchemasResponse Client::listDataSourceSchemasWithOptions(const string &instanceId, const string &dataSourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSourceSchemas"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/schemas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceSchemasResponse>();
}

/**
 * @summary Queries the schema information about a data source.
 *
 * @description ## Method
 * `GET`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/schemas`
 *
 * @return ListDataSourceSchemasResponse
 */
ListDataSourceSchemasResponse Client::listDataSourceSchemas(const string &instanceId, const string &dataSourceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSourceSchemasWithOptions(instanceId, dataSourceName, headers, runtime);
}

/**
 * @summary Displays data source tasks.
 *
 * @description ### [](#)Method
 * ```java
 * GET
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/data-source-tasks
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceTasksResponse
 */
ListDataSourceTasksResponse Client::listDataSourceTasksWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSourceTasks"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-source-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceTasksResponse>();
}

/**
 * @summary Displays data source tasks.
 *
 * @description ### [](#)Method
 * ```java
 * GET
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/data-source-tasks
 * ```
 *
 * @return ListDataSourceTasksResponse
 */
ListDataSourceTasksResponse Client::listDataSourceTasks(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSourceTasksWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Obtains the list of data sources.
 *
 * @description ## Method
 * `GET`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/data-sources`
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

/**
 * @summary Obtains the list of data sources.
 *
 * @description ## Method
 * `GET`
 * ## URI
 * `/openapi/ha3/instances/{instanceId}/data-sources`
 *
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSourcesWithOptions(instanceId, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatabasesWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries the historical index versions of a data source.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/generations?domainName={domainName}`
 *
 * @param request ListDateSourceGenerationsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDateSourceGenerationsResponse
 */
ListDateSourceGenerationsResponse Client::listDateSourceGenerationsWithOptions(const string &instanceId, const string &dataSourceName, const ListDateSourceGenerationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["domainName"] = request.domainName();
  }

  if (!!request.hasValidStatus()) {
    query["validStatus"] = request.validStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDateSourceGenerations"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/generations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDateSourceGenerationsResponse>();
}

/**
 * @summary Queries the historical index versions of a data source.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/data-sources/{dataSourceName}/generations?domainName={domainName}`
 *
 * @param request ListDateSourceGenerationsRequest
 * @return ListDateSourceGenerationsResponse
 */
ListDateSourceGenerationsResponse Client::listDateSourceGenerations(const string &instanceId, const string &dataSourceName, const ListDateSourceGenerationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDateSourceGenerationsWithOptions(instanceId, dataSourceName, request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndexRecoverRecordsResponse
 */
ListIndexRecoverRecordsResponse Client::listIndexRecoverRecordsWithOptions(const string &indexName, const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexRecoverRecords"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/actions/list-recover-records")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexRecoverRecordsResponse>();
}

/**
 * @return ListIndexRecoverRecordsResponse
 */
ListIndexRecoverRecordsResponse Client::listIndexRecoverRecords(const string &indexName, const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndexRecoverRecordsWithOptions(indexName, instanceId, headers, runtime);
}

/**
 * @summary Obtains the index list.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes
 *
 * @param request ListIndexesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIndexesResponse
 */
ListIndexesResponse Client::listIndexesWithOptions(const string &instanceId, const ListIndexesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalog()) {
    query["catalog"] = request.catalog();
  }

  if (!!request.hasDatabase()) {
    query["database"] = request.database();
  }

  if (!!request.hasNewMode()) {
    query["newMode"] = request.newMode();
  }

  if (!!request.hasTable()) {
    query["table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIndexes"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIndexesResponse>();
}

/**
 * @summary Obtains the index list.
 *
 * @description ## Method
 *     GET
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes
 *
 * @param request ListIndexesRequest
 * @return ListIndexesResponse
 */
ListIndexesResponse Client::listIndexes(const string &instanceId, const ListIndexesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIndexesWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the specifications of an instance.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/specs?type=qrs`
 *
 * @param request ListInstanceSpecsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceSpecsResponse
 */
ListInstanceSpecsResponse Client::listInstanceSpecsWithOptions(const string &instanceId, const ListInstanceSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceSpecs"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/specs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceSpecsResponse>();
}

/**
 * @summary Queries the specifications of an instance.
 *
 * @description ### Method
 * `GET`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/specs?type=qrs`
 *
 * @param request ListInstanceSpecsRequest
 * @return ListInstanceSpecsResponse
 */
ListInstanceSpecsResponse Client::listInstanceSpecs(const string &instanceId, const ListInstanceSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstanceSpecsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries a list of instances.
 *
 * @description ### [](#)Method
 * `GET`
 * ### [](#uri)URI
 * `/openapi/ha3/instances`
 *
 * @param tmpReq ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesShrinkRequest request = ListInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasCatalog()) {
    query["catalog"] = request.catalog();
  }

  if (!!request.hasDataSourceType()) {
    query["dataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabase()) {
    query["database"] = request.database();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasEdition()) {
    query["edition"] = request.edition();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTable()) {
    query["table"] = request.table();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries a list of instances.
 *
 * @description ### [](#)Method
 * `GET`
 * ### [](#uri)URI
 * `/openapi/ha3/instances`
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
 * @param request ListLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLogsResponse
 */
ListLogsResponse Client::listLogsWithOptions(const string &instanceId, const ListLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.endTime();
  }

  if (!!request.hasPageNum()) {
    query["pageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLogs"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/logs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLogsResponse>();
}

/**
 * @param request ListLogsRequest
 * @return ListLogsResponse
 */
ListLogsResponse Client::listLogs(const string &instanceId, const ListLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLogsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 通过实例ID查询指定条件下的模型列表。
 *
 * @description ## 请求说明
 * 本API用于从指定实例中获取模型列表，支持通过模型名称、类型以及分页参数进行筛选。请求时需提供实例ID作为路径参数，其他筛选条件为可选的查询参数。
 *
 * @param request ListModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModelsWithOptions(const string &instanceId, const ListModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModels"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelsResponse>();
}

/**
 * @summary 通过实例ID查询指定条件下的模型列表。
 *
 * @description ## 请求说明
 * 本API用于从指定实例中获取模型列表，支持通过模型名称、类型以及分页参数进行筛选。请求时需提供实例ID作为路径参数，其他筛选条件为可选的查询参数。
 *
 * @param request ListModelsRequest
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModels(const string &instanceId, const ListModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the details of an online configuration.
 *
 * @description ### Method
 * ```java
 * GET
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs?domain={domain}
 * ```
 *
 * @param request ListOnlineConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOnlineConfigsResponse
 */
ListOnlineConfigsResponse Client::listOnlineConfigsWithOptions(const string &instanceId, const string &nodeName, const ListOnlineConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["domain"] = request.domain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOnlineConfigs"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/node/" , Darabonba::Http::URL::percentEncode(nodeName) , "/online-configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOnlineConfigsResponse>();
}

/**
 * @summary Queries the details of an online configuration.
 *
 * @description ### Method
 * ```java
 * GET
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs?domain={domain}
 * ```
 *
 * @param request ListOnlineConfigsRequest
 * @return ListOnlineConfigsResponse
 */
ListOnlineConfigsResponse Client::listOnlineConfigs(const string &instanceId, const string &nodeName, const ListOnlineConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listOnlineConfigsWithOptions(instanceId, nodeName, request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPausePolicysResponse
 */
ListPausePolicysResponse Client::listPausePolicysWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPausePolicys"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/pause-policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPausePolicysResponse>();
}

/**
 * @return ListPausePolicysResponse
 */
ListPausePolicysResponse Client::listPausePolicys(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPausePolicysWithOptions(instanceId, headers, runtime);
}

/**
 * @summary 召回引擎版使用POST请求获取搜索测试结果
 *
 * @param request ListPostQueryResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPostQueryResultResponse
 */
ListPostQueryResultResponse Client::listPostQueryResultWithOptions(const string &instanceId, const ListPostQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPostQueryResult"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPostQueryResultResponse>();
}

/**
 * @summary 召回引擎版使用POST请求获取搜索测试结果
 *
 * @param request ListPostQueryResultRequest
 * @return ListPostQueryResultResponse
 */
ListPostQueryResultResponse Client::listPostQueryResult(const string &instanceId, const ListPostQueryResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPostQueryResultWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries the query result.
 *
 * @description ### [](#)Method
 * `GET`
 * ### [](#uri)URI
 * `/openapi/ha3/instances/{instanceId}/query?query=xxxx`
 *
 * @param request ListQueryResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueryResultResponse
 */
ListQueryResultResponse Client::listQueryResultWithOptions(const string &instanceId, const ListQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  if (!!request.hasSql()) {
    query["sql"] = request.sql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueryResult"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueryResultResponse>();
}

/**
 * @summary Queries the query result.
 *
 * @description ### [](#)Method
 * `GET`
 * ### [](#uri)URI
 * `/openapi/ha3/instances/{instanceId}/query?query=xxxx`
 *
 * @param request ListQueryResultRequest
 * @return ListQueryResultResponse
 */
ListQueryResultResponse Client::listQueryResult(const string &instanceId, const ListQueryResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQueryResultWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 召回引擎版获取rest查询搜索测试结果
 *
 * @param request ListRestQueryResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRestQueryResultResponse
 */
ListRestQueryResultResponse Client::listRestQueryResultWithOptions(const string &instanceId, const ListRestQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIndexName()) {
    body["indexName"] = request.indexName();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRestQueryResult"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/rest-query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRestQueryResultResponse>();
}

/**
 * @summary 召回引擎版获取rest查询搜索测试结果
 *
 * @param request ListRestQueryResultRequest
 * @return ListRestQueryResultResponse
 */
ListRestQueryResultResponse Client::listRestQueryResult(const string &instanceId, const ListRestQueryResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRestQueryResultWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 通过数据源配置获取schema信息
 *
 * @param request ListSchemasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemasWithOptions(const string &instanceId, const ListSchemasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["accessKey"] = request.accessKey();
  }

  if (!!request.hasAccessSecret()) {
    query["accessSecret"] = request.accessSecret();
  }

  if (!!request.hasEndpoint()) {
    query["endpoint"] = request.endpoint();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasPartition()) {
    query["partition"] = request.partition();
  }

  if (!!request.hasProject()) {
    query["project"] = request.project();
  }

  if (!!request.hasTable()) {
    query["table"] = request.table();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchemas"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/schemas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchemasResponse>();
}

/**
 * @summary 通过数据源配置获取schema信息
 *
 * @param request ListSchemasRequest
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemas(const string &instanceId, const ListSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSchemasWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries a list of index versions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableGenerationsResponse
 */
ListTableGenerationsResponse Client::listTableGenerationsWithOptions(const string &instanceId, const string &tableName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableGenerations"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName) , "/index_versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableGenerationsResponse>();
}

/**
 * @summary Queries a list of index versions.
 *
 * @return ListTableGenerationsResponse
 */
ListTableGenerationsResponse Client::listTableGenerations(const string &instanceId, const string &tableName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTableGenerationsWithOptions(instanceId, tableName, headers, runtime);
}

/**
 * @summary Queries a list of index tables.
 *
 * @param request ListTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const string &instanceId, const ListTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewMode()) {
    query["newMode"] = request.newMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Queries a list of index tables.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const string &instanceId, const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTablesWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 查标签接口
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceId(), "resourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasResourceIdShrink()) {
    query["resourceId"] = request.resourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/resource-tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary 查标签接口
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取集群任务列表（数据源+集群）
 *
 * @param request ListTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const string &instanceId, const ListTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnd()) {
    query["end"] = request.end();
  }

  if (!!request.hasStart()) {
    query["start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary 获取集群任务列表（数据源+集群）
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const string &instanceId, const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTasksWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 向量检索版获取向量查询搜索测试结果
 *
 * @param request ListVectorQueryResultRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVectorQueryResultResponse
 */
ListVectorQueryResultResponse Client::listVectorQueryResultWithOptions(const string &instanceId, const ListVectorQueryResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["path"] = request.path();
  }

  if (!!request.hasQueryType()) {
    query["queryType"] = request.queryType();
  }

  if (!!request.hasVectorQueryType()) {
    query["vectorQueryType"] = request.vectorQueryType();
  }

  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListVectorQueryResult"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/vector-query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVectorQueryResultResponse>();
}

/**
 * @summary 向量检索版获取向量查询搜索测试结果
 *
 * @param request ListVectorQueryResultRequest
 * @return ListVectorQueryResultResponse
 */
ListVectorQueryResultResponse Client::listVectorQueryResult(const string &instanceId, const ListVectorQueryResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listVectorQueryResultWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request ModifyAdvanceConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAdvanceConfigResponse
 */
ModifyAdvanceConfigResponse Client::modifyAdvanceConfigWithOptions(const string &instanceId, const string &configName, const ModifyAdvanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasContentType()) {
    body["contentType"] = request.contentType();
  }

  if (!!request.hasDesc()) {
    body["desc"] = request.desc();
  }

  if (!!request.hasFiles()) {
    body["files"] = request.files();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasUpdateTime()) {
    body["updateTime"] = request.updateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAdvanceConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAdvanceConfigResponse>();
}

/**
 * @param request ModifyAdvanceConfigRequest
 * @return ModifyAdvanceConfigResponse
 */
ModifyAdvanceConfigResponse Client::modifyAdvanceConfig(const string &instanceId, const string &configName, const ModifyAdvanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyAdvanceConfigWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Modifies the advanced configurations.
 *
 * @description ## Method
 *     put
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
 *
 * @param request ModifyAdvanceConfigFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAdvanceConfigFileResponse
 */
ModifyAdvanceConfigFileResponse Client::modifyAdvanceConfigFileWithOptions(const string &instanceId, const string &configName, const ModifyAdvanceConfigFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasVariables()) {
    body["variables"] = request.variables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAdvanceConfigFile"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/file")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAdvanceConfigFileResponse>();
}

/**
 * @summary Modifies the advanced configurations.
 *
 * @description ## Method
 *     put
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/file?fileName={fileName}
 *
 * @param request ModifyAdvanceConfigFileRequest
 * @return ModifyAdvanceConfigFileResponse
 */
ModifyAdvanceConfigFileResponse Client::modifyAdvanceConfigFile(const string &instanceId, const string &configName, const ModifyAdvanceConfigFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyAdvanceConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @param request ModifyAliasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAliasResponse
 */
ModifyAliasResponse Client::modifyAliasWithOptions(const string &instanceId, const string &alias, const ModifyAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlias()) {
    body["alias"] = request.alias();
  }

  if (!!request.hasIndex()) {
    body["index"] = request.index();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAlias"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/aliases/" , Darabonba::Http::URL::percentEncode(alias))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAliasResponse>();
}

/**
 * @param request ModifyAliasRequest
 * @return ModifyAliasResponse
 */
ModifyAliasResponse Client::modifyAlias(const string &instanceId, const string &alias, const ModifyAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyAliasWithOptions(instanceId, alias, request, headers, runtime);
}

/**
 * @summary Modifies the description of a specified cluster.
 *
 * @description ### [](#)Method
 * `PUT`
 * ### [](#uri)URI
 * `/openapi/ha3/instances/{instanceId}/clusters/{clusterName}/desc`
 *
 * @param request ModifyClusterDescRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterDescResponse
 */
ModifyClusterDescResponse Client::modifyClusterDescWithOptions(const string &instanceId, const string &clusterName, const ModifyClusterDescRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyClusterDesc"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters/" , Darabonba::Http::URL::percentEncode(clusterName) , "/desc")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterDescResponse>();
}

/**
 * @summary Modifies the description of a specified cluster.
 *
 * @description ### [](#)Method
 * `PUT`
 * ### [](#uri)URI
 * `/openapi/ha3/instances/{instanceId}/clusters/{clusterName}/desc`
 *
 * @param request ModifyClusterDescRequest
 * @return ModifyClusterDescResponse
 */
ModifyClusterDescResponse Client::modifyClusterDesc(const string &instanceId, const string &clusterName, const ModifyClusterDescRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterDescWithOptions(instanceId, clusterName, request, headers, runtime);
}

/**
 * @summary Modifies the configuration information of a cluster.
 *
 * @description ## Request syntax
 *     PUT /openapi/ha3/instances/{instanceId}/cluster-offline-config
 *
 * @param request ModifyClusterOfflineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterOfflineConfigResponse
 */
ModifyClusterOfflineConfigResponse Client::modifyClusterOfflineConfigWithOptions(const string &instanceId, const ModifyClusterOfflineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBuildMode()) {
    body["buildMode"] = request.buildMode();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasDataSourceName()) {
    body["dataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasDataSourceType()) {
    body["dataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDataTimeSec()) {
    body["dataTimeSec"] = request.dataTimeSec();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.domain();
  }

  if (!!request.hasGeneration()) {
    body["generation"] = request.generation();
  }

  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  if (!!request.hasPushMode()) {
    body["pushMode"] = request.pushMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyClusterOfflineConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/cluster-offline-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterOfflineConfigResponse>();
}

/**
 * @summary Modifies the configuration information of a cluster.
 *
 * @description ## Request syntax
 *     PUT /openapi/ha3/instances/{instanceId}/cluster-offline-config
 *
 * @param request ModifyClusterOfflineConfigRequest
 * @return ModifyClusterOfflineConfigResponse
 */
ModifyClusterOfflineConfigResponse Client::modifyClusterOfflineConfig(const string &instanceId, const ModifyClusterOfflineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterOfflineConfigWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Modifies the online configuration of a cluster.
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/cluster-online-config`
 *
 * @param request ModifyClusterOnlineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterOnlineConfigResponse
 */
ModifyClusterOnlineConfigResponse Client::modifyClusterOnlineConfigWithOptions(const string &instanceId, const ModifyClusterOnlineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusters()) {
    body["clusters"] = request.clusters();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyClusterOnlineConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/cluster-online-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterOnlineConfigResponse>();
}

/**
 * @summary Modifies the online configuration of a cluster.
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/cluster-online-config`
 *
 * @param request ModifyClusterOnlineConfigRequest
 * @return ModifyClusterOnlineConfigResponse
 */
ModifyClusterOnlineConfigResponse Client::modifyClusterOnlineConfig(const string &instanceId, const ModifyClusterOnlineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyClusterOnlineConfigWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 修改数据源部署信息
 *
 * @param request ModifyDataSourceDeployRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataSourceDeployResponse
 */
ModifyDataSourceDeployResponse Client::modifyDataSourceDeployWithOptions(const string &instanceId, const string &deployName, const string &dataSourceName, const ModifyDataSourceDeployRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  if (!!request.hasGenerationId()) {
    query["generationId"] = request.generationId();
  }

  json body = {};
  if (!!request.hasAutoBuildIndex()) {
    body["autoBuildIndex"] = request.autoBuildIndex();
  }

  if (!!request.hasExtend()) {
    body["extend"] = request.extend();
  }

  if (!!request.hasProcessor()) {
    body["processor"] = request.processor();
  }

  if (!!request.hasStorage()) {
    body["storage"] = request.storage();
  }

  if (!!request.hasSwift()) {
    body["swift"] = request.swift();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyDataSourceDeploy"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/deploys/" , Darabonba::Http::URL::percentEncode(deployName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataSourceDeployResponse>();
}

/**
 * @summary 修改数据源部署信息
 *
 * @param request ModifyDataSourceDeployRequest
 * @return ModifyDataSourceDeployResponse
 */
ModifyDataSourceDeployResponse Client::modifyDataSourceDeploy(const string &instanceId, const string &deployName, const string &dataSourceName, const ModifyDataSourceDeployRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyDataSourceDeployWithOptions(instanceId, deployName, dataSourceName, request, headers, runtime);
}

/**
 * @summary Modifies a file.
 *
 * @description ## Method
 *     PUT
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file?fileName=/root/test.txt
 *
 * @param request ModifyFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFileResponse
 */
ModifyFileResponse Client::modifyFileWithOptions(const string &instanceId, const string &indexName, const string &versionName, const ModifyFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyFile"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/versions/" , Darabonba::Http::URL::percentEncode(versionName) , "/file")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFileResponse>();
}

/**
 * @summary Modifies a file.
 *
 * @description ## Method
 *     PUT
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/versions/{versionName}/file?fileName=/root/test.txt
 *
 * @param request ModifyFileRequest
 * @return ModifyFileResponse
 */
ModifyFileResponse Client::modifyFile(const string &instanceId, const string &indexName, const string &versionName, const ModifyFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyFileWithOptions(instanceId, indexName, versionName, request, headers, runtime);
}

/**
 * @summary 编辑索引表
 *
 * @param request ModifyIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIndexResponse
 */
ModifyIndexResponse Client::modifyIndexWithOptions(const string &instanceId, const string &indexName, const ModifyIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasBuildParallelNum()) {
    body["buildParallelNum"] = request.buildParallelNum();
  }

  if (!!request.hasCluster()) {
    body["cluster"] = request.cluster();
  }

  if (!!request.hasClusterConfigName()) {
    body["clusterConfigName"] = request.clusterConfigName();
  }

  if (!!request.hasConfig()) {
    body["config"] = request.config();
  }

  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasDataSource()) {
    body["dataSource"] = request.dataSource();
  }

  if (!!request.hasDataSourceInfo()) {
    body["dataSourceInfo"] = request.dataSourceInfo();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.domain();
  }

  if (!!request.hasExtend()) {
    body["extend"] = request.extend();
  }

  if (!!request.hasMergeParallelNum()) {
    body["mergeParallelNum"] = request.mergeParallelNum();
  }

  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  if (!!request.hasPushMode()) {
    body["pushMode"] = request.pushMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIndexResponse>();
}

/**
 * @summary 编辑索引表
 *
 * @param request ModifyIndexRequest
 * @return ModifyIndexResponse
 */
ModifyIndexResponse Client::modifyIndex(const string &instanceId, const string &indexName, const ModifyIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyIndexWithOptions(instanceId, indexName, request, headers, runtime);
}

/**
 * @summary Modifies the online policy of an index.
 *
 * @param request ModifyIndexOnlineStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIndexOnlineStrategyResponse
 */
ModifyIndexOnlineStrategyResponse Client::modifyIndexOnlineStrategyWithOptions(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName, const ModifyIndexOnlineStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeRate()) {
    body["changeRate"] = request.changeRate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyIndexOnlineStrategy"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/deploys/" , Darabonba::Http::URL::percentEncode(deployName) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/online-strategy")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIndexOnlineStrategyResponse>();
}

/**
 * @summary Modifies the online policy of an index.
 *
 * @param request ModifyIndexOnlineStrategyRequest
 * @return ModifyIndexOnlineStrategyResponse
 */
ModifyIndexOnlineStrategyResponse Client::modifyIndexOnlineStrategy(const string &instanceId, const string &dataSourceName, const string &deployName, const string &indexName, const ModifyIndexOnlineStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyIndexOnlineStrategyWithOptions(instanceId, dataSourceName, deployName, indexName, request, headers, runtime);
}

/**
 * @summary Modifies the information about index partitions.
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/index-partition`
 *
 * @param request ModifyIndexPartitionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIndexPartitionResponse
 */
ModifyIndexPartitionResponse Client::modifyIndexPartitionWithOptions(const string &instanceId, const ModifyIndexPartitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSourceName()) {
    body["dataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasDomainName()) {
    body["domainName"] = request.domainName();
  }

  if (!!request.hasGeneration()) {
    body["generation"] = request.generation();
  }

  if (!!request.hasIndexInfos()) {
    body["indexInfos"] = request.indexInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyIndexPartition"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/index-partition")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIndexPartitionResponse>();
}

/**
 * @summary Modifies the information about index partitions.
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/index-partition`
 *
 * @param request ModifyIndexPartitionRequest
 * @return ModifyIndexPartitionResponse
 */
ModifyIndexPartitionResponse Client::modifyIndexPartition(const string &instanceId, const ModifyIndexPartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyIndexPartitionWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Modifies the index version of a cluster (an index version rollback).
 *
 * @description ## [](#)Method
 *     PUT
 * ## [](#uri)URI
 *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
 *
 * @param request ModifyIndexVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIndexVersionResponse
 */
ModifyIndexVersionResponse Client::modifyIndexVersionWithOptions(const string &instanceId, const string &clusterName, const ModifyIndexVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::toArray(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ModifyIndexVersion"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters/" , Darabonba::Http::URL::percentEncode(clusterName) , "/index-version")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIndexVersionResponse>();
}

/**
 * @summary Modifies the index version of a cluster (an index version rollback).
 *
 * @description ## [](#)Method
 *     PUT
 * ## [](#uri)URI
 *     /openapi/ha3/instances/{instanceId}/clusters/{clusterName}/index-version
 *
 * @param request ModifyIndexVersionRequest
 * @return ModifyIndexVersionResponse
 */
ModifyIndexVersionResponse Client::modifyIndexVersion(const string &instanceId, const string &clusterName, const ModifyIndexVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyIndexVersionWithOptions(instanceId, clusterName, request, headers, runtime);
}

/**
 * @summary 修改模型详情，修改模型状态
 *
 * @param request ModifyModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyModelResponse
 */
ModifyModelResponse Client::modifyModelWithOptions(const string &instanceId, const string &modelName, const ModifyModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyModel"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/models/" , Darabonba::Http::URL::percentEncode(modelName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyModelResponse>();
}

/**
 * @summary 修改模型详情，修改模型状态
 *
 * @param request ModifyModelRequest
 * @return ModifyModelResponse
 */
ModifyModelResponse Client::modifyModel(const string &instanceId, const string &modelName, const ModifyModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyModelWithOptions(instanceId, modelName, request, headers, runtime);
}

/**
 * @summary Modifies the configurations of a node.
 *
 * @description ### Method
 * ```java
 * PUT
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/node-config?type=qrs&name=test
 * ```
 *
 * @param request ModifyNodeConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNodeConfigResponse
 */
ModifyNodeConfigResponse Client::modifyNodeConfigWithOptions(const string &instanceId, const ModifyNodeConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterName()) {
    query["clusterName"] = request.clusterName();
  }

  if (!!request.hasDataSourceName()) {
    query["dataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  json body = {};
  if (!!request.hasActive()) {
    body["active"] = request.active();
  }

  if (!!request.hasDataDuplicateNumber()) {
    body["dataDuplicateNumber"] = request.dataDuplicateNumber();
  }

  if (!!request.hasDataFragmentNumber()) {
    body["dataFragmentNumber"] = request.dataFragmentNumber();
  }

  if (!!request.hasFlowRatio()) {
    body["flowRatio"] = request.flowRatio();
  }

  if (!!request.hasMinServicePercent()) {
    body["minServicePercent"] = request.minServicePercent();
  }

  if (!!request.hasPublished()) {
    body["published"] = request.published();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyNodeConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/node-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNodeConfigResponse>();
}

/**
 * @summary Modifies the configurations of a node.
 *
 * @description ### Method
 * ```java
 * PUT
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/node-config?type=qrs&name=test
 * ```
 *
 * @param request ModifyNodeConfigRequest
 * @return ModifyNodeConfigResponse
 */
ModifyNodeConfigResponse Client::modifyNodeConfig(const string &instanceId, const ModifyNodeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyNodeConfigWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Modifies online configurations.
 *
 * @description ### Method
 * ```java
 * put
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs/{indexName}
 * ```
 *
 * @param request ModifyOnlineConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOnlineConfigResponse
 */
ModifyOnlineConfigResponse Client::modifyOnlineConfigWithOptions(const string &instanceId, const string &nodeName, const string &indexName, const ModifyOnlineConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyOnlineConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/node/" , Darabonba::Http::URL::percentEncode(nodeName) , "/online-configs/" , Darabonba::Http::URL::percentEncode(indexName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOnlineConfigResponse>();
}

/**
 * @summary Modifies online configurations.
 *
 * @description ### Method
 * ```java
 * put
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/node/{nodeName}/online-configs/{indexName}
 * ```
 *
 * @param request ModifyOnlineConfigRequest
 * @return ModifyOnlineConfigResponse
 */
ModifyOnlineConfigResponse Client::modifyOnlineConfig(const string &instanceId, const string &nodeName, const string &indexName, const ModifyOnlineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyOnlineConfigWithOptions(instanceId, nodeName, indexName, request, headers, runtime);
}

/**
 * @summary 修改实例的密码
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/password`
 *
 * @param request ModifyPasswordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPasswordResponse
 */
ModifyPasswordResponse Client::modifyPasswordWithOptions(const string &instanceId, const ModifyPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPassword()) {
    body["password"] = request.password();
  }

  if (!!request.hasUsername()) {
    body["username"] = request.username();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyPassword"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/password")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPasswordResponse>();
}

/**
 * @summary 修改实例的密码
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/password`
 *
 * @param request ModifyPasswordRequest
 * @return ModifyPasswordResponse
 */
ModifyPasswordResponse Client::modifyPassword(const string &instanceId, const ModifyPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyPasswordWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request ModifyPausePolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPausePolicyResponse
 */
ModifyPausePolicyResponse Client::modifyPausePolicyWithOptions(const string &instanceId, const ModifyPausePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyPausePolicy"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/pause-policies")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPausePolicyResponse>();
}

/**
 * @param request ModifyPausePolicyRequest
 * @return ModifyPausePolicyResponse
 */
ModifyPausePolicyResponse Client::modifyPausePolicy(const string &instanceId, const ModifyPausePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyPausePolicyWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 修改公网域名访问白名单
 *
 * @param request ModifyPublicUrlIpListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPublicUrlIpListResponse
 */
ModifyPublicUrlIpListResponse Client::modifyPublicUrlIpListWithOptions(const string &instanceId, const ModifyPublicUrlIpListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyPublicUrlIpList"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/public-url-ip-list")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPublicUrlIpListResponse>();
}

/**
 * @summary 修改公网域名访问白名单
 *
 * @param request ModifyPublicUrlIpListRequest
 * @return ModifyPublicUrlIpListResponse
 */
ModifyPublicUrlIpListResponse Client::modifyPublicUrlIpList(const string &instanceId, const ModifyPublicUrlIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyPublicUrlIpListWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 通过指定实例ID来修改数据节点的副本或分片数量。
 *
 * @description ## 请求说明
 * 本API允许用户修改特定实例下的数据节点副本数或分片数。请求时，需提供实例ID，并在请求体中指定要修改的`replica`（副本数）或`partition`（分片数）。请注意，这两个参数都是可选的，但至少需要提供其中一个以执行更新操作。
 *
 * @param request ModifySearcherReplicaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySearcherReplicaResponse
 */
ModifySearcherReplicaResponse Client::modifySearcherReplicaWithOptions(const string &instanceId, const ModifySearcherReplicaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  if (!!request.hasReplica()) {
    body["replica"] = request.replica();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifySearcherReplica"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/replica")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySearcherReplicaResponse>();
}

/**
 * @summary 通过指定实例ID来修改数据节点的副本或分片数量。
 *
 * @description ## 请求说明
 * 本API允许用户修改特定实例下的数据节点副本数或分片数。请求时，需提供实例ID，并在请求体中指定要修改的`replica`（副本数）或`partition`（分片数）。请注意，这两个参数都是可选的，但至少需要提供其中一个以执行更新操作。
 *
 * @param request ModifySearcherReplicaRequest
 * @return ModifySearcherReplicaResponse
 */
ModifySearcherReplicaResponse Client::modifySearcherReplica(const string &instanceId, const ModifySearcherReplicaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifySearcherReplicaWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Modifies an index table.
 *
 * @param request ModifyTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTableResponse
 */
ModifyTableResponse Client::modifyTableWithOptions(const string &instanceId, const string &tableName, const ModifyTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.dryRun();
  }

  json body = {};
  if (!!request.hasDataProcessConfig()) {
    body["dataProcessConfig"] = request.dataProcessConfig();
  }

  if (!!request.hasDataSource()) {
    body["dataSource"] = request.dataSource();
  }

  if (!!request.hasFieldSchema()) {
    body["fieldSchema"] = request.fieldSchema();
  }

  if (!!request.hasPartitionCount()) {
    body["partitionCount"] = request.partitionCount();
  }

  if (!!request.hasPrimaryKey()) {
    body["primaryKey"] = request.primaryKey();
  }

  if (!!request.hasRawSchema()) {
    body["rawSchema"] = request.rawSchema();
  }

  if (!!request.hasVectorIndex()) {
    body["vectorIndex"] = request.vectorIndex();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyTable"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTableResponse>();
}

/**
 * @summary Modifies an index table.
 *
 * @param request ModifyTableRequest
 * @return ModifyTableResponse
 */
ModifyTableResponse Client::modifyTable(const string &instanceId, const string &tableName, const ModifyTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyTableWithOptions(instanceId, tableName, request, headers, runtime);
}

/**
 * @summary Publishes a version of advanced configurations.
 *
 * @description ## Method
 * ~~~
 * POST
 * ~~~
 * ## URI
 * ~~~
 * /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/actions/publish
 * ~~~
 *
 * @param request PublishAdvanceConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishAdvanceConfigResponse
 */
PublishAdvanceConfigResponse Client::publishAdvanceConfigWithOptions(const string &instanceId, const string &configName, const PublishAdvanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDesc()) {
    body["desc"] = request.desc();
  }

  if (!!request.hasFiles()) {
    body["files"] = request.files();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishAdvanceConfig"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/advanced-configs/" , Darabonba::Http::URL::percentEncode(configName) , "/actions/publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishAdvanceConfigResponse>();
}

/**
 * @summary Publishes a version of advanced configurations.
 *
 * @description ## Method
 * ~~~
 * POST
 * ~~~
 * ## URI
 * ~~~
 * /openapi/ha3/instances/{instanceId}/advanced-configs/{configName}/actions/publish
 * ~~~
 *
 * @param request PublishAdvanceConfigRequest
 * @return PublishAdvanceConfigResponse
 */
PublishAdvanceConfigResponse Client::publishAdvanceConfig(const string &instanceId, const string &configName, const PublishAdvanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishAdvanceConfigWithOptions(instanceId, configName, request, headers, runtime);
}

/**
 * @summary Publishes a specified index version.
 *
 * @description ## Method
 *     POST
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/actions/publish
 *
 * @param request PublishIndexVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishIndexVersionResponse
 */
PublishIndexVersionResponse Client::publishIndexVersionWithOptions(const string &instanceId, const string &indexName, const PublishIndexVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.body();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishIndexVersion"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/actions/publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishIndexVersionResponse>();
}

/**
 * @summary Publishes a specified index version.
 *
 * @description ## Method
 *     POST
 * ## URI
 *     /openapi/ha3/instances/{instanceId}/indexes/{indexName}/actions/publish
 *
 * @param request PublishIndexVersionRequest
 * @return PublishIndexVersionResponse
 */
PublishIndexVersionResponse Client::publishIndexVersion(const string &instanceId, const string &indexName, const PublishIndexVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishIndexVersionWithOptions(instanceId, indexName, request, headers, runtime);
}

/**
 * @param request PushDocumentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushDocumentsResponse
 */
PushDocumentsResponse Client::pushDocumentsWithOptions(const string &instanceId, const string &dataSourceName, const PushDocumentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPkField()) {
    query["pkField"] = request.pkField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.body()}
  }));
  Params params = Params(json({
    {"action" , "PushDocuments"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/data-sources/" , Darabonba::Http::URL::percentEncode(dataSourceName) , "/actions/bulk")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushDocumentsResponse>();
}

/**
 * @param request PushDocumentsRequest
 * @return PushDocumentsResponse
 */
PushDocumentsResponse Client::pushDocuments(const string &instanceId, const string &dataSourceName, const PushDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushDocumentsWithOptions(instanceId, dataSourceName, request, headers, runtime);
}

/**
 * @summary Restores data from an index.
 *
 * @description ### Method
 * `POST`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/recover-index`
 *
 * @param request RecoverIndexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverIndexResponse
 */
RecoverIndexResponse Client::recoverIndexWithOptions(const string &instanceId, const RecoverIndexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBuildDeployId()) {
    body["buildDeployId"] = request.buildDeployId();
  }

  if (!!request.hasDataSourceName()) {
    body["dataSourceName"] = request.dataSourceName();
  }

  if (!!request.hasGeneration()) {
    body["generation"] = request.generation();
  }

  if (!!request.hasIndexName()) {
    body["indexName"] = request.indexName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecoverIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/recover-index")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoverIndexResponse>();
}

/**
 * @summary Restores data from an index.
 *
 * @description ### Method
 * `POST`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}/recover-index`
 *
 * @param request RecoverIndexRequest
 * @return RecoverIndexResponse
 */
RecoverIndexResponse Client::recoverIndex(const string &instanceId, const RecoverIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return recoverIndexWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Rebuilds an index.
 *
 * @param request ReindexRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReindexResponse
 */
ReindexResponse Client::reindexWithOptions(const string &instanceId, const string &tableName, const ReindexRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataTimeSec()) {
    body["dataTimeSec"] = request.dataTimeSec();
  }

  if (!!request.hasOssDataPath()) {
    body["ossDataPath"] = request.ossDataPath();
  }

  if (!!request.hasPartition()) {
    body["partition"] = request.partition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Reindex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/tables/" , Darabonba::Http::URL::percentEncode(tableName) , "/reindex")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReindexResponse>();
}

/**
 * @summary Rebuilds an index.
 *
 * @param request ReindexRequest
 * @return ReindexResponse
 */
ReindexResponse Client::reindex(const string &instanceId, const string &tableName, const ReindexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return reindexWithOptions(instanceId, tableName, request, headers, runtime);
}

/**
 * @summary Deletes a cluster.
 *
 * @description ### Method
 * ```java
 * DELETE
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/clusters/{clusterName}
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveClusterResponse
 */
RemoveClusterResponse Client::removeClusterWithOptions(const string &instanceId, const string &clusterName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveCluster"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/clusters/" , Darabonba::Http::URL::percentEncode(clusterName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveClusterResponse>();
}

/**
 * @summary Deletes a cluster.
 *
 * @description ### Method
 * ```java
 * DELETE
 * ```
 * ### URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/clusters/{clusterName}
 * ```
 *
 * @return RemoveClusterResponse
 */
RemoveClusterResponse Client::removeCluster(const string &instanceId, const string &clusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeClusterWithOptions(instanceId, clusterName, headers, runtime);
}

/**
 * @param request RenameFolderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameFolderResponse
 */
RenameFolderResponse Client::renameFolderWithOptions(const string &instanceId, const string &database, const string &folderId, const RenameFolderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameFolder"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/folders/" , Darabonba::Http::URL::percentEncode(folderId) , "/name")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameFolderResponse>();
}

/**
 * @param request RenameFolderRequest
 * @return RenameFolderResponse
 */
RenameFolderResponse Client::renameFolder(const string &instanceId, const string &database, const string &folderId, const RenameFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameFolderWithOptions(instanceId, database, folderId, request, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartIndexResponse
 */
StartIndexResponse Client::startIndexWithOptions(const string &instanceId, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/startIndex")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartIndexResponse>();
}

/**
 * @return StartIndexResponse
 */
StartIndexResponse Client::startIndex(const string &instanceId, const string &indexName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startIndexWithOptions(instanceId, indexName, headers, runtime);
}

/**
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopIndexResponse
 */
StopIndexResponse Client::stopIndexWithOptions(const string &instanceId, const string &indexName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopIndex"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/indexes/" , Darabonba::Http::URL::percentEncode(indexName) , "/stopIndex")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopIndexResponse>();
}

/**
 * @return StopIndexResponse
 */
StopIndexResponse Client::stopIndex(const string &instanceId, const string &indexName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopIndexWithOptions(instanceId, indexName, headers, runtime);
}

/**
 * @summary Stops an FSM task.
 *
 * @description ### [](#)Method
 * ```java
 * PUT
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/stop-task/{fsmId}
 * ```
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTaskWithOptions(const string &instanceId, const string &fsmId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTask"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/stop-task/" , Darabonba::Http::URL::percentEncode(fsmId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTaskResponse>();
}

/**
 * @summary Stops an FSM task.
 *
 * @description ### [](#)Method
 * ```java
 * PUT
 * ```
 * ### [](#uri)URI
 * ```java
 * /openapi/ha3/instances/{instanceId}/stop-task/{fsmId}
 * ```
 *
 * @return StopTaskResponse
 */
StopTaskResponse Client::stopTask(const string &instanceId, const string &fsmId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTaskWithOptions(instanceId, fsmId, headers, runtime);
}

/**
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/resource-tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 打标签接口
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 删标签接口
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceId(), "resourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagKey(), "tagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["all"] = request.all();
  }

  if (!!request.hasResourceIdShrink()) {
    query["resourceId"] = request.resourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["tagKey"] = request.tagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/resource-tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary 删标签接口
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the configuration of a specified instance.
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}`
 *
 * @param request UpdateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const string &instanceId, const UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponents()) {
    body["components"] = request.components();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasOrderType()) {
    body["orderType"] = request.orderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Modifies the configuration of a specified instance.
 *
 * @description ### Method
 * `PUT`
 * ### URI
 * `/openapi/ha3/instances/{instanceId}`
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const string &instanceId, const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceWithOptions(instanceId, request, headers, runtime);
}

/**
 * @param request UpdateSqlInstanceContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSqlInstanceContentResponse
 */
UpdateSqlInstanceContentResponse Client::updateSqlInstanceContentWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const UpdateSqlInstanceContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSqlInstanceContent"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId) , "/content")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSqlInstanceContentResponse>();
}

/**
 * @param request UpdateSqlInstanceContentRequest
 * @return UpdateSqlInstanceContentResponse
 */
UpdateSqlInstanceContentResponse Client::updateSqlInstanceContent(const string &instanceId, const string &database, const string &sqlInstanceId, const UpdateSqlInstanceContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSqlInstanceContentWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

/**
 * @param request UpdateSqlInstanceNameRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSqlInstanceNameResponse
 */
UpdateSqlInstanceNameResponse Client::updateSqlInstanceNameWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const UpdateSqlInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSqlInstanceName"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId) , "/name")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSqlInstanceNameResponse>();
}

/**
 * @param request UpdateSqlInstanceNameRequest
 * @return UpdateSqlInstanceNameResponse
 */
UpdateSqlInstanceNameResponse Client::updateSqlInstanceName(const string &instanceId, const string &database, const string &sqlInstanceId, const UpdateSqlInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSqlInstanceNameWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

/**
 * @param request UpdateSqlInstanceParamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSqlInstanceParamsResponse
 */
UpdateSqlInstanceParamsResponse Client::updateSqlInstanceParamsWithOptions(const string &instanceId, const string &database, const string &sqlInstanceId, const UpdateSqlInstanceParamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCombineParam()) {
    body["combineParam"] = request.combineParam();
  }

  if (!!request.hasDynamicParam()) {
    body["dynamicParam"] = request.dynamicParam();
  }

  if (!!request.hasKvpair()) {
    body["kvpair"] = request.kvpair();
  }

  if (!!request.hasParams()) {
    body["params"] = request.params();
  }

  if (!!request.hasStaticParam()) {
    body["staticParam"] = request.staticParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSqlInstanceParams"},
    {"version" , "2021-10-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/ha3/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sql-studio/databases/" , Darabonba::Http::URL::percentEncode(database) , "/sql-instances/" , Darabonba::Http::URL::percentEncode(sqlInstanceId) , "/params")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSqlInstanceParamsResponse>();
}

/**
 * @param request UpdateSqlInstanceParamsRequest
 * @return UpdateSqlInstanceParamsResponse
 */
UpdateSqlInstanceParamsResponse Client::updateSqlInstanceParams(const string &instanceId, const string &database, const string &sqlInstanceId, const UpdateSqlInstanceParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSqlInstanceParamsWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Searchengine20211025