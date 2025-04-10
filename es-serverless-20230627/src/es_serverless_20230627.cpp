// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/es_serverless_20230627.hpp>
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

using namespace Alibabacloud_Es-serverless20230627;

Alibabacloud_Es-serverless20230627::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("es-serverless"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Es-serverless20230627::Client::getEndpoint(shared_ptr<string> productId,
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

CancelSpecReviewTaskResponse Alibabacloud_Es-serverless20230627::Client::cancelSpecReviewTaskWithOptions(shared_ptr<string> appName,
                                                                                                         shared_ptr<string> taskId,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelSpecReviewTask"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/spec-review-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelSpecReviewTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CancelSpecReviewTaskResponse(execute(params, req, runtime));
  }
}

CancelSpecReviewTaskResponse Alibabacloud_Es-serverless20230627::Client::cancelSpecReviewTask(shared_ptr<string> appName, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelSpecReviewTaskWithOptions(appName, taskId, headers, runtime);
}

CreateAppResponse Alibabacloud_Es-serverless20230627::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("appName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppRequestAuthentication>(request->authentication)) {
    body->insert(pair<string, CreateAppRequestAuthentication>("authentication", *request->authentication));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("chargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestNetwork>>(request->network)) {
    body->insert(pair<string, vector<CreateAppRequestNetwork>>("network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestPrivateNetwork>>(request->privateNetwork)) {
    body->insert(pair<string, vector<CreateAppRequestPrivateNetwork>>("privateNetwork", *request->privateNetwork));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppRequestQuotaInfo>(request->quotaInfo)) {
    body->insert(pair<string, CreateAppRequestQuotaInfo>("quotaInfo", *request->quotaInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("regionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateAppRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateAppRequestTags>>("tags", *request->tags));
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
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAppResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAppResponse(execute(params, req, runtime));
  }
}

CreateAppResponse Alibabacloud_Es-serverless20230627::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppWithOptions(request, headers, runtime);
}

CreateEndpointResponse Alibabacloud_Es-serverless20230627::Client::createEndpointWithOptions(shared_ptr<CreateEndpointRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateEndpointRequestEndpointZones>>(request->endpointZones)) {
    body->insert(pair<string, vector<CreateEndpointRequestEndpointZones>>("endpointZones", *request->endpointZones));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEndpoint"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/endpoints"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEndpointResponse(execute(params, req, runtime));
  }
}

CreateEndpointResponse Alibabacloud_Es-serverless20230627::Client::createEndpoint(shared_ptr<CreateEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEndpointWithOptions(request, headers, runtime);
}

CreateSnapshotResponse Alibabacloud_Es-serverless20230627::Client::createSnapshotWithOptions(shared_ptr<string> appName,
                                                                                             shared_ptr<string> repository,
                                                                                             shared_ptr<CreateSnapshotRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indices)) {
    body->insert(pair<string, string>("indices", *request->indices));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshot)) {
    body->insert(pair<string, string>("snapshot", *request->snapshot));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSnapshot"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/snapshot-repositories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repository)) + string("/snapshots"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSnapshotResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSnapshotResponse(execute(params, req, runtime));
  }
}

CreateSnapshotResponse Alibabacloud_Es-serverless20230627::Client::createSnapshot(shared_ptr<string> appName, shared_ptr<string> repository, shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSnapshotWithOptions(appName, repository, request, headers, runtime);
}

DeleteAppResponse Alibabacloud_Es-serverless20230627::Client::deleteAppWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApp"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAppResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAppResponse(execute(params, req, runtime));
  }
}

DeleteAppResponse Alibabacloud_Es-serverless20230627::Client::deleteApp(shared_ptr<string> appName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAppWithOptions(appName, headers, runtime);
}

DeleteDictResponse Alibabacloud_Es-serverless20230627::Client::deleteDictWithOptions(shared_ptr<string> appName,
                                                                                     shared_ptr<DeleteDictRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDict"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/dicts/actions/remove"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDictResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDictResponse(execute(params, req, runtime));
  }
}

