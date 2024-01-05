// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/igraph_20210621.hpp>
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

using namespace Alibabacloud_Igraph20210621;

Alibabacloud_Igraph20210621::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("igraph"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Igraph20210621::Client::getEndpoint(shared_ptr<string> productId,
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

CreateGraphResponse Alibabacloud_Igraph20210621::Client::createGraphWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<string> graphName,
                                                                                shared_ptr<CreateGraphRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGraph"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGraphResponse(callApi(params, req, runtime));
}

CreateGraphResponse Alibabacloud_Igraph20210621::Client::createGraph(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<CreateGraphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGraphWithOptions(instanceId, graphName, request, headers, runtime);
}

CreateGraphSchemaResponse Alibabacloud_Igraph20210621::Client::createGraphSchemaWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<string> graphName,
                                                                                            shared_ptr<CreateGraphSchemaRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGraphSchema"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/schemas"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGraphSchemaResponse(callApi(params, req, runtime));
}

CreateGraphSchemaResponse Alibabacloud_Igraph20210621::Client::createGraphSchema(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<CreateGraphSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGraphSchemaWithOptions(instanceId, graphName, request, headers, runtime);
}

DeleteGraphResponse Alibabacloud_Igraph20210621::Client::deleteGraphWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<string> graphName,
                                                                                shared_ptr<DeleteGraphRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGraph"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGraphResponse(callApi(params, req, runtime));
}

DeleteGraphResponse Alibabacloud_Igraph20210621::Client::deleteGraph(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<DeleteGraphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGraphWithOptions(instanceId, graphName, request, headers, runtime);
}

GetGraphResponse Alibabacloud_Igraph20210621::Client::getGraphWithOptions(shared_ptr<string> instanceId,
                                                                          shared_ptr<string> graphName,
                                                                          shared_ptr<GetGraphRequest> request,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGraph"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGraphResponse(callApi(params, req, runtime));
}

GetGraphResponse Alibabacloud_Igraph20210621::Client::getGraph(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<GetGraphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGraphWithOptions(instanceId, graphName, request, headers, runtime);
}

GetGraphSchemaResponse Alibabacloud_Igraph20210621::Client::getGraphSchemaWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> graphName,
                                                                                      shared_ptr<string> graphSchemaName,
                                                                                      shared_ptr<GetGraphSchemaRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGraphSchema"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/schemas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphSchemaName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGraphSchemaResponse(callApi(params, req, runtime));
}

GetGraphSchemaResponse Alibabacloud_Igraph20210621::Client::getGraphSchema(shared_ptr<string> instanceId,
                                                                           shared_ptr<string> graphName,
                                                                           shared_ptr<string> graphSchemaName,
                                                                           shared_ptr<GetGraphSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGraphSchemaWithOptions(instanceId, graphName, graphSchemaName, request, headers, runtime);
}

GetIgraphLabelBackFlowResponse Alibabacloud_Igraph20210621::Client::getIgraphLabelBackFlowWithOptions(shared_ptr<string> graphName,
                                                                                                      shared_ptr<string> instanceId,
                                                                                                      shared_ptr<string> labelName,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIgraphLabelBackFlow"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/label/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(labelName)) + string("/backflow"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIgraphLabelBackFlowResponse(callApi(params, req, runtime));
}

GetIgraphLabelBackFlowResponse Alibabacloud_Igraph20210621::Client::getIgraphLabelBackFlow(shared_ptr<string> graphName, shared_ptr<string> instanceId, shared_ptr<string> labelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIgraphLabelBackFlowWithOptions(graphName, instanceId, labelName, headers, runtime);
}

GetIgraphLabelLastBackflowResponse Alibabacloud_Igraph20210621::Client::getIgraphLabelLastBackflowWithOptions(shared_ptr<string> instanceId,
                                                                                                              shared_ptr<string> graphName,
                                                                                                              shared_ptr<string> labelName,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIgraphLabelLastBackflow"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/label/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(labelName)) + string("/backflow/last"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIgraphLabelLastBackflowResponse(callApi(params, req, runtime));
}

GetIgraphLabelLastBackflowResponse Alibabacloud_Igraph20210621::Client::getIgraphLabelLastBackflow(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<string> labelName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIgraphLabelLastBackflowWithOptions(instanceId, graphName, labelName, headers, runtime);
}

