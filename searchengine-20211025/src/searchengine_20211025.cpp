// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/searchengine_20211025.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Searchengine20211025;

Alibabacloud_Searchengine20211025::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("searchengine"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Searchengine20211025::Client::getEndpoint(shared_ptr<string> productId,
                                                              shared_ptr<string> regionId,
                                                              shared_ptr<string> endpointRule,
                                                              shared_ptr<string> network,
                                                              shared_ptr<string> suffix,
                                                              shared_ptr<map<string, string>> endpointMap,
                                                              shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

BuildIndexResponse Alibabacloud_Searchengine20211025::Client::buildIndexWithOptions(shared_ptr<string> instanceId,
                                                                                    shared_ptr<BuildIndexRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildMode)) {
    body->insert(pair<string, string>("buildMode", *request->buildMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    body->insert(pair<string, string>("dataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("dataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataTimeSec)) {
    body->insert(pair<string, long>("dataTimeSec", *request->dataTimeSec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->generation)) {
    body->insert(pair<string, long>("generation", *request->generation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    body->insert(pair<string, string>("partition", *request->partition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    body->insert(pair<string, string>("tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BuildIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/actions/build-index"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BuildIndexResponse(callApi(params, req, runtime));
}

BuildIndexResponse Alibabacloud_Searchengine20211025::Client::buildIndex(shared_ptr<string> instanceId, shared_ptr<BuildIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return buildIndexWithOptions(instanceId, request, headers, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Searchengine20211025::Client::changeResourceGroupWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<ChangeResourceGroupRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    body->insert(pair<string, string>("newResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/actions/change-resource-group"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Searchengine20211025::Client::changeResourceGroup(shared_ptr<string> instanceId, shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeResourceGroupWithOptions(instanceId, request, headers, runtime);
}

CloneSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::cloneSqlInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<string> database,
                                                                                                shared_ptr<string> sqlInstanceId,
                                                                                                shared_ptr<CloneSqlInstanceRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetFolderId)) {
    body->insert(pair<string, long>("targetFolderId", *request->targetFolderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneSqlInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)) + string("/actions/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneSqlInstanceResponse(callApi(params, req, runtime));
}

CloneSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::cloneSqlInstance(shared_ptr<string> instanceId,
                                                                                     shared_ptr<string> database,
                                                                                     shared_ptr<string> sqlInstanceId,
                                                                                     shared_ptr<CloneSqlInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneSqlInstanceWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

CreateAliasResponse Alibabacloud_Searchengine20211025::Client::createAliasWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<CreateAliasRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->newMode)) {
    query->insert(pair<string, bool>("newMode", *request->newMode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->index)) {
    body->insert(pair<string, string>("index", *request->index));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlias"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/aliases"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAliasResponse(callApi(params, req, runtime));
}

CreateAliasResponse Alibabacloud_Searchengine20211025::Client::createAlias(shared_ptr<string> instanceId, shared_ptr<CreateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAliasWithOptions(instanceId, request, headers, runtime);
}

CreateClusterResponse Alibabacloud_Searchengine20211025::Client::createClusterWithOptions(shared_ptr<string> instanceId,
                                                                                          shared_ptr<CreateClusterRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoLoad)) {
    body->insert(pair<string, bool>("autoLoad", *request->autoLoad));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestDataNode>(request->dataNode)) {
    body->insert(pair<string, CreateClusterRequestDataNode>("dataNode", *request->dataNode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateClusterRequestQueryNode>(request->queryNode)) {
    body->insert(pair<string, CreateClusterRequestQueryNode>("queryNode", *request->queryNode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCluster"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateClusterResponse(callApi(params, req, runtime));
}

CreateClusterResponse Alibabacloud_Searchengine20211025::Client::createCluster(shared_ptr<string> instanceId, shared_ptr<CreateClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createClusterWithOptions(instanceId, request, headers, runtime);
}

CreateConfigDirResponse Alibabacloud_Searchengine20211025::Client::createConfigDirWithOptions(shared_ptr<string> instanceId,
                                                                                              shared_ptr<string> configName,
                                                                                              shared_ptr<CreateConfigDirRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dirName)) {
    body->insert(pair<string, string>("dirName", *request->dirName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFullPath)) {
    body->insert(pair<string, string>("parentFullPath", *request->parentFullPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigDir"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/dir"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigDirResponse(callApi(params, req, runtime));
}

CreateConfigDirResponse Alibabacloud_Searchengine20211025::Client::createConfigDir(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<CreateConfigDirRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConfigDirWithOptions(instanceId, configName, request, headers, runtime);
}

CreateConfigFileResponse Alibabacloud_Searchengine20211025::Client::createConfigFileWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<string> configName,
                                                                                                shared_ptr<CreateConfigFileRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossPath)) {
    body->insert(pair<string, string>("ossPath", *request->ossPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFullPath)) {
    body->insert(pair<string, string>("parentFullPath", *request->parentFullPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfigFile"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/file"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConfigFileResponse(callApi(params, req, runtime));
}

CreateConfigFileResponse Alibabacloud_Searchengine20211025::Client::createConfigFile(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<CreateConfigFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

CreateDataSourceResponse Alibabacloud_Searchengine20211025::Client::createDataSourceWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<CreateDataSourceRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoBuildIndex)) {
    body->insert(pair<string, bool>("autoBuildIndex", *request->autoBuildIndex));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataSourceRequestConfig>(request->config)) {
    body->insert(pair<string, CreateDataSourceRequestConfig>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDataSourceRequestSaroConfig>(request->saroConfig)) {
    body->insert(pair<string, CreateDataSourceRequestSaroConfig>("saroConfig", *request->saroConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSource"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataSourceResponse(callApi(params, req, runtime));
}

CreateDataSourceResponse Alibabacloud_Searchengine20211025::Client::createDataSource(shared_ptr<string> instanceId, shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDataSourceWithOptions(instanceId, request, headers, runtime);
}

CreateFolderResponse Alibabacloud_Searchengine20211025::Client::createFolderWithOptions(shared_ptr<string> instanceId,
                                                                                        shared_ptr<string> database,
                                                                                        shared_ptr<CreateFolderRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parent)) {
    body->insert(pair<string, long>("parent", *request->parent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFolder"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/folders"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFolderResponse(callApi(params, req, runtime));
}

CreateFolderResponse Alibabacloud_Searchengine20211025::Client::createFolder(shared_ptr<string> instanceId, shared_ptr<string> database, shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFolderWithOptions(instanceId, database, request, headers, runtime);
}

CreateIndexResponse Alibabacloud_Searchengine20211025::Client::createIndexWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<CreateIndexRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->buildParallelNum)) {
    body->insert(pair<string, long>("buildParallelNum", *request->buildParallelNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    body->insert(pair<string, string>("dataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<CreateIndexRequestDataSourceInfo>(request->dataSourceInfo)) {
    body->insert(pair<string, CreateIndexRequestDataSourceInfo>("dataSourceInfo", *request->dataSourceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->extend)) {
    body->insert(pair<string, map<string, boost::any>>("extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mergeParallelNum)) {
    body->insert(pair<string, long>("mergeParallelNum", *request->mergeParallelNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->partition)) {
    body->insert(pair<string, long>("partition", *request->partition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIndexResponse(callApi(params, req, runtime));
}

CreateIndexResponse Alibabacloud_Searchengine20211025::Client::createIndex(shared_ptr<string> instanceId, shared_ptr<CreateIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndexWithOptions(instanceId, request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_Searchengine20211025::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("chargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceRequestComponents>>(request->components)) {
    body->insert(pair<string, vector<CreateInstanceRequestComponents>>("components", *request->components));
  }
  if (!Darabonba_Util::Client::isUnset<CreateInstanceRequestOrder>(request->order)) {
    body->insert(pair<string, CreateInstanceRequestOrder>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateInstanceRequestTags>>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_Searchengine20211025::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

CreatePublicUrlResponse Alibabacloud_Searchengine20211025::Client::createPublicUrlWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePublicUrl"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/public-url"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePublicUrlResponse(callApi(params, req, runtime));
}

CreatePublicUrlResponse Alibabacloud_Searchengine20211025::Client::createPublicUrl(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPublicUrlWithOptions(instanceId, headers, runtime);
}

CreateSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::createSqlInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> database,
                                                                                                  shared_ptr<CreateSqlInstanceRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parent)) {
    body->insert(pair<string, long>("parent", *request->parent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSqlInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSqlInstanceResponse(callApi(params, req, runtime));
}

CreateSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::createSqlInstance(shared_ptr<string> instanceId, shared_ptr<string> database, shared_ptr<CreateSqlInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSqlInstanceWithOptions(instanceId, database, request, headers, runtime);
}

CreateTableResponse Alibabacloud_Searchengine20211025::Client::createTableWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<CreateTableRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateTableRequestDataProcessConfig>>(request->dataProcessConfig)) {
    body->insert(pair<string, vector<CreateTableRequestDataProcessConfig>>("dataProcessConfig", *request->dataProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataProcessorCount)) {
    body->insert(pair<string, long>("dataProcessorCount", *request->dataProcessorCount));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTableRequestDataSource>(request->dataSource)) {
    body->insert(pair<string, CreateTableRequestDataSource>("dataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->fieldSchema)) {
    body->insert(pair<string, map<string, string>>("fieldSchema", *request->fieldSchema));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->partitionCount)) {
    body->insert(pair<string, long>("partitionCount", *request->partitionCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKey)) {
    body->insert(pair<string, string>("primaryKey", *request->primaryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rawSchema)) {
    body->insert(pair<string, string>("rawSchema", *request->rawSchema));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTableRequestVectorIndex>>(request->vectorIndex)) {
    body->insert(pair<string, vector<CreateTableRequestVectorIndex>>("vectorIndex", *request->vectorIndex));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTable"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTableResponse(callApi(params, req, runtime));
}

CreateTableResponse Alibabacloud_Searchengine20211025::Client::createTable(shared_ptr<string> instanceId, shared_ptr<CreateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTableWithOptions(instanceId, request, headers, runtime);
}

DeleteAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::deleteAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<string> configName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAdvanceConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAdvanceConfigResponse(callApi(params, req, runtime));
}

DeleteAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::deleteAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAdvanceConfigWithOptions(instanceId, configName, headers, runtime);
}

DeleteAliasResponse Alibabacloud_Searchengine20211025::Client::deleteAliasWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> alias,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlias"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/aliases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(alias)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAliasResponse(callApi(params, req, runtime));
}

DeleteAliasResponse Alibabacloud_Searchengine20211025::Client::deleteAlias(shared_ptr<string> instanceId, shared_ptr<string> alias) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAliasWithOptions(instanceId, alias, headers, runtime);
}

DeleteConfigDirResponse Alibabacloud_Searchengine20211025::Client::deleteConfigDirWithOptions(shared_ptr<string> instanceId,
                                                                                              shared_ptr<string> configName,
                                                                                              shared_ptr<DeleteConfigDirRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dirName)) {
    query->insert(pair<string, string>("dirName", *request->dirName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFullPath)) {
    query->insert(pair<string, string>("parentFullPath", *request->parentFullPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigDir"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/dir"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigDirResponse(callApi(params, req, runtime));
}

DeleteConfigDirResponse Alibabacloud_Searchengine20211025::Client::deleteConfigDir(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<DeleteConfigDirRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigDirWithOptions(instanceId, configName, request, headers, runtime);
}

DeleteConfigFileResponse Alibabacloud_Searchengine20211025::Client::deleteConfigFileWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<string> configName,
                                                                                                shared_ptr<DeleteConfigFileRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFullPath)) {
    query->insert(pair<string, string>("parentFullPath", *request->parentFullPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfigFile"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/file"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConfigFileResponse(callApi(params, req, runtime));
}

DeleteConfigFileResponse Alibabacloud_Searchengine20211025::Client::deleteConfigFile(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<DeleteConfigFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

DeleteDataSourceResponse Alibabacloud_Searchengine20211025::Client::deleteDataSourceWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<string> dataSourceName,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSource"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceResponse(callApi(params, req, runtime));
}

DeleteDataSourceResponse Alibabacloud_Searchengine20211025::Client::deleteDataSource(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDataSourceWithOptions(instanceId, dataSourceName, headers, runtime);
}

DeleteFolderResponse Alibabacloud_Searchengine20211025::Client::deleteFolderWithOptions(shared_ptr<string> instanceId,
                                                                                        shared_ptr<string> database,
                                                                                        shared_ptr<string> folderId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFolder"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/folders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(folderId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFolderResponse(callApi(params, req, runtime));
}

DeleteFolderResponse Alibabacloud_Searchengine20211025::Client::deleteFolder(shared_ptr<string> instanceId, shared_ptr<string> database, shared_ptr<string> folderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFolderWithOptions(instanceId, database, folderId, headers, runtime);
}

DeleteIndexResponse Alibabacloud_Searchengine20211025::Client::deleteIndexWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> indexName,
                                                                                      shared_ptr<DeleteIndexRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    query->insert(pair<string, string>("dataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteDataSource)) {
    query->insert(pair<string, bool>("deleteDataSource", *request->deleteDataSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexResponse(callApi(params, req, runtime));
}

DeleteIndexResponse Alibabacloud_Searchengine20211025::Client::deleteIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<DeleteIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexWithOptions(instanceId, indexName, request, headers, runtime);
}

DeleteIndexVersionResponse Alibabacloud_Searchengine20211025::Client::deleteIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<string> indexName,
                                                                                                    shared_ptr<string> versionName,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndexVersion"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexVersionResponse(callApi(params, req, runtime));
}

DeleteIndexVersionResponse Alibabacloud_Searchengine20211025::Client::deleteIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<string> versionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexVersionWithOptions(instanceId, indexName, versionName, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Searchengine20211025::Client::deleteInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Searchengine20211025::Client::deleteInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(instanceId, headers, runtime);
}

DeletePublicUrlResponse Alibabacloud_Searchengine20211025::Client::deletePublicUrlWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePublicUrl"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/public-url"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePublicUrlResponse(callApi(params, req, runtime));
}

DeletePublicUrlResponse Alibabacloud_Searchengine20211025::Client::deletePublicUrl(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePublicUrlWithOptions(instanceId, headers, runtime);
}

DeleteSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::deleteSqlInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> database,
                                                                                                  shared_ptr<string> sqlInstanceId,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSqlInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSqlInstanceResponse(callApi(params, req, runtime));
}

DeleteSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::deleteSqlInstance(shared_ptr<string> instanceId, shared_ptr<string> database, shared_ptr<string> sqlInstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSqlInstanceWithOptions(instanceId, database, sqlInstanceId, headers, runtime);
}

DeleteTableResponse Alibabacloud_Searchengine20211025::Client::deleteTableWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> tableName,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTable"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTableResponse(callApi(params, req, runtime));
}

DeleteTableResponse Alibabacloud_Searchengine20211025::Client::deleteTable(shared_ptr<string> instanceId, shared_ptr<string> tableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTableWithOptions(instanceId, tableName, headers, runtime);
}

DescribeRegionsResponse Alibabacloud_Searchengine20211025::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("acceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Searchengine20211025::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(request, headers, runtime);
}

ExecuteSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::executeSqlInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<string> database,
                                                                                                    shared_ptr<string> sqlInstanceId,
                                                                                                    shared_ptr<ExecuteSqlInstanceRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->combineParam)) {
    body->insert(pair<string, map<string, boost::any>>("combineParam", *request->combineParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->dynamicParam)) {
    body->insert(pair<string, map<string, boost::any>>("dynamicParam", *request->dynamicParam));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->kvpair)) {
    body->insert(pair<string, map<string, boost::any>>("kvpair", *request->kvpair));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->params)) {
    body->insert(pair<string, map<string, boost::any>>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->staticParam)) {
    body->insert(pair<string, map<string, boost::any>>("staticParam", *request->staticParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteSqlInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)) + string("/actions/execution"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteSqlInstanceResponse(callApi(params, req, runtime));
}

ExecuteSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::executeSqlInstance(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> database,
                                                                                         shared_ptr<string> sqlInstanceId,
                                                                                         shared_ptr<ExecuteSqlInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return executeSqlInstanceWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

ForceSwitchResponse Alibabacloud_Searchengine20211025::Client::forceSwitchWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> fsmId,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ForceSwitch"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/force-switch/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fsmId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ForceSwitchResponse(callApi(params, req, runtime));
}

ForceSwitchResponse Alibabacloud_Searchengine20211025::Client::forceSwitch(shared_ptr<string> instanceId, shared_ptr<string> fsmId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return forceSwitchWithOptions(instanceId, fsmId, headers, runtime);
}

GetAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::getAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<string> configName,
                                                                                                shared_ptr<GetAdvanceConfigRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdvanceConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdvanceConfigResponse(callApi(params, req, runtime));
}

GetAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::getAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<GetAdvanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAdvanceConfigWithOptions(instanceId, configName, request, headers, runtime);
}

GetAdvanceConfigFileResponse Alibabacloud_Searchengine20211025::Client::getAdvanceConfigFileWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> configName,
                                                                                                        shared_ptr<GetAdvanceConfigFileRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdvanceConfigFile"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/file"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAdvanceConfigFileResponse(callApi(params, req, runtime));
}

GetAdvanceConfigFileResponse Alibabacloud_Searchengine20211025::Client::getAdvanceConfigFile(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<GetAdvanceConfigFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAdvanceConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

GetClusterResponse Alibabacloud_Searchengine20211025::Client::getClusterWithOptions(shared_ptr<string> instanceId,
                                                                                    shared_ptr<string> clusterName,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCluster"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterResponse(callApi(params, req, runtime));
}

GetClusterResponse Alibabacloud_Searchengine20211025::Client::getCluster(shared_ptr<string> instanceId, shared_ptr<string> clusterName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterWithOptions(instanceId, clusterName, headers, runtime);
}

GetClusterRunTimeInfoResponse Alibabacloud_Searchengine20211025::Client::getClusterRunTimeInfoWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterRunTimeInfo"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/cluster-run-time-info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterRunTimeInfoResponse(callApi(params, req, runtime));
}

GetClusterRunTimeInfoResponse Alibabacloud_Searchengine20211025::Client::getClusterRunTimeInfo(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterRunTimeInfoWithOptions(instanceId, headers, runtime);
}

GetDataSourceResponse Alibabacloud_Searchengine20211025::Client::getDataSourceWithOptions(shared_ptr<string> instanceId,
                                                                                          shared_ptr<string> dataSourceName,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSource"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceResponse(callApi(params, req, runtime));
}

GetDataSourceResponse Alibabacloud_Searchengine20211025::Client::getDataSource(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataSourceWithOptions(instanceId, dataSourceName, headers, runtime);
}

GetDataSourceDeployResponse Alibabacloud_Searchengine20211025::Client::getDataSourceDeployWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<string> deployName,
                                                                                                      shared_ptr<string> dataSourceName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceDeploy"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/deploys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceDeployResponse(callApi(params, req, runtime));
}

GetDataSourceDeployResponse Alibabacloud_Searchengine20211025::Client::getDataSourceDeploy(shared_ptr<string> instanceId, shared_ptr<string> deployName, shared_ptr<string> dataSourceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataSourceDeployWithOptions(instanceId, deployName, dataSourceName, headers, runtime);
}

GetDatabaseSchemaResponse Alibabacloud_Searchengine20211025::Client::getDatabaseSchemaWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> database,
                                                                                                  shared_ptr<string> tableName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatabaseSchema"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/schema"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatabaseSchemaResponse(callApi(params, req, runtime));
}

GetDatabaseSchemaResponse Alibabacloud_Searchengine20211025::Client::getDatabaseSchema(shared_ptr<string> instanceId, shared_ptr<string> database, shared_ptr<string> tableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDatabaseSchemaWithOptions(instanceId, database, tableName, headers, runtime);
}

GetDeployGraphResponse Alibabacloud_Searchengine20211025::Client::getDeployGraphWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeployGraph"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/deploy-graph"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeployGraphResponse(callApi(params, req, runtime));
}

GetDeployGraphResponse Alibabacloud_Searchengine20211025::Client::getDeployGraph(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeployGraphWithOptions(instanceId, headers, runtime);
}

GetFileResponse Alibabacloud_Searchengine20211025::Client::getFileWithOptions(shared_ptr<string> instanceId,
                                                                              shared_ptr<string> indexName,
                                                                              shared_ptr<string> versionName,
                                                                              shared_ptr<GetFileRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFile"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionName)) + string("/file"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileResponse(callApi(params, req, runtime));
}

GetFileResponse Alibabacloud_Searchengine20211025::Client::getFile(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> indexName,
                                                                   shared_ptr<string> versionName,
                                                                   shared_ptr<GetFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFileWithOptions(instanceId, indexName, versionName, request, headers, runtime);
}

GetIndexResponse Alibabacloud_Searchengine20211025::Client::getIndexWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<string> indexName,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexResponse(callApi(params, req, runtime));
}

GetIndexResponse Alibabacloud_Searchengine20211025::Client::getIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIndexWithOptions(instanceId, indexName, headers, runtime);
}

GetIndexOnlineStrategyResponse Alibabacloud_Searchengine20211025::Client::getIndexOnlineStrategyWithOptions(shared_ptr<string> instanceId,
                                                                                                            shared_ptr<string> dataSourceName,
                                                                                                            shared_ptr<string> deployName,
                                                                                                            shared_ptr<string> indexName,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexOnlineStrategy"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/deploys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployName)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/online-strategy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexOnlineStrategyResponse(callApi(params, req, runtime));
}

GetIndexOnlineStrategyResponse Alibabacloud_Searchengine20211025::Client::getIndexOnlineStrategy(shared_ptr<string> instanceId,
                                                                                                 shared_ptr<string> dataSourceName,
                                                                                                 shared_ptr<string> deployName,
                                                                                                 shared_ptr<string> indexName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIndexOnlineStrategyWithOptions(instanceId, dataSourceName, deployName, indexName, headers, runtime);
}

GetIndexVersionResponse Alibabacloud_Searchengine20211025::Client::getIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                                                              shared_ptr<string> clusterName,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexVersion"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterName)) + string("/index-version"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexVersionResponse(callApi(params, req, runtime));
}

GetIndexVersionResponse Alibabacloud_Searchengine20211025::Client::getIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> clusterName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIndexVersionWithOptions(instanceId, clusterName, headers, runtime);
}

GetInstanceResponse Alibabacloud_Searchengine20211025::Client::getInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Searchengine20211025::Client::getInstance(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(instanceId, headers, runtime);
}

GetNodeConfigResponse Alibabacloud_Searchengine20211025::Client::getNodeConfigWithOptions(shared_ptr<string> instanceId,
                                                                                          shared_ptr<GetNodeConfigRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("clusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/node-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeConfigResponse(callApi(params, req, runtime));
}

GetNodeConfigResponse Alibabacloud_Searchengine20211025::Client::getNodeConfig(shared_ptr<string> instanceId, shared_ptr<GetNodeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getNodeConfigWithOptions(instanceId, request, headers, runtime);
}

GetSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::getSqlInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<string> database,
                                                                                            shared_ptr<string> sqlInstanceId,
                                                                                            shared_ptr<GetSqlInstanceRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->version)) {
    query->insert(pair<string, long>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSqlInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSqlInstanceResponse(callApi(params, req, runtime));
}

GetSqlInstanceResponse Alibabacloud_Searchengine20211025::Client::getSqlInstance(shared_ptr<string> instanceId,
                                                                                 shared_ptr<string> database,
                                                                                 shared_ptr<string> sqlInstanceId,
                                                                                 shared_ptr<GetSqlInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSqlInstanceWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

GetTableResponse Alibabacloud_Searchengine20211025::Client::getTableWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<string> tableName,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTable"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableResponse(callApi(params, req, runtime));
}

GetTableResponse Alibabacloud_Searchengine20211025::Client::getTable(shared_ptr<string> instanceId, shared_ptr<string> tableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTableWithOptions(instanceId, tableName, headers, runtime);
}

GetTableGenerationResponse Alibabacloud_Searchengine20211025::Client::getTableGenerationWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<string> tableName,
                                                                                                    shared_ptr<string> generationId,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableGeneration"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/index_versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(generationId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableGenerationResponse(callApi(params, req, runtime));
}

GetTableGenerationResponse Alibabacloud_Searchengine20211025::Client::getTableGeneration(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<string> generationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTableGenerationWithOptions(instanceId, tableName, generationId, headers, runtime);
}

ListAdvanceConfigDirResponse Alibabacloud_Searchengine20211025::Client::listAdvanceConfigDirWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> configName,
                                                                                                        shared_ptr<ListAdvanceConfigDirRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dirName)) {
    query->insert(pair<string, string>("dirName", *request->dirName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAdvanceConfigDir"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/dir"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAdvanceConfigDirResponse(callApi(params, req, runtime));
}

ListAdvanceConfigDirResponse Alibabacloud_Searchengine20211025::Client::listAdvanceConfigDir(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<ListAdvanceConfigDirRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAdvanceConfigDirWithOptions(instanceId, configName, request, headers, runtime);
}

ListAdvanceConfigsResponse Alibabacloud_Searchengine20211025::Client::listAdvanceConfigsWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<ListAdvanceConfigsRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    query->insert(pair<string, string>("dataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexName)) {
    query->insert(pair<string, string>("indexName", *request->indexName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newMode)) {
    query->insert(pair<string, bool>("newMode", *request->newMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAdvanceConfigs"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAdvanceConfigsResponse(callApi(params, req, runtime));
}

ListAdvanceConfigsResponse Alibabacloud_Searchengine20211025::Client::listAdvanceConfigs(shared_ptr<string> instanceId, shared_ptr<ListAdvanceConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAdvanceConfigsWithOptions(instanceId, request, headers, runtime);
}

ListAliasesResponse Alibabacloud_Searchengine20211025::Client::listAliasesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAliases"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/aliases"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliasesResponse(callApi(params, req, runtime));
}

ListAliasesResponse Alibabacloud_Searchengine20211025::Client::listAliases(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAliasesWithOptions(instanceId, headers, runtime);
}

ListClusterNamesResponse Alibabacloud_Searchengine20211025::Client::listClusterNamesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterNames"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/cluster-names"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterNamesResponse(callApi(params, req, runtime));
}

ListClusterNamesResponse Alibabacloud_Searchengine20211025::Client::listClusterNames() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterNamesWithOptions(headers, runtime);
}

ListClusterTasksResponse Alibabacloud_Searchengine20211025::Client::listClusterTasksWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterTasks"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/cluster-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterTasksResponse(callApi(params, req, runtime));
}

ListClusterTasksResponse Alibabacloud_Searchengine20211025::Client::listClusterTasks(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClusterTasksWithOptions(instanceId, headers, runtime);
}

ListClustersResponse Alibabacloud_Searchengine20211025::Client::listClustersWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusters"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClustersResponse(callApi(params, req, runtime));
}

ListClustersResponse Alibabacloud_Searchengine20211025::Client::listClusters(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listClustersWithOptions(instanceId, headers, runtime);
}

ListDataSourceSchemasResponse Alibabacloud_Searchengine20211025::Client::listDataSourceSchemasWithOptions(shared_ptr<string> instanceId,
                                                                                                          shared_ptr<string> dataSourceName,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceSchemas"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/schemas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceSchemasResponse(callApi(params, req, runtime));
}

ListDataSourceSchemasResponse Alibabacloud_Searchengine20211025::Client::listDataSourceSchemas(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourceSchemasWithOptions(instanceId, dataSourceName, headers, runtime);
}

ListDataSourceTasksResponse Alibabacloud_Searchengine20211025::Client::listDataSourceTasksWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceTasks"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-source-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceTasksResponse(callApi(params, req, runtime));
}

ListDataSourceTasksResponse Alibabacloud_Searchengine20211025::Client::listDataSourceTasks(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourceTasksWithOptions(instanceId, headers, runtime);
}

ListDataSourcesResponse Alibabacloud_Searchengine20211025::Client::listDataSourcesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSources"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourcesResponse(callApi(params, req, runtime));
}

ListDataSourcesResponse Alibabacloud_Searchengine20211025::Client::listDataSources(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataSourcesWithOptions(instanceId, headers, runtime);
}

ListDatabasesResponse Alibabacloud_Searchengine20211025::Client::listDatabasesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatabases"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatabasesResponse(callApi(params, req, runtime));
}

ListDatabasesResponse Alibabacloud_Searchengine20211025::Client::listDatabases(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDatabasesWithOptions(instanceId, headers, runtime);
}

ListDateSourceGenerationsResponse Alibabacloud_Searchengine20211025::Client::listDateSourceGenerationsWithOptions(shared_ptr<string> instanceId,
                                                                                                                  shared_ptr<string> dataSourceName,
                                                                                                                  shared_ptr<ListDateSourceGenerationsRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("domainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->validStatus)) {
    query->insert(pair<string, bool>("validStatus", *request->validStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDateSourceGenerations"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/generations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDateSourceGenerationsResponse(callApi(params, req, runtime));
}

ListDateSourceGenerationsResponse Alibabacloud_Searchengine20211025::Client::listDateSourceGenerations(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName, shared_ptr<ListDateSourceGenerationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDateSourceGenerationsWithOptions(instanceId, dataSourceName, request, headers, runtime);
}

ListIndexRecoverRecordsResponse Alibabacloud_Searchengine20211025::Client::listIndexRecoverRecordsWithOptions(shared_ptr<string> indexName,
                                                                                                              shared_ptr<string> instanceId,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexRecoverRecords"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/actions/list-recover-records"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexRecoverRecordsResponse(callApi(params, req, runtime));
}

ListIndexRecoverRecordsResponse Alibabacloud_Searchengine20211025::Client::listIndexRecoverRecords(shared_ptr<string> indexName, shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexRecoverRecordsWithOptions(indexName, instanceId, headers, runtime);
}

ListIndexesResponse Alibabacloud_Searchengine20211025::Client::listIndexesWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<ListIndexesRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->catalog)) {
    query->insert(pair<string, string>("catalog", *request->catalog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    query->insert(pair<string, string>("database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newMode)) {
    query->insert(pair<string, bool>("newMode", *request->newMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    query->insert(pair<string, string>("table", *request->table));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexes"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexesResponse(callApi(params, req, runtime));
}

ListIndexesResponse Alibabacloud_Searchengine20211025::Client::listIndexes(shared_ptr<string> instanceId, shared_ptr<ListIndexesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexesWithOptions(instanceId, request, headers, runtime);
}

ListInstanceSpecsResponse Alibabacloud_Searchengine20211025::Client::listInstanceSpecsWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<ListInstanceSpecsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceSpecs"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/specs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceSpecsResponse(callApi(params, req, runtime));
}

ListInstanceSpecsResponse Alibabacloud_Searchengine20211025::Client::listInstanceSpecs(shared_ptr<string> instanceId, shared_ptr<ListInstanceSpecsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceSpecsWithOptions(instanceId, request, headers, runtime);
}

ListInstancesResponse Alibabacloud_Searchengine20211025::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInstancesShrinkRequest> request = make_shared<ListInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListInstancesRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->catalog)) {
    query->insert(pair<string, string>("catalog", *request->catalog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("dataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    query->insert(pair<string, string>("database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edition)) {
    query->insert(pair<string, string>("edition", *request->edition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    query->insert(pair<string, string>("table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_Searchengine20211025::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListLogsResponse Alibabacloud_Searchengine20211025::Client::listLogsWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<ListLogsRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogs"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogsResponse(callApi(params, req, runtime));
}

ListLogsResponse Alibabacloud_Searchengine20211025::Client::listLogs(shared_ptr<string> instanceId, shared_ptr<ListLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogsWithOptions(instanceId, request, headers, runtime);
}

ListOnlineConfigsResponse Alibabacloud_Searchengine20211025::Client::listOnlineConfigsWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> nodeName,
                                                                                                  shared_ptr<ListOnlineConfigsRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("domain", *request->domain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOnlineConfigs"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/node/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodeName)) + string("/online-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOnlineConfigsResponse(callApi(params, req, runtime));
}

ListOnlineConfigsResponse Alibabacloud_Searchengine20211025::Client::listOnlineConfigs(shared_ptr<string> instanceId, shared_ptr<string> nodeName, shared_ptr<ListOnlineConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOnlineConfigsWithOptions(instanceId, nodeName, request, headers, runtime);
}

ListPausePolicysResponse Alibabacloud_Searchengine20211025::Client::listPausePolicysWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPausePolicys"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/pause-policies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPausePolicysResponse(callApi(params, req, runtime));
}

ListPausePolicysResponse Alibabacloud_Searchengine20211025::Client::listPausePolicys(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPausePolicysWithOptions(instanceId, headers, runtime);
}

ListPostQueryResultResponse Alibabacloud_Searchengine20211025::Client::listPostQueryResultWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<ListPostQueryResultRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPostQueryResult"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPostQueryResultResponse(callApi(params, req, runtime));
}

ListPostQueryResultResponse Alibabacloud_Searchengine20211025::Client::listPostQueryResult(shared_ptr<string> instanceId, shared_ptr<ListPostQueryResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPostQueryResultWithOptions(instanceId, request, headers, runtime);
}

ListQueryResultResponse Alibabacloud_Searchengine20211025::Client::listQueryResultWithOptions(shared_ptr<string> instanceId,
                                                                                              shared_ptr<ListQueryResultRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    query->insert(pair<string, string>("sql", *request->sql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListQueryResult"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListQueryResultResponse(callApi(params, req, runtime));
}

ListQueryResultResponse Alibabacloud_Searchengine20211025::Client::listQueryResult(shared_ptr<string> instanceId, shared_ptr<ListQueryResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listQueryResultWithOptions(instanceId, request, headers, runtime);
}

ListRestQueryResultResponse Alibabacloud_Searchengine20211025::Client::listRestQueryResultWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<ListRestQueryResultRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("address", *request->address));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexName)) {
    body->insert(pair<string, string>("indexName", *request->indexName));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->query)) {
    body->insert(pair<string, map<string, boost::any>>("query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRestQueryResult"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/rest-query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRestQueryResultResponse(callApi(params, req, runtime));
}

ListRestQueryResultResponse Alibabacloud_Searchengine20211025::Client::listRestQueryResult(shared_ptr<string> instanceId, shared_ptr<ListRestQueryResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listRestQueryResultWithOptions(instanceId, request, headers, runtime);
}

ListSchemasResponse Alibabacloud_Searchengine20211025::Client::listSchemasWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<ListSchemasRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("accessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessSecret)) {
    query->insert(pair<string, string>("accessSecret", *request->accessSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    query->insert(pair<string, string>("partition", *request->partition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    query->insert(pair<string, string>("table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSchemas"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/schemas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSchemasResponse(callApi(params, req, runtime));
}

ListSchemasResponse Alibabacloud_Searchengine20211025::Client::listSchemas(shared_ptr<string> instanceId, shared_ptr<ListSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSchemasWithOptions(instanceId, request, headers, runtime);
}

ListTableGenerationsResponse Alibabacloud_Searchengine20211025::Client::listTableGenerationsWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> tableName,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTableGenerations"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/index_versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTableGenerationsResponse(callApi(params, req, runtime));
}

ListTableGenerationsResponse Alibabacloud_Searchengine20211025::Client::listTableGenerations(shared_ptr<string> instanceId, shared_ptr<string> tableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTableGenerationsWithOptions(instanceId, tableName, headers, runtime);
}

ListTablesResponse Alibabacloud_Searchengine20211025::Client::listTablesWithOptions(shared_ptr<string> instanceId,
                                                                                    shared_ptr<ListTablesRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->newMode)) {
    query->insert(pair<string, bool>("newMode", *request->newMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTables"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTablesResponse(callApi(params, req, runtime));
}

ListTablesResponse Alibabacloud_Searchengine20211025::Client::listTables(shared_ptr<string> instanceId, shared_ptr<ListTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTablesWithOptions(instanceId, request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Searchengine20211025::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagResourcesShrinkRequest> request = make_shared<ListTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("resourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("resourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/resource-tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Searchengine20211025::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListTasksResponse Alibabacloud_Searchengine20211025::Client::listTasksWithOptions(shared_ptr<string> instanceId,
                                                                                  shared_ptr<ListTasksRequest> request,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_Searchengine20211025::Client::listTasks(shared_ptr<string> instanceId, shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTasksWithOptions(instanceId, request, headers, runtime);
}

ListVectorQueryResultResponse Alibabacloud_Searchengine20211025::Client::listVectorQueryResultWithOptions(shared_ptr<string> instanceId,
                                                                                                          shared_ptr<ListVectorQueryResultRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("queryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vectorQueryType)) {
    query->insert(pair<string, string>("vectorQueryType", *request->vectorQueryType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVectorQueryResult"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/vector-query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVectorQueryResultResponse(callApi(params, req, runtime));
}

ListVectorQueryResultResponse Alibabacloud_Searchengine20211025::Client::listVectorQueryResult(shared_ptr<string> instanceId, shared_ptr<ListVectorQueryResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVectorQueryResultWithOptions(instanceId, request, headers, runtime);
}

ModifyAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::modifyAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<string> configName,
                                                                                                      shared_ptr<ModifyAdvanceConfigRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    body->insert(pair<string, string>("contentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyAdvanceConfigRequestFiles>>(request->files)) {
    body->insert(pair<string, vector<ModifyAdvanceConfigRequestFiles>>("files", *request->files));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->updateTime)) {
    body->insert(pair<string, long>("updateTime", *request->updateTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAdvanceConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAdvanceConfigResponse(callApi(params, req, runtime));
}

ModifyAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::modifyAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<ModifyAdvanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAdvanceConfigWithOptions(instanceId, configName, request, headers, runtime);
}

ModifyAdvanceConfigFileResponse Alibabacloud_Searchengine20211025::Client::modifyAdvanceConfigFileWithOptions(shared_ptr<string> instanceId,
                                                                                                              shared_ptr<string> configName,
                                                                                                              shared_ptr<ModifyAdvanceConfigFileRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, VariablesValue>>(request->variables)) {
    body->insert(pair<string, map<string, VariablesValue>>("variables", *request->variables));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAdvanceConfigFile"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/file"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAdvanceConfigFileResponse(callApi(params, req, runtime));
}

ModifyAdvanceConfigFileResponse Alibabacloud_Searchengine20211025::Client::modifyAdvanceConfigFile(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<ModifyAdvanceConfigFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAdvanceConfigFileWithOptions(instanceId, configName, request, headers, runtime);
}

ModifyAliasResponse Alibabacloud_Searchengine20211025::Client::modifyAliasWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> alias,
                                                                                      shared_ptr<ModifyAliasRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->index)) {
    body->insert(pair<string, string>("index", *request->index));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAlias"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/aliases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(alias)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAliasResponse(callApi(params, req, runtime));
}

ModifyAliasResponse Alibabacloud_Searchengine20211025::Client::modifyAlias(shared_ptr<string> instanceId, shared_ptr<string> alias, shared_ptr<ModifyAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyAliasWithOptions(instanceId, alias, request, headers, runtime);
}

ModifyClusterDescResponse Alibabacloud_Searchengine20211025::Client::modifyClusterDescWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> clusterName,
                                                                                                  shared_ptr<ModifyClusterDescRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterDesc"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterName)) + string("/desc"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterDescResponse(callApi(params, req, runtime));
}

ModifyClusterDescResponse Alibabacloud_Searchengine20211025::Client::modifyClusterDesc(shared_ptr<string> instanceId, shared_ptr<string> clusterName, shared_ptr<ModifyClusterDescRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterDescWithOptions(instanceId, clusterName, request, headers, runtime);
}

ModifyClusterOfflineConfigResponse Alibabacloud_Searchengine20211025::Client::modifyClusterOfflineConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                                    shared_ptr<ModifyClusterOfflineConfigRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildMode)) {
    body->insert(pair<string, string>("buildMode", *request->buildMode));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, long>>(request->config)) {
    body->insert(pair<string, map<string, long>>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    body->insert(pair<string, string>("dataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("dataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataTimeSec)) {
    body->insert(pair<string, long>("dataTimeSec", *request->dataTimeSec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->generation)) {
    body->insert(pair<string, long>("generation", *request->generation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    body->insert(pair<string, string>("partition", *request->partition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushMode)) {
    body->insert(pair<string, string>("pushMode", *request->pushMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterOfflineConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/cluster-offline-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterOfflineConfigResponse(callApi(params, req, runtime));
}

ModifyClusterOfflineConfigResponse Alibabacloud_Searchengine20211025::Client::modifyClusterOfflineConfig(shared_ptr<string> instanceId, shared_ptr<ModifyClusterOfflineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterOfflineConfigWithOptions(instanceId, request, headers, runtime);
}

ModifyClusterOnlineConfigResponse Alibabacloud_Searchengine20211025::Client::modifyClusterOnlineConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                                  shared_ptr<ModifyClusterOnlineConfigRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->clusters)) {
    body->insert(pair<string, vector<string>>("clusters", *request->clusters));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, long>>(request->config)) {
    body->insert(pair<string, map<string, long>>("config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyClusterOnlineConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/cluster-online-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyClusterOnlineConfigResponse(callApi(params, req, runtime));
}

ModifyClusterOnlineConfigResponse Alibabacloud_Searchengine20211025::Client::modifyClusterOnlineConfig(shared_ptr<string> instanceId, shared_ptr<ModifyClusterOnlineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyClusterOnlineConfigWithOptions(instanceId, request, headers, runtime);
}

ModifyDataSourceDeployResponse Alibabacloud_Searchengine20211025::Client::modifyDataSourceDeployWithOptions(shared_ptr<string> instanceId,
                                                                                                            shared_ptr<string> deployName,
                                                                                                            shared_ptr<string> dataSourceName,
                                                                                                            shared_ptr<ModifyDataSourceDeployRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->generationId)) {
    query->insert(pair<string, long>("generationId", *request->generationId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoBuildIndex)) {
    body->insert(pair<string, bool>("autoBuildIndex", *request->autoBuildIndex));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyDataSourceDeployRequestExtend>(request->extend)) {
    body->insert(pair<string, ModifyDataSourceDeployRequestExtend>("extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyDataSourceDeployRequestProcessor>(request->processor)) {
    body->insert(pair<string, ModifyDataSourceDeployRequestProcessor>("processor", *request->processor));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyDataSourceDeployRequestStorage>(request->storage)) {
    body->insert(pair<string, ModifyDataSourceDeployRequestStorage>("storage", *request->storage));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyDataSourceDeployRequestSwift>(request->swift)) {
    body->insert(pair<string, ModifyDataSourceDeployRequestSwift>("swift", *request->swift));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDataSourceDeploy"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/deploys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDataSourceDeployResponse(callApi(params, req, runtime));
}

ModifyDataSourceDeployResponse Alibabacloud_Searchengine20211025::Client::modifyDataSourceDeploy(shared_ptr<string> instanceId,
                                                                                                 shared_ptr<string> deployName,
                                                                                                 shared_ptr<string> dataSourceName,
                                                                                                 shared_ptr<ModifyDataSourceDeployRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDataSourceDeployWithOptions(instanceId, deployName, dataSourceName, request, headers, runtime);
}

ModifyFileResponse Alibabacloud_Searchengine20211025::Client::modifyFileWithOptions(shared_ptr<string> instanceId,
                                                                                    shared_ptr<string> indexName,
                                                                                    shared_ptr<string> versionName,
                                                                                    shared_ptr<ModifyFileRequest> request,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("fileName", *request->fileName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->partition)) {
    body->insert(pair<string, long>("partition", *request->partition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyFile"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionName)) + string("/file"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyFileResponse(callApi(params, req, runtime));
}

ModifyFileResponse Alibabacloud_Searchengine20211025::Client::modifyFile(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> indexName,
                                                                         shared_ptr<string> versionName,
                                                                         shared_ptr<ModifyFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyFileWithOptions(instanceId, indexName, versionName, request, headers, runtime);
}

ModifyIndexResponse Alibabacloud_Searchengine20211025::Client::modifyIndexWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> indexName,
                                                                                      shared_ptr<ModifyIndexRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->buildParallelNum)) {
    body->insert(pair<string, long>("buildParallelNum", *request->buildParallelNum));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, map<string, boost::any>>>(request->cluster)) {
    body->insert(pair<string, map<string, map<string, boost::any>>>("cluster", *request->cluster));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterConfigName)) {
    body->insert(pair<string, string>("clusterConfigName", *request->clusterConfigName));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, ConfigValue>>(request->config)) {
    body->insert(pair<string, map<string, ConfigValue>>("config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    body->insert(pair<string, string>("dataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyIndexRequestDataSourceInfo>(request->dataSourceInfo)) {
    body->insert(pair<string, ModifyIndexRequestDataSourceInfo>("dataSourceInfo", *request->dataSourceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    body->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->extend)) {
    body->insert(pair<string, map<string, boost::any>>("extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mergeParallelNum)) {
    body->insert(pair<string, long>("mergeParallelNum", *request->mergeParallelNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->partition)) {
    body->insert(pair<string, long>("partition", *request->partition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushMode)) {
    body->insert(pair<string, string>("pushMode", *request->pushMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIndexResponse(callApi(params, req, runtime));
}

ModifyIndexResponse Alibabacloud_Searchengine20211025::Client::modifyIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<ModifyIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyIndexWithOptions(instanceId, indexName, request, headers, runtime);
}

ModifyIndexOnlineStrategyResponse Alibabacloud_Searchengine20211025::Client::modifyIndexOnlineStrategyWithOptions(shared_ptr<string> instanceId,
                                                                                                                  shared_ptr<string> dataSourceName,
                                                                                                                  shared_ptr<string> deployName,
                                                                                                                  shared_ptr<string> indexName,
                                                                                                                  shared_ptr<ModifyIndexOnlineStrategyRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->changeRate)) {
    body->insert(pair<string, long>("changeRate", *request->changeRate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIndexOnlineStrategy"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/deploys/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deployName)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/online-strategy"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIndexOnlineStrategyResponse(callApi(params, req, runtime));
}

ModifyIndexOnlineStrategyResponse Alibabacloud_Searchengine20211025::Client::modifyIndexOnlineStrategy(shared_ptr<string> instanceId,
                                                                                                       shared_ptr<string> dataSourceName,
                                                                                                       shared_ptr<string> deployName,
                                                                                                       shared_ptr<string> indexName,
                                                                                                       shared_ptr<ModifyIndexOnlineStrategyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyIndexOnlineStrategyWithOptions(instanceId, dataSourceName, deployName, indexName, request, headers, runtime);
}

ModifyIndexPartitionResponse Alibabacloud_Searchengine20211025::Client::modifyIndexPartitionWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<ModifyIndexPartitionRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    body->insert(pair<string, string>("dataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("domainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->generation)) {
    body->insert(pair<string, long>("generation", *request->generation));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyIndexPartitionRequestIndexInfos>>(request->indexInfos)) {
    body->insert(pair<string, vector<ModifyIndexPartitionRequestIndexInfos>>("indexInfos", *request->indexInfos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIndexPartition"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/index-partition"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIndexPartitionResponse(callApi(params, req, runtime));
}

ModifyIndexPartitionResponse Alibabacloud_Searchengine20211025::Client::modifyIndexPartition(shared_ptr<string> instanceId, shared_ptr<ModifyIndexPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyIndexPartitionWithOptions(instanceId, request, headers, runtime);
}

ModifyIndexVersionResponse Alibabacloud_Searchengine20211025::Client::modifyIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<string> clusterName,
                                                                                                    shared_ptr<ModifyIndexVersionRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<ModifyIndexVersionRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIndexVersion"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterName)) + string("/index-version"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIndexVersionResponse(callApi(params, req, runtime));
}

ModifyIndexVersionResponse Alibabacloud_Searchengine20211025::Client::modifyIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> clusterName, shared_ptr<ModifyIndexVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyIndexVersionWithOptions(instanceId, clusterName, request, headers, runtime);
}

ModifyNodeConfigResponse Alibabacloud_Searchengine20211025::Client::modifyNodeConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<ModifyNodeConfigRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("clusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    query->insert(pair<string, string>("dataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->active)) {
    body->insert(pair<string, bool>("active", *request->active));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataDuplicateNumber)) {
    body->insert(pair<string, long>("dataDuplicateNumber", *request->dataDuplicateNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataFragmentNumber)) {
    body->insert(pair<string, long>("dataFragmentNumber", *request->dataFragmentNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowRatio)) {
    body->insert(pair<string, long>("flowRatio", *request->flowRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minServicePercent)) {
    body->insert(pair<string, long>("minServicePercent", *request->minServicePercent));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->published)) {
    body->insert(pair<string, bool>("published", *request->published));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodeConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/node-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNodeConfigResponse(callApi(params, req, runtime));
}

ModifyNodeConfigResponse Alibabacloud_Searchengine20211025::Client::modifyNodeConfig(shared_ptr<string> instanceId, shared_ptr<ModifyNodeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyNodeConfigWithOptions(instanceId, request, headers, runtime);
}

ModifyOnlineConfigResponse Alibabacloud_Searchengine20211025::Client::modifyOnlineConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                    shared_ptr<string> nodeName,
                                                                                                    shared_ptr<string> indexName,
                                                                                                    shared_ptr<ModifyOnlineConfigRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->body)) {
    body->insert(pair<string, map<string, string>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyOnlineConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/node/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodeName)) + string("/online-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyOnlineConfigResponse(callApi(params, req, runtime));
}

ModifyOnlineConfigResponse Alibabacloud_Searchengine20211025::Client::modifyOnlineConfig(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> nodeName,
                                                                                         shared_ptr<string> indexName,
                                                                                         shared_ptr<ModifyOnlineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyOnlineConfigWithOptions(instanceId, nodeName, indexName, request, headers, runtime);
}

ModifyPasswordResponse Alibabacloud_Searchengine20211025::Client::modifyPasswordWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<ModifyPasswordRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPassword"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/password"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPasswordResponse(callApi(params, req, runtime));
}

ModifyPasswordResponse Alibabacloud_Searchengine20211025::Client::modifyPassword(shared_ptr<string> instanceId, shared_ptr<ModifyPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyPasswordWithOptions(instanceId, request, headers, runtime);
}

ModifyPausePolicyResponse Alibabacloud_Searchengine20211025::Client::modifyPausePolicyWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<ModifyPausePolicyRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, BodyValue>>(request->body)) {
    body->insert(pair<string, map<string, BodyValue>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPausePolicy"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/pause-policies"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPausePolicyResponse(callApi(params, req, runtime));
}

ModifyPausePolicyResponse Alibabacloud_Searchengine20211025::Client::modifyPausePolicy(shared_ptr<string> instanceId, shared_ptr<ModifyPausePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyPausePolicyWithOptions(instanceId, request, headers, runtime);
}

ModifyPublicUrlIpListResponse Alibabacloud_Searchengine20211025::Client::modifyPublicUrlIpListWithOptions(shared_ptr<string> instanceId,
                                                                                                          shared_ptr<ModifyPublicUrlIpListRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->body)) {
    body->insert(pair<string, map<string, string>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPublicUrlIpList"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/public-url-ip-list"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPublicUrlIpListResponse(callApi(params, req, runtime));
}

ModifyPublicUrlIpListResponse Alibabacloud_Searchengine20211025::Client::modifyPublicUrlIpList(shared_ptr<string> instanceId, shared_ptr<ModifyPublicUrlIpListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyPublicUrlIpListWithOptions(instanceId, request, headers, runtime);
}

ModifyTableResponse Alibabacloud_Searchengine20211025::Client::modifyTableWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> tableName,
                                                                                      shared_ptr<ModifyTableRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyTableRequestDataProcessConfig>>(request->dataProcessConfig)) {
    body->insert(pair<string, vector<ModifyTableRequestDataProcessConfig>>("dataProcessConfig", *request->dataProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyTableRequestDataSource>(request->dataSource)) {
    body->insert(pair<string, ModifyTableRequestDataSource>("dataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->fieldSchema)) {
    body->insert(pair<string, map<string, string>>("fieldSchema", *request->fieldSchema));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->partitionCount)) {
    body->insert(pair<string, long>("partitionCount", *request->partitionCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKey)) {
    body->insert(pair<string, string>("primaryKey", *request->primaryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rawSchema)) {
    body->insert(pair<string, string>("rawSchema", *request->rawSchema));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyTableRequestVectorIndex>>(request->vectorIndex)) {
    body->insert(pair<string, vector<ModifyTableRequestVectorIndex>>("vectorIndex", *request->vectorIndex));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTable"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTableResponse(callApi(params, req, runtime));
}

ModifyTableResponse Alibabacloud_Searchengine20211025::Client::modifyTable(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<ModifyTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyTableWithOptions(instanceId, tableName, request, headers, runtime);
}

PublishAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::publishAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> configName,
                                                                                                        shared_ptr<PublishAdvanceConfigRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PublishAdvanceConfigRequestFiles>>(request->files)) {
    body->insert(pair<string, vector<PublishAdvanceConfigRequestFiles>>("files", *request->files));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishAdvanceConfig"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/advanced-configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configName)) + string("/actions/publish"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishAdvanceConfigResponse(callApi(params, req, runtime));
}

PublishAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::publishAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<PublishAdvanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishAdvanceConfigWithOptions(instanceId, configName, request, headers, runtime);
}

PublishIndexVersionResponse Alibabacloud_Searchengine20211025::Client::publishIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<string> indexName,
                                                                                                      shared_ptr<PublishIndexVersionRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->body)) {
    body->insert(pair<string, map<string, boost::any>>("body", *request->body));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishIndexVersion"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/actions/publish"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishIndexVersionResponse(callApi(params, req, runtime));
}

PublishIndexVersionResponse Alibabacloud_Searchengine20211025::Client::publishIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<PublishIndexVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishIndexVersionWithOptions(instanceId, indexName, request, headers, runtime);
}

PushDocumentsResponse Alibabacloud_Searchengine20211025::Client::pushDocumentsWithOptions(shared_ptr<string> instanceId,
                                                                                          shared_ptr<string> dataSourceName,
                                                                                          shared_ptr<PushDocumentsRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pkField)) {
    query->insert(pair<string, string>("pkField", *request->pkField));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushDocuments"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)) + string("/actions/bulk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushDocumentsResponse(callApi(params, req, runtime));
}

PushDocumentsResponse Alibabacloud_Searchengine20211025::Client::pushDocuments(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName, shared_ptr<PushDocumentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushDocumentsWithOptions(instanceId, dataSourceName, request, headers, runtime);
}

RecoverIndexResponse Alibabacloud_Searchengine20211025::Client::recoverIndexWithOptions(shared_ptr<string> instanceId,
                                                                                        shared_ptr<RecoverIndexRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->buildDeployId)) {
    body->insert(pair<string, long>("buildDeployId", *request->buildDeployId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    body->insert(pair<string, string>("dataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generation)) {
    body->insert(pair<string, string>("generation", *request->generation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexName)) {
    body->insert(pair<string, string>("indexName", *request->indexName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoverIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/recover-index"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoverIndexResponse(callApi(params, req, runtime));
}

RecoverIndexResponse Alibabacloud_Searchengine20211025::Client::recoverIndex(shared_ptr<string> instanceId, shared_ptr<RecoverIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recoverIndexWithOptions(instanceId, request, headers, runtime);
}

ReindexResponse Alibabacloud_Searchengine20211025::Client::reindexWithOptions(shared_ptr<string> instanceId,
                                                                              shared_ptr<string> tableName,
                                                                              shared_ptr<ReindexRequest> request,
                                                                              shared_ptr<map<string, string>> headers,
                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataTimeSec)) {
    body->insert(pair<string, long>("dataTimeSec", *request->dataTimeSec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossDataPath)) {
    body->insert(pair<string, string>("ossDataPath", *request->ossDataPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    body->insert(pair<string, string>("partition", *request->partition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Reindex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/reindex"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReindexResponse(callApi(params, req, runtime));
}

ReindexResponse Alibabacloud_Searchengine20211025::Client::reindex(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<ReindexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reindexWithOptions(instanceId, tableName, request, headers, runtime);
}

RemoveClusterResponse Alibabacloud_Searchengine20211025::Client::removeClusterWithOptions(shared_ptr<string> instanceId,
                                                                                          shared_ptr<string> clusterName,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveCluster"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(clusterName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveClusterResponse(callApi(params, req, runtime));
}

RemoveClusterResponse Alibabacloud_Searchengine20211025::Client::removeCluster(shared_ptr<string> instanceId, shared_ptr<string> clusterName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeClusterWithOptions(instanceId, clusterName, headers, runtime);
}

RenameFolderResponse Alibabacloud_Searchengine20211025::Client::renameFolderWithOptions(shared_ptr<string> instanceId,
                                                                                        shared_ptr<string> database,
                                                                                        shared_ptr<string> folderId,
                                                                                        shared_ptr<RenameFolderRequest> request,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameFolder"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/folders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(folderId)) + string("/name"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameFolderResponse(callApi(params, req, runtime));
}

RenameFolderResponse Alibabacloud_Searchengine20211025::Client::renameFolder(shared_ptr<string> instanceId,
                                                                             shared_ptr<string> database,
                                                                             shared_ptr<string> folderId,
                                                                             shared_ptr<RenameFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renameFolderWithOptions(instanceId, database, folderId, request, headers, runtime);
}

StartIndexResponse Alibabacloud_Searchengine20211025::Client::startIndexWithOptions(shared_ptr<string> instanceId,
                                                                                    shared_ptr<string> indexName,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/startIndex"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartIndexResponse(callApi(params, req, runtime));
}

StartIndexResponse Alibabacloud_Searchengine20211025::Client::startIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startIndexWithOptions(instanceId, indexName, headers, runtime);
}

StopIndexResponse Alibabacloud_Searchengine20211025::Client::stopIndexWithOptions(shared_ptr<string> instanceId,
                                                                                  shared_ptr<string> indexName,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopIndex"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/indexes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(indexName)) + string("/stopIndex"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopIndexResponse(callApi(params, req, runtime));
}

StopIndexResponse Alibabacloud_Searchengine20211025::Client::stopIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopIndexWithOptions(instanceId, indexName, headers, runtime);
}

StopTaskResponse Alibabacloud_Searchengine20211025::Client::stopTaskWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<string> fsmId,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTask"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/stop-task/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(fsmId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTaskResponse(callApi(params, req, runtime));
}

StopTaskResponse Alibabacloud_Searchengine20211025::Client::stopTask(shared_ptr<string> instanceId, shared_ptr<string> fsmId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTaskWithOptions(instanceId, fsmId, headers, runtime);
}

TagResourcesResponse Alibabacloud_Searchengine20211025::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<TagResourcesRequestTag>>("tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/resource-tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Searchengine20211025::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Searchengine20211025::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UntagResourcesShrinkRequest> request = make_shared<UntagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("resourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKey)) {
    request->tagKeyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKey, make_shared<string>("tagKey"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("all", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("resourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyShrink)) {
    query->insert(pair<string, string>("tagKey", *request->tagKeyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/resource-tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Searchengine20211025::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateInstanceResponse Alibabacloud_Searchengine20211025::Client::updateInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<UpdateInstanceRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateInstanceRequestComponents>>(request->components)) {
    body->insert(pair<string, vector<UpdateInstanceRequestComponents>>("components", *request->components));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    body->insert(pair<string, string>("orderType", *request->orderType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstance"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceResponse Alibabacloud_Searchengine20211025::Client::updateInstance(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceWithOptions(instanceId, request, headers, runtime);
}

UpdateSqlInstanceContentResponse Alibabacloud_Searchengine20211025::Client::updateSqlInstanceContentWithOptions(shared_ptr<string> instanceId,
                                                                                                                shared_ptr<string> database,
                                                                                                                shared_ptr<string> sqlInstanceId,
                                                                                                                shared_ptr<UpdateSqlInstanceContentRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSqlInstanceContent"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)) + string("/content"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSqlInstanceContentResponse(callApi(params, req, runtime));
}

UpdateSqlInstanceContentResponse Alibabacloud_Searchengine20211025::Client::updateSqlInstanceContent(shared_ptr<string> instanceId,
                                                                                                     shared_ptr<string> database,
                                                                                                     shared_ptr<string> sqlInstanceId,
                                                                                                     shared_ptr<UpdateSqlInstanceContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSqlInstanceContentWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

UpdateSqlInstanceNameResponse Alibabacloud_Searchengine20211025::Client::updateSqlInstanceNameWithOptions(shared_ptr<string> instanceId,
                                                                                                          shared_ptr<string> database,
                                                                                                          shared_ptr<string> sqlInstanceId,
                                                                                                          shared_ptr<UpdateSqlInstanceNameRequest> request,
                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSqlInstanceName"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)) + string("/name"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSqlInstanceNameResponse(callApi(params, req, runtime));
}

UpdateSqlInstanceNameResponse Alibabacloud_Searchengine20211025::Client::updateSqlInstanceName(shared_ptr<string> instanceId,
                                                                                               shared_ptr<string> database,
                                                                                               shared_ptr<string> sqlInstanceId,
                                                                                               shared_ptr<UpdateSqlInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSqlInstanceNameWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

UpdateSqlInstanceParamsResponse Alibabacloud_Searchengine20211025::Client::updateSqlInstanceParamsWithOptions(shared_ptr<string> instanceId,
                                                                                                              shared_ptr<string> database,
                                                                                                              shared_ptr<string> sqlInstanceId,
                                                                                                              shared_ptr<UpdateSqlInstanceParamsRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->combineParam)) {
    body->insert(pair<string, map<string, boost::any>>("combineParam", *request->combineParam));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->dynamicParam)) {
    body->insert(pair<string, map<string, boost::any>>("dynamicParam", *request->dynamicParam));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->kvpair)) {
    body->insert(pair<string, map<string, boost::any>>("kvpair", *request->kvpair));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->params)) {
    body->insert(pair<string, map<string, boost::any>>("params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->staticParam)) {
    body->insert(pair<string, map<string, boost::any>>("staticParam", *request->staticParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSqlInstanceParams"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/sql-studio/databases/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(database)) + string("/sql-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sqlInstanceId)) + string("/params"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSqlInstanceParamsResponse(callApi(params, req, runtime));
}

UpdateSqlInstanceParamsResponse Alibabacloud_Searchengine20211025::Client::updateSqlInstanceParams(shared_ptr<string> instanceId,
                                                                                                   shared_ptr<string> database,
                                                                                                   shared_ptr<string> sqlInstanceId,
                                                                                                   shared_ptr<UpdateSqlInstanceParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSqlInstanceParamsWithOptions(instanceId, database, sqlInstanceId, request, headers, runtime);
}