DeleteDictResponse Alibabacloud_Es-serverless20230627::Client::deleteDict(shared_ptr<string> appName, shared_ptr<DeleteDictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDictWithOptions(appName, request, headers, runtime);
}

DeleteEndpointResponse Alibabacloud_Es-serverless20230627::Client::deleteEndpointWithOptions(shared_ptr<string> endpointId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEndpoint"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/endpoints/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(endpointId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEndpointResponse(execute(params, req, runtime));
  }
}

DeleteEndpointResponse Alibabacloud_Es-serverless20230627::Client::deleteEndpoint(shared_ptr<string> endpointId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEndpointWithOptions(endpointId, headers, runtime);
}

DeleteSnapshotResponse Alibabacloud_Es-serverless20230627::Client::deleteSnapshotWithOptions(shared_ptr<string> appName,
                                                                                             shared_ptr<string> repository,
                                                                                             shared_ptr<string> snapshot,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshot"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/snapshot-repositories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(repository)) + string("/snapshots/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(snapshot)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSnapshotResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSnapshotResponse(execute(params, req, runtime));
  }
}

DeleteSnapshotResponse Alibabacloud_Es-serverless20230627::Client::deleteSnapshot(shared_ptr<string> appName, shared_ptr<string> repository, shared_ptr<string> snapshot) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSnapshotWithOptions(appName, repository, snapshot, headers, runtime);
}

GetAppResponse Alibabacloud_Es-serverless20230627::Client::getAppWithOptions(shared_ptr<string> appName,
                                                                             shared_ptr<GetAppRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->detailed)) {
    query->insert(pair<string, bool>("detailed", *request->detailed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApp"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAppResponse(callApi(params, req, runtime));
  }
  else {
    return GetAppResponse(execute(params, req, runtime));
  }
}

GetAppResponse Alibabacloud_Es-serverless20230627::Client::getApp(shared_ptr<string> appName, shared_ptr<GetAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAppWithOptions(appName, request, headers, runtime);
}

GetAppQuotaResponse Alibabacloud_Es-serverless20230627::Client::getAppQuotaWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppQuota"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/quota"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAppQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetAppQuotaResponse(execute(params, req, runtime));
  }
}

GetAppQuotaResponse Alibabacloud_Es-serverless20230627::Client::getAppQuota(shared_ptr<string> appName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAppQuotaWithOptions(appName, headers, runtime);
}

GetMonitorDataResponse Alibabacloud_Es-serverless20230627::Client::getMonitorDataWithOptions(shared_ptr<GetMonitorDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMonitorData"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/emon/metrics/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMonitorDataResponse(callApi(params, req, runtime));
  }
  else {
    return GetMonitorDataResponse(execute(params, req, runtime));
  }
}

GetMonitorDataResponse Alibabacloud_Es-serverless20230627::Client::getMonitorData(shared_ptr<GetMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMonitorDataWithOptions(request, headers, runtime);
}

GetSnapshotSettingResponse Alibabacloud_Es-serverless20230627::Client::getSnapshotSettingWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotSetting"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/auto-snapshot-setting"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSnapshotSettingResponse(callApi(params, req, runtime));
  }
  else {
    return GetSnapshotSettingResponse(execute(params, req, runtime));
  }
}

GetSnapshotSettingResponse Alibabacloud_Es-serverless20230627::Client::getSnapshotSetting(shared_ptr<string> appName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSnapshotSettingWithOptions(appName, headers, runtime);
}

GetSpecReviewTaskResponse Alibabacloud_Es-serverless20230627::Client::getSpecReviewTaskWithOptions(shared_ptr<string> appName,
                                                                                                   shared_ptr<string> taskId,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpecReviewTask"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/spec-review-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(taskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSpecReviewTaskResponse(callApi(params, req, runtime));
  }
  else {
    return GetSpecReviewTaskResponse(execute(params, req, runtime));
  }
}

