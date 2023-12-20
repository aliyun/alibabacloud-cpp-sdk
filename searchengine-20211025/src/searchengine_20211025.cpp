// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/searchengine_20211025.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
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

ListIndexesResponse Alibabacloud_Searchengine20211025::Client::listIndexesWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<ListIndexesRequest> request,
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

ModifyDataSourceResponse Alibabacloud_Searchengine20211025::Client::modifyDataSourceWithOptions(shared_ptr<string> instanceId,
                                                                                                shared_ptr<string> dataSourceName,
                                                                                                shared_ptr<ModifyDataSourceRequest> request,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
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
    {"action", boost::any(string("ModifyDataSource"))},
    {"version", boost::any(string("2021-10-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ha3/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/data-sources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataSourceName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDataSourceResponse(callApi(params, req, runtime));
}

ModifyDataSourceResponse Alibabacloud_Searchengine20211025::Client::modifyDataSource(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName, shared_ptr<ModifyDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDataSourceWithOptions(instanceId, dataSourceName, request, headers, runtime);
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

PublishAdvanceConfigResponse Alibabacloud_Searchengine20211025::Client::publishAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> configName,
                                                                                                        shared_ptr<PublishAdvanceConfigRequest> request,
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

