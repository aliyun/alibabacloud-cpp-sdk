// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/adp_20210720.hpp>
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

using namespace Alibabacloud_Adp20210720;

Alibabacloud_Adp20210720::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("adp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Adp20210720::Client::getEndpoint(shared_ptr<string> productId,
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

AddEnvironmentNodesResponse Alibabacloud_Adp20210720::Client::addEnvironmentNodesWithOptions(shared_ptr<string> uid,
                                                                                             shared_ptr<AddEnvironmentNodesRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationDisk)) {
    body->insert(pair<string, string>("applicationDisk", *request->applicationDisk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cpu)) {
    body->insert(pair<string, long>("cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddEnvironmentNodesRequestDataDisk>>(request->dataDisk)) {
    body->insert(pair<string, vector<AddEnvironmentNodesRequestDataDisk>>("dataDisk", *request->dataDisk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->etcdDisk)) {
    body->insert(pair<string, string>("etcdDisk", *request->etcdDisk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostName)) {
    body->insert(pair<string, string>("hostName", *request->hostName));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->labels)) {
    body->insert(pair<string, map<string, boost::any>>("labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->masterPrivateIPs)) {
    body->insert(pair<string, vector<string>>("masterPrivateIPs", *request->masterPrivateIPs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    body->insert(pair<string, long>("memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    body->insert(pair<string, string>("os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootPassword)) {
    body->insert(pair<string, string>("rootPassword", *request->rootPassword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddEnvironmentNodesRequestSystemDisk>>(request->systemDisk)) {
    body->insert(pair<string, vector<AddEnvironmentNodesRequestSystemDisk>>("systemDisk", *request->systemDisk));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddEnvironmentNodesRequestTaints>>(request->taints)) {
    body->insert(pair<string, vector<AddEnvironmentNodesRequestTaints>>("taints", *request->taints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tridentSystemDisk)) {
    body->insert(pair<string, string>("tridentSystemDisk", *request->tridentSystemDisk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tridentSystemSizeDisk)) {
    body->insert(pair<string, long>("tridentSystemSizeDisk", *request->tridentSystemSizeDisk));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workerPrivateIPs)) {
    body->insert(pair<string, vector<string>>("workerPrivateIPs", *request->workerPrivateIPs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEnvironmentNodes"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/nodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEnvironmentNodesResponse(callApi(params, req, runtime));
}

AddEnvironmentNodesResponse Alibabacloud_Adp20210720::Client::addEnvironmentNodes(shared_ptr<string> uid, shared_ptr<AddEnvironmentNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addEnvironmentNodesWithOptions(uid, request, headers, runtime);
}

AddEnvironmentProductVersionsResponse Alibabacloud_Adp20210720::Client::addEnvironmentProductVersionsWithOptions(shared_ptr<string> uid,
                                                                                                                 shared_ptr<AddEnvironmentProductVersionsRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AddEnvironmentProductVersionsRequestProductVersionInfoList>>(request->productVersionInfoList)) {
    body->insert(pair<string, vector<AddEnvironmentProductVersionsRequestProductVersionInfoList>>("productVersionInfoList", *request->productVersionInfoList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productVersionUIDList)) {
    body->insert(pair<string, vector<string>>("productVersionUIDList", *request->productVersionUIDList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEnvironmentProductVersions"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/product-versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEnvironmentProductVersionsResponse(callApi(params, req, runtime));
}

AddEnvironmentProductVersionsResponse Alibabacloud_Adp20210720::Client::addEnvironmentProductVersions(shared_ptr<string> uid, shared_ptr<AddEnvironmentProductVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addEnvironmentProductVersionsWithOptions(uid, request, headers, runtime);
}

AddProductComponentVersionResponse Alibabacloud_Adp20210720::Client::addProductComponentVersionWithOptions(shared_ptr<string> uid,
                                                                                                           shared_ptr<string> componentVersionUID,
                                                                                                           shared_ptr<AddProductComponentVersionRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentVersionSpecUID)) {
    body->insert(pair<string, string>("componentVersionSpecUID", *request->componentVersionSpecUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentVersionSpecValues)) {
    body->insert(pair<string, string>("componentVersionSpecValues", *request->componentVersionSpecValues));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    body->insert(pair<string, string>("releaseName", *request->releaseName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddProductComponentVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/component-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentVersionUID)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddProductComponentVersionResponse(callApi(params, req, runtime));
}

AddProductComponentVersionResponse Alibabacloud_Adp20210720::Client::addProductComponentVersion(shared_ptr<string> uid, shared_ptr<string> componentVersionUID, shared_ptr<AddProductComponentVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addProductComponentVersionWithOptions(uid, componentVersionUID, request, headers, runtime);
}

AddProductVersionConfigResponse Alibabacloud_Adp20210720::Client::addProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                                                     shared_ptr<AddProductVersionConfigRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentReleaseName)) {
    body->insert(pair<string, string>("componentReleaseName", *request->componentReleaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentVersionUID)) {
    body->insert(pair<string, string>("componentVersionUID", *request->componentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentReleaseName)) {
    body->insert(pair<string, string>("parentComponentReleaseName", *request->parentComponentReleaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentVersionUID)) {
    body->insert(pair<string, string>("parentComponentVersionUID", *request->parentComponentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("value", *request->value));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valueType)) {
    body->insert(pair<string, string>("valueType", *request->valueType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddProductVersionConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/configs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddProductVersionConfigResponse(callApi(params, req, runtime));
}

AddProductVersionConfigResponse Alibabacloud_Adp20210720::Client::addProductVersionConfig(shared_ptr<string> uid, shared_ptr<AddProductVersionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addProductVersionConfigWithOptions(uid, request, headers, runtime);
}

AddResourceSnapshotResponse Alibabacloud_Adp20210720::Client::addResourceSnapshotWithOptions(shared_ptr<AddResourceSnapshotRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterUID)) {
    query->insert(pair<string, string>("clusterUID", *request->clusterUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddResourceSnapshot"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resource-snapshots"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddResourceSnapshotResponse(callApi(params, req, runtime));
}

AddResourceSnapshotResponse Alibabacloud_Adp20210720::Client::addResourceSnapshot(shared_ptr<AddResourceSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addResourceSnapshotWithOptions(request, headers, runtime);
}

BatchAddEnvironmentNodesResponse Alibabacloud_Adp20210720::Client::batchAddEnvironmentNodesWithOptions(shared_ptr<string> uid,
                                                                                                       shared_ptr<BatchAddEnvironmentNodesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<InstanceInfo>>(request->instanceList)) {
    body->insert(pair<string, vector<InstanceInfo>>("instanceList", *request->instanceList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    body->insert(pair<string, bool>("overwrite", *request->overwrite));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddEnvironmentNodes"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/batch/nodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddEnvironmentNodesResponse(callApi(params, req, runtime));
}

BatchAddEnvironmentNodesResponse Alibabacloud_Adp20210720::Client::batchAddEnvironmentNodes(shared_ptr<string> uid, shared_ptr<BatchAddEnvironmentNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchAddEnvironmentNodesWithOptions(uid, request, headers, runtime);
}

BatchAddProductVersionConfigResponse Alibabacloud_Adp20210720::Client::batchAddProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                                                               shared_ptr<BatchAddProductVersionConfigRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchAddProductVersionConfigRequestProductVersionConfigList>>(request->productVersionConfigList)) {
    body->insert(pair<string, vector<BatchAddProductVersionConfigRequestProductVersionConfigList>>("productVersionConfigList", *request->productVersionConfigList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddProductVersionConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/batch/configs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddProductVersionConfigResponse(callApi(params, req, runtime));
}

BatchAddProductVersionConfigResponse Alibabacloud_Adp20210720::Client::batchAddProductVersionConfig(shared_ptr<string> uid, shared_ptr<BatchAddProductVersionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return batchAddProductVersionConfigWithOptions(uid, request, headers, runtime);
}

CreateDeliverableResponse Alibabacloud_Adp20210720::Client::createDeliverableWithOptions(shared_ptr<CreateDeliverableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateDeliverableRequestFoundation>(request->foundation)) {
    body->insert(pair<string, CreateDeliverableRequestFoundation>("foundation", *request->foundation));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDeliverableRequestProducts>>(request->products)) {
    body->insert(pair<string, vector<CreateDeliverableRequestProducts>>("products", *request->products));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliverable"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/deliverables"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliverableResponse(callApi(params, req, runtime));
}

CreateDeliverableResponse Alibabacloud_Adp20210720::Client::createDeliverable(shared_ptr<CreateDeliverableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDeliverableWithOptions(request, headers, runtime);
}

CreateDeliveryInstanceResponse Alibabacloud_Adp20210720::Client::createDeliveryInstanceWithOptions(shared_ptr<CreateDeliveryInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterUID)) {
    body->insert(pair<string, string>("clusterUID", *request->clusterUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverableConfigUID)) {
    body->insert(pair<string, string>("deliverableConfigUID", *request->deliverableConfigUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverableUID)) {
    body->insert(pair<string, string>("deliverableUID", *request->deliverableUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envUID)) {
    body->insert(pair<string, string>("envUID", *request->envUID));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDeliveryInstanceRequestFoundation>(request->foundation)) {
    body->insert(pair<string, CreateDeliveryInstanceRequestFoundation>("foundation", *request->foundation));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDeliveryInstanceRequestProducts>>(request->products)) {
    body->insert(pair<string, vector<CreateDeliveryInstanceRequestProducts>>("products", *request->products));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateUID)) {
    body->insert(pair<string, string>("templateUID", *request->templateUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliveryInstance"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliveryInstanceResponse(callApi(params, req, runtime));
}

CreateDeliveryInstanceResponse Alibabacloud_Adp20210720::Client::createDeliveryInstance(shared_ptr<CreateDeliveryInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDeliveryInstanceWithOptions(request, headers, runtime);
}

CreateDeliveryPackageResponse Alibabacloud_Adp20210720::Client::createDeliveryPackageWithOptions(shared_ptr<CreateDeliveryPackageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverableUID)) {
    body->insert(pair<string, string>("deliverableUID", *request->deliverableUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryInstanceUID)) {
    body->insert(pair<string, string>("deliveryInstanceUID", *request->deliveryInstanceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originDeliverableUID)) {
    body->insert(pair<string, string>("originDeliverableUID", *request->originDeliverableUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageContentType)) {
    body->insert(pair<string, string>("packageContentType", *request->packageContentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    body->insert(pair<string, string>("packageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    body->insert(pair<string, string>("platform", *request->platform));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliveryPackage"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-packages"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliveryPackageResponse(callApi(params, req, runtime));
}

CreateDeliveryPackageResponse Alibabacloud_Adp20210720::Client::createDeliveryPackage(shared_ptr<CreateDeliveryPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDeliveryPackageWithOptions(request, headers, runtime);
}

CreateEnvironmentResponse Alibabacloud_Adp20210720::Client::createEnvironmentWithOptions(shared_ptr<CreateEnvironmentRequest> request, shared_ptr<CreateEnvironmentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    body->insert(pair<string, string>("annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredAt)) {
    body->insert(pair<string, string>("expiredAt", *request->expiredAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEnvironmentRequestPlatform>(request->platform)) {
    body->insert(pair<string, CreateEnvironmentRequestPlatform>("platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Platform>>(request->platformList)) {
    body->insert(pair<string, vector<Platform>>("platformList", *request->platformList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    body->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorConfig)) {
    body->insert(pair<string, string>("vendorConfig", *request->vendorConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorType)) {
    body->insert(pair<string, string>("vendorType", *request->vendorType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->clientToken)) {
    realHeaders->insert(pair<string, string>("ClientToken", Darabonba_Util::Client::toJSONString(headers->clientToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvironment"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvironmentResponse(callApi(params, req, runtime));
}

CreateEnvironmentResponse Alibabacloud_Adp20210720::Client::createEnvironment(shared_ptr<CreateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateEnvironmentHeaders> headers = make_shared<CreateEnvironmentHeaders>();
  return createEnvironmentWithOptions(request, headers, runtime);
}

CreateEnvironmentLicenseResponse Alibabacloud_Adp20210720::Client::createEnvironmentLicenseWithOptions(shared_ptr<string> uid,
                                                                                                       shared_ptr<CreateEnvironmentLicenseRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->companyName)) {
    body->insert(pair<string, string>("companyName", *request->companyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contact)) {
    body->insert(pair<string, string>("contact", *request->contact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    body->insert(pair<string, string>("expireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEnvironmentLicenseRequestLicenseQuota>(request->licenseQuota)) {
    body->insert(pair<string, CreateEnvironmentLicenseRequestLicenseQuota>("licenseQuota", *request->licenseQuota));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineFingerprint)) {
    body->insert(pair<string, string>("machineFingerprint", *request->machineFingerprint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    body->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvironmentLicense"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/licenses"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvironmentLicenseResponse(callApi(params, req, runtime));
}

CreateEnvironmentLicenseResponse Alibabacloud_Adp20210720::Client::createEnvironmentLicense(shared_ptr<string> uid, shared_ptr<CreateEnvironmentLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEnvironmentLicenseWithOptions(uid, request, headers, runtime);
}

CreateFoundationReferenceResponse Alibabacloud_Adp20210720::Client::createFoundationReferenceWithOptions(shared_ptr<CreateFoundationReferenceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterConfig)) {
    body->insert(pair<string, string>("clusterConfig", *request->clusterConfig));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFoundationReferenceRequestComponentConfigs>>(request->componentConfigs)) {
    body->insert(pair<string, vector<CreateFoundationReferenceRequestComponentConfigs>>("componentConfigs", *request->componentConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFoundationReferenceRequestFoundationReferenceConfigs>>(request->foundationReferenceConfigs)) {
    body->insert(pair<string, vector<CreateFoundationReferenceRequestFoundationReferenceConfigs>>("foundationReferenceConfigs", *request->foundationReferenceConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationVersionUID)) {
    body->insert(pair<string, string>("foundationVersionUID", *request->foundationVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originFoundationReferenceUID)) {
    body->insert(pair<string, string>("originFoundationReferenceUID", *request->originFoundationReferenceUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFoundationReference"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation-references"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFoundationReferenceResponse(callApi(params, req, runtime));
}

CreateFoundationReferenceResponse Alibabacloud_Adp20210720::Client::createFoundationReference(shared_ptr<CreateFoundationReferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFoundationReferenceWithOptions(request, headers, runtime);
}

CreateProductResponse Alibabacloud_Adp20210720::Client::createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<CreateProductHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->categories)) {
    body->insert(pair<string, vector<string>>("categories", *request->categories));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationVersionUID)) {
    body->insert(pair<string, string>("foundationVersionUID", *request->foundationVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    body->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("vendor", *request->vendor));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutProductVersion)) {
    body->insert(pair<string, bool>("withoutProductVersion", *request->withoutProductVersion));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->clientToken)) {
    realHeaders->insert(pair<string, string>("ClientToken", Darabonba_Util::Client::toJSONString(headers->clientToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProduct"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/products"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductResponse(callApi(params, req, runtime));
}

CreateProductResponse Alibabacloud_Adp20210720::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateProductHeaders> headers = make_shared<CreateProductHeaders>();
  return createProductWithOptions(request, headers, runtime);
}

CreateProductDeploymentResponse Alibabacloud_Adp20210720::Client::createProductDeploymentWithOptions(shared_ptr<CreateProductDeploymentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    body->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldProductVersionUID)) {
    body->insert(pair<string, string>("oldProductVersionUID", *request->oldProductVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageConfig)) {
    body->insert(pair<string, string>("packageConfig", *request->packageConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUID)) {
    body->insert(pair<string, string>("packageUID", *request->packageUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    body->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductDeployment"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/deployments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductDeploymentResponse(callApi(params, req, runtime));
}

CreateProductDeploymentResponse Alibabacloud_Adp20210720::Client::createProductDeployment(shared_ptr<CreateProductDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProductDeploymentWithOptions(request, headers, runtime);
}

CreateProductVersionResponse Alibabacloud_Adp20210720::Client::createProductVersionWithOptions(shared_ptr<string> uid,
                                                                                               shared_ptr<CreateProductVersionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseProductVersionUID)) {
    query->insert(pair<string, string>("baseProductVersionUID", *request->baseProductVersionUID));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("version", *request->version));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutBaseProductVersion)) {
    body->insert(pair<string, bool>("withoutBaseProductVersion", *request->withoutBaseProductVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductVersionResponse(callApi(params, req, runtime));
}

CreateProductVersionResponse Alibabacloud_Adp20210720::Client::createProductVersion(shared_ptr<string> uid, shared_ptr<CreateProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProductVersionWithOptions(uid, request, headers, runtime);
}

CreateProductVersionPackageResponse Alibabacloud_Adp20210720::Client::createProductVersionPackageWithOptions(shared_ptr<string> uid,
                                                                                                             shared_ptr<CreateProductVersionPackageRequest> request,
                                                                                                             shared_ptr<CreateProductVersionPackageHeaders> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterEngineType)) {
    query->insert(pair<string, string>("clusterEngineType", *request->clusterEngineType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationReferenceUID)) {
    query->insert(pair<string, string>("foundationReferenceUID", *request->foundationReferenceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldFoundationReferenceUID)) {
    query->insert(pair<string, string>("oldFoundationReferenceUID", *request->oldFoundationReferenceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldProductVersionUID)) {
    query->insert(pair<string, string>("oldProductVersionUID", *request->oldProductVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageContentType)) {
    query->insert(pair<string, string>("packageContentType", *request->packageContentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageToolType)) {
    query->insert(pair<string, string>("packageToolType", *request->packageToolType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("packageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("platform", *request->platform));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->clientToken)) {
    realHeaders->insert(pair<string, string>("ClientToken", Darabonba_Util::Client::toJSONString(headers->clientToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductVersionPackage"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/hosting/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/packages"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductVersionPackageResponse(callApi(params, req, runtime));
}

CreateProductVersionPackageResponse Alibabacloud_Adp20210720::Client::createProductVersionPackage(shared_ptr<string> uid, shared_ptr<CreateProductVersionPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateProductVersionPackageHeaders> headers = make_shared<CreateProductVersionPackageHeaders>();
  return createProductVersionPackageWithOptions(uid, request, headers, runtime);
}

DeleteEnvironmentResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironment"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentResponse(callApi(params, req, runtime));
}

DeleteEnvironmentResponse Alibabacloud_Adp20210720::Client::deleteEnvironment(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEnvironmentWithOptions(uid, headers, runtime);
}

DeleteEnvironmentLicenseResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentLicenseWithOptions(shared_ptr<string> uid,
                                                                                                       shared_ptr<string> licenseUID,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironmentLicense"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/licenses/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(licenseUID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentLicenseResponse(callApi(params, req, runtime));
}

DeleteEnvironmentLicenseResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentLicense(shared_ptr<string> uid, shared_ptr<string> licenseUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEnvironmentLicenseWithOptions(uid, licenseUID, headers, runtime);
}

DeleteEnvironmentNodeResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentNodeWithOptions(shared_ptr<string> uid,
                                                                                                 shared_ptr<string> nodeUID,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironmentNode"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/nodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodeUID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentNodeResponse(callApi(params, req, runtime));
}

DeleteEnvironmentNodeResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentNode(shared_ptr<string> uid, shared_ptr<string> nodeUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEnvironmentNodeWithOptions(uid, nodeUID, headers, runtime);
}

DeleteEnvironmentProductVersionResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentProductVersionWithOptions(shared_ptr<string> uid,
                                                                                                                     shared_ptr<string> productVersionUID,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironmentProductVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(productVersionUID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentProductVersionResponse(callApi(params, req, runtime));
}

DeleteEnvironmentProductVersionResponse Alibabacloud_Adp20210720::Client::deleteEnvironmentProductVersion(shared_ptr<string> uid, shared_ptr<string> productVersionUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEnvironmentProductVersionWithOptions(uid, productVersionUID, headers, runtime);
}

DeleteProductResponse Alibabacloud_Adp20210720::Client::deleteProductWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProduct"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductResponse(callApi(params, req, runtime));
}

DeleteProductResponse Alibabacloud_Adp20210720::Client::deleteProduct(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProductWithOptions(uid, headers, runtime);
}

DeleteProductComponentVersionResponse Alibabacloud_Adp20210720::Client::deleteProductComponentVersionWithOptions(shared_ptr<string> uid,
                                                                                                                 shared_ptr<string> relationUID,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductComponentVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/relations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(relationUID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductComponentVersionResponse(callApi(params, req, runtime));
}

DeleteProductComponentVersionResponse Alibabacloud_Adp20210720::Client::deleteProductComponentVersion(shared_ptr<string> uid, shared_ptr<string> relationUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProductComponentVersionWithOptions(uid, relationUID, headers, runtime);
}

DeleteProductInstanceConfigResponse Alibabacloud_Adp20210720::Client::deleteProductInstanceConfigWithOptions(shared_ptr<string> configUID,
                                                                                                             shared_ptr<DeleteProductInstanceConfigRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    query->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductInstanceConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configUID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductInstanceConfigResponse(callApi(params, req, runtime));
}

DeleteProductInstanceConfigResponse Alibabacloud_Adp20210720::Client::deleteProductInstanceConfig(shared_ptr<string> configUID, shared_ptr<DeleteProductInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProductInstanceConfigWithOptions(configUID, request, headers, runtime);
}

DeleteProductVersionResponse Alibabacloud_Adp20210720::Client::deleteProductVersionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductVersionResponse(callApi(params, req, runtime));
}

DeleteProductVersionResponse Alibabacloud_Adp20210720::Client::deleteProductVersion(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProductVersionWithOptions(uid, headers, runtime);
}

DeleteProductVersionConfigResponse Alibabacloud_Adp20210720::Client::deleteProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                                                           shared_ptr<string> configUID,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductVersionConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configUID)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductVersionConfigResponse(callApi(params, req, runtime));
}

DeleteProductVersionConfigResponse Alibabacloud_Adp20210720::Client::deleteProductVersionConfig(shared_ptr<string> uid, shared_ptr<string> configUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProductVersionConfigWithOptions(uid, configUID, headers, runtime);
}

GenerateProductInstanceDeploymentConfigResponse Alibabacloud_Adp20210720::Client::generateProductInstanceDeploymentConfigWithOptions(shared_ptr<GenerateProductInstanceDeploymentConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    body->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageContentType)) {
    body->insert(pair<string, string>("packageContentType", *request->packageContentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUID)) {
    body->insert(pair<string, string>("packageUID", *request->packageUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    body->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productVersionUIDList)) {
    body->insert(pair<string, vector<string>>("productVersionUIDList", *request->productVersionUIDList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateProductInstanceDeploymentConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/package-configs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateProductInstanceDeploymentConfigResponse(callApi(params, req, runtime));
}

GenerateProductInstanceDeploymentConfigResponse Alibabacloud_Adp20210720::Client::generateProductInstanceDeploymentConfig(shared_ptr<GenerateProductInstanceDeploymentConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateProductInstanceDeploymentConfigWithOptions(request, headers, runtime);
}

GetComponentResponse Alibabacloud_Adp20210720::Client::getComponentWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComponent"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComponentResponse(callApi(params, req, runtime));
}

GetComponentResponse Alibabacloud_Adp20210720::Client::getComponent(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getComponentWithOptions(uid, headers, runtime);
}

GetComponentVersionResponse Alibabacloud_Adp20210720::Client::getComponentVersionWithOptions(shared_ptr<string> uid,
                                                                                             shared_ptr<string> versionUID,
                                                                                             shared_ptr<GetComponentVersionRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutChartContent)) {
    query->insert(pair<string, bool>("withoutChartContent", *request->withoutChartContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComponentVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionUID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComponentVersionResponse(callApi(params, req, runtime));
}

GetComponentVersionResponse Alibabacloud_Adp20210720::Client::getComponentVersion(shared_ptr<string> uid, shared_ptr<string> versionUID, shared_ptr<GetComponentVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getComponentVersionWithOptions(uid, versionUID, request, headers, runtime);
}

GetDeliverableResponse Alibabacloud_Adp20210720::Client::getDeliverableWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeliverable"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/deliverables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeliverableResponse(callApi(params, req, runtime));
}

GetDeliverableResponse Alibabacloud_Adp20210720::Client::getDeliverable(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeliverableWithOptions(uid, headers, runtime);
}

GetDeliveryPackageResponse Alibabacloud_Adp20210720::Client::getDeliveryPackageWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeliveryPackage"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-packages/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeliveryPackageResponse(callApi(params, req, runtime));
}

GetDeliveryPackageResponse Alibabacloud_Adp20210720::Client::getDeliveryPackage(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDeliveryPackageWithOptions(uid, headers, runtime);
}

GetEnvironmentResponse Alibabacloud_Adp20210720::Client::getEnvironmentWithOptions(shared_ptr<string> uid,
                                                                                   shared_ptr<GetEnvironmentRequest> tmpReq,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetEnvironmentShrinkRequest> request = make_shared<GetEnvironmentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetEnvironmentRequestOptions>(tmpReq->options)) {
    request->optionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->options, make_shared<string>("options"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionsShrink)) {
    query->insert(pair<string, string>("options", *request->optionsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnvironment"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnvironmentResponse(callApi(params, req, runtime));
}

GetEnvironmentResponse Alibabacloud_Adp20210720::Client::getEnvironment(shared_ptr<string> uid, shared_ptr<GetEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnvironmentWithOptions(uid, request, headers, runtime);
}

GetEnvironmentDeliveryInstanceResponse Alibabacloud_Adp20210720::Client::getEnvironmentDeliveryInstanceWithOptions(shared_ptr<GetEnvironmentDeliveryInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterUID)) {
    query->insert(pair<string, string>("clusterUID", *request->clusterUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envUID)) {
    query->insert(pair<string, string>("envUID", *request->envUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnvironmentDeliveryInstance"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnvironmentDeliveryInstanceResponse(callApi(params, req, runtime));
}

GetEnvironmentDeliveryInstanceResponse Alibabacloud_Adp20210720::Client::getEnvironmentDeliveryInstance(shared_ptr<GetEnvironmentDeliveryInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnvironmentDeliveryInstanceWithOptions(request, headers, runtime);
}

GetEnvironmentLicenseResponse Alibabacloud_Adp20210720::Client::getEnvironmentLicenseWithOptions(shared_ptr<string> uid,
                                                                                                 shared_ptr<string> licenseUID,
                                                                                                 shared_ptr<GetEnvironmentLicenseRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetEnvironmentLicenseShrinkRequest> request = make_shared<GetEnvironmentLicenseShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetEnvironmentLicenseRequestOptions>(tmpReq->options)) {
    request->optionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->options, make_shared<string>("options"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionsShrink)) {
    query->insert(pair<string, string>("options", *request->optionsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnvironmentLicense"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/licenses/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(licenseUID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnvironmentLicenseResponse(callApi(params, req, runtime));
}

GetEnvironmentLicenseResponse Alibabacloud_Adp20210720::Client::getEnvironmentLicense(shared_ptr<string> uid, shared_ptr<string> licenseUID, shared_ptr<GetEnvironmentLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnvironmentLicenseWithOptions(uid, licenseUID, request, headers, runtime);
}

GetEnvironmentNodeResponse Alibabacloud_Adp20210720::Client::getEnvironmentNodeWithOptions(shared_ptr<string> uid,
                                                                                           shared_ptr<string> nodeUID,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnvironmentNode"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/nodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodeUID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnvironmentNodeResponse(callApi(params, req, runtime));
}

GetEnvironmentNodeResponse Alibabacloud_Adp20210720::Client::getEnvironmentNode(shared_ptr<string> uid, shared_ptr<string> nodeUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnvironmentNodeWithOptions(uid, nodeUID, headers, runtime);
}

GetFoundationComponentReferenceResponse Alibabacloud_Adp20210720::Client::getFoundationComponentReferenceWithOptions(shared_ptr<string> componentReferenceUID,
                                                                                                                     shared_ptr<string> uid,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFoundationComponentReference"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation-references/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentReferenceUID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFoundationComponentReferenceResponse(callApi(params, req, runtime));
}

GetFoundationComponentReferenceResponse Alibabacloud_Adp20210720::Client::getFoundationComponentReference(shared_ptr<string> componentReferenceUID, shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFoundationComponentReferenceWithOptions(componentReferenceUID, uid, headers, runtime);
}

GetFoundationReferenceResponse Alibabacloud_Adp20210720::Client::getFoundationReferenceWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFoundationReference"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation-references/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFoundationReferenceResponse(callApi(params, req, runtime));
}

GetFoundationReferenceResponse Alibabacloud_Adp20210720::Client::getFoundationReference(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFoundationReferenceWithOptions(uid, headers, runtime);
}

GetFoundationVersionResponse Alibabacloud_Adp20210720::Client::getFoundationVersionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFoundationVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFoundationVersionResponse(callApi(params, req, runtime));
}

GetFoundationVersionResponse Alibabacloud_Adp20210720::Client::getFoundationVersion(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFoundationVersionWithOptions(uid, headers, runtime);
}

GetProductResponse Alibabacloud_Adp20210720::Client::getProductWithOptions(shared_ptr<string> uid,
                                                                           shared_ptr<GetProductRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->withIconURL)) {
    query->insert(pair<string, bool>("withIconURL", *request->withIconURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProduct"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductResponse(callApi(params, req, runtime));
}

GetProductResponse Alibabacloud_Adp20210720::Client::getProduct(shared_ptr<string> uid, shared_ptr<GetProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductWithOptions(uid, request, headers, runtime);
}

GetProductComponentVersionResponse Alibabacloud_Adp20210720::Client::getProductComponentVersionWithOptions(shared_ptr<string> relationUID,
                                                                                                           shared_ptr<string> uid,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductComponentVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/relations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(relationUID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductComponentVersionResponse(callApi(params, req, runtime));
}

GetProductComponentVersionResponse Alibabacloud_Adp20210720::Client::getProductComponentVersion(shared_ptr<string> relationUID, shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductComponentVersionWithOptions(relationUID, uid, headers, runtime);
}

GetProductDeploymentResponse Alibabacloud_Adp20210720::Client::getProductDeploymentWithOptions(shared_ptr<string> deploymentUID,
                                                                                               shared_ptr<GetProductDeploymentRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    query->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withParamConfig)) {
    query->insert(pair<string, bool>("withParamConfig", *request->withParamConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductDeployment"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/deployments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(deploymentUID)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductDeploymentResponse(callApi(params, req, runtime));
}

GetProductDeploymentResponse Alibabacloud_Adp20210720::Client::getProductDeployment(shared_ptr<string> deploymentUID, shared_ptr<GetProductDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductDeploymentWithOptions(deploymentUID, request, headers, runtime);
}

GetProductVersionResponse Alibabacloud_Adp20210720::Client::getProductVersionWithOptions(shared_ptr<string> uid,
                                                                                         shared_ptr<GetProductVersionRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->withDocumentationURL)) {
    query->insert(pair<string, bool>("withDocumentationURL", *request->withDocumentationURL));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withExtendResourceURL)) {
    query->insert(pair<string, bool>("withExtendResourceURL", *request->withExtendResourceURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductVersionResponse(callApi(params, req, runtime));
}

GetProductVersionResponse Alibabacloud_Adp20210720::Client::getProductVersion(shared_ptr<string> uid, shared_ptr<GetProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductVersionWithOptions(uid, request, headers, runtime);
}

GetProductVersionDifferencesResponse Alibabacloud_Adp20210720::Client::getProductVersionDifferencesWithOptions(shared_ptr<string> uid,
                                                                                                               shared_ptr<string> versionUID,
                                                                                                               shared_ptr<GetProductVersionDifferencesRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->preVersionUID)) {
    query->insert(pair<string, string>("preVersionUID", *request->preVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductVersionDifferences"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/integration/api/v2/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionUID)) + string("/differences"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductVersionDifferencesResponse(callApi(params, req, runtime));
}

GetProductVersionDifferencesResponse Alibabacloud_Adp20210720::Client::getProductVersionDifferences(shared_ptr<string> uid, shared_ptr<string> versionUID, shared_ptr<GetProductVersionDifferencesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductVersionDifferencesWithOptions(uid, versionUID, request, headers, runtime);
}

GetProductVersionPackageResponse Alibabacloud_Adp20210720::Client::getProductVersionPackageWithOptions(shared_ptr<string> uid,
                                                                                                       shared_ptr<GetProductVersionPackageRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationReferenceUID)) {
    query->insert(pair<string, string>("foundationReferenceUID", *request->foundationReferenceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldFoundationReferenceUID)) {
    query->insert(pair<string, string>("oldFoundationReferenceUID", *request->oldFoundationReferenceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldProductVersionUID)) {
    query->insert(pair<string, string>("oldProductVersionUID", *request->oldProductVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageContentType)) {
    query->insert(pair<string, string>("packageContentType", *request->packageContentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    query->insert(pair<string, string>("packageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageUID)) {
    query->insert(pair<string, string>("packageUID", *request->packageUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withURL)) {
    query->insert(pair<string, bool>("withURL", *request->withURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductVersionPackage"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/hosting/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/packages"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductVersionPackageResponse(callApi(params, req, runtime));
}

GetProductVersionPackageResponse Alibabacloud_Adp20210720::Client::getProductVersionPackage(shared_ptr<string> uid, shared_ptr<GetProductVersionPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProductVersionPackageWithOptions(uid, request, headers, runtime);
}

GetResourceSnapshotResponse Alibabacloud_Adp20210720::Client::getResourceSnapshotWithOptions(shared_ptr<GetResourceSnapshotRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceSnapshot"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resource-snapshots"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceSnapshotResponse(callApi(params, req, runtime));
}

GetResourceSnapshotResponse Alibabacloud_Adp20210720::Client::getResourceSnapshot(shared_ptr<GetResourceSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceSnapshotWithOptions(request, headers, runtime);
}

GetWorkflowStatusResponse Alibabacloud_Adp20210720::Client::getWorkflowStatusWithOptions(shared_ptr<GetWorkflowStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowType)) {
    query->insert(pair<string, string>("workflowType", *request->workflowType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->xuid)) {
    query->insert(pair<string, string>("xuid", *request->xuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkflowStatus"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/workflows/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkflowStatusResponse(callApi(params, req, runtime));
}

GetWorkflowStatusResponse Alibabacloud_Adp20210720::Client::getWorkflowStatus(shared_ptr<GetWorkflowStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkflowStatusWithOptions(request, headers, runtime);
}

InitEnvironmentResourceResponse Alibabacloud_Adp20210720::Client::initEnvironmentResourceWithOptions(shared_ptr<string> uid,
                                                                                                     shared_ptr<InitEnvironmentResourceRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeyID)) {
    body->insert(pair<string, string>("accessKeyID", *request->accessKeyID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKeySecret)) {
    body->insert(pair<string, string>("accessKeySecret", *request->accessKeySecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    body->insert(pair<string, string>("securityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitEnvironmentResource"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitEnvironmentResourceResponse(callApi(params, req, runtime));
}

InitEnvironmentResourceResponse Alibabacloud_Adp20210720::Client::initEnvironmentResource(shared_ptr<string> uid, shared_ptr<InitEnvironmentResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return initEnvironmentResourceWithOptions(uid, request, headers, runtime);
}

ListComponentVersionsResponse Alibabacloud_Adp20210720::Client::listComponentVersionsWithOptions(shared_ptr<string> uid,
                                                                                                 shared_ptr<ListComponentVersionsRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListComponentVersionsShrinkRequest> request = make_shared<ListComponentVersionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListComponentVersionsRequestPlatforms>>(tmpReq->platforms)) {
    request->platformsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->platforms, make_shared<string>("platforms"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platformsShrink)) {
    query->insert(pair<string, string>("platforms", *request->platformsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListComponentVersions"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListComponentVersionsResponse(callApi(params, req, runtime));
}

ListComponentVersionsResponse Alibabacloud_Adp20210720::Client::listComponentVersions(shared_ptr<string> uid, shared_ptr<ListComponentVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listComponentVersionsWithOptions(uid, request, headers, runtime);
}

ListComponentsResponse Alibabacloud_Adp20210720::Client::listComponentsWithOptions(shared_ptr<ListComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzy)) {
    query->insert(pair<string, string>("fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->public_)) {
    query->insert(pair<string, bool>("public_", *request->public_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListComponents"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/components"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListComponentsResponse(callApi(params, req, runtime));
}

ListComponentsResponse Alibabacloud_Adp20210720::Client::listComponents(shared_ptr<ListComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listComponentsWithOptions(request, headers, runtime);
}

ListDeliveryInstanceChangeRecordsResponse Alibabacloud_Adp20210720::Client::listDeliveryInstanceChangeRecordsWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeliveryInstanceChangeRecords"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/delivery-records"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeliveryInstanceChangeRecordsResponse(callApi(params, req, runtime));
}

ListDeliveryInstanceChangeRecordsResponse Alibabacloud_Adp20210720::Client::listDeliveryInstanceChangeRecords(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDeliveryInstanceChangeRecordsWithOptions(uid, headers, runtime);
}

ListDeliveryPackageResponse Alibabacloud_Adp20210720::Client::listDeliveryPackageWithOptions(shared_ptr<ListDeliveryPackageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverableUID)) {
    query->insert(pair<string, string>("deliverableUID", *request->deliverableUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("platform", *request->platform));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeliveryPackage"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-packages"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeliveryPackageResponse(callApi(params, req, runtime));
}

ListDeliveryPackageResponse Alibabacloud_Adp20210720::Client::listDeliveryPackage(shared_ptr<ListDeliveryPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDeliveryPackageWithOptions(request, headers, runtime);
}

ListEnvironmentLicensesResponse Alibabacloud_Adp20210720::Client::listEnvironmentLicensesWithOptions(shared_ptr<string> uid,
                                                                                                     shared_ptr<ListEnvironmentLicensesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentLicenses"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/licenses"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentLicensesResponse(callApi(params, req, runtime));
}

ListEnvironmentLicensesResponse Alibabacloud_Adp20210720::Client::listEnvironmentLicenses(shared_ptr<string> uid, shared_ptr<ListEnvironmentLicensesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnvironmentLicensesWithOptions(uid, request, headers, runtime);
}

ListEnvironmentNodesResponse Alibabacloud_Adp20210720::Client::listEnvironmentNodesWithOptions(shared_ptr<string> uid,
                                                                                               shared_ptr<ListEnvironmentNodesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentNodes"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentNodesResponse(callApi(params, req, runtime));
}

ListEnvironmentNodesResponse Alibabacloud_Adp20210720::Client::listEnvironmentNodes(shared_ptr<string> uid, shared_ptr<ListEnvironmentNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnvironmentNodesWithOptions(uid, request, headers, runtime);
}

ListEnvironmentTunnelsResponse Alibabacloud_Adp20210720::Client::listEnvironmentTunnelsWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentTunnels"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/tunnels"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentTunnelsResponse(callApi(params, req, runtime));
}

ListEnvironmentTunnelsResponse Alibabacloud_Adp20210720::Client::listEnvironmentTunnels(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnvironmentTunnelsWithOptions(uid, headers, runtime);
}

ListEnvironmentsResponse Alibabacloud_Adp20210720::Client::listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterUID)) {
    query->insert(pair<string, string>("clusterUID", *request->clusterUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationType)) {
    query->insert(pair<string, string>("foundationType", *request->foundationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzy)) {
    query->insert(pair<string, string>("fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    query->insert(pair<string, string>("instanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorType)) {
    query->insert(pair<string, string>("vendorType", *request->vendorType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironments"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentsResponse(callApi(params, req, runtime));
}

ListEnvironmentsResponse Alibabacloud_Adp20210720::Client::listEnvironments(shared_ptr<ListEnvironmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEnvironmentsWithOptions(request, headers, runtime);
}

ListFoundationComponentVersionsResponse Alibabacloud_Adp20210720::Client::listFoundationComponentVersionsWithOptions(shared_ptr<string> uid,
                                                                                                                     shared_ptr<ListFoundationComponentVersionsRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyEnabled)) {
    query->insert(pair<string, bool>("onlyEnabled", *request->onlyEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentRelationUID)) {
    query->insert(pair<string, string>("parentComponentRelationUID", *request->parentComponentRelationUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFoundationComponentVersions"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation/versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/component-versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFoundationComponentVersionsResponse(callApi(params, req, runtime));
}

ListFoundationComponentVersionsResponse Alibabacloud_Adp20210720::Client::listFoundationComponentVersions(shared_ptr<string> uid, shared_ptr<ListFoundationComponentVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFoundationComponentVersionsWithOptions(uid, request, headers, runtime);
}

ListFoundationReferenceComponentsResponse Alibabacloud_Adp20210720::Client::listFoundationReferenceComponentsWithOptions(shared_ptr<ListFoundationReferenceComponentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationReferenceUID)) {
    query->insert(pair<string, string>("foundationReferenceUID", *request->foundationReferenceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationVersionUID)) {
    query->insert(pair<string, string>("foundationVersionUID", *request->foundationVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyEnabled)) {
    query->insert(pair<string, bool>("onlyEnabled", *request->onlyEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentReferenceUID)) {
    query->insert(pair<string, string>("parentComponentReferenceUID", *request->parentComponentReferenceUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFoundationReferenceComponents"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation-references/component-versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFoundationReferenceComponentsResponse(callApi(params, req, runtime));
}

ListFoundationReferenceComponentsResponse Alibabacloud_Adp20210720::Client::listFoundationReferenceComponents(shared_ptr<ListFoundationReferenceComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFoundationReferenceComponentsWithOptions(request, headers, runtime);
}

ListFoundationVersionsResponse Alibabacloud_Adp20210720::Client::listFoundationVersionsWithOptions(shared_ptr<ListFoundationVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyDefault)) {
    query->insert(pair<string, bool>("onlyDefault", *request->onlyDefault));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortDirect)) {
    query->insert(pair<string, string>("sortDirect", *request->sortDirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKey)) {
    query->insert(pair<string, string>("sortKey", *request->sortKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFoundationVersions"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFoundationVersionsResponse(callApi(params, req, runtime));
}

ListFoundationVersionsResponse Alibabacloud_Adp20210720::Client::listFoundationVersions(shared_ptr<ListFoundationVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFoundationVersionsWithOptions(request, headers, runtime);
}

ListProductComponentVersionsResponse Alibabacloud_Adp20210720::Client::listProductComponentVersionsWithOptions(shared_ptr<string> uid,
                                                                                                               shared_ptr<ListProductComponentVersionsRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    query->insert(pair<string, string>("releaseName", *request->releaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortDirect)) {
    query->insert(pair<string, string>("sortDirect", *request->sortDirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKey)) {
    query->insert(pair<string, string>("sortKey", *request->sortKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductComponentVersions"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/component-versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductComponentVersionsResponse(callApi(params, req, runtime));
}

ListProductComponentVersionsResponse Alibabacloud_Adp20210720::Client::listProductComponentVersions(shared_ptr<string> uid, shared_ptr<ListProductComponentVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductComponentVersionsWithOptions(uid, request, headers, runtime);
}

ListProductDeploymentsResponse Alibabacloud_Adp20210720::Client::listProductDeploymentsWithOptions(shared_ptr<ListProductDeploymentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    query->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductDeployments"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/deployments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductDeploymentsResponse(callApi(params, req, runtime));
}

ListProductDeploymentsResponse Alibabacloud_Adp20210720::Client::listProductDeployments(shared_ptr<ListProductDeploymentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductDeploymentsWithOptions(request, headers, runtime);
}

ListProductEnvironmentsResponse Alibabacloud_Adp20210720::Client::listProductEnvironmentsWithOptions(shared_ptr<string> uid,
                                                                                                     shared_ptr<ListProductEnvironmentsRequest> tmpReq,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProductEnvironmentsShrinkRequest> request = make_shared<ListProductEnvironmentsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListProductEnvironmentsRequestOptions>(tmpReq->options)) {
    request->optionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->options, make_shared<string>("options"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListProductEnvironmentsRequestPlatforms>>(tmpReq->platforms)) {
    request->platformsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->platforms, make_shared<string>("platforms"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->compatibleProductVersionUID)) {
    query->insert(pair<string, string>("compatibleProductVersionUID", *request->compatibleProductVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envType)) {
    query->insert(pair<string, string>("envType", *request->envType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionsShrink)) {
    query->insert(pair<string, string>("options", *request->optionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platformsShrink)) {
    query->insert(pair<string, string>("platforms", *request->platformsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionSpecUID)) {
    query->insert(pair<string, string>("productVersionSpecUID", *request->productVersionSpecUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductEnvironments"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/hosting/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/environments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductEnvironmentsResponse(callApi(params, req, runtime));
}

ListProductEnvironmentsResponse Alibabacloud_Adp20210720::Client::listProductEnvironments(shared_ptr<string> uid, shared_ptr<ListProductEnvironmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductEnvironmentsWithOptions(uid, request, headers, runtime);
}

ListProductFoundationReferencesResponse Alibabacloud_Adp20210720::Client::listProductFoundationReferencesWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductFoundationReferences"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/foundation-references"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductFoundationReferencesResponse(callApi(params, req, runtime));
}

ListProductFoundationReferencesResponse Alibabacloud_Adp20210720::Client::listProductFoundationReferences(shared_ptr<string> uid) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductFoundationReferencesWithOptions(uid, headers, runtime);
}

ListProductInstanceConfigsResponse Alibabacloud_Adp20210720::Client::listProductInstanceConfigsWithOptions(shared_ptr<ListProductInstanceConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentReleaseName)) {
    query->insert(pair<string, string>("componentReleaseName", *request->componentReleaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    query->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzy)) {
    query->insert(pair<string, string>("fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("paramType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameter)) {
    query->insert(pair<string, string>("parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductInstanceConfigs"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductInstanceConfigsResponse(callApi(params, req, runtime));
}

ListProductInstanceConfigsResponse Alibabacloud_Adp20210720::Client::listProductInstanceConfigs(shared_ptr<ListProductInstanceConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductInstanceConfigsWithOptions(request, headers, runtime);
}

ListProductInstancesResponse Alibabacloud_Adp20210720::Client::listProductInstancesWithOptions(shared_ptr<ListProductInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProductInstancesShrinkRequest> request = make_shared<ListProductInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListProductInstancesRequestOptions>(tmpReq->options)) {
    request->optionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->options, make_shared<string>("options"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envUID)) {
    query->insert(pair<string, string>("envUID", *request->envUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionsShrink)) {
    query->insert(pair<string, string>("options", *request->optionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    query->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductInstances"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductInstancesResponse(callApi(params, req, runtime));
}

ListProductInstancesResponse Alibabacloud_Adp20210720::Client::listProductInstances(shared_ptr<ListProductInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductInstancesWithOptions(request, headers, runtime);
}

ListProductVersionConfigsResponse Alibabacloud_Adp20210720::Client::listProductVersionConfigsWithOptions(shared_ptr<string> uid,
                                                                                                         shared_ptr<ListProductVersionConfigsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentReleaseName)) {
    query->insert(pair<string, string>("componentReleaseName", *request->componentReleaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configType)) {
    query->insert(pair<string, string>("configType", *request->configType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzy)) {
    query->insert(pair<string, string>("fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameter)) {
    query->insert(pair<string, string>("parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductVersionConfigs"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductVersionConfigsResponse(callApi(params, req, runtime));
}

ListProductVersionConfigsResponse Alibabacloud_Adp20210720::Client::listProductVersionConfigs(shared_ptr<string> uid, shared_ptr<ListProductVersionConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductVersionConfigsWithOptions(uid, request, headers, runtime);
}

ListProductVersionsResponse Alibabacloud_Adp20210720::Client::listProductVersionsWithOptions(shared_ptr<ListProductVersionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProductVersionsShrinkRequest> request = make_shared<ListProductVersionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListProductVersionsRequestPlatforms>>(tmpReq->platforms)) {
    request->platformsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->platforms, make_shared<string>("platforms"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->supportedFoundationTypes)) {
    request->supportedFoundationTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->supportedFoundationTypes, make_shared<string>("supportedFoundationTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListProductVersionsRequestTag>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzy)) {
    query->insert(pair<string, string>("fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platformsShrink)) {
    query->insert(pair<string, string>("platforms", *request->platformsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("productName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productUID)) {
    query->insert(pair<string, string>("productUID", *request->productUID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->released)) {
    query->insert(pair<string, bool>("released", *request->released));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supportedFoundationTypesShrink)) {
    query->insert(pair<string, string>("supportedFoundationTypes", *request->supportedFoundationTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("tag", *request->tagShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductVersions"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductVersionsResponse(callApi(params, req, runtime));
}

ListProductVersionsResponse Alibabacloud_Adp20210720::Client::listProductVersions(shared_ptr<ListProductVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductVersionsWithOptions(request, headers, runtime);
}

ListProductsResponse Alibabacloud_Adp20210720::Client::listProductsWithOptions(shared_ptr<ListProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzy)) {
    query->insert(pair<string, string>("fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProducts"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/products"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductsResponse(callApi(params, req, runtime));
}

ListProductsResponse Alibabacloud_Adp20210720::Client::listProducts(shared_ptr<ListProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProductsWithOptions(request, headers, runtime);
}

ListWorkflowTaskLogsResponse Alibabacloud_Adp20210720::Client::listWorkflowTaskLogsWithOptions(shared_ptr<string> stepName,
                                                                                               shared_ptr<string> taskName,
                                                                                               shared_ptr<ListWorkflowTaskLogsRequest> tmpReq,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkflowTaskLogsShrinkRequest> request = make_shared<ListWorkflowTaskLogsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->filterValues)) {
    request->filterValuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterValues, make_shared<string>("filterValues"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValuesShrink)) {
    query->insert(pair<string, string>("filterValues", *request->filterValuesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("orderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowType)) {
    query->insert(pair<string, string>("workflowType", *request->workflowType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->xuid)) {
    query->insert(pair<string, string>("xuid", *request->xuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkflowTaskLogs"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/workflows/steps/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(stepName)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskName)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkflowTaskLogsResponse(callApi(params, req, runtime));
}

ListWorkflowTaskLogsResponse Alibabacloud_Adp20210720::Client::listWorkflowTaskLogs(shared_ptr<string> stepName, shared_ptr<string> taskName, shared_ptr<ListWorkflowTaskLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkflowTaskLogsWithOptions(stepName, taskName, request, headers, runtime);
}

PutEnvironmentTunnelResponse Alibabacloud_Adp20210720::Client::putEnvironmentTunnelWithOptions(shared_ptr<string> uid,
                                                                                               shared_ptr<PutEnvironmentTunnelRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<PutEnvironmentTunnelRequestTunnelConfig>(request->tunnelConfig)) {
    body->insert(pair<string, PutEnvironmentTunnelRequestTunnelConfig>("tunnelConfig", *request->tunnelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tunnelType)) {
    body->insert(pair<string, string>("tunnelType", *request->tunnelType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutEnvironmentTunnel"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/tunnels"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutEnvironmentTunnelResponse(callApi(params, req, runtime));
}

PutEnvironmentTunnelResponse Alibabacloud_Adp20210720::Client::putEnvironmentTunnel(shared_ptr<string> uid, shared_ptr<PutEnvironmentTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putEnvironmentTunnelWithOptions(uid, request, headers, runtime);
}

PutProductInstanceConfigResponse Alibabacloud_Adp20210720::Client::putProductInstanceConfigWithOptions(shared_ptr<PutProductInstanceConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentUID)) {
    body->insert(pair<string, string>("componentUID", *request->componentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentVersionUID)) {
    body->insert(pair<string, string>("componentVersionUID", *request->componentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configUID)) {
    body->insert(pair<string, string>("configUID", *request->configUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentUID)) {
    body->insert(pair<string, string>("environmentUID", *request->environmentUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentName)) {
    body->insert(pair<string, string>("parentComponentName", *request->parentComponentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentVersionUID)) {
    body->insert(pair<string, string>("parentComponentVersionUID", *request->parentComponentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    body->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    body->insert(pair<string, string>("releaseName", *request->releaseName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scope)) {
    body->insert(pair<string, vector<string>>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("value", *request->value));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valueType)) {
    body->insert(pair<string, string>("valueType", *request->valueType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutProductInstanceConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-instances/configs"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutProductInstanceConfigResponse(callApi(params, req, runtime));
}

PutProductInstanceConfigResponse Alibabacloud_Adp20210720::Client::putProductInstanceConfig(shared_ptr<PutProductInstanceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putProductInstanceConfigWithOptions(request, headers, runtime);
}

SetEnvironmentFoundationReferenceResponse Alibabacloud_Adp20210720::Client::setEnvironmentFoundationReferenceWithOptions(shared_ptr<string> uid,
                                                                                                                         shared_ptr<string> foundationReferenceUID,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEnvironmentFoundationReference"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/foundation-references/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(foundationReferenceUID)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetEnvironmentFoundationReferenceResponse(callApi(params, req, runtime));
}

SetEnvironmentFoundationReferenceResponse Alibabacloud_Adp20210720::Client::setEnvironmentFoundationReference(shared_ptr<string> uid, shared_ptr<string> foundationReferenceUID) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return setEnvironmentFoundationReferenceWithOptions(uid, foundationReferenceUID, headers, runtime);
}

UpdateDeliverableResponse Alibabacloud_Adp20210720::Client::updateDeliverableWithOptions(shared_ptr<string> uid,
                                                                                         shared_ptr<UpdateDeliverableRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateDeliverableRequestFoundation>(request->foundation)) {
    body->insert(pair<string, UpdateDeliverableRequestFoundation>("foundation", *request->foundation));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDeliverableRequestProducts>>(request->products)) {
    body->insert(pair<string, vector<UpdateDeliverableRequestProducts>>("products", *request->products));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeliverable"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/deliverables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeliverableResponse(callApi(params, req, runtime));
}

UpdateDeliverableResponse Alibabacloud_Adp20210720::Client::updateDeliverable(shared_ptr<string> uid, shared_ptr<UpdateDeliverableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDeliverableWithOptions(uid, request, headers, runtime);
}

UpdateDeliveryInstanceResponse Alibabacloud_Adp20210720::Client::updateDeliveryInstanceWithOptions(shared_ptr<string> uid,
                                                                                                   shared_ptr<UpdateDeliveryInstanceRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverableConfigUID)) {
    body->insert(pair<string, string>("deliverableConfigUID", *request->deliverableConfigUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliverableUID)) {
    body->insert(pair<string, string>("deliverableUID", *request->deliverableUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("desc", *request->desc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeliveryInstance"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/delivery/delivery-instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeliveryInstanceResponse(callApi(params, req, runtime));
}

UpdateDeliveryInstanceResponse Alibabacloud_Adp20210720::Client::updateDeliveryInstance(shared_ptr<string> uid, shared_ptr<UpdateDeliveryInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDeliveryInstanceWithOptions(uid, request, headers, runtime);
}

UpdateEnvironmentResponse Alibabacloud_Adp20210720::Client::updateEnvironmentWithOptions(shared_ptr<string> uid,
                                                                                         shared_ptr<UpdateEnvironmentRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateEnvironmentRequestAdvancedConfigs>(request->advancedConfigs)) {
    body->insert(pair<string, UpdateEnvironmentRequestAdvancedConfigs>("advancedConfigs", *request->advancedConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    body->insert(pair<string, string>("location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendorConfig)) {
    body->insert(pair<string, string>("vendorConfig", *request->vendorConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvironment"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvironmentResponse(callApi(params, req, runtime));
}

UpdateEnvironmentResponse Alibabacloud_Adp20210720::Client::updateEnvironment(shared_ptr<string> uid, shared_ptr<UpdateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEnvironmentWithOptions(uid, request, headers, runtime);
}

UpdateEnvironmentNodeResponse Alibabacloud_Adp20210720::Client::updateEnvironmentNodeWithOptions(shared_ptr<string> uid,
                                                                                                 shared_ptr<string> nodeUID,
                                                                                                 shared_ptr<UpdateEnvironmentNodeRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationDisk)) {
    body->insert(pair<string, string>("applicationDisk", *request->applicationDisk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->etcdDisk)) {
    body->insert(pair<string, string>("etcdDisk", *request->etcdDisk));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->labels)) {
    body->insert(pair<string, map<string, boost::any>>("labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootPassword)) {
    body->insert(pair<string, string>("rootPassword", *request->rootPassword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEnvironmentNodeRequestTaints>>(request->taints)) {
    body->insert(pair<string, vector<UpdateEnvironmentNodeRequestTaints>>("taints", *request->taints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tridentSystemDisk)) {
    body->insert(pair<string, string>("tridentSystemDisk", *request->tridentSystemDisk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tridentSystemSizeDisk)) {
    body->insert(pair<string, long>("tridentSystemSizeDisk", *request->tridentSystemSizeDisk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvironmentNode"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/nodes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(nodeUID)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvironmentNodeResponse(callApi(params, req, runtime));
}

UpdateEnvironmentNodeResponse Alibabacloud_Adp20210720::Client::updateEnvironmentNode(shared_ptr<string> uid, shared_ptr<string> nodeUID, shared_ptr<UpdateEnvironmentNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEnvironmentNodeWithOptions(uid, nodeUID, request, headers, runtime);
}

UpdateEnvironmentProductVersionResponse Alibabacloud_Adp20210720::Client::updateEnvironmentProductVersionWithOptions(shared_ptr<string> uid,
                                                                                                                     shared_ptr<UpdateEnvironmentProductVersionRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->oldProductVersionSpecUID)) {
    body->insert(pair<string, string>("oldProductVersionSpecUID", *request->oldProductVersionSpecUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldProductVersionUID)) {
    body->insert(pair<string, string>("oldProductVersionUID", *request->oldProductVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionSpecUID)) {
    body->insert(pair<string, string>("productVersionSpecUID", *request->productVersionSpecUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productVersionUID)) {
    body->insert(pair<string, string>("productVersionUID", *request->productVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvironmentProductVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/product-versions"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvironmentProductVersionResponse(callApi(params, req, runtime));
}

UpdateEnvironmentProductVersionResponse Alibabacloud_Adp20210720::Client::updateEnvironmentProductVersion(shared_ptr<string> uid, shared_ptr<UpdateEnvironmentProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEnvironmentProductVersionWithOptions(uid, request, headers, runtime);
}

UpdateFoundationComponentReferenceResponse Alibabacloud_Adp20210720::Client::updateFoundationComponentReferenceWithOptions(shared_ptr<string> uid,
                                                                                                                           shared_ptr<string> componentReferenceUID,
                                                                                                                           shared_ptr<UpdateFoundationComponentReferenceRequest> request,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentOrchestrationValues)) {
    body->insert(pair<string, string>("componentOrchestrationValues", *request->componentOrchestrationValues));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFoundationComponentReference"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation-references/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/components/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(componentReferenceUID)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFoundationComponentReferenceResponse(callApi(params, req, runtime));
}

UpdateFoundationComponentReferenceResponse Alibabacloud_Adp20210720::Client::updateFoundationComponentReference(shared_ptr<string> uid, shared_ptr<string> componentReferenceUID, shared_ptr<UpdateFoundationComponentReferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFoundationComponentReferenceWithOptions(uid, componentReferenceUID, request, headers, runtime);
}

UpdateFoundationReferenceResponse Alibabacloud_Adp20210720::Client::updateFoundationReferenceWithOptions(shared_ptr<string> uid,
                                                                                                         shared_ptr<UpdateFoundationReferenceRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterConfig)) {
    body->insert(pair<string, string>("clusterConfig", *request->clusterConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFoundationReference"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/foundation-references/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFoundationReferenceResponse(callApi(params, req, runtime));
}

UpdateFoundationReferenceResponse Alibabacloud_Adp20210720::Client::updateFoundationReference(shared_ptr<string> uid, shared_ptr<UpdateFoundationReferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFoundationReferenceWithOptions(uid, request, headers, runtime);
}

UpdateProductResponse Alibabacloud_Adp20210720::Client::updateProductWithOptions(shared_ptr<string> uid,
                                                                                 shared_ptr<UpdateProductRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->categories)) {
    body->insert(pair<string, vector<string>>("categories", *request->categories));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    body->insert(pair<string, string>("vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProduct"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/products/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductResponse(callApi(params, req, runtime));
}

UpdateProductResponse Alibabacloud_Adp20210720::Client::updateProduct(shared_ptr<string> uid, shared_ptr<UpdateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProductWithOptions(uid, request, headers, runtime);
}

UpdateProductComponentVersionResponse Alibabacloud_Adp20210720::Client::updateProductComponentVersionWithOptions(shared_ptr<string> uid,
                                                                                                                 shared_ptr<string> relationUID,
                                                                                                                 shared_ptr<UpdateProductComponentVersionRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentOrchestrationValues)) {
    body->insert(pair<string, string>("componentOrchestrationValues", *request->componentOrchestrationValues));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentSpecificationUid)) {
    body->insert(pair<string, string>("componentSpecificationUid", *request->componentSpecificationUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentSpecificationValues)) {
    body->insert(pair<string, string>("componentSpecificationValues", *request->componentSpecificationValues));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newComponentVersionUID)) {
    body->insert(pair<string, string>("newComponentVersionUID", *request->newComponentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateProductComponentVersionRequestPolicy>(request->policy)) {
    body->insert(pair<string, UpdateProductComponentVersionRequestPolicy>("policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    body->insert(pair<string, string>("releaseName", *request->releaseName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->unsetComponentVersionSpec)) {
    body->insert(pair<string, bool>("unsetComponentVersionSpec", *request->unsetComponentVersionSpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductComponentVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/relations/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(relationUID)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductComponentVersionResponse(callApi(params, req, runtime));
}

UpdateProductComponentVersionResponse Alibabacloud_Adp20210720::Client::updateProductComponentVersion(shared_ptr<string> uid, shared_ptr<string> relationUID, shared_ptr<UpdateProductComponentVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProductComponentVersionWithOptions(uid, relationUID, request, headers, runtime);
}

UpdateProductFoundationVersionResponse Alibabacloud_Adp20210720::Client::updateProductFoundationVersionWithOptions(shared_ptr<string> uid,
                                                                                                                   shared_ptr<UpdateProductFoundationVersionRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->foundationVersionUID)) {
    body->insert(pair<string, string>("foundationVersionUID", *request->foundationVersionUID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductFoundationVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/foundation"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductFoundationVersionResponse(callApi(params, req, runtime));
}

UpdateProductFoundationVersionResponse Alibabacloud_Adp20210720::Client::updateProductFoundationVersion(shared_ptr<string> uid, shared_ptr<UpdateProductFoundationVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProductFoundationVersionWithOptions(uid, request, headers, runtime);
}

UpdateProductVersionResponse Alibabacloud_Adp20210720::Client::updateProductVersionWithOptions(shared_ptr<string> uid,
                                                                                               shared_ptr<UpdateProductVersionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    query->insert(pair<string, string>("action", *request->action));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->continuousIntegration)) {
    body->insert(pair<string, bool>("continuousIntegration", *request->continuousIntegration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entry)) {
    body->insert(pair<string, string>("entry", *request->entry));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductVersion"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductVersionResponse(callApi(params, req, runtime));
}

UpdateProductVersionResponse Alibabacloud_Adp20210720::Client::updateProductVersion(shared_ptr<string> uid, shared_ptr<UpdateProductVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProductVersionWithOptions(uid, request, headers, runtime);
}

UpdateProductVersionConfigResponse Alibabacloud_Adp20210720::Client::updateProductVersionConfigWithOptions(shared_ptr<string> uid,
                                                                                                           shared_ptr<string> configUID,
                                                                                                           shared_ptr<UpdateProductVersionConfigRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->componentVersionUID)) {
    body->insert(pair<string, string>("componentVersionUID", *request->componentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentComponentVersionUID)) {
    body->insert(pair<string, string>("parentComponentVersionUID", *request->parentComponentVersionUID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("value", *request->value));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valueType)) {
    body->insert(pair<string, string>("valueType", *request->valueType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductVersionConfig"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/product-versions/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/configs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(configUID)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductVersionConfigResponse(callApi(params, req, runtime));
}

UpdateProductVersionConfigResponse Alibabacloud_Adp20210720::Client::updateProductVersionConfig(shared_ptr<string> uid, shared_ptr<string> configUID, shared_ptr<UpdateProductVersionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProductVersionConfigWithOptions(uid, configUID, request, headers, runtime);
}

ValidateEnvironmentTunnelResponse Alibabacloud_Adp20210720::Client::validateEnvironmentTunnelWithOptions(shared_ptr<string> uid,
                                                                                                         shared_ptr<ValidateEnvironmentTunnelRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ValidateEnvironmentTunnelRequestTunnelConfig>(request->tunnelConfig)) {
    body->insert(pair<string, ValidateEnvironmentTunnelRequestTunnelConfig>("tunnelConfig", *request->tunnelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tunnelType)) {
    body->insert(pair<string, string>("tunnelType", *request->tunnelType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateEnvironmentTunnel"))},
    {"version", boost::any(string("2021-07-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/environments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(uid)) + string("/tunnels/validation"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateEnvironmentTunnelResponse(callApi(params, req, runtime));
}

ValidateEnvironmentTunnelResponse Alibabacloud_Adp20210720::Client::validateEnvironmentTunnel(shared_ptr<string> uid, shared_ptr<ValidateEnvironmentTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateEnvironmentTunnelWithOptions(uid, request, headers, runtime);
}