GetSpecReviewTaskResponse Alibabacloud_Es-serverless20230627::Client::getSpecReviewTask(shared_ptr<string> appName, shared_ptr<string> taskId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSpecReviewTaskWithOptions(appName, taskId, headers, runtime);
}

ListAppsResponse Alibabacloud_Es-serverless20230627::Client::listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("appName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    query->insert(pair<string, string>("createTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("orderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApps"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAppsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAppsResponse(execute(params, req, runtime));
  }
}

ListAppsResponse Alibabacloud_Es-serverless20230627::Client::listApps(shared_ptr<ListAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAppsWithOptions(request, headers, runtime);
}

ListDictsResponse Alibabacloud_Es-serverless20230627::Client::listDictsWithOptions(shared_ptr<string> appName,
                                                                                   shared_ptr<ListDictsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDicts"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/dicts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDictsResponse(callApi(params, req, runtime));
  }
  else {
    return ListDictsResponse(execute(params, req, runtime));
  }
}

ListDictsResponse Alibabacloud_Es-serverless20230627::Client::listDicts(shared_ptr<string> appName, shared_ptr<ListDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictsWithOptions(appName, request, headers, runtime);
}

ListEndpointsResponse Alibabacloud_Es-serverless20230627::Client::listEndpointsWithOptions(shared_ptr<ListEndpointsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEndpoints"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/endpoints"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEndpointsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEndpointsResponse(execute(params, req, runtime));
  }
}

ListEndpointsResponse Alibabacloud_Es-serverless20230627::Client::listEndpoints(shared_ptr<ListEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEndpointsWithOptions(request, headers, runtime);
}

ListIndicesResponse Alibabacloud_Es-serverless20230627::Client::listIndicesWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndices"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/indices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListIndicesResponse(callApi(params, req, runtime));
  }
  else {
    return ListIndicesResponse(execute(params, req, runtime));
  }
}

ListIndicesResponse Alibabacloud_Es-serverless20230627::Client::listIndices(shared_ptr<string> appName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndicesWithOptions(appName, headers, runtime);
}

ListSnapshotRepositoriesResponse Alibabacloud_Es-serverless20230627::Client::listSnapshotRepositoriesWithOptions(shared_ptr<string> appName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshotRepositories"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/snapshot-repositories"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSnapshotRepositoriesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSnapshotRepositoriesResponse(execute(params, req, runtime));
  }
}

ListSnapshotRepositoriesResponse Alibabacloud_Es-serverless20230627::Client::listSnapshotRepositories(shared_ptr<string> appName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSnapshotRepositoriesWithOptions(appName, headers, runtime);
}

ListSnapshotsResponse Alibabacloud_Es-serverless20230627::Client::listSnapshotsWithOptions(shared_ptr<string> appName,
                                                                                           shared_ptr<ListSnapshotsRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repository)) {
    query->insert(pair<string, string>("repository", *request->repository));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshot)) {
    query->insert(pair<string, string>("snapshot", *request->snapshot));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshots"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/snapshots"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSnapshotsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSnapshotsResponse(execute(params, req, runtime));
  }
}

ListSnapshotsResponse Alibabacloud_Es-serverless20230627::Client::listSnapshots(shared_ptr<string> appName, shared_ptr<ListSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSnapshotsWithOptions(appName, request, headers, runtime);
}

ListSpecReviewTasksResponse Alibabacloud_Es-serverless20230627::Client::listSpecReviewTasksWithOptions(shared_ptr<string> appName,
                                                                                                       shared_ptr<ListSpecReviewTasksRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSpecReviewTasks"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/spec-review-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSpecReviewTasksResponse(callApi(params, req, runtime));
  }
  else {
    return ListSpecReviewTasksResponse(execute(params, req, runtime));
  }
}