GetIgraphTableDetailResponse Alibabacloud_Igraph20210621::Client::getIgraphTableDetailWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> graphName,
                                                                                                  shared_ptr<string> tableName,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIgraphTableDetail"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIgraphTableDetailResponse(callApi(params, req, runtime));
}

GetIgraphTableDetailResponse Alibabacloud_Igraph20210621::Client::getIgraphTableDetail(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<string> tableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIgraphTableDetailWithOptions(instanceId, graphName, tableName, headers, runtime);
}

GetIgraphTablesBackFlowResponse Alibabacloud_Igraph20210621::Client::getIgraphTablesBackFlowWithOptions(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> graphName,
                                                                                                        shared_ptr<GetIgraphTablesBackFlowRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIgraphTablesBackFlow"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/backflows"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIgraphTablesBackFlowResponse(callApi(params, req, runtime));
}

GetIgraphTablesBackFlowResponse Alibabacloud_Igraph20210621::Client::getIgraphTablesBackFlow(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<GetIgraphTablesBackFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIgraphTablesBackFlowWithOptions(instanceId, graphName, request, headers, runtime);
}

GetInstanceResponse Alibabacloud_Igraph20210621::Client::getInstanceWithOptions(shared_ptr<string> instanceId,
                                                                                shared_ptr<GetInstanceRequest> request,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Igraph20210621::Client::getInstance(shared_ptr<string> instanceId, shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(instanceId, request, headers, runtime);
}

GetInstanceDigestResponse Alibabacloud_Igraph20210621::Client::getInstanceDigestWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<GetInstanceDigestRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceDigest"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/digest"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceDigestResponse(callApi(params, req, runtime));
}

GetInstanceDigestResponse Alibabacloud_Igraph20210621::Client::getInstanceDigest(shared_ptr<string> instanceId, shared_ptr<GetInstanceDigestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceDigestWithOptions(instanceId, request, headers, runtime);
}

GetTableDetailResponse Alibabacloud_Igraph20210621::Client::getTableDetailWithOptions(shared_ptr<string> instanceId,
                                                                                      shared_ptr<string> tableName,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableDetail"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableDetailResponse(callApi(params, req, runtime));
}

GetTableDetailResponse Alibabacloud_Igraph20210621::Client::getTableDetail(shared_ptr<string> instanceId, shared_ptr<string> tableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTableDetailWithOptions(instanceId, tableName, headers, runtime);
}

GetTableLastBackflowResponse Alibabacloud_Igraph20210621::Client::getTableLastBackflowWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> tableName,
                                                                                                  shared_ptr<GetTableLastBackflowRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->partition)) {
    query->insert(pair<string, string>("partition", *request->partition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableLastBackflow"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/table/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(tableName)) + string("/backflow/last"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableLastBackflowResponse(callApi(params, req, runtime));
}

GetTableLastBackflowResponse Alibabacloud_Igraph20210621::Client::getTableLastBackflow(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<GetTableLastBackflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTableLastBackflowWithOptions(instanceId, tableName, request, headers, runtime);
}

ListDemoGraphSchemasResponse Alibabacloud_Igraph20210621::Client::listDemoGraphSchemasWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDemoGraphSchemas"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/demo/schemas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDemoGraphSchemasResponse(callApi(params, req, runtime));
}

ListDemoGraphSchemasResponse Alibabacloud_Igraph20210621::Client::listDemoGraphSchemas() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDemoGraphSchemasWithOptions(headers, runtime);
}

