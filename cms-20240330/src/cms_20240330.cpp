// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cms_20240330.hpp>
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

using namespace Alibabacloud_Cms20240330;

Alibabacloud_Cms20240330::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cms"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cms20240330::Client::getEndpoint(shared_ptr<string> productId,
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

CreateEntityStoreResponse Alibabacloud_Cms20240330::Client::createEntityStoreWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEntityStore"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceName)) + string("/entitystore"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEntityStoreResponse(callApi(params, req, runtime));
}

CreateEntityStoreResponse Alibabacloud_Cms20240330::Client::createEntityStore(shared_ptr<string> workspaceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEntityStoreWithOptions(workspaceName, headers, runtime);
}

CreatePrometheusInstanceResponse Alibabacloud_Cms20240330::Client::createPrometheusInstanceWithOptions(shared_ptr<CreatePrometheusInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->archiveDuration)) {
    body->insert(pair<string, long>("archiveDuration", *request->archiveDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authFreeReadPolicy)) {
    body->insert(pair<string, string>("authFreeReadPolicy", *request->authFreeReadPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authFreeWritePolicy)) {
    body->insert(pair<string, string>("authFreeWritePolicy", *request->authFreeWritePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthFreeRead)) {
    body->insert(pair<string, bool>("enableAuthFreeRead", *request->enableAuthFreeRead));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthFreeWrite)) {
    body->insert(pair<string, bool>("enableAuthFreeWrite", *request->enableAuthFreeWrite));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthToken)) {
    body->insert(pair<string, bool>("enableAuthToken", *request->enableAuthToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    body->insert(pair<string, string>("paymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prometheusInstanceName)) {
    body->insert(pair<string, string>("prometheusInstanceName", *request->prometheusInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storageDuration)) {
    body->insert(pair<string, long>("storageDuration", *request->storageDuration));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePrometheusInstanceRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreatePrometheusInstanceRequestTags>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspace)) {
    body->insert(pair<string, string>("workspace", *request->workspace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrometheusInstance"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/prometheus-instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrometheusInstanceResponse(callApi(params, req, runtime));
}

CreatePrometheusInstanceResponse Alibabacloud_Cms20240330::Client::createPrometheusInstance(shared_ptr<CreatePrometheusInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPrometheusInstanceWithOptions(request, headers, runtime);
}

CreateServiceResponse Alibabacloud_Cms20240330::Client::createServiceWithOptions(shared_ptr<string> workspace,
                                                                                 shared_ptr<CreateServiceRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributes)) {
    body->insert(pair<string, string>("attributes", *request->attributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    body->insert(pair<string, string>("pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("serviceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatus)) {
    body->insert(pair<string, string>("serviceStatus", *request->serviceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    body->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/service"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_Cms20240330::Client::createService(shared_ptr<string> workspace, shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(workspace, request, headers, runtime);
}

CreateUmodelResponse Alibabacloud_Cms20240330::Client::createUmodelWithOptions(shared_ptr<string> workspace,
                                                                               shared_ptr<CreateUmodelRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateUmodelRequestCommonSchemaRef>>(request->commonSchemaRef)) {
    body->insert(pair<string, vector<CreateUmodelRequestCommonSchemaRef>>("commonSchemaRef", *request->commonSchemaRef));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUmodel"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUmodelResponse(callApi(params, req, runtime));
}

CreateUmodelResponse Alibabacloud_Cms20240330::Client::createUmodel(shared_ptr<string> workspace, shared_ptr<CreateUmodelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUmodelWithOptions(workspace, request, headers, runtime);
}

DeleteEntityStoreResponse Alibabacloud_Cms20240330::Client::deleteEntityStoreWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEntityStore"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceName)) + string("/entitystore"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEntityStoreResponse(callApi(params, req, runtime));
}

DeleteEntityStoreResponse Alibabacloud_Cms20240330::Client::deleteEntityStore(shared_ptr<string> workspaceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEntityStoreWithOptions(workspaceName, headers, runtime);
}

DeleteServiceResponse Alibabacloud_Cms20240330::Client::deleteServiceWithOptions(shared_ptr<string> workspace,
                                                                                 shared_ptr<string> serviceId,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/service/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_Cms20240330::Client::deleteService(shared_ptr<string> workspace, shared_ptr<string> serviceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceWithOptions(workspace, serviceId, headers, runtime);
}

DeleteUmodelResponse Alibabacloud_Cms20240330::Client::deleteUmodelWithOptions(shared_ptr<string> workspace, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUmodel"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUmodelResponse(callApi(params, req, runtime));
}

DeleteUmodelResponse Alibabacloud_Cms20240330::Client::deleteUmodel(shared_ptr<string> workspace) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUmodelWithOptions(workspace, headers, runtime);
}

DeleteUmodelDataResponse Alibabacloud_Cms20240330::Client::deleteUmodelDataWithOptions(shared_ptr<string> workspace,
                                                                                       shared_ptr<DeleteUmodelDataRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    query->insert(pair<string, string>("kind", *request->kind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUmodelData"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel/data"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUmodelDataResponse(callApi(params, req, runtime));
}

DeleteUmodelDataResponse Alibabacloud_Cms20240330::Client::deleteUmodelData(shared_ptr<string> workspace, shared_ptr<DeleteUmodelDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteUmodelDataWithOptions(workspace, request, headers, runtime);
}

DeleteWorkspaceResponse Alibabacloud_Cms20240330::Client::deleteWorkspaceWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspace"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceResponse(callApi(params, req, runtime));
}

DeleteWorkspaceResponse Alibabacloud_Cms20240330::Client::deleteWorkspace(shared_ptr<string> workspaceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteWorkspaceWithOptions(workspaceName, headers, runtime);
}

GetEntityStoreResponse Alibabacloud_Cms20240330::Client::getEntityStoreWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEntityStore"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceName)) + string("/entitystore"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEntityStoreResponse(callApi(params, req, runtime));
}

GetEntityStoreResponse Alibabacloud_Cms20240330::Client::getEntityStore(shared_ptr<string> workspaceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEntityStoreWithOptions(workspaceName, headers, runtime);
}

GetEntityStoreDataResponse Alibabacloud_Cms20240330::Client::getEntityStoreDataWithOptions(shared_ptr<string> workspace,
                                                                                           shared_ptr<GetEntityStoreDataRequest> request,
                                                                                           shared_ptr<GetEntityStoreDataHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("to", *request->to));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->acceptEncoding)) {
    realHeaders->insert(pair<string, string>("acceptEncoding", Darabonba_Util::Client::toJSONString(headers->acceptEncoding)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEntityStoreData"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/entitiesAndRelations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEntityStoreDataResponse(callApi(params, req, runtime));
}

GetEntityStoreDataResponse Alibabacloud_Cms20240330::Client::getEntityStoreData(shared_ptr<string> workspace, shared_ptr<GetEntityStoreDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetEntityStoreDataHeaders> headers = make_shared<GetEntityStoreDataHeaders>();
  return getEntityStoreDataWithOptions(workspace, request, headers, runtime);
}

GetServiceResponse Alibabacloud_Cms20240330::Client::getServiceWithOptions(shared_ptr<string> workspace,
                                                                           shared_ptr<string> serviceId,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetService"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/service/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceResponse(callApi(params, req, runtime));
}

GetServiceResponse Alibabacloud_Cms20240330::Client::getService(shared_ptr<string> workspace, shared_ptr<string> serviceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceWithOptions(workspace, serviceId, headers, runtime);
}

GetServiceObservabilityResponse Alibabacloud_Cms20240330::Client::getServiceObservabilityWithOptions(shared_ptr<string> workspace,
                                                                                                     shared_ptr<string> type,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceObservability"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/service-observability/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(type)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceObservabilityResponse(callApi(params, req, runtime));
}

GetServiceObservabilityResponse Alibabacloud_Cms20240330::Client::getServiceObservability(shared_ptr<string> workspace, shared_ptr<string> type) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceObservabilityWithOptions(workspace, type, headers, runtime);
}

GetUmodelResponse Alibabacloud_Cms20240330::Client::getUmodelWithOptions(shared_ptr<string> workspace, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUmodel"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUmodelResponse(callApi(params, req, runtime));
}

GetUmodelResponse Alibabacloud_Cms20240330::Client::getUmodel(shared_ptr<string> workspace) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUmodelWithOptions(workspace, headers, runtime);
}

GetUmodelDataResponse Alibabacloud_Cms20240330::Client::getUmodelDataWithOptions(shared_ptr<string> workspace,
                                                                                 shared_ptr<GetUmodelDataRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("method", *request->method));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->content)) {
    body->insert(pair<string, boost::any>("content", *request->content));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUmodelData"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel/graph"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUmodelDataResponse(callApi(params, req, runtime));
}

GetUmodelDataResponse Alibabacloud_Cms20240330::Client::getUmodelData(shared_ptr<string> workspace, shared_ptr<GetUmodelDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getUmodelDataWithOptions(workspace, request, headers, runtime);
}

GetWorkspaceResponse Alibabacloud_Cms20240330::Client::getWorkspaceWithOptions(shared_ptr<string> workspaceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkspace"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkspaceResponse(callApi(params, req, runtime));
}

GetWorkspaceResponse Alibabacloud_Cms20240330::Client::getWorkspace(shared_ptr<string> workspaceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getWorkspaceWithOptions(workspaceName, headers, runtime);
}

ListAlertActionsResponse Alibabacloud_Cms20240330::Client::listAlertActionsWithOptions(shared_ptr<ListAlertActionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAlertActionsShrinkRequest> request = make_shared<ListAlertActionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->alertActionIds)) {
    request->alertActionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alertActionIds, make_shared<string>("alertActionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertActionIdsShrink)) {
    query->insert(pair<string, string>("alertActionIds", *request->alertActionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertActionName)) {
    query->insert(pair<string, string>("alertActionName", *request->alertActionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlertActions"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/alertActions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertActionsResponse(callApi(params, req, runtime));
}

ListAlertActionsResponse Alibabacloud_Cms20240330::Client::listAlertActions(shared_ptr<ListAlertActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlertActionsWithOptions(request, headers, runtime);
}

ListServicesResponse Alibabacloud_Cms20240330::Client::listServicesWithOptions(shared_ptr<string> workspace,
                                                                               shared_ptr<ListServicesRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("serviceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_Cms20240330::Client::listServices(shared_ptr<string> workspace, shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(workspace, request, headers, runtime);
}

ListWorkspacesResponse Alibabacloud_Cms20240330::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkspacesShrinkRequest> request = make_shared<ListWorkspacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->workspaceNameList)) {
    request->workspaceNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->workspaceNameList, make_shared<string>("workspaceNameList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceName)) {
    query->insert(pair<string, string>("workspaceName", *request->workspaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceNameListShrink)) {
    query->insert(pair<string, string>("workspaceNameList", *request->workspaceNameListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaces"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspacesResponse(callApi(params, req, runtime));
}

ListWorkspacesResponse Alibabacloud_Cms20240330::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listWorkspacesWithOptions(request, headers, runtime);
}

PutWorkspaceResponse Alibabacloud_Cms20240330::Client::putWorkspaceWithOptions(shared_ptr<string> workspaceName,
                                                                               shared_ptr<PutWorkspaceRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsProject)) {
    body->insert(pair<string, string>("slsProject", *request->slsProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutWorkspace"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceName)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutWorkspaceResponse(callApi(params, req, runtime));
}

PutWorkspaceResponse Alibabacloud_Cms20240330::Client::putWorkspace(shared_ptr<string> workspaceName, shared_ptr<PutWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putWorkspaceWithOptions(workspaceName, request, headers, runtime);
}

UpdateServiceResponse Alibabacloud_Cms20240330::Client::updateServiceWithOptions(shared_ptr<string> workspace,
                                                                                 shared_ptr<string> serviceId,
                                                                                 shared_ptr<UpdateServiceRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributes)) {
    body->insert(pair<string, string>("attributes", *request->attributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatus)) {
    body->insert(pair<string, string>("serviceStatus", *request->serviceStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateService"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/service/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceResponse(callApi(params, req, runtime));
}

UpdateServiceResponse Alibabacloud_Cms20240330::Client::updateService(shared_ptr<string> workspace, shared_ptr<string> serviceId, shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceWithOptions(workspace, serviceId, request, headers, runtime);
}

UpdateUmodelResponse Alibabacloud_Cms20240330::Client::updateUmodelWithOptions(shared_ptr<string> workspace,
                                                                               shared_ptr<UpdateUmodelRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateUmodelRequestCommonSchemaRef>>(request->commonSchemaRef)) {
    body->insert(pair<string, vector<UpdateUmodelRequestCommonSchemaRef>>("commonSchemaRef", *request->commonSchemaRef));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUmodel"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUmodelResponse(callApi(params, req, runtime));
}

UpdateUmodelResponse Alibabacloud_Cms20240330::Client::updateUmodel(shared_ptr<string> workspace, shared_ptr<UpdateUmodelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUmodelWithOptions(workspace, request, headers, runtime);
}

UpsertUmodelDataResponse Alibabacloud_Cms20240330::Client::upsertUmodelDataWithOptions(shared_ptr<string> workspace,
                                                                                       shared_ptr<UpsertUmodelDataRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("method", *request->method));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<boost::any>>(request->elements)) {
    body->insert(pair<string, vector<boost::any>>("elements", *request->elements));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpsertUmodelData"))},
    {"version", boost::any(string("2024-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/workspace/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspace)) + string("/umodel/data"))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpsertUmodelDataResponse(callApi(params, req, runtime));
}

UpsertUmodelDataResponse Alibabacloud_Cms20240330::Client::upsertUmodelData(shared_ptr<string> workspace, shared_ptr<UpsertUmodelDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upsertUmodelDataWithOptions(workspace, request, headers, runtime);
}