ListSpecReviewTasksResponse Alibabacloud_Es-serverless20230627::Client::listSpecReviewTasks(shared_ptr<string> appName, shared_ptr<ListSpecReviewTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSpecReviewTasksWithOptions(appName, request, headers, runtime);
}

UpdateAppResponse Alibabacloud_Es-serverless20230627::Client::updateAppWithOptions(shared_ptr<string> appName,
                                                                                   shared_ptr<UpdateAppRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyReason)) {
    body->insert(pair<string, string>("applyReason", *request->applyReason));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAppRequestAuthentication>(request->authentication)) {
    body->insert(pair<string, UpdateAppRequestAuthentication>("authentication", *request->authentication));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactInfo)) {
    body->insert(pair<string, string>("contactInfo", *request->contactInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateAppRequestLimiterInfo>(request->limiterInfo)) {
    body->insert(pair<string, UpdateAppRequestLimiterInfo>("limiterInfo", *request->limiterInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAppRequestNetwork>>(request->network)) {
    body->insert(pair<string, vector<UpdateAppRequestNetwork>>("network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAppRequestPrivateNetwork>>(request->privateNetwork)) {
    body->insert(pair<string, vector<UpdateAppRequestPrivateNetwork>>("privateNetwork", *request->privateNetwork));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApp"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAppResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAppResponse(execute(params, req, runtime));
  }
}

UpdateAppResponse Alibabacloud_Es-serverless20230627::Client::updateApp(shared_ptr<string> appName, shared_ptr<UpdateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAppWithOptions(appName, request, headers, runtime);
}

UpdateDictResponse Alibabacloud_Es-serverless20230627::Client::updateDictWithOptions(shared_ptr<string> appName,
                                                                                     shared_ptr<UpdateDictRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowCover)) {
    query->insert(pair<string, bool>("allowCover", *request->allowCover));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDictRequestFiles>>(request->files)) {
    body->insert(pair<string, vector<UpdateDictRequestFiles>>("files", *request->files));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("sourceType", *request->sourceType));
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
    {"action", boost::any(string("UpdateDict"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/dicts"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateDictResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateDictResponse(execute(params, req, runtime));
  }
}

UpdateDictResponse Alibabacloud_Es-serverless20230627::Client::updateDict(shared_ptr<string> appName, shared_ptr<UpdateDictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDictWithOptions(appName, request, headers, runtime);
}

UpdateEndpointResponse Alibabacloud_Es-serverless20230627::Client::updateEndpointWithOptions(shared_ptr<string> endpointId,
                                                                                             shared_ptr<UpdateEndpointRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEndpointRequestEndpointZones>>(request->endpointZones)) {
    body->insert(pair<string, vector<UpdateEndpointRequestEndpointZones>>("endpointZones", *request->endpointZones));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEndpoint"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/endpoints/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(endpointId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateEndpointResponse(execute(params, req, runtime));
  }
}

UpdateEndpointResponse Alibabacloud_Es-serverless20230627::Client::updateEndpoint(shared_ptr<string> endpointId, shared_ptr<UpdateEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEndpointWithOptions(endpointId, request, headers, runtime);
}

UpdateSnapshotSettingResponse Alibabacloud_Es-serverless20230627::Client::updateSnapshotSettingWithOptions(shared_ptr<string> appName,
                                                                                                           shared_ptr<UpdateSnapshotSettingRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quartzRegex)) {
    body->insert(pair<string, string>("quartzRegex", *request->quartzRegex));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSnapshotSetting"))},
    {"version", boost::any(string("2023-06-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/es-serverless/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(appName)) + string("/auto-snapshot-setting"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSnapshotSettingResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSnapshotSettingResponse(execute(params, req, runtime));
  }
}

UpdateSnapshotSettingResponse Alibabacloud_Es-serverless20230627::Client::updateSnapshotSetting(shared_ptr<string> appName, shared_ptr<UpdateSnapshotSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSnapshotSettingWithOptions(appName, request, headers, runtime);
}