ListGraphSchemasResponse Alibabacloud_Igraph20210621::Client::listGraphSchemasWithOptions(shared_ptr<string> instanceId,
                                                                                          shared_ptr<string> graphName,
                                                                                          shared_ptr<ListGraphSchemasRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageLimit)) {
    query->insert(pair<string, string>("pageLimit", *request->pageLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageStart)) {
    query->insert(pair<string, string>("pageStart", *request->pageStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnSpec)) {
    query->insert(pair<string, string>("returnSpec", *request->returnSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaStatus)) {
    query->insert(pair<string, string>("schemaStatus", *request->schemaStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGraphSchemas"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/schemas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGraphSchemasResponse(callApi(params, req, runtime));
}

ListGraphSchemasResponse Alibabacloud_Igraph20210621::Client::listGraphSchemas(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<ListGraphSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGraphSchemasWithOptions(instanceId, graphName, request, headers, runtime);
}

ListIgraphInstancesResponse Alibabacloud_Igraph20210621::Client::listIgraphInstancesWithOptions(shared_ptr<ListIgraphInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListIgraphInstancesShrinkRequest> request = make_shared<ListIgraphInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListIgraphInstancesRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pageContinue)) {
    query->insert(pair<string, string>("pageContinue", *request->pageContinue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageLimit)) {
    query->insert(pair<string, string>("pageLimit", *request->pageLimit));
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
    {"action", boost::any(string("ListIgraphInstances"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIgraphInstancesResponse(callApi(params, req, runtime));
}

ListIgraphInstancesResponse Alibabacloud_Igraph20210621::Client::listIgraphInstances(shared_ptr<ListIgraphInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIgraphInstancesWithOptions(request, headers, runtime);
}

ListInstanceGraphResponse Alibabacloud_Igraph20210621::Client::listInstanceGraphWithOptions(shared_ptr<string> instanceId,
                                                                                            shared_ptr<ListInstanceGraphRequest> request,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceGraph"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceGraphResponse(callApi(params, req, runtime));
}

ListInstanceGraphResponse Alibabacloud_Igraph20210621::Client::listInstanceGraph(shared_ptr<string> instanceId, shared_ptr<ListInstanceGraphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceGraphWithOptions(instanceId, request, headers, runtime);
}

PublishGraphSchemaResponse Alibabacloud_Igraph20210621::Client::publishGraphSchemaWithOptions(shared_ptr<string> instanceId,
                                                                                              shared_ptr<string> graphName,
                                                                                              shared_ptr<string> graphSchemaName,
                                                                                              shared_ptr<PublishGraphSchemaRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishGraphSchema"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/schemas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphSchemaName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishGraphSchemaResponse(callApi(params, req, runtime));
}

PublishGraphSchemaResponse Alibabacloud_Igraph20210621::Client::publishGraphSchema(shared_ptr<string> instanceId,
                                                                                   shared_ptr<string> graphName,
                                                                                   shared_ptr<string> graphSchemaName,
                                                                                   shared_ptr<PublishGraphSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishGraphSchemaWithOptions(instanceId, graphName, graphSchemaName, request, headers, runtime);
}

SearchIgraphDemoResponse Alibabacloud_Igraph20210621::Client::searchIgraphDemoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchIgraphDemo"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/tool/actions/search_demo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchIgraphDemoResponse(callApi(params, req, runtime));
}

SearchIgraphDemoResponse Alibabacloud_Igraph20210621::Client::searchIgraphDemo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return searchIgraphDemoWithOptions(headers, runtime);
}

TriggerLabelBackflowResponse Alibabacloud_Igraph20210621::Client::triggerLabelBackflowWithOptions(shared_ptr<string> instanceId,
                                                                                                  shared_ptr<string> graphName,
                                                                                                  shared_ptr<string> labelName,
                                                                                                  shared_ptr<TriggerLabelBackflowRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->odpsPartition)) {
    query->insert(pair<string, string>("odpsPartition", *request->odpsPartition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timestamp)) {
    query->insert(pair<string, string>("timestamp", *request->timestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerLabelBackflow"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/label/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(labelName)) + string("/backflow"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerLabelBackflowResponse(callApi(params, req, runtime));
}

TriggerLabelBackflowResponse Alibabacloud_Igraph20210621::Client::triggerLabelBackflow(shared_ptr<string> instanceId,
                                                                                       shared_ptr<string> graphName,
                                                                                       shared_ptr<string> labelName,
                                                                                       shared_ptr<TriggerLabelBackflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return triggerLabelBackflowWithOptions(instanceId, graphName, labelName, request, headers, runtime);
}

UpdateGraphDescriptionResponse Alibabacloud_Igraph20210621::Client::updateGraphDescriptionWithOptions(shared_ptr<string> instanceId,
                                                                                                      shared_ptr<string> graphName,
                                                                                                      shared_ptr<UpdateGraphDescriptionRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGraphDescription"))},
    {"version", boost::any(string("2021-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/igraph/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/graphs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(graphName)) + string("/description"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGraphDescriptionResponse(callApi(params, req, runtime));
}

UpdateGraphDescriptionResponse Alibabacloud_Igraph20210621::Client::updateGraphDescription(shared_ptr<string> instanceId, shared_ptr<string> graphName, shared_ptr<UpdateGraphDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGraphDescriptionWithOptions(instanceId, graphName, request, headers, runtime);
}

