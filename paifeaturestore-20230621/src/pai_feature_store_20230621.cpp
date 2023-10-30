// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_feature_store_20230621.hpp>
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

using namespace Alibabacloud_PaiFeatureStore20230621;

Alibabacloud_PaiFeatureStore20230621::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("paifeaturestore"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiFeatureStore20230621::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeProjectFeatureEntityHotIdVersionResponse Alibabacloud_PaiFeatureStore20230621::Client::changeProjectFeatureEntityHotIdVersionWithOptions(shared_ptr<string> InstanceId,
                                                                                                                                               shared_ptr<string> ProjectId,
                                                                                                                                               shared_ptr<string> FeatureEntityName,
                                                                                                                                               shared_ptr<ChangeProjectFeatureEntityHotIdVersionRequest> request,
                                                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeProjectFeatureEntityHotIdVersion"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureentities/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureEntityName)) + string("/action/changehotidversion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeProjectFeatureEntityHotIdVersionResponse(callApi(params, req, runtime));
}

ChangeProjectFeatureEntityHotIdVersionResponse Alibabacloud_PaiFeatureStore20230621::Client::changeProjectFeatureEntityHotIdVersion(shared_ptr<string> InstanceId,
                                                                                                                                    shared_ptr<string> ProjectId,
                                                                                                                                    shared_ptr<string> FeatureEntityName,
                                                                                                                                    shared_ptr<ChangeProjectFeatureEntityHotIdVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeProjectFeatureEntityHotIdVersionWithOptions(InstanceId, ProjectId, FeatureEntityName, request, headers, runtime);
}

CheckInstanceDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::checkInstanceDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<CheckInstanceDatasourceRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckInstanceDatasource"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/action/checkdatasource"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckInstanceDatasourceResponse(callApi(params, req, runtime));
}

CheckInstanceDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::checkInstanceDatasource(shared_ptr<string> InstanceId, shared_ptr<CheckInstanceDatasourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkInstanceDatasourceWithOptions(InstanceId, request, headers, runtime);
}

CreateDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::createDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<CreateDatasourceRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDatasource"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDatasourceResponse(callApi(params, req, runtime));
}

CreateDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::createDatasource(shared_ptr<string> InstanceId, shared_ptr<CreateDatasourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDatasourceWithOptions(InstanceId, request, headers, runtime);
}

CreateFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::createFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<CreateFeatureEntityRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->joinId)) {
    body->insert(pair<string, string>("JoinId", *request->joinId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFeatureEntity"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureentities"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFeatureEntityResponse(callApi(params, req, runtime));
}

CreateFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::createFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<CreateFeatureEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFeatureEntityWithOptions(InstanceId, request, headers, runtime);
}

CreateFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::createFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<CreateFeatureViewRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureEntityId)) {
    body->insert(pair<string, string>("FeatureEntityId", *request->featureEntityId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFeatureViewRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<CreateFeatureViewRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerDatasourceId)) {
    body->insert(pair<string, string>("RegisterDatasourceId", *request->registerDatasourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerTable)) {
    body->insert(pair<string, string>("RegisterTable", *request->registerTable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->syncOnlineTable)) {
    body->insert(pair<string, bool>("SyncOnlineTable", *request->syncOnlineTable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->TTL)) {
    body->insert(pair<string, long>("TTL", *request->TTL));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tags)) {
    body->insert(pair<string, vector<string>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->writeMethod)) {
    body->insert(pair<string, string>("WriteMethod", *request->writeMethod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFeatureView"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFeatureViewResponse(callApi(params, req, runtime));
}

CreateFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::createFeatureView(shared_ptr<string> InstanceId, shared_ptr<CreateFeatureViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFeatureViewWithOptions(InstanceId, request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_PaiFeatureStore20230621::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_PaiFeatureStore20230621::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

CreateLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::createLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<CreateLabelTableRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceId)) {
    body->insert(pair<string, string>("DatasourceId", *request->datasourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLabelTableRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<CreateLabelTableRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLabelTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/labeltables"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLabelTableResponse(callApi(params, req, runtime));
}

CreateLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::createLabelTable(shared_ptr<string> InstanceId, shared_ptr<CreateLabelTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLabelTableWithOptions(InstanceId, request, headers, runtime);
}

CreateModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::createModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<CreateModelFeatureRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateModelFeatureRequestFeatures>>(request->features)) {
    body->insert(pair<string, vector<CreateModelFeatureRequestFeatures>>("Features", *request->features));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelTableId)) {
    body->insert(pair<string, string>("LabelTableId", *request->labelTableId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sequenceFeatureViewIds)) {
    body->insert(pair<string, vector<string>>("SequenceFeatureViewIds", *request->sequenceFeatureViewIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModelFeature"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/modelfeatures"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelFeatureResponse(callApi(params, req, runtime));
}

CreateModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::createModelFeature(shared_ptr<string> InstanceId, shared_ptr<CreateModelFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createModelFeatureWithOptions(InstanceId, request, headers, runtime);
}

CreateProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::createProjectWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CreateProjectRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->offlineDatasourceId)) {
    body->insert(pair<string, string>("OfflineDatasourceId", *request->offlineDatasourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offlineLifeCycle)) {
    body->insert(pair<string, long>("OfflineLifeCycle", *request->offlineLifeCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineDatasourceId)) {
    body->insert(pair<string, string>("OnlineDatasourceId", *request->onlineDatasourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProjectResponse(callApi(params, req, runtime));
}

CreateProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::createProject(shared_ptr<string> InstanceId, shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectWithOptions(InstanceId, request, headers, runtime);
}

CreateServiceIdentityRoleResponse Alibabacloud_PaiFeatureStore20230621::Client::createServiceIdentityRoleWithOptions(shared_ptr<CreateServiceIdentityRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("RoleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceIdentityRole"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/serviceidentityroles"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceIdentityRoleResponse(callApi(params, req, runtime));
}

CreateServiceIdentityRoleResponse Alibabacloud_PaiFeatureStore20230621::Client::createServiceIdentityRole(shared_ptr<CreateServiceIdentityRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceIdentityRoleWithOptions(request, headers, runtime);
}

DeleteDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> DatasourceId,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDatasource"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatasourceResponse(callApi(params, req, runtime));
}

DeleteDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteDatasource(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDatasourceWithOptions(InstanceId, DatasourceId, headers, runtime);
}

DeleteFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<string> FeatureEntityId,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFeatureEntity"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureentities/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureEntityId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFeatureEntityResponse(callApi(params, req, runtime));
}

DeleteFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<string> FeatureEntityId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFeatureEntityWithOptions(InstanceId, FeatureEntityId, headers, runtime);
}

DeleteFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<string> FeatureViewId,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFeatureView"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFeatureViewResponse(callApi(params, req, runtime));
}

DeleteFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteFeatureView(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFeatureViewWithOptions(InstanceId, FeatureViewId, headers, runtime);
}

DeleteLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> LabelTableId,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLabelTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/labeltables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LabelTableId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLabelTableResponse(callApi(params, req, runtime));
}

DeleteLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteLabelTable(shared_ptr<string> InstanceId, shared_ptr<string> LabelTableId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLabelTableWithOptions(InstanceId, LabelTableId, headers, runtime);
}

DeleteModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> ModelFeatureId,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModelFeature"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/modelfeatures/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelFeatureId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelFeatureResponse(callApi(params, req, runtime));
}

DeleteModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteModelFeatureWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

DeleteProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteProjectWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<string> ProjectId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::deleteProject(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProjectWithOptions(InstanceId, ProjectId, headers, runtime);
}

ExportModelFeatureTrainingSetTableResponse Alibabacloud_PaiFeatureStore20230621::Client::exportModelFeatureTrainingSetTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                                                       shared_ptr<string> ModelFeatureId,
                                                                                                                                       shared_ptr<ExportModelFeatureTrainingSetTableRequest> request,
                                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, FeatureViewConfigValue>>(request->featureViewConfig)) {
    body->insert(pair<string, map<string, FeatureViewConfigValue>>("FeatureViewConfig", *request->featureViewConfig));
  }
  if (!Darabonba_Util::Client::isUnset<ExportModelFeatureTrainingSetTableRequestLabelInputConfig>(request->labelInputConfig)) {
    body->insert(pair<string, ExportModelFeatureTrainingSetTableRequestLabelInputConfig>("LabelInputConfig", *request->labelInputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<ExportModelFeatureTrainingSetTableRequestTrainingSetConfig>(request->trainingSetConfig)) {
    body->insert(pair<string, ExportModelFeatureTrainingSetTableRequestTrainingSetConfig>("TrainingSetConfig", *request->trainingSetConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportModelFeatureTrainingSetTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/modelfeatures/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelFeatureId)) + string("/action/exporttrainingsettable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportModelFeatureTrainingSetTableResponse(callApi(params, req, runtime));
}

ExportModelFeatureTrainingSetTableResponse Alibabacloud_PaiFeatureStore20230621::Client::exportModelFeatureTrainingSetTable(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId, shared_ptr<ExportModelFeatureTrainingSetTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportModelFeatureTrainingSetTableWithOptions(InstanceId, ModelFeatureId, request, headers, runtime);
}

GetDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::getDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<string> DatasourceId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatasource"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasourceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasourceResponse(callApi(params, req, runtime));
}

GetDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::getDatasource(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDatasourceWithOptions(InstanceId, DatasourceId, headers, runtime);
}

GetDatasourceTableResponse Alibabacloud_PaiFeatureStore20230621::Client::getDatasourceTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> DatasourceId,
                                                                                                       shared_ptr<string> TableName,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDatasourceTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasourceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TableName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDatasourceTableResponse(callApi(params, req, runtime));
}

GetDatasourceTableResponse Alibabacloud_PaiFeatureStore20230621::Client::getDatasourceTable(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId, shared_ptr<string> TableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDatasourceTableWithOptions(InstanceId, DatasourceId, TableName, headers, runtime);
}

GetFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::getFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> FeatureEntityId,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFeatureEntity"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureentities/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureEntityId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFeatureEntityResponse(callApi(params, req, runtime));
}

GetFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::getFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<string> FeatureEntityId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFeatureEntityWithOptions(InstanceId, FeatureEntityId, headers, runtime);
}

GetFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::getFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<string> FeatureViewId,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFeatureView"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFeatureViewResponse(callApi(params, req, runtime));
}

GetFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::getFeatureView(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFeatureViewWithOptions(InstanceId, FeatureViewId, headers, runtime);
}

GetInstanceResponse Alibabacloud_PaiFeatureStore20230621::Client::getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_PaiFeatureStore20230621::Client::getInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(InstanceId, headers, runtime);
}

GetLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::getLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<string> LabelTableId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLabelTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/labeltables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LabelTableId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLabelTableResponse(callApi(params, req, runtime));
}

GetLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::getLabelTable(shared_ptr<string> InstanceId, shared_ptr<string> LabelTableId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLabelTableWithOptions(InstanceId, LabelTableId, headers, runtime);
}

GetModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::getModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> ModelFeatureId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetModelFeature"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/modelfeatures/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelFeatureId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetModelFeatureResponse(callApi(params, req, runtime));
}

GetModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::getModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getModelFeatureWithOptions(InstanceId, ModelFeatureId, headers, runtime);
}

GetProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<string> ProjectId,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::getProject(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectWithOptions(InstanceId, ProjectId, headers, runtime);
}

GetProjectFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<string> ProjectId,
                                                                                                                 shared_ptr<string> FeatureEntityName,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectFeatureEntity"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureentities/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureEntityName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectFeatureEntityResponse(callApi(params, req, runtime));
}

GetProjectFeatureEntityResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId, shared_ptr<string> FeatureEntityName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectFeatureEntityWithOptions(InstanceId, ProjectId, FeatureEntityName, headers, runtime);
}

GetProjectFeatureEntityHotIdsResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectFeatureEntityHotIdsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                             shared_ptr<string> ProjectId,
                                                                                                                             shared_ptr<string> NextSeqNumber,
                                                                                                                             shared_ptr<string> FeatureEntityName,
                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectFeatureEntityHotIds"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureentities/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureEntityName)) + string("/hotids/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(NextSeqNumber)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectFeatureEntityHotIdsResponse(callApi(params, req, runtime));
}

GetProjectFeatureEntityHotIdsResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectFeatureEntityHotIds(shared_ptr<string> InstanceId,
                                                                                                                  shared_ptr<string> ProjectId,
                                                                                                                  shared_ptr<string> NextSeqNumber,
                                                                                                                  shared_ptr<string> FeatureEntityName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectFeatureEntityHotIdsWithOptions(InstanceId, ProjectId, NextSeqNumber, FeatureEntityName, headers, runtime);
}

GetProjectFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> ProjectId,
                                                                                                             shared_ptr<string> FeatureViewName,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectFeatureView"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectFeatureViewResponse(callApi(params, req, runtime));
}

GetProjectFeatureViewResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectFeatureView(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId, shared_ptr<string> FeatureViewName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectFeatureViewWithOptions(InstanceId, ProjectId, FeatureViewName, headers, runtime);
}

GetProjectModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<string> ProjectId,
                                                                                                               shared_ptr<string> ModelFeatureName,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectModelFeature"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/modelfeatures/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelFeatureName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectModelFeatureResponse(callApi(params, req, runtime));
}

GetProjectModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::getProjectModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId, shared_ptr<string> ModelFeatureName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectModelFeatureWithOptions(InstanceId, ProjectId, ModelFeatureName, headers, runtime);
}

GetServiceIdentityRoleResponse Alibabacloud_PaiFeatureStore20230621::Client::getServiceIdentityRoleWithOptions(shared_ptr<string> RoleName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceIdentityRole"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/serviceidentityroles/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RoleName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceIdentityRoleResponse(callApi(params, req, runtime));
}

GetServiceIdentityRoleResponse Alibabacloud_PaiFeatureStore20230621::Client::getServiceIdentityRole(shared_ptr<string> RoleName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceIdentityRoleWithOptions(RoleName, headers, runtime);
}

GetTaskResponse Alibabacloud_PaiFeatureStore20230621::Client::getTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                 shared_ptr<string> TaskId,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTask"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResponse(callApi(params, req, runtime));
}

GetTaskResponse Alibabacloud_PaiFeatureStore20230621::Client::getTask(shared_ptr<string> InstanceId, shared_ptr<string> TaskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTaskWithOptions(InstanceId, TaskId, headers, runtime);
}

ListDatasourceTablesResponse Alibabacloud_PaiFeatureStore20230621::Client::listDatasourceTablesWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<string> DatasourceId,
                                                                                                           shared_ptr<ListDatasourceTablesRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasourceTables"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasourceId)) + string("/tables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasourceTablesResponse(callApi(params, req, runtime));
}

ListDatasourceTablesResponse Alibabacloud_PaiFeatureStore20230621::Client::listDatasourceTables(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId, shared_ptr<ListDatasourceTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDatasourceTablesWithOptions(InstanceId, DatasourceId, request, headers, runtime);
}

ListDatasourcesResponse Alibabacloud_PaiFeatureStore20230621::Client::listDatasourcesWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<ListDatasourcesRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatasources"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatasourcesResponse(callApi(params, req, runtime));
}

ListDatasourcesResponse Alibabacloud_PaiFeatureStore20230621::Client::listDatasources(shared_ptr<string> InstanceId, shared_ptr<ListDatasourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDatasourcesWithOptions(InstanceId, request, headers, runtime);
}

ListFeatureEntitiesResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureEntitiesWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<ListFeatureEntitiesRequest> tmpReq,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListFeatureEntitiesShrinkRequest> request = make_shared<ListFeatureEntitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->featureEntityIds)) {
    request->featureEntityIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->featureEntityIds, make_shared<string>("FeatureEntityIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->featureEntityIdsShrink)) {
    query->insert(pair<string, string>("FeatureEntityIds", *request->featureEntityIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureEntities"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureentities"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureEntitiesResponse(callApi(params, req, runtime));
}

ListFeatureEntitiesResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureEntities(shared_ptr<string> InstanceId, shared_ptr<ListFeatureEntitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureEntitiesWithOptions(InstanceId, request, headers, runtime);
}

ListFeatureViewFieldRelationshipsResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureViewFieldRelationshipsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                                     shared_ptr<string> FeatureViewId,
                                                                                                                                     shared_ptr<string> FieldName,
                                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureViewFieldRelationships"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewId)) + string("/fields/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FieldName)) + string("/relationships"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureViewFieldRelationshipsResponse(callApi(params, req, runtime));
}

ListFeatureViewFieldRelationshipsResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureViewFieldRelationships(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<string> FieldName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureViewFieldRelationshipsWithOptions(InstanceId, FeatureViewId, FieldName, headers, runtime);
}

ListFeatureViewRelationshipsResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureViewRelationshipsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                           shared_ptr<string> FeatureViewId,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureViewRelationships"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewId)) + string("/relationships"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureViewRelationshipsResponse(callApi(params, req, runtime));
}

ListFeatureViewRelationshipsResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureViewRelationships(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureViewRelationshipsWithOptions(InstanceId, FeatureViewId, headers, runtime);
}

ListFeatureViewsResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureViewsWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<ListFeatureViewsRequest> tmpReq,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListFeatureViewsShrinkRequest> request = make_shared<ListFeatureViewsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->featureViewIds)) {
    request->featureViewIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->featureViewIds, make_shared<string>("FeatureViewIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureViewIdsShrink)) {
    query->insert(pair<string, string>("FeatureViewIds", *request->featureViewIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureViews"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureViewsResponse(callApi(params, req, runtime));
}

ListFeatureViewsResponse Alibabacloud_PaiFeatureStore20230621::Client::listFeatureViews(shared_ptr<string> InstanceId, shared_ptr<ListFeatureViewsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureViewsWithOptions(InstanceId, request, headers, runtime);
}

ListInstancesResponse Alibabacloud_PaiFeatureStore20230621::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_PaiFeatureStore20230621::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListLabelTablesResponse Alibabacloud_PaiFeatureStore20230621::Client::listLabelTablesWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<ListLabelTablesRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListLabelTablesShrinkRequest> request = make_shared<ListLabelTablesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->labelTableIds)) {
    request->labelTableIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labelTableIds, make_shared<string>("LabelTableIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelTableIdsShrink)) {
    query->insert(pair<string, string>("LabelTableIds", *request->labelTableIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLabelTables"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/labeltables"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLabelTablesResponse(callApi(params, req, runtime));
}

ListLabelTablesResponse Alibabacloud_PaiFeatureStore20230621::Client::listLabelTables(shared_ptr<string> InstanceId, shared_ptr<ListLabelTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLabelTablesWithOptions(InstanceId, request, headers, runtime);
}

ListModelFeaturesResponse Alibabacloud_PaiFeatureStore20230621::Client::listModelFeaturesWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ListModelFeaturesRequest> tmpReq,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListModelFeaturesShrinkRequest> request = make_shared<ListModelFeaturesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->modelFeatureIds)) {
    request->modelFeatureIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->modelFeatureIds, make_shared<string>("ModelFeatureIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modelFeatureIdsShrink)) {
    query->insert(pair<string, string>("ModelFeatureIds", *request->modelFeatureIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListModelFeatures"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/modelfeatures"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListModelFeaturesResponse(callApi(params, req, runtime));
}

ListModelFeaturesResponse Alibabacloud_PaiFeatureStore20230621::Client::listModelFeatures(shared_ptr<string> InstanceId, shared_ptr<ListModelFeaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listModelFeaturesWithOptions(InstanceId, request, headers, runtime);
}

ListProjectFeatureViewOwnersResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectFeatureViewOwnersWithOptions(shared_ptr<string> InstanceId,
                                                                                                                           shared_ptr<string> ProjectId,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectFeatureViewOwners"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureviewowners"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectFeatureViewOwnersResponse(callApi(params, req, runtime));
}

ListProjectFeatureViewOwnersResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectFeatureViewOwners(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectFeatureViewOwnersWithOptions(InstanceId, ProjectId, headers, runtime);
}

ListProjectFeatureViewTagsResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectFeatureViewTagsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                       shared_ptr<string> ProjectId,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectFeatureViewTags"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureviewtags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectFeatureViewTagsResponse(callApi(params, req, runtime));
}

ListProjectFeatureViewTagsResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectFeatureViewTags(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectFeatureViewTagsWithOptions(InstanceId, ProjectId, headers, runtime);
}

ListProjectFeatureViewsResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectFeatureViewsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<string> ProjectId,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjectFeatureViews"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureviews"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectFeatureViewsResponse(callApi(params, req, runtime));
}

ListProjectFeatureViewsResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectFeatureViews(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectFeatureViewsWithOptions(InstanceId, ProjectId, headers, runtime);
}

ListProjectsResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjectsWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<ListProjectsRequest> tmpReq,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListProjectsShrinkRequest> request = make_shared<ListProjectsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->projectIds)) {
    request->projectIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->projectIds, make_shared<string>("ProjectIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdsShrink)) {
    query->insert(pair<string, string>("ProjectIds", *request->projectIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_PaiFeatureStore20230621::Client::listProjects(shared_ptr<string> InstanceId, shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectsWithOptions(InstanceId, request, headers, runtime);
}

ListTaskLogsResponse Alibabacloud_PaiFeatureStore20230621::Client::listTaskLogsWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<string> TaskId,
                                                                                           shared_ptr<ListTaskLogsRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaskLogs"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskId)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskLogsResponse(callApi(params, req, runtime));
}

ListTaskLogsResponse Alibabacloud_PaiFeatureStore20230621::Client::listTaskLogs(shared_ptr<string> InstanceId, shared_ptr<string> TaskId, shared_ptr<ListTaskLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTaskLogsWithOptions(InstanceId, TaskId, request, headers, runtime);
}

ListTasksResponse Alibabacloud_PaiFeatureStore20230621::Client::listTasksWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<ListTasksRequest> tmpReq,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTasksShrinkRequest> request = make_shared<ListTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskIds)) {
    request->taskIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIds, make_shared<string>("TaskIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectId)) {
    query->insert(pair<string, string>("ObjectId", *request->objectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdsShrink)) {
    query->insert(pair<string, string>("TaskIds", *request->taskIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTasks"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTasksResponse(callApi(params, req, runtime));
}

ListTasksResponse Alibabacloud_PaiFeatureStore20230621::Client::listTasks(shared_ptr<string> InstanceId, shared_ptr<ListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTasksWithOptions(InstanceId, request, headers, runtime);
}

PublishFeatureViewTableResponse Alibabacloud_PaiFeatureStore20230621::Client::publishFeatureViewTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<string> FeatureViewId,
                                                                                                                 shared_ptr<PublishFeatureViewTableRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTime)) {
    body->insert(pair<string, string>("EventTime", *request->eventTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->offlineToOnline)) {
    body->insert(pair<string, bool>("OfflineToOnline", *request->offlineToOnline));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, map<string, boost::any>>>(request->partitions)) {
    body->insert(pair<string, map<string, map<string, boost::any>>>("Partitions", *request->partitions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishFeatureViewTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewId)) + string("/action/publishtable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishFeatureViewTableResponse(callApi(params, req, runtime));
}

PublishFeatureViewTableResponse Alibabacloud_PaiFeatureStore20230621::Client::publishFeatureViewTable(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<PublishFeatureViewTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishFeatureViewTableWithOptions(InstanceId, FeatureViewId, request, headers, runtime);
}

UpdateDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::updateDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> DatasourceId,
                                                                                                   shared_ptr<UpdateDatasourceRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDatasource"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/datasources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DatasourceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDatasourceResponse(callApi(params, req, runtime));
}

UpdateDatasourceResponse Alibabacloud_PaiFeatureStore20230621::Client::updateDatasource(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId, shared_ptr<UpdateDatasourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDatasourceWithOptions(InstanceId, DatasourceId, request, headers, runtime);
}

UpdateLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::updateLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> LabelTableId,
                                                                                                   shared_ptr<UpdateLabelTableRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasourceId)) {
    body->insert(pair<string, string>("DatasourceId", *request->datasourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLabelTableRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<UpdateLabelTableRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLabelTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/labeltables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LabelTableId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLabelTableResponse(callApi(params, req, runtime));
}

UpdateLabelTableResponse Alibabacloud_PaiFeatureStore20230621::Client::updateLabelTable(shared_ptr<string> InstanceId, shared_ptr<string> LabelTableId, shared_ptr<UpdateLabelTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLabelTableWithOptions(InstanceId, LabelTableId, request, headers, runtime);
}

UpdateModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::updateModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> ModelFeatureId,
                                                                                                       shared_ptr<UpdateModelFeatureRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateModelFeatureRequestFeatures>>(request->features)) {
    body->insert(pair<string, vector<UpdateModelFeatureRequestFeatures>>("Features", *request->features));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelTableId)) {
    body->insert(pair<string, string>("LabelTableId", *request->labelTableId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->sequenceFeatureViewIds)) {
    body->insert(pair<string, vector<string>>("SequenceFeatureViewIds", *request->sequenceFeatureViewIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateModelFeature"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/modelfeatures/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ModelFeatureId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateModelFeatureResponse(callApi(params, req, runtime));
}

UpdateModelFeatureResponse Alibabacloud_PaiFeatureStore20230621::Client::updateModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId, shared_ptr<UpdateModelFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateModelFeatureWithOptions(InstanceId, ModelFeatureId, request, headers, runtime);
}

UpdateProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::updateProjectWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<string> ProjectId,
                                                                                             shared_ptr<UpdateProjectRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_PaiFeatureStore20230621::Client::updateProject(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId, shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectWithOptions(InstanceId, ProjectId, request, headers, runtime);
}

WriteFeatureViewTableResponse Alibabacloud_PaiFeatureStore20230621::Client::writeFeatureViewTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> FeatureViewId,
                                                                                                             shared_ptr<WriteFeatureViewTableRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, map<string, boost::any>>>(request->partitions)) {
    body->insert(pair<string, map<string, map<string, boost::any>>>("Partitions", *request->partitions));
  }
  if (!Darabonba_Util::Client::isUnset<WriteFeatureViewTableRequestUrlDatasource>(request->urlDatasource)) {
    body->insert(pair<string, WriteFeatureViewTableRequestUrlDatasource>("UrlDatasource", *request->urlDatasource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WriteFeatureViewTable"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/featureviews/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureViewId)) + string("/action/writetable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WriteFeatureViewTableResponse(callApi(params, req, runtime));
}

WriteFeatureViewTableResponse Alibabacloud_PaiFeatureStore20230621::Client::writeFeatureViewTable(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<WriteFeatureViewTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return writeFeatureViewTableWithOptions(InstanceId, FeatureViewId, request, headers, runtime);
}

WriteProjectFeatureEntityHotIdsResponse Alibabacloud_PaiFeatureStore20230621::Client::writeProjectFeatureEntityHotIdsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                                 shared_ptr<string> ProjectId,
                                                                                                                                 shared_ptr<string> FeatureEntityName,
                                                                                                                                 shared_ptr<WriteProjectFeatureEntityHotIdsRequest> request,
                                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotIds)) {
    body->insert(pair<string, string>("HotIds", *request->hotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WriteProjectFeatureEntityHotIds"))},
    {"version", boost::any(string("2023-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/featureentities/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureEntityName)) + string("/action/writehotids"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WriteProjectFeatureEntityHotIdsResponse(callApi(params, req, runtime));
}

WriteProjectFeatureEntityHotIdsResponse Alibabacloud_PaiFeatureStore20230621::Client::writeProjectFeatureEntityHotIds(shared_ptr<string> InstanceId,
                                                                                                                      shared_ptr<string> ProjectId,
                                                                                                                      shared_ptr<string> FeatureEntityName,
                                                                                                                      shared_ptr<WriteProjectFeatureEntityHotIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return writeProjectFeatureEntityHotIdsWithOptions(InstanceId, ProjectId, FeatureEntityName, request, headers, runtime);
}

