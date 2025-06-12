// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/elasticsearch_20170613.hpp>
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

using namespace Alibabacloud_Elasticsearch20170613;

Alibabacloud_Elasticsearch20170613::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("elasticsearch"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Elasticsearch20170613::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::activateZonesWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<ActivateZonesRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateZones"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/recover-zones"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateZonesResponse(callApi(params, req, runtime));
}

ActivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::activateZones(shared_ptr<string> InstanceId, shared_ptr<ActivateZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return activateZonesWithOptions(InstanceId, request, headers, runtime);
}

AddConnectableClusterResponse Alibabacloud_Elasticsearch20170613::Client::addConnectableClusterWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<AddConnectableClusterRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddConnectableCluster"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/connected-clusters"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddConnectableClusterResponse(callApi(params, req, runtime));
}

AddConnectableClusterResponse Alibabacloud_Elasticsearch20170613::Client::addConnectableCluster(shared_ptr<string> InstanceId, shared_ptr<AddConnectableClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addConnectableClusterWithOptions(InstanceId, request, headers, runtime);
}

AddSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::addSnapshotRepoWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<AddSnapshotRepoRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSnapshotRepo"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/snapshot-repos"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSnapshotRepoResponse(callApi(params, req, runtime));
}

AddSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::addSnapshotRepo(shared_ptr<string> InstanceId, shared_ptr<AddSnapshotRepoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addSnapshotRepoWithOptions(InstanceId, request, headers, runtime);
}

CancelDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelDeletionWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CancelDeletionRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelDeletion"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/cancel-deletion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelDeletionResponse(callApi(params, req, runtime));
}

CancelDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelDeletion(shared_ptr<string> InstanceId, shared_ptr<CancelDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelDeletionWithOptions(InstanceId, request, headers, runtime);
}

CancelLogstashDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelLogstashDeletionWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<CancelLogstashDeletionRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelLogstashDeletion"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/cancel-deletion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelLogstashDeletionResponse(callApi(params, req, runtime));
}

CancelLogstashDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelLogstashDeletion(shared_ptr<string> InstanceId, shared_ptr<CancelLogstashDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelLogstashDeletionWithOptions(InstanceId, request, headers, runtime);
}

CancelTaskResponse Alibabacloud_Elasticsearch20170613::Client::cancelTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<CancelTaskRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("taskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelTask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/cancel-task"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelTaskResponse(callApi(params, req, runtime));
}

CancelTaskResponse Alibabacloud_Elasticsearch20170613::Client::cancelTask(shared_ptr<string> InstanceId, shared_ptr<CancelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelTaskWithOptions(InstanceId, request, headers, runtime);
}

CapacityPlanResponse Alibabacloud_Elasticsearch20170613::Client::capacityPlanWithOptions(shared_ptr<CapacityPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->complexQueryAvailable)) {
    body->insert(pair<string, bool>("complexQueryAvailable", *request->complexQueryAvailable));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CapacityPlanRequestDataInfo>>(request->dataInfo)) {
    body->insert(pair<string, vector<CapacityPlanRequestDataInfo>>("dataInfo", *request->dataInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CapacityPlanRequestMetric>>(request->metric)) {
    body->insert(pair<string, vector<CapacityPlanRequestMetric>>("metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usageScenario)) {
    body->insert(pair<string, string>("usageScenario", *request->usageScenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CapacityPlan"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/assist/actions/capacity-plan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CapacityPlanResponse(callApi(params, req, runtime));
}

CapacityPlanResponse Alibabacloud_Elasticsearch20170613::Client::capacityPlan(shared_ptr<CapacityPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return capacityPlanWithOptions(request, headers, runtime);
}

CloseDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::closeDiagnosisWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CloseDiagnosisRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseDiagnosis"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/close-diagnosis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseDiagnosisResponse(callApi(params, req, runtime));
}

CloseDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::closeDiagnosis(shared_ptr<string> InstanceId, shared_ptr<CloseDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

CloseHttpsResponse Alibabacloud_Elasticsearch20170613::Client::closeHttpsWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<CloseHttpsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseHttps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/close-https"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseHttpsResponse(callApi(params, req, runtime));
}

CloseHttpsResponse Alibabacloud_Elasticsearch20170613::Client::closeHttps(shared_ptr<string> InstanceId, shared_ptr<CloseHttpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeHttpsWithOptions(InstanceId, request, headers, runtime);
}

CloseManagedIndexResponse Alibabacloud_Elasticsearch20170613::Client::closeManagedIndexWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> Index,
                                                                                                   shared_ptr<CloseManagedIndexRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseManagedIndex"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/indices/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Index)) + string("/close-managed"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseManagedIndexResponse(callApi(params, req, runtime));
}

CloseManagedIndexResponse Alibabacloud_Elasticsearch20170613::Client::closeManagedIndex(shared_ptr<string> InstanceId, shared_ptr<string> Index, shared_ptr<CloseManagedIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeManagedIndexWithOptions(InstanceId, Index, request, headers, runtime);
}

CreateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::createCollectorWithOptions(shared_ptr<CreateCollectorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->collectorPaths)) {
    body->insert(pair<string, vector<string>>("collectorPaths", *request->collectorPaths));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateCollectorRequestConfigs>>(request->configs)) {
    body->insert(pair<string, vector<CreateCollectorRequestConfigs>>("configs", *request->configs));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    body->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->extendConfigs)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("extendConfigs", *request->extendConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resType)) {
    body->insert(pair<string, string>("resType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resVersion)) {
    body->insert(pair<string, string>("resVersion", *request->resVersion));
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
    {"action", boost::any(string("CreateCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCollectorResponse(callApi(params, req, runtime));
}

CreateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::createCollector(shared_ptr<CreateCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCollectorWithOptions(request, headers, runtime);
}

CreateComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::createComponentIndexWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<string> name,
                                                                                                         shared_ptr<CreateComponentIndexRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->meta)) {
    body->insert(pair<string, map<string, boost::any>>("_meta", *request->meta));
  }
  if (!Darabonba_Util::Client::isUnset<CreateComponentIndexRequestTemplate>(request->template_)) {
    body->insert(pair<string, CreateComponentIndexRequestTemplate>("template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateComponentIndex"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/component-index/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateComponentIndexResponse(callApi(params, req, runtime));
}

CreateComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::createComponentIndex(shared_ptr<string> InstanceId, shared_ptr<string> name, shared_ptr<CreateComponentIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createComponentIndexWithOptions(InstanceId, name, request, headers, runtime);
}

CreateDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::createDataStreamWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<CreateDataStreamRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataStream"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/data-streams"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataStreamResponse(callApi(params, req, runtime));
}

CreateDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::createDataStream(shared_ptr<string> InstanceId, shared_ptr<CreateDataStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDataStreamWithOptions(InstanceId, request, headers, runtime);
}

CreateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::createILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<CreateILMPolicyRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateILMPolicy"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/ilm-policies"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateILMPolicyResponse(callApi(params, req, runtime));
}

CreateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::createILMPolicy(shared_ptr<string> InstanceId, shared_ptr<CreateILMPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createILMPolicyWithOptions(InstanceId, request, headers, runtime);
}

CreateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::createIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<CreateIndexTemplateRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataStream)) {
    body->insert(pair<string, bool>("dataStream", *request->dataStream));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ilmPolicy)) {
    body->insert(pair<string, string>("ilmPolicy", *request->ilmPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->indexPatterns)) {
    body->insert(pair<string, vector<string>>("indexPatterns", *request->indexPatterns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexTemplate)) {
    body->insert(pair<string, string>("indexTemplate", *request->indexTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<CreateIndexTemplateRequestTemplate>(request->template_)) {
    body->insert(pair<string, CreateIndexTemplateRequestTemplate>("template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndexTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/index-templates"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIndexTemplateResponse(callApi(params, req, runtime));
}

CreateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::createIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<CreateIndexTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndexTemplateWithOptions(InstanceId, request, headers, runtime);
}

CreateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::createLogstashWithOptions(shared_ptr<CreateLogstashRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLogstashRequestNetworkConfig>(request->networkConfig)) {
    body->insert(pair<string, CreateLogstashRequestNetworkConfig>("networkConfig", *request->networkConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeAmount)) {
    body->insert(pair<string, long>("nodeAmount", *request->nodeAmount));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLogstashRequestNodeSpec>(request->nodeSpec)) {
    body->insert(pair<string, CreateLogstashRequestNodeSpec>("nodeSpec", *request->nodeSpec));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLogstashRequestPaymentInfo>(request->paymentInfo)) {
    body->insert(pair<string, CreateLogstashRequestPaymentInfo>("paymentInfo", *request->paymentInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    body->insert(pair<string, string>("paymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
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
    {"action", boost::any(string("CreateLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLogstashResponse(callApi(params, req, runtime));
}

CreateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::createLogstash(shared_ptr<CreateLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLogstashWithOptions(request, headers, runtime);
}

CreatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::createPipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<CreatePipelinesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->trigger)) {
    query->insert(pair<string, bool>("trigger", *request->trigger));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<CreatePipelinesRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipelines"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePipelinesResponse(callApi(params, req, runtime));
}

CreatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::createPipelines(shared_ptr<string> InstanceId, shared_ptr<CreatePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPipelinesWithOptions(InstanceId, request, headers, runtime);
}

CreateSnapshotResponse Alibabacloud_Elasticsearch20170613::Client::createSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CreateSnapshotRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSnapshot"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/snapshots"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSnapshotResponse(callApi(params, req, runtime));
}

CreateSnapshotResponse Alibabacloud_Elasticsearch20170613::Client::createSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSnapshotWithOptions(InstanceId, request, headers, runtime);
}

CreateVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::createVpcEndpointWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<CreateVpcEndpointRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    body->insert(pair<string, string>("serviceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("zoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpcEndpoint"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/vpc-endpoints"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVpcEndpointResponse(callApi(params, req, runtime));
}

CreateVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::createVpcEndpoint(shared_ptr<string> InstanceId, shared_ptr<CreateVpcEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVpcEndpointWithOptions(InstanceId, request, headers, runtime);
}

DeactivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::deactivateZonesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<DeactivateZonesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeactivateZones"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/down-zones"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeactivateZonesResponse(callApi(params, req, runtime));
}

DeactivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::deactivateZones(shared_ptr<string> InstanceId, shared_ptr<DeactivateZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deactivateZonesWithOptions(InstanceId, request, headers, runtime);
}

DeleteCollectorResponse Alibabacloud_Elasticsearch20170613::Client::deleteCollectorWithOptions(shared_ptr<string> ResId,
                                                                                               shared_ptr<DeleteCollectorRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCollectorResponse(callApi(params, req, runtime));
}

DeleteCollectorResponse Alibabacloud_Elasticsearch20170613::Client::deleteCollector(shared_ptr<string> ResId, shared_ptr<DeleteCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCollectorWithOptions(ResId, request, headers, runtime);
}

DeleteComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::deleteComponentIndexWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<string> name,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteComponentIndex"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/component-index/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteComponentIndexResponse(callApi(params, req, runtime));
}

DeleteComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::deleteComponentIndex(shared_ptr<string> InstanceId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteComponentIndexWithOptions(InstanceId, name, headers, runtime);
}

DeleteConnectedClusterResponse Alibabacloud_Elasticsearch20170613::Client::deleteConnectedClusterWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<DeleteConnectedClusterRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectedInstanceId)) {
    query->insert(pair<string, string>("connectedInstanceId", *request->connectedInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConnectedCluster"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/connected-clusters"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConnectedClusterResponse(callApi(params, req, runtime));
}

DeleteConnectedClusterResponse Alibabacloud_Elasticsearch20170613::Client::deleteConnectedCluster(shared_ptr<string> InstanceId, shared_ptr<DeleteConnectedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConnectedClusterWithOptions(InstanceId, request, headers, runtime);
}

DeleteDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataStreamWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> DataStream,
                                                                                                 shared_ptr<DeleteDataStreamRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataStream"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/data-streams/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DataStream)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataStreamResponse(callApi(params, req, runtime));
}

DeleteDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataStream(shared_ptr<string> InstanceId, shared_ptr<string> DataStream, shared_ptr<DeleteDataStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDataStreamWithOptions(InstanceId, DataStream, request, headers, runtime);
}

DeleteDataTaskResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<DeleteDataTaskRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataTask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/data-task"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataTaskResponse(callApi(params, req, runtime));
}

DeleteDataTaskResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataTask(shared_ptr<string> InstanceId, shared_ptr<DeleteDataTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDataTaskWithOptions(InstanceId, request, headers, runtime);
}

DeleteDeprecatedTemplateResponse Alibabacloud_Elasticsearch20170613::Client::deleteDeprecatedTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<string> name,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeprecatedTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/deprecated-templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeprecatedTemplateResponse(callApi(params, req, runtime));
}

DeleteDeprecatedTemplateResponse Alibabacloud_Elasticsearch20170613::Client::deleteDeprecatedTemplate(shared_ptr<string> InstanceId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDeprecatedTemplateWithOptions(InstanceId, name, headers, runtime);
}

DeleteILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::deleteILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<string> PolicyName,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteILMPolicy"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/ilm-policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PolicyName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteILMPolicyResponse(callApi(params, req, runtime));
}

DeleteILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::deleteILMPolicy(shared_ptr<string> InstanceId, shared_ptr<string> PolicyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

DeleteIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::deleteIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> IndexTemplate,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndexTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/index-templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(IndexTemplate)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIndexTemplateResponse(callApi(params, req, runtime));
}

DeleteIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::deleteIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<string> IndexTemplate) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Elasticsearch20170613::Client::deleteInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<DeleteInstanceRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteType)) {
    query->insert(pair<string, string>("deleteType", *request->deleteType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Elasticsearch20170613::Client::deleteInstance(shared_ptr<string> InstanceId, shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(InstanceId, request, headers, runtime);
}

DeleteLogstashResponse Alibabacloud_Elasticsearch20170613::Client::deleteLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<DeleteLogstashRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteType)) {
    query->insert(pair<string, string>("deleteType", *request->deleteType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLogstashResponse(callApi(params, req, runtime));
}

DeleteLogstashResponse Alibabacloud_Elasticsearch20170613::Client::deleteLogstash(shared_ptr<string> InstanceId, shared_ptr<DeleteLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLogstashWithOptions(InstanceId, request, headers, runtime);
}

DeletePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::deletePipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<DeletePipelinesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineIds)) {
    query->insert(pair<string, string>("pipelineIds", *request->pipelineIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipelines"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePipelinesResponse(callApi(params, req, runtime));
}

DeletePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::deletePipelines(shared_ptr<string> InstanceId, shared_ptr<DeletePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePipelinesWithOptions(InstanceId, request, headers, runtime);
}

DeleteSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::deleteSnapshotRepoWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<DeleteSnapshotRepoRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoPath)) {
    query->insert(pair<string, string>("repoPath", *request->repoPath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshotRepo"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/snapshot-repos"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSnapshotRepoResponse(callApi(params, req, runtime));
}

DeleteSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::deleteSnapshotRepo(shared_ptr<string> InstanceId, shared_ptr<DeleteSnapshotRepoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSnapshotRepoWithOptions(InstanceId, request, headers, runtime);
}

DeleteVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::deleteVpcEndpointWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> EndpointId,
                                                                                                   shared_ptr<DeleteVpcEndpointRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpcEndpoint"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/vpc-endpoints/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EndpointId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVpcEndpointResponse(callApi(params, req, runtime));
}

DeleteVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::deleteVpcEndpoint(shared_ptr<string> InstanceId, shared_ptr<string> EndpointId, shared_ptr<DeleteVpcEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVpcEndpointWithOptions(InstanceId, EndpointId, request, headers, runtime);
}

DescribeAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::describeAckOperatorWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAckOperator"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ack-clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/operator"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAckOperatorResponse(callApi(params, req, runtime));
}

DescribeAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::describeAckOperator(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAckOperatorWithOptions(ClusterId, headers, runtime);
}

DescribeApmResponse Alibabacloud_Elasticsearch20170613::Client::describeApmWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApm"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/apm/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApmResponse(callApi(params, req, runtime));
}

DescribeApmResponse Alibabacloud_Elasticsearch20170613::Client::describeApm(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApmWithOptions(instanceId, headers, runtime);
}

DescribeCollectorResponse Alibabacloud_Elasticsearch20170613::Client::describeCollectorWithOptions(shared_ptr<string> ResId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCollectorResponse(callApi(params, req, runtime));
}

DescribeCollectorResponse Alibabacloud_Elasticsearch20170613::Client::describeCollector(shared_ptr<string> ResId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCollectorWithOptions(ResId, headers, runtime);
}

DescribeComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::describeComponentIndexWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> name,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeComponentIndex"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/component-index/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeComponentIndexResponse(callApi(params, req, runtime));
}

DescribeComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::describeComponentIndex(shared_ptr<string> InstanceId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeComponentIndexWithOptions(InstanceId, name, headers, runtime);
}

DescribeConnectableClustersResponse Alibabacloud_Elasticsearch20170613::Client::describeConnectableClustersWithOptions(shared_ptr<string> InstanceId,
                                                                                                                       shared_ptr<DescribeConnectableClustersRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->alreadySetItems)) {
    query->insert(pair<string, bool>("alreadySetItems", *request->alreadySetItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConnectableClusters"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/connectable-clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConnectableClustersResponse(callApi(params, req, runtime));
}

DescribeConnectableClustersResponse Alibabacloud_Elasticsearch20170613::Client::describeConnectableClusters(shared_ptr<string> InstanceId, shared_ptr<DescribeConnectableClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConnectableClustersWithOptions(InstanceId, request, headers, runtime);
}

DescribeDeprecatedTemplateResponse Alibabacloud_Elasticsearch20170613::Client::describeDeprecatedTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                                     shared_ptr<string> name,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeprecatedTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/deprecated-templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeprecatedTemplateResponse(callApi(params, req, runtime));
}

DescribeDeprecatedTemplateResponse Alibabacloud_Elasticsearch20170613::Client::describeDeprecatedTemplate(shared_ptr<string> InstanceId, shared_ptr<string> name) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDeprecatedTemplateWithOptions(InstanceId, name, headers, runtime);
}

DescribeDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnoseReportWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> ReportId,
                                                                                                             shared_ptr<DescribeDiagnoseReportRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnoseReport"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/reports/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ReportId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnoseReportResponse(callApi(params, req, runtime));
}

DescribeDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnoseReport(shared_ptr<string> InstanceId, shared_ptr<string> ReportId, shared_ptr<DescribeDiagnoseReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDiagnoseReportWithOptions(InstanceId, ReportId, request, headers, runtime);
}

DescribeDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnosisSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<DescribeDiagnosisSettingsRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnosisSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/settings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnosisSettingsResponse(callApi(params, req, runtime));
}

DescribeDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnosisSettings(shared_ptr<string> InstanceId, shared_ptr<DescribeDiagnosisSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

DescribeDynamicSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeDynamicSettingsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDynamicSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/dynamic-settings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDynamicSettingsResponse(callApi(params, req, runtime));
}

DescribeDynamicSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeDynamicSettings(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDynamicSettingsWithOptions(InstanceId, headers, runtime);
}

DescribeElasticsearchHealthResponse Alibabacloud_Elasticsearch20170613::Client::describeElasticsearchHealthWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeElasticsearchHealth"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/elasticsearch-health"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeElasticsearchHealthResponse(callApi(params, req, runtime));
}

DescribeElasticsearchHealthResponse Alibabacloud_Elasticsearch20170613::Client::describeElasticsearchHealth(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeElasticsearchHealthWithOptions(InstanceId, headers, runtime);
}

DescribeILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::describeILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> PolicyName,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeILMPolicy"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/ilm-policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PolicyName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeILMPolicyResponse(callApi(params, req, runtime));
}

DescribeILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::describeILMPolicy(shared_ptr<string> InstanceId, shared_ptr<string> PolicyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

DescribeIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::describeIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<string> IndexTemplate,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIndexTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/index-templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(IndexTemplate)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIndexTemplateResponse(callApi(params, req, runtime));
}

DescribeIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::describeIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<string> IndexTemplate) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

DescribeInstanceResponse Alibabacloud_Elasticsearch20170613::Client::describeInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceResponse(callApi(params, req, runtime));
}

DescribeInstanceResponse Alibabacloud_Elasticsearch20170613::Client::describeInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInstanceWithOptions(InstanceId, headers, runtime);
}

DescribeKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeKibanaSettingsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKibanaSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/kibana-settings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeKibanaSettingsResponse(callApi(params, req, runtime));
}

DescribeKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeKibanaSettings(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeKibanaSettingsWithOptions(InstanceId, headers, runtime);
}

DescribeLogstashResponse Alibabacloud_Elasticsearch20170613::Client::describeLogstashWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogstashResponse(callApi(params, req, runtime));
}

DescribeLogstashResponse Alibabacloud_Elasticsearch20170613::Client::describeLogstash(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeLogstashWithOptions(InstanceId, headers, runtime);
}

DescribePipelineResponse Alibabacloud_Elasticsearch20170613::Client::describePipelineWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> PipelineId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePipeline"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PipelineId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePipelineResponse(callApi(params, req, runtime));
}

DescribePipelineResponse Alibabacloud_Elasticsearch20170613::Client::describePipeline(shared_ptr<string> InstanceId, shared_ptr<string> PipelineId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePipelineWithOptions(InstanceId, PipelineId, headers, runtime);
}

DescribePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::describePipelineManagementConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                                                 shared_ptr<DescribePipelineManagementConfigRequest> request,
                                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePipelineManagementConfig"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipeline-management-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePipelineManagementConfigResponse(callApi(params, req, runtime));
}

DescribePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::describePipelineManagementConfig(shared_ptr<string> InstanceId, shared_ptr<DescribePipelineManagementConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePipelineManagementConfigWithOptions(InstanceId, request, headers, runtime);
}

DescribeRegionsResponse Alibabacloud_Elasticsearch20170613::Client::describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Elasticsearch20170613::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(headers, runtime);
}

DescribeSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::describeSnapshotSettingWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnapshotSetting"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/snapshot-setting"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSnapshotSettingResponse(callApi(params, req, runtime));
}

DescribeSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::describeSnapshotSetting(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSnapshotSettingWithOptions(InstanceId, headers, runtime);
}

DescribeTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::describeTemplatesWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTemplates"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTemplatesResponse(callApi(params, req, runtime));
}

DescribeTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::describeTemplates(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplatesWithOptions(InstanceId, headers, runtime);
}

DescribeXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::describeXpackMonitorConfigWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeXpackMonitorConfig"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/xpack-monitor-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeXpackMonitorConfigResponse(callApi(params, req, runtime));
}

DescribeXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::describeXpackMonitorConfig(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeXpackMonitorConfigWithOptions(InstanceId, headers, runtime);
}

DiagnoseInstanceResponse Alibabacloud_Elasticsearch20170613::Client::diagnoseInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<DiagnoseInstanceRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->diagnoseItems)) {
    body->insert(pair<string, vector<string>>("diagnoseItems", *request->diagnoseItems));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->indices)) {
    body->insert(pair<string, vector<string>>("indices", *request->indices));
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
    {"action", boost::any(string("DiagnoseInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/diagnose"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DiagnoseInstanceResponse(callApi(params, req, runtime));
}

DiagnoseInstanceResponse Alibabacloud_Elasticsearch20170613::Client::diagnoseInstance(shared_ptr<string> InstanceId, shared_ptr<DiagnoseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return diagnoseInstanceWithOptions(InstanceId, request, headers, runtime);
}

DisableKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::disableKibanaPvlNetworkWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableKibanaPvlNetwork"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/disable-kibana-private"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableKibanaPvlNetworkResponse(callApi(params, req, runtime));
}

DisableKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::disableKibanaPvlNetwork(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return disableKibanaPvlNetworkWithOptions(InstanceId, headers, runtime);
}

EnableKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::enableKibanaPvlNetworkWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<EnableKibanaPvlNetworkRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointName)) {
    body->insert(pair<string, string>("endpointName", *request->endpointName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroups)) {
    body->insert(pair<string, vector<string>>("securityGroups", *request->securityGroups));
  }
  if (!Darabonba_Util::Client::isUnset<vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone>>(request->vSwitchIdsZone)) {
    body->insert(pair<string, vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone>>("vSwitchIdsZone", *request->vSwitchIdsZone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableKibanaPvlNetwork"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/enable-kibana-private"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableKibanaPvlNetworkResponse(callApi(params, req, runtime));
}

EnableKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::enableKibanaPvlNetwork(shared_ptr<string> InstanceId, shared_ptr<EnableKibanaPvlNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return enableKibanaPvlNetworkWithOptions(InstanceId, request, headers, runtime);
}

EstimatedLogstashRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedLogstashRestartTimeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                         shared_ptr<EstimatedLogstashRestartTimeRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EstimatedLogstashRestartTime"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/estimated-time/restart-time"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EstimatedLogstashRestartTimeResponse(callApi(params, req, runtime));
}

EstimatedLogstashRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedLogstashRestartTime(shared_ptr<string> InstanceId, shared_ptr<EstimatedLogstashRestartTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return estimatedLogstashRestartTimeWithOptions(InstanceId, request, headers, runtime);
}

EstimatedRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedRestartTimeWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<EstimatedRestartTimeRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EstimatedRestartTime"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/estimated-time/restart-time"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EstimatedRestartTimeResponse(callApi(params, req, runtime));
}

EstimatedRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedRestartTime(shared_ptr<string> InstanceId, shared_ptr<EstimatedRestartTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return estimatedRestartTimeWithOptions(InstanceId, request, headers, runtime);
}

GetClusterDataInformationResponse Alibabacloud_Elasticsearch20170613::Client::getClusterDataInformationWithOptions(shared_ptr<GetClusterDataInformationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterDataInformation"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/cluster/data-information"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterDataInformationResponse(callApi(params, req, runtime));
}

GetClusterDataInformationResponse Alibabacloud_Elasticsearch20170613::Client::getClusterDataInformation(shared_ptr<GetClusterDataInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterDataInformationWithOptions(request, headers, runtime);
}

GetElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::getElastictaskWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetElastictask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/elastic-task"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetElastictaskResponse(callApi(params, req, runtime));
}

GetElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::getElastictask(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getElastictaskWithOptions(InstanceId, headers, runtime);
}

GetEmonGrafanaAlertsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaAlertsWithOptions(shared_ptr<string> ProjectId,
                                                                                                         shared_ptr<GetEmonGrafanaAlertsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmonGrafanaAlerts"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/emon/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/grafana/proxy/api/alerts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmonGrafanaAlertsResponse(callApi(params, req, runtime));
}

GetEmonGrafanaAlertsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaAlerts(shared_ptr<string> ProjectId, shared_ptr<GetEmonGrafanaAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmonGrafanaAlertsWithOptions(ProjectId, request, headers, runtime);
}

GetEmonGrafanaDashboardsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaDashboardsWithOptions(shared_ptr<string> ProjectId,
                                                                                                                 shared_ptr<GetEmonGrafanaDashboardsRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmonGrafanaDashboards"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/emon/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/grafana/proxy/api/search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmonGrafanaDashboardsResponse(callApi(params, req, runtime));
}

GetEmonGrafanaDashboardsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaDashboards(shared_ptr<string> ProjectId, shared_ptr<GetEmonGrafanaDashboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmonGrafanaDashboardsWithOptions(ProjectId, request, headers, runtime);
}

GetEmonMonitorDataResponse Alibabacloud_Elasticsearch20170613::Client::getEmonMonitorDataWithOptions(shared_ptr<string> ProjectId,
                                                                                                     shared_ptr<GetEmonMonitorDataRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmonMonitorData"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/emon/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/metrics/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEmonMonitorDataResponse(callApi(params, req, runtime));
}

GetEmonMonitorDataResponse Alibabacloud_Elasticsearch20170613::Client::getEmonMonitorData(shared_ptr<string> ProjectId, shared_ptr<GetEmonMonitorDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmonMonitorDataWithOptions(ProjectId, request, headers, runtime);
}

GetOpenStoreUsageResponse Alibabacloud_Elasticsearch20170613::Client::getOpenStoreUsageWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOpenStoreUsage"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/openstore/usage"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOpenStoreUsageResponse(callApi(params, req, runtime));
}

GetOpenStoreUsageResponse Alibabacloud_Elasticsearch20170613::Client::getOpenStoreUsage(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOpenStoreUsageWithOptions(InstanceId, headers, runtime);
}

GetRegionConfigurationResponse Alibabacloud_Elasticsearch20170613::Client::getRegionConfigurationWithOptions(shared_ptr<GetRegionConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("zoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegionConfiguration"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/region"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegionConfigurationResponse(callApi(params, req, runtime));
}

GetRegionConfigurationResponse Alibabacloud_Elasticsearch20170613::Client::getRegionConfiguration(shared_ptr<GetRegionConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRegionConfigurationWithOptions(request, headers, runtime);
}

GetRegionalInstanceConfigResponse Alibabacloud_Elasticsearch20170613::Client::getRegionalInstanceConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegionalInstanceConfig"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/regions/instance-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegionalInstanceConfigResponse(callApi(params, req, runtime));
}

GetRegionalInstanceConfigResponse Alibabacloud_Elasticsearch20170613::Client::getRegionalInstanceConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRegionalInstanceConfigWithOptions(headers, runtime);
}

GetSuggestShrinkableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getSuggestShrinkableNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<GetSuggestShrinkableNodesRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    query->insert(pair<string, bool>("ignoreStatus", *request->ignoreStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSuggestShrinkableNodes"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/suggest-shrinkable-nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSuggestShrinkableNodesResponse(callApi(params, req, runtime));
}

GetSuggestShrinkableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getSuggestShrinkableNodes(shared_ptr<string> InstanceId, shared_ptr<GetSuggestShrinkableNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSuggestShrinkableNodesWithOptions(InstanceId, request, headers, runtime);
}

GetTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getTransferableNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<GetTransferableNodesRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTransferableNodes"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/transferable-nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTransferableNodesResponse(callApi(params, req, runtime));
}

GetTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getTransferableNodes(shared_ptr<string> InstanceId, shared_ptr<GetTransferableNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTransferableNodesWithOptions(InstanceId, request, headers, runtime);
}

InitializeOperationRoleResponse Alibabacloud_Elasticsearch20170613::Client::initializeOperationRoleWithOptions(shared_ptr<InitializeOperationRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeOperationRole"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/user/slr"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeOperationRoleResponse(callApi(params, req, runtime));
}

InitializeOperationRoleResponse Alibabacloud_Elasticsearch20170613::Client::initializeOperationRole(shared_ptr<InitializeOperationRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return initializeOperationRoleWithOptions(request, headers, runtime);
}

InstallAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::installAckOperatorWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<InstallAckOperatorRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallAckOperator"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ack-clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/operator"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallAckOperatorResponse(callApi(params, req, runtime));
}

InstallAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::installAckOperator(shared_ptr<string> ClusterId, shared_ptr<InstallAckOperatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installAckOperatorWithOptions(ClusterId, request, headers, runtime);
}

InstallKibanaSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installKibanaSystemPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<InstallKibanaSystemPluginRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallKibanaSystemPlugin"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/kibana-plugins/system/actions/install"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallKibanaSystemPluginResponse(callApi(params, req, runtime));
}

InstallKibanaSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installKibanaSystemPlugin(shared_ptr<string> InstanceId, shared_ptr<InstallKibanaSystemPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installKibanaSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

InstallLogstashSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installLogstashSystemPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                                       shared_ptr<InstallLogstashSystemPluginRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallLogstashSystemPlugin"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins/system/actions/install"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallLogstashSystemPluginResponse(callApi(params, req, runtime));
}

InstallLogstashSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installLogstashSystemPlugin(shared_ptr<string> InstanceId, shared_ptr<InstallLogstashSystemPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installLogstashSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

InstallSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installSystemPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<InstallSystemPluginRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallSystemPlugin"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins/system/actions/install"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallSystemPluginResponse(callApi(params, req, runtime));
}

InstallSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installSystemPlugin(shared_ptr<string> InstanceId, shared_ptr<InstallSystemPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

InstallUserPluginsResponse Alibabacloud_Elasticsearch20170613::Client::installUserPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<InstallUserPluginsRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallUserPlugins"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins/user/actions/install"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallUserPluginsResponse(callApi(params, req, runtime));
}

InstallUserPluginsResponse Alibabacloud_Elasticsearch20170613::Client::installUserPlugins(shared_ptr<string> InstanceId, shared_ptr<InstallUserPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installUserPluginsWithOptions(InstanceId, request, headers, runtime);
}

InterruptElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptElasticsearchTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                                     shared_ptr<InterruptElasticsearchTaskRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InterruptElasticsearchTask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/interrupt"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InterruptElasticsearchTaskResponse(callApi(params, req, runtime));
}

InterruptElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptElasticsearchTask(shared_ptr<string> InstanceId, shared_ptr<InterruptElasticsearchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return interruptElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

InterruptLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptLogstashTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<InterruptLogstashTaskRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InterruptLogstashTask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/interrupt"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InterruptLogstashTaskResponse(callApi(params, req, runtime));
}

InterruptLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptLogstashTask(shared_ptr<string> InstanceId, shared_ptr<InterruptLogstashTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return interruptLogstashTaskWithOptions(InstanceId, request, headers, runtime);
}

ListAckClustersResponse Alibabacloud_Elasticsearch20170613::Client::listAckClustersWithOptions(shared_ptr<ListAckClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAckClusters"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ack-clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAckClustersResponse(callApi(params, req, runtime));
}

ListAckClustersResponse Alibabacloud_Elasticsearch20170613::Client::listAckClusters(shared_ptr<ListAckClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAckClustersWithOptions(request, headers, runtime);
}

ListAckNamespacesResponse Alibabacloud_Elasticsearch20170613::Client::listAckNamespacesWithOptions(shared_ptr<string> ClusterId,
                                                                                                   shared_ptr<ListAckNamespacesRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAckNamespaces"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ack-clusters/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/namespaces"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAckNamespacesResponse(callApi(params, req, runtime));
}

ListAckNamespacesResponse Alibabacloud_Elasticsearch20170613::Client::listAckNamespaces(shared_ptr<string> ClusterId, shared_ptr<ListAckNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAckNamespacesWithOptions(ClusterId, request, headers, runtime);
}

ListActionRecordsResponse Alibabacloud_Elasticsearch20170613::Client::listActionRecordsWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<ListActionRecordsRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionNames)) {
    query->insert(pair<string, string>("actionNames", *request->actionNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("requestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListActionRecords"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/action-records"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListActionRecordsResponse(callApi(params, req, runtime));
}

ListActionRecordsResponse Alibabacloud_Elasticsearch20170613::Client::listActionRecords(shared_ptr<string> InstanceId, shared_ptr<ListActionRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listActionRecordsWithOptions(InstanceId, request, headers, runtime);
}

ListAllNodeResponse Alibabacloud_Elasticsearch20170613::Client::listAllNodeWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<ListAllNodeRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->extended)) {
    query->insert(pair<string, bool>("extended", *request->extended));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllNode"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAllNodeResponse(callApi(params, req, runtime));
}

ListAllNodeResponse Alibabacloud_Elasticsearch20170613::Client::listAllNode(shared_ptr<string> InstanceId, shared_ptr<ListAllNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAllNodeWithOptions(InstanceId, request, headers, runtime);
}

ListAlternativeSnapshotReposResponse Alibabacloud_Elasticsearch20170613::Client::listAlternativeSnapshotReposWithOptions(shared_ptr<string> InstanceId,
                                                                                                                         shared_ptr<ListAlternativeSnapshotReposRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->alreadySetItems)) {
    query->insert(pair<string, bool>("alreadySetItems", *request->alreadySetItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlternativeSnapshotRepos"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/alternative-snapshot-repos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlternativeSnapshotReposResponse(callApi(params, req, runtime));
}

ListAlternativeSnapshotReposResponse Alibabacloud_Elasticsearch20170613::Client::listAlternativeSnapshotRepos(shared_ptr<string> InstanceId, shared_ptr<ListAlternativeSnapshotReposRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlternativeSnapshotReposWithOptions(InstanceId, request, headers, runtime);
}

ListApmResponse Alibabacloud_Elasticsearch20170613::Client::listApmWithOptions(shared_ptr<ListApmRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApm"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/apm"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApmResponse(callApi(params, req, runtime));
}

ListApmResponse Alibabacloud_Elasticsearch20170613::Client::listApm(shared_ptr<ListApmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listApmWithOptions(request, headers, runtime);
}

ListAvailableEsInstanceIdsResponse Alibabacloud_Elasticsearch20170613::Client::listAvailableEsInstanceIdsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvailableEsInstanceIds"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/available-elasticsearch-for-centralized-management"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAvailableEsInstanceIdsResponse(callApi(params, req, runtime));
}

ListAvailableEsInstanceIdsResponse Alibabacloud_Elasticsearch20170613::Client::listAvailableEsInstanceIds(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAvailableEsInstanceIdsWithOptions(InstanceId, headers, runtime);
}

ListCollectorsResponse Alibabacloud_Elasticsearch20170613::Client::listCollectorsWithOptions(shared_ptr<ListCollectorsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resId)) {
    query->insert(pair<string, string>("resId", *request->resId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCollectors"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCollectorsResponse(callApi(params, req, runtime));
}

ListCollectorsResponse Alibabacloud_Elasticsearch20170613::Client::listCollectors(shared_ptr<ListCollectorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCollectorsWithOptions(request, headers, runtime);
}

ListComponentIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listComponentIndicesWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<ListComponentIndicesRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListComponentIndices"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/component-index"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListComponentIndicesResponse(callApi(params, req, runtime));
}

ListComponentIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listComponentIndices(shared_ptr<string> InstanceId, shared_ptr<ListComponentIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listComponentIndicesWithOptions(InstanceId, request, headers, runtime);
}

ListConnectedClustersResponse Alibabacloud_Elasticsearch20170613::Client::listConnectedClustersWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnectedClusters"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/connected-clusters"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectedClustersResponse(callApi(params, req, runtime));
}

ListConnectedClustersResponse Alibabacloud_Elasticsearch20170613::Client::listConnectedClusters(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConnectedClustersWithOptions(InstanceId, headers, runtime);
}

ListDataStreamsResponse Alibabacloud_Elasticsearch20170613::Client::listDataStreamsWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListDataStreamsRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isManaged)) {
    query->insert(pair<string, bool>("isManaged", *request->isManaged));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataStreams"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/data-streams"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataStreamsResponse(callApi(params, req, runtime));
}

ListDataStreamsResponse Alibabacloud_Elasticsearch20170613::Client::listDataStreams(shared_ptr<string> InstanceId, shared_ptr<ListDataStreamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataStreamsWithOptions(InstanceId, request, headers, runtime);
}

ListDataTasksResponse Alibabacloud_Elasticsearch20170613::Client::listDataTasksWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataTasks"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/data-task"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataTasksResponse(callApi(params, req, runtime));
}

ListDataTasksResponse Alibabacloud_Elasticsearch20170613::Client::listDataTasks(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataTasksWithOptions(InstanceId, headers, runtime);
}

ListDefaultCollectorConfigurationsResponse Alibabacloud_Elasticsearch20170613::Client::listDefaultCollectorConfigurationsWithOptions(shared_ptr<ListDefaultCollectorConfigurationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resType)) {
    query->insert(pair<string, string>("resType", *request->resType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resVersion)) {
    query->insert(pair<string, string>("resVersion", *request->resVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("sourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDefaultCollectorConfigurations"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/beats/default-configurations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDefaultCollectorConfigurationsResponse(callApi(params, req, runtime));
}

ListDefaultCollectorConfigurationsResponse Alibabacloud_Elasticsearch20170613::Client::listDefaultCollectorConfigurations(shared_ptr<ListDefaultCollectorConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDefaultCollectorConfigurationsWithOptions(request, headers, runtime);
}

ListDeprecatedTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::listDeprecatedTemplatesWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<ListDeprecatedTemplatesRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeprecatedTemplates"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/deprecated-templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeprecatedTemplatesResponse(callApi(params, req, runtime));
}

ListDeprecatedTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::listDeprecatedTemplates(shared_ptr<string> InstanceId, shared_ptr<ListDeprecatedTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDeprecatedTemplatesWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnoseIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseIndicesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListDiagnoseIndicesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiagnoseIndices"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/indices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiagnoseIndicesResponse(callApi(params, req, runtime));
}

ListDiagnoseIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseIndices(shared_ptr<string> InstanceId, shared_ptr<ListDiagnoseIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnoseIndicesWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReportWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ListDiagnoseReportRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->detail)) {
    query->insert(pair<string, bool>("detail", *request->detail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trigger)) {
    query->insert(pair<string, string>("trigger", *request->trigger));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiagnoseReport"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/reports"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiagnoseReportResponse(callApi(params, req, runtime));
}

ListDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReport(shared_ptr<string> InstanceId, shared_ptr<ListDiagnoseReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnoseReportWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnoseReportIdsResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReportIdsWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<ListDiagnoseReportIdsRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("startTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trigger)) {
    query->insert(pair<string, string>("trigger", *request->trigger));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiagnoseReportIds"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/report-ids"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiagnoseReportIdsResponse(callApi(params, req, runtime));
}

ListDiagnoseReportIdsResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReportIds(shared_ptr<string> InstanceId, shared_ptr<ListDiagnoseReportIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnoseReportIdsWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnosisItemsResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnosisItemsWithOptions(shared_ptr<ListDiagnosisItemsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDiagnosisItems"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/items"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDiagnosisItemsResponse(callApi(params, req, runtime));
}

ListDiagnosisItemsResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnosisItems(shared_ptr<ListDiagnosisItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnosisItemsWithOptions(request, headers, runtime);
}

ListDictInformationResponse Alibabacloud_Elasticsearch20170613::Client::listDictInformationWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListDictInformationRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analyzerType)) {
    query->insert(pair<string, string>("analyzerType", *request->analyzerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    query->insert(pair<string, string>("bucketName", *request->bucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("key", *request->key));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDictInformation"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/dict/_info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDictInformationResponse(callApi(params, req, runtime));
}

ListDictInformationResponse Alibabacloud_Elasticsearch20170613::Client::listDictInformation(shared_ptr<string> InstanceId, shared_ptr<ListDictInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictInformationWithOptions(InstanceId, request, headers, runtime);
}

ListDictsResponse Alibabacloud_Elasticsearch20170613::Client::listDictsWithOptions(shared_ptr<string> InstanceId,
                                                                                   shared_ptr<ListDictsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analyzerType)) {
    query->insert(pair<string, string>("analyzerType", *request->analyzerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDicts"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/dicts"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDictsResponse(callApi(params, req, runtime));
}

ListDictsResponse Alibabacloud_Elasticsearch20170613::Client::listDicts(shared_ptr<string> InstanceId, shared_ptr<ListDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictsWithOptions(InstanceId, request, headers, runtime);
}

ListEcsInstancesResponse Alibabacloud_Elasticsearch20170613::Client::listEcsInstancesWithOptions(shared_ptr<ListEcsInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceIds)) {
    query->insert(pair<string, string>("ecsInstanceIds", *request->ecsInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceName)) {
    query->insert(pair<string, string>("ecsInstanceName", *request->ecsInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEcsInstances"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/ecs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEcsInstancesResponse(callApi(params, req, runtime));
}

ListEcsInstancesResponse Alibabacloud_Elasticsearch20170613::Client::listEcsInstances(shared_ptr<ListEcsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsInstancesWithOptions(request, headers, runtime);
}

ListExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::listExtendfilesWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExtendfiles"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/extendfiles"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExtendfilesResponse(callApi(params, req, runtime));
}

ListExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::listExtendfiles(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listExtendfilesWithOptions(InstanceId, headers, runtime);
}

ListILMPoliciesResponse Alibabacloud_Elasticsearch20170613::Client::listILMPoliciesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListILMPoliciesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("policyName", *request->policyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListILMPolicies"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/ilm-policies"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListILMPoliciesResponse(callApi(params, req, runtime));
}

ListILMPoliciesResponse Alibabacloud_Elasticsearch20170613::Client::listILMPolicies(shared_ptr<string> InstanceId, shared_ptr<ListILMPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listILMPoliciesWithOptions(InstanceId, request, headers, runtime);
}

ListIndexTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::listIndexTemplatesWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ListIndexTemplatesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexTemplate)) {
    query->insert(pair<string, string>("indexTemplate", *request->indexTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIndexTemplates"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/index-templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIndexTemplatesResponse(callApi(params, req, runtime));
}

ListIndexTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::listIndexTemplates(shared_ptr<string> InstanceId, shared_ptr<ListIndexTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexTemplatesWithOptions(InstanceId, request, headers, runtime);
}

ListInstanceResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->esVersion)) {
    query->insert(pair<string, string>("esVersion", *request->esVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceCategory)) {
    query->insert(pair<string, string>("instanceCategory", *request->instanceCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("paymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("vpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("zoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceResponse(callApi(params, req, runtime));
}

ListInstanceResponse Alibabacloud_Elasticsearch20170613::Client::listInstance(shared_ptr<ListInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceWithOptions(request, headers, runtime);
}

ListInstanceHistoryEventsResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceHistoryEventsWithOptions(shared_ptr<ListInstanceHistoryEventsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListInstanceHistoryEventsShrinkRequest> request = make_shared<ListInstanceHistoryEventsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->eventCycleStatus)) {
    request->eventCycleStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->eventCycleStatus, make_shared<string>("eventCycleStatus"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->eventLevel)) {
    request->eventLevelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->eventLevel, make_shared<string>("eventLevel"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->eventType)) {
    request->eventTypeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->eventType, make_shared<string>("eventType"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCreateEndTime)) {
    query->insert(pair<string, string>("eventCreateEndTime", *request->eventCreateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCreateStartTime)) {
    query->insert(pair<string, string>("eventCreateStartTime", *request->eventCreateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventCycleStatusShrink)) {
    query->insert(pair<string, string>("eventCycleStatus", *request->eventCycleStatusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventExecuteEndTime)) {
    query->insert(pair<string, string>("eventExecuteEndTime", *request->eventExecuteEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventExecuteStartTime)) {
    query->insert(pair<string, string>("eventExecuteStartTime", *request->eventExecuteStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventFinashEndTime)) {
    query->insert(pair<string, string>("eventFinashEndTime", *request->eventFinashEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventFinashStartTime)) {
    query->insert(pair<string, string>("eventFinashStartTime", *request->eventFinashStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventLevelShrink)) {
    query->insert(pair<string, string>("eventLevel", *request->eventLevelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypeShrink)) {
    query->insert(pair<string, string>("eventType", *request->eventTypeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIP)) {
    query->insert(pair<string, string>("nodeIP", *request->nodeIP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<ListInstanceHistoryEventsShrinkRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceHistoryEvents"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/events"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceHistoryEventsResponse(callApi(params, req, runtime));
}

ListInstanceHistoryEventsResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceHistoryEvents(shared_ptr<ListInstanceHistoryEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceHistoryEventsWithOptions(request, headers, runtime);
}

ListInstanceIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceIndicesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListInstanceIndicesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("all", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isManaged)) {
    query->insert(pair<string, bool>("isManaged", *request->isManaged));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOpenstore)) {
    query->insert(pair<string, bool>("isOpenstore", *request->isOpenstore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceIndices"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/indices"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceIndicesResponse(callApi(params, req, runtime));
}

ListInstanceIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceIndices(shared_ptr<string> InstanceId, shared_ptr<ListInstanceIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceIndicesWithOptions(InstanceId, request, headers, runtime);
}

ListKibanaPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listKibanaPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<ListKibanaPluginsRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->page)) {
    query->insert(pair<string, string>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListKibanaPlugins"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/kibana-plugins"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKibanaPluginsResponse(callApi(params, req, runtime));
}

ListKibanaPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listKibanaPlugins(shared_ptr<string> InstanceId, shared_ptr<ListKibanaPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listKibanaPluginsWithOptions(InstanceId, request, headers, runtime);
}

ListKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::listKibanaPvlNetworkWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListKibanaPvlNetwork"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/get-kibana-private"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKibanaPvlNetworkResponse(callApi(params, req, runtime));
}

ListKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::listKibanaPvlNetwork(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listKibanaPvlNetworkWithOptions(InstanceId, headers, runtime);
}

ListLogstashResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashWithOptions(shared_ptr<ListLogstashRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogstashResponse(callApi(params, req, runtime));
}

ListLogstashResponse Alibabacloud_Elasticsearch20170613::Client::listLogstash(shared_ptr<ListLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogstashWithOptions(request, headers, runtime);
}

ListLogstashLogResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashLogWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListLogstashLogRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogstashLog"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/search-log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogstashLogResponse(callApi(params, req, runtime));
}

ListLogstashLogResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashLog(shared_ptr<string> InstanceId, shared_ptr<ListLogstashLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogstashLogWithOptions(InstanceId, request, headers, runtime);
}

ListLogstashPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListLogstashPluginsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogstashPlugins"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogstashPluginsResponse(callApi(params, req, runtime));
}

ListLogstashPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashPlugins(shared_ptr<string> InstanceId, shared_ptr<ListLogstashPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogstashPluginsWithOptions(InstanceId, request, headers, runtime);
}

ListNodesResponse Alibabacloud_Elasticsearch20170613::Client::listNodesWithOptions(shared_ptr<string> ResId,
                                                                                   shared_ptr<ListNodesRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceIds)) {
    query->insert(pair<string, string>("ecsInstanceIds", *request->ecsInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceName)) {
    query->insert(pair<string, string>("ecsInstanceName", *request->ecsInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/nodes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesResponse(callApi(params, req, runtime));
}

ListNodesResponse Alibabacloud_Elasticsearch20170613::Client::listNodes(shared_ptr<string> ResId, shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNodesWithOptions(ResId, request, headers, runtime);
}

ListPipelineResponse Alibabacloud_Elasticsearch20170613::Client::listPipelineWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<ListPipelineRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("pipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipeline"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineResponse(callApi(params, req, runtime));
}

ListPipelineResponse Alibabacloud_Elasticsearch20170613::Client::listPipeline(shared_ptr<string> InstanceId, shared_ptr<ListPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineWithOptions(InstanceId, request, headers, runtime);
}

ListPipelineIdsResponse Alibabacloud_Elasticsearch20170613::Client::listPipelineIdsWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListPipelineIdsRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelineIds"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipeline-ids"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelineIdsResponse(callApi(params, req, runtime));
}

ListPipelineIdsResponse Alibabacloud_Elasticsearch20170613::Client::listPipelineIds(shared_ptr<string> InstanceId, shared_ptr<ListPipelineIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineIdsWithOptions(InstanceId, request, headers, runtime);
}

ListPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<ListPluginsRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->page)) {
    query->insert(pair<string, string>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPlugins"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPluginsResponse(callApi(params, req, runtime));
}

ListPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listPlugins(shared_ptr<string> InstanceId, shared_ptr<ListPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPluginsWithOptions(InstanceId, request, headers, runtime);
}

ListSearchLogResponse Alibabacloud_Elasticsearch20170613::Client::listSearchLogWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<ListSearchLogRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("beginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("endTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSearchLog"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/search-log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSearchLogResponse(callApi(params, req, runtime));
}

ListSearchLogResponse Alibabacloud_Elasticsearch20170613::Client::listSearchLog(shared_ptr<string> InstanceId, shared_ptr<ListSearchLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchLogWithOptions(InstanceId, request, headers, runtime);
}

ListShardRecoveriesResponse Alibabacloud_Elasticsearch20170613::Client::listShardRecoveriesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListShardRecoveriesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->activeOnly)) {
    query->insert(pair<string, bool>("activeOnly", *request->activeOnly));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListShardRecoveries"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/cat-recovery"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListShardRecoveriesResponse(callApi(params, req, runtime));
}

ListShardRecoveriesResponse Alibabacloud_Elasticsearch20170613::Client::listShardRecoveries(shared_ptr<string> InstanceId, shared_ptr<ListShardRecoveriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listShardRecoveriesWithOptions(InstanceId, request, headers, runtime);
}

ListSnapshotReposByInstanceIdResponse Alibabacloud_Elasticsearch20170613::Client::listSnapshotReposByInstanceIdWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshotReposByInstanceId"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/snapshot-repos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSnapshotReposByInstanceIdResponse(callApi(params, req, runtime));
}

ListSnapshotReposByInstanceIdResponse Alibabacloud_Elasticsearch20170613::Client::listSnapshotReposByInstanceId(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSnapshotReposByInstanceIdWithOptions(InstanceId, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListTagsResponse Alibabacloud_Elasticsearch20170613::Client::listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTags"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/tags/all-tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagsResponse(callApi(params, req, runtime));
}

ListTagsResponse Alibabacloud_Elasticsearch20170613::Client::listTags(shared_ptr<ListTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagsWithOptions(request, headers, runtime);
}

ListVpcEndpointsResponse Alibabacloud_Elasticsearch20170613::Client::listVpcEndpointsWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<ListVpcEndpointsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpcEndpoints"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/vpc-endpoints"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpcEndpointsResponse(callApi(params, req, runtime));
}

ListVpcEndpointsResponse Alibabacloud_Elasticsearch20170613::Client::listVpcEndpoints(shared_ptr<string> InstanceId, shared_ptr<ListVpcEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVpcEndpointsWithOptions(InstanceId, request, headers, runtime);
}

MigrateToOtherZoneResponse Alibabacloud_Elasticsearch20170613::Client::migrateToOtherZoneWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<MigrateToOtherZoneRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MigrateToOtherZone"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/migrate-zones"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MigrateToOtherZoneResponse(callApi(params, req, runtime));
}

MigrateToOtherZoneResponse Alibabacloud_Elasticsearch20170613::Client::migrateToOtherZone(shared_ptr<string> InstanceId, shared_ptr<MigrateToOtherZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return migrateToOtherZoneWithOptions(InstanceId, request, headers, runtime);
}

ModifyDeployMachineResponse Alibabacloud_Elasticsearch20170613::Client::modifyDeployMachineWithOptions(shared_ptr<string> ResId,
                                                                                                       shared_ptr<ModifyDeployMachineRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDeployMachine"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/actions/modify-deploy-machines"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDeployMachineResponse(callApi(params, req, runtime));
}

ModifyDeployMachineResponse Alibabacloud_Elasticsearch20170613::Client::modifyDeployMachine(shared_ptr<string> ResId, shared_ptr<ModifyDeployMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDeployMachineWithOptions(ResId, request, headers, runtime);
}

ModifyElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::modifyElastictaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<ModifyElastictaskRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyElastictask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/elastic-task"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyElastictaskResponse(callApi(params, req, runtime));
}

ModifyElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::modifyElastictask(shared_ptr<string> InstanceId, shared_ptr<ModifyElastictaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyElastictaskWithOptions(InstanceId, request, headers, runtime);
}

ModifyInstanceMaintainTimeResponse Alibabacloud_Elasticsearch20170613::Client::modifyInstanceMaintainTimeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                     shared_ptr<ModifyInstanceMaintainTimeRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceMaintainTime"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/modify-maintaintime"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceMaintainTimeResponse(callApi(params, req, runtime));
}

ModifyInstanceMaintainTimeResponse Alibabacloud_Elasticsearch20170613::Client::modifyInstanceMaintainTime(shared_ptr<string> InstanceId, shared_ptr<ModifyInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyInstanceMaintainTimeWithOptions(InstanceId, request, headers, runtime);
}

ModifyWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::modifyWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<ModifyWhiteIpsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    body->insert(pair<string, string>("modifyMode", *request->modifyMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("networkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    body->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyWhiteIpsRequestWhiteIpGroup>(request->whiteIpGroup)) {
    body->insert(pair<string, ModifyWhiteIpsRequestWhiteIpGroup>("whiteIpGroup", *request->whiteIpGroup));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->whiteIpList)) {
    body->insert(pair<string, vector<string>>("whiteIpList", *request->whiteIpList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyWhiteIps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/modify-white-ips"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyWhiteIpsResponse(callApi(params, req, runtime));
}

ModifyWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::modifyWhiteIps(shared_ptr<string> InstanceId, shared_ptr<ModifyWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

MoveResourceGroupResponse Alibabacloud_Elasticsearch20170613::Client::moveResourceGroupWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<MoveResourceGroupRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resourcegroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceGroupResponse(callApi(params, req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Elasticsearch20170613::Client::moveResourceGroup(shared_ptr<string> InstanceId, shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return moveResourceGroupWithOptions(InstanceId, request, headers, runtime);
}

OpenDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::openDiagnosisWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<OpenDiagnosisRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenDiagnosis"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/open-diagnosis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenDiagnosisResponse(callApi(params, req, runtime));
}

OpenDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::openDiagnosis(shared_ptr<string> InstanceId, shared_ptr<OpenDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

OpenHttpsResponse Alibabacloud_Elasticsearch20170613::Client::openHttpsWithOptions(shared_ptr<string> InstanceId,
                                                                                   shared_ptr<OpenHttpsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenHttps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/open-https"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenHttpsResponse(callApi(params, req, runtime));
}

OpenHttpsResponse Alibabacloud_Elasticsearch20170613::Client::openHttps(shared_ptr<string> InstanceId, shared_ptr<OpenHttpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openHttpsWithOptions(InstanceId, request, headers, runtime);
}

PostEmonTryAlarmRuleResponse Alibabacloud_Elasticsearch20170613::Client::postEmonTryAlarmRuleWithOptions(shared_ptr<string> ProjectId,
                                                                                                         shared_ptr<string> AlarmGroupId,
                                                                                                         shared_ptr<PostEmonTryAlarmRuleRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PostEmonTryAlarmRule"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/emon/projects/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId)) + string("/alarm-groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlarmGroupId)) + string("/alarm-rules/_test"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PostEmonTryAlarmRuleResponse(callApi(params, req, runtime));
}

PostEmonTryAlarmRuleResponse Alibabacloud_Elasticsearch20170613::Client::postEmonTryAlarmRule(shared_ptr<string> ProjectId, shared_ptr<string> AlarmGroupId, shared_ptr<PostEmonTryAlarmRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return postEmonTryAlarmRuleWithOptions(ProjectId, AlarmGroupId, request, headers, runtime);
}

RecommendTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::recommendTemplatesWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<RecommendTemplatesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->usageScenario)) {
    query->insert(pair<string, string>("usageScenario", *request->usageScenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecommendTemplates"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/recommended-templates"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecommendTemplatesResponse(callApi(params, req, runtime));
}

RecommendTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::recommendTemplates(shared_ptr<string> InstanceId, shared_ptr<RecommendTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recommendTemplatesWithOptions(InstanceId, request, headers, runtime);
}

ReinstallCollectorResponse Alibabacloud_Elasticsearch20170613::Client::reinstallCollectorWithOptions(shared_ptr<string> ResId,
                                                                                                     shared_ptr<ReinstallCollectorRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReinstallCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/actions/reinstall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReinstallCollectorResponse(callApi(params, req, runtime));
}

ReinstallCollectorResponse Alibabacloud_Elasticsearch20170613::Client::reinstallCollector(shared_ptr<string> ResId, shared_ptr<ReinstallCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reinstallCollectorWithOptions(ResId, request, headers, runtime);
}

RemoveApmResponse Alibabacloud_Elasticsearch20170613::Client::removeApmWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApm"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/apm/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveApmResponse(callApi(params, req, runtime));
}

RemoveApmResponse Alibabacloud_Elasticsearch20170613::Client::removeApm(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeApmWithOptions(instanceId, headers, runtime);
}

RenewInstanceResponse Alibabacloud_Elasticsearch20170613::Client::renewInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<RenewInstanceRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/renew"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewInstanceResponse(callApi(params, req, runtime));
}

RenewInstanceResponse Alibabacloud_Elasticsearch20170613::Client::renewInstance(shared_ptr<string> InstanceId, shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewInstanceWithOptions(InstanceId, request, headers, runtime);
}

RenewLogstashResponse Alibabacloud_Elasticsearch20170613::Client::renewLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<RenewLogstashRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/renew"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewLogstashResponse(callApi(params, req, runtime));
}

RenewLogstashResponse Alibabacloud_Elasticsearch20170613::Client::renewLogstash(shared_ptr<string> InstanceId, shared_ptr<RenewLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewLogstashWithOptions(InstanceId, request, headers, runtime);
}

RestartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::restartCollectorWithOptions(shared_ptr<string> ResId,
                                                                                                 shared_ptr<RestartCollectorRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/actions/restart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartCollectorResponse(callApi(params, req, runtime));
}

RestartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::restartCollector(shared_ptr<string> ResId, shared_ptr<RestartCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartCollectorWithOptions(ResId, request, headers, runtime);
}

RestartInstanceResponse Alibabacloud_Elasticsearch20170613::Client::restartInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<RestartInstanceRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/restart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartInstanceResponse(callApi(params, req, runtime));
}

RestartInstanceResponse Alibabacloud_Elasticsearch20170613::Client::restartInstance(shared_ptr<string> InstanceId, shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartInstanceWithOptions(InstanceId, request, headers, runtime);
}

RestartLogstashResponse Alibabacloud_Elasticsearch20170613::Client::restartLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<RestartLogstashRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<double>(request->batchCount)) {
    body->insert(pair<string, double>("batchCount", *request->batchCount));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->blueGreenDep)) {
    body->insert(pair<string, bool>("blueGreenDep", *request->blueGreenDep));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodeTypes)) {
    body->insert(pair<string, vector<string>>("nodeTypes", *request->nodeTypes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->nodes)) {
    body->insert(pair<string, vector<string>>("nodes", *request->nodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->restartType)) {
    body->insert(pair<string, string>("restartType", *request->restartType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/restart"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartLogstashResponse(callApi(params, req, runtime));
}

RestartLogstashResponse Alibabacloud_Elasticsearch20170613::Client::restartLogstash(shared_ptr<string> InstanceId, shared_ptr<RestartLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartLogstashWithOptions(InstanceId, request, headers, runtime);
}

ResumeElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeElasticsearchTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<ResumeElasticsearchTaskRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeElasticsearchTask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeElasticsearchTaskResponse(callApi(params, req, runtime));
}

ResumeElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeElasticsearchTask(shared_ptr<string> InstanceId, shared_ptr<ResumeElasticsearchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

ResumeLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeLogstashTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ResumeLogstashTaskRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeLogstashTask"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/resume"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeLogstashTaskResponse(callApi(params, req, runtime));
}

ResumeLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeLogstashTask(shared_ptr<string> InstanceId, shared_ptr<ResumeLogstashTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeLogstashTaskWithOptions(InstanceId, request, headers, runtime);
}

RolloverDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::rolloverDataStreamWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<string> DataStream,
                                                                                                     shared_ptr<RolloverDataStreamRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RolloverDataStream"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/data-streams/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DataStream)) + string("/rollover"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RolloverDataStreamResponse(callApi(params, req, runtime));
}

RolloverDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::rolloverDataStream(shared_ptr<string> InstanceId, shared_ptr<string> DataStream, shared_ptr<RolloverDataStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rolloverDataStreamWithOptions(InstanceId, DataStream, request, headers, runtime);
}

RunPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::runPipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<RunPipelinesRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunPipelines"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines/action/run"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunPipelinesResponse(callApi(params, req, runtime));
}

RunPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::runPipelines(shared_ptr<string> InstanceId, shared_ptr<RunPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runPipelinesWithOptions(InstanceId, request, headers, runtime);
}

ShrinkNodeResponse Alibabacloud_Elasticsearch20170613::Client::shrinkNodeWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<ShrinkNodeRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    query->insert(pair<string, bool>("ignoreStatus", *request->ignoreStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<ShrinkNodeRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ShrinkNode"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/shrink"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ShrinkNodeResponse(callApi(params, req, runtime));
}

ShrinkNodeResponse Alibabacloud_Elasticsearch20170613::Client::shrinkNode(shared_ptr<string> InstanceId, shared_ptr<ShrinkNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return shrinkNodeWithOptions(InstanceId, request, headers, runtime);
}

StartApmResponse Alibabacloud_Elasticsearch20170613::Client::startApmWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartApm"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/apm/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/actions/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartApmResponse(callApi(params, req, runtime));
}

StartApmResponse Alibabacloud_Elasticsearch20170613::Client::startApm(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startApmWithOptions(instanceId, headers, runtime);
}

StartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::startCollectorWithOptions(shared_ptr<string> ResId,
                                                                                             shared_ptr<StartCollectorRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/actions/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCollectorResponse(callApi(params, req, runtime));
}

StartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::startCollector(shared_ptr<string> ResId, shared_ptr<StartCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startCollectorWithOptions(ResId, request, headers, runtime);
}

StopApmResponse Alibabacloud_Elasticsearch20170613::Client::stopApmWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopApm"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/apm/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/actions/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopApmResponse(callApi(params, req, runtime));
}

StopApmResponse Alibabacloud_Elasticsearch20170613::Client::stopApm(shared_ptr<string> instanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopApmWithOptions(instanceId, headers, runtime);
}

StopCollectorResponse Alibabacloud_Elasticsearch20170613::Client::stopCollectorWithOptions(shared_ptr<string> ResId,
                                                                                           shared_ptr<StopCollectorRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/actions/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCollectorResponse(callApi(params, req, runtime));
}

StopCollectorResponse Alibabacloud_Elasticsearch20170613::Client::stopCollector(shared_ptr<string> ResId, shared_ptr<StopCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopCollectorWithOptions(ResId, request, headers, runtime);
}

StopPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::stopPipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<StopPipelinesRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopPipelines"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines/action/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopPipelinesResponse(callApi(params, req, runtime));
}

StopPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::stopPipelines(shared_ptr<string> InstanceId, shared_ptr<StopPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopPipelinesWithOptions(InstanceId, request, headers, runtime);
}

TagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    body->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<TagResourcesRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

TransferNodeResponse Alibabacloud_Elasticsearch20170613::Client::transferNodeWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<TransferNodeRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<TransferNodeRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferNode"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/transfer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferNodeResponse(callApi(params, req, runtime));
}

TransferNodeResponse Alibabacloud_Elasticsearch20170613::Client::transferNode(shared_ptr<string> InstanceId, shared_ptr<TransferNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transferNodeWithOptions(InstanceId, request, headers, runtime);
}

TriggerNetworkResponse Alibabacloud_Elasticsearch20170613::Client::triggerNetworkWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<TriggerNetworkRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    body->insert(pair<string, string>("actionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("networkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    body->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerNetwork"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/network-trigger"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerNetworkResponse(callApi(params, req, runtime));
}

TriggerNetworkResponse Alibabacloud_Elasticsearch20170613::Client::triggerNetwork(shared_ptr<string> InstanceId, shared_ptr<TriggerNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return triggerNetworkWithOptions(InstanceId, request, headers, runtime);
}

UninstallKibanaPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallKibanaPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UninstallKibanaPluginRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallKibanaPlugin"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/kibana-plugins/actions/uninstall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallKibanaPluginResponse(callApi(params, req, runtime));
}

UninstallKibanaPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallKibanaPlugin(shared_ptr<string> InstanceId, shared_ptr<UninstallKibanaPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallKibanaPluginWithOptions(InstanceId, request, headers, runtime);
}

UninstallLogstashPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallLogstashPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<UninstallLogstashPluginRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallLogstashPlugin"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins/actions/uninstall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallLogstashPluginResponse(callApi(params, req, runtime));
}

UninstallLogstashPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallLogstashPlugin(shared_ptr<string> InstanceId, shared_ptr<UninstallLogstashPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallLogstashPluginWithOptions(InstanceId, request, headers, runtime);
}

UninstallPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<UninstallPluginRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallPlugin"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/plugins/actions/uninstall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallPluginResponse(callApi(params, req, runtime));
}

UninstallPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallPlugin(shared_ptr<string> InstanceId, shared_ptr<UninstallPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallPluginWithOptions(InstanceId, request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateAdminPasswordResponse Alibabacloud_Elasticsearch20170613::Client::updateAdminPasswordWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<UpdateAdminPasswordRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->esAdminPassword)) {
    body->insert(pair<string, string>("esAdminPassword", *request->esAdminPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAdminPassword"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/admin-pwd"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAdminPasswordResponse(callApi(params, req, runtime));
}

UpdateAdminPasswordResponse Alibabacloud_Elasticsearch20170613::Client::updateAdminPassword(shared_ptr<string> InstanceId, shared_ptr<UpdateAdminPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAdminPasswordWithOptions(InstanceId, request, headers, runtime);
}

UpdateAdvancedSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateAdvancedSettingWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UpdateAdvancedSettingRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAdvancedSetting"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/update-advanced-setting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAdvancedSettingResponse(callApi(params, req, runtime));
}

UpdateAdvancedSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateAdvancedSetting(shared_ptr<string> InstanceId, shared_ptr<UpdateAdvancedSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAdvancedSettingWithOptions(InstanceId, request, headers, runtime);
}

UpdateAliwsDictResponse Alibabacloud_Elasticsearch20170613::Client::updateAliwsDictWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<UpdateAliwsDictRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAliwsDict"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/aliws-dict"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAliwsDictResponse(callApi(params, req, runtime));
}

UpdateAliwsDictResponse Alibabacloud_Elasticsearch20170613::Client::updateAliwsDict(shared_ptr<string> InstanceId, shared_ptr<UpdateAliwsDictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAliwsDictWithOptions(InstanceId, request, headers, runtime);
}

UpdateApmResponse Alibabacloud_Elasticsearch20170613::Client::updateApmWithOptions(shared_ptr<string> instanceId,
                                                                                   shared_ptr<UpdateApmRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputES)) {
    body->insert(pair<string, string>("outputES", *request->outputES));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputESPassword)) {
    body->insert(pair<string, string>("outputESPassword", *request->outputESPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputESUserName)) {
    body->insert(pair<string, string>("outputESUserName", *request->outputESUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApm"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/apm/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApmResponse(callApi(params, req, runtime));
}

UpdateApmResponse Alibabacloud_Elasticsearch20170613::Client::updateApm(shared_ptr<string> instanceId, shared_ptr<UpdateApmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApmWithOptions(instanceId, request, headers, runtime);
}

UpdateBlackIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateBlackIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateBlackIpsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBlackIps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/black-ips"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBlackIpsResponse(callApi(params, req, runtime));
}

UpdateBlackIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateBlackIps(shared_ptr<string> InstanceId, shared_ptr<UpdateBlackIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateBlackIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::updateCollectorWithOptions(shared_ptr<string> ResId,
                                                                                               shared_ptr<UpdateCollectorRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCollector"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCollectorResponse(callApi(params, req, runtime));
}

UpdateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::updateCollector(shared_ptr<string> ResId, shared_ptr<UpdateCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCollectorWithOptions(ResId, request, headers, runtime);
}

UpdateCollectorNameResponse Alibabacloud_Elasticsearch20170613::Client::updateCollectorNameWithOptions(shared_ptr<string> ResId,
                                                                                                       shared_ptr<UpdateCollectorNameRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCollectorName"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/collectors/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId)) + string("/actions/rename"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCollectorNameResponse(callApi(params, req, runtime));
}

UpdateCollectorNameResponse Alibabacloud_Elasticsearch20170613::Client::updateCollectorName(shared_ptr<string> ResId, shared_ptr<UpdateCollectorNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCollectorNameWithOptions(ResId, request, headers, runtime);
}

UpdateComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::updateComponentIndexWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<string> name,
                                                                                                         shared_ptr<UpdateComponentIndexRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->meta)) {
    body->insert(pair<string, map<string, boost::any>>("_meta", *request->meta));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateComponentIndexRequestTemplate>(request->template_)) {
    body->insert(pair<string, UpdateComponentIndexRequestTemplate>("template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateComponentIndex"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/component-index/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(name)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateComponentIndexResponse(callApi(params, req, runtime));
}

UpdateComponentIndexResponse Alibabacloud_Elasticsearch20170613::Client::updateComponentIndex(shared_ptr<string> InstanceId, shared_ptr<string> name, shared_ptr<UpdateComponentIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateComponentIndexWithOptions(InstanceId, name, request, headers, runtime);
}

UpdateDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateDescriptionWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<UpdateDescriptionRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDescription"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/description"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDescriptionResponse(callApi(params, req, runtime));
}

UpdateDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateDescription(shared_ptr<string> InstanceId, shared_ptr<UpdateDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDescriptionWithOptions(InstanceId, request, headers, runtime);
}

UpdateDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateDiagnosisSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<UpdateDiagnosisSettingsRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDiagnosisSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/diagnosis/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/settings"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDiagnosisSettingsResponse(callApi(params, req, runtime));
}

UpdateDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateDiagnosisSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateDiagnosisSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateDictResponse Alibabacloud_Elasticsearch20170613::Client::updateDictWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<UpdateDictRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDict"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/dict"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDictResponse(callApi(params, req, runtime));
}

UpdateDictResponse Alibabacloud_Elasticsearch20170613::Client::updateDict(shared_ptr<string> InstanceId, shared_ptr<UpdateDictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDictWithOptions(InstanceId, request, headers, runtime);
}

UpdateDynamicSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateDynamicSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UpdateDynamicSettingsRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("mode", *request->mode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDynamicSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/dynamic-settings"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDynamicSettingsResponse(callApi(params, req, runtime));
}

UpdateDynamicSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateDynamicSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateDynamicSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDynamicSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateExtendConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<UpdateExtendConfigRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExtendConfig"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/extend-configs/actions/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExtendConfigResponse(callApi(params, req, runtime));
}

UpdateExtendConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendConfig(shared_ptr<string> InstanceId, shared_ptr<UpdateExtendConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateExtendConfigWithOptions(InstanceId, request, headers, runtime);
}

UpdateExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendfilesWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<UpdateExtendfilesRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExtendfiles"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/extendfiles"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExtendfilesResponse(callApi(params, req, runtime));
}

UpdateExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendfiles(shared_ptr<string> InstanceId, shared_ptr<UpdateExtendfilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateExtendfilesWithOptions(InstanceId, request, headers, runtime);
}

UpdateHotIkDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateHotIkDictsWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<UpdateHotIkDictsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHotIkDicts"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/ik-hot-dict"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHotIkDictsResponse(callApi(params, req, runtime));
}

UpdateHotIkDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateHotIkDicts(shared_ptr<string> InstanceId, shared_ptr<UpdateHotIkDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHotIkDictsWithOptions(InstanceId, request, headers, runtime);
}

UpdateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<string> PolicyName,
                                                                                               shared_ptr<UpdateILMPolicyRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateILMPolicy"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/ilm-policies/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PolicyName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateILMPolicyResponse(callApi(params, req, runtime));
}

UpdateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateILMPolicy(shared_ptr<string> InstanceId, shared_ptr<string> PolicyName, shared_ptr<UpdateILMPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateILMPolicyWithOptions(InstanceId, PolicyName, request, headers, runtime);
}

UpdateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> IndexTemplate,
                                                                                                       shared_ptr<UpdateIndexTemplateRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIndexTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/index-templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(IndexTemplate)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIndexTemplateResponse(callApi(params, req, runtime));
}

UpdateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<string> IndexTemplate, shared_ptr<UpdateIndexTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIndexTemplateWithOptions(InstanceId, IndexTemplate, request, headers, runtime);
}

UpdateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateInstanceRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderActionType)) {
    query->insert(pair<string, string>("orderActionType", *request->orderActionType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ClientNodeConfiguration>(request->clientNodeConfiguration)) {
    body->insert(pair<string, ClientNodeConfiguration>("clientNodeConfiguration", *request->clientNodeConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<ElasticDataNodeConfiguration>(request->elasticDataNodeConfiguration)) {
    body->insert(pair<string, ElasticDataNodeConfiguration>("elasticDataNodeConfiguration", *request->elasticDataNodeConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceCategory)) {
    body->insert(pair<string, string>("instanceCategory", *request->instanceCategory));
  }
  if (!Darabonba_Util::Client::isUnset<KibanaNodeConfiguration>(request->kibanaConfiguration)) {
    body->insert(pair<string, KibanaNodeConfiguration>("kibanaConfiguration", *request->kibanaConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<MasterNodeConfiguration>(request->masterConfiguration)) {
    body->insert(pair<string, MasterNodeConfiguration>("masterConfiguration", *request->masterConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeAmount)) {
    body->insert(pair<string, long>("nodeAmount", *request->nodeAmount));
  }
  if (!Darabonba_Util::Client::isUnset<NodeSpec>(request->nodeSpec)) {
    body->insert(pair<string, NodeSpec>("nodeSpec", *request->nodeSpec));
  }
  if (!Darabonba_Util::Client::isUnset<WarmNodeConfiguration>(request->warmNodeConfiguration)) {
    body->insert(pair<string, WarmNodeConfiguration>("warmNodeConfiguration", *request->warmNodeConfiguration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceChargeTypeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<UpdateInstanceChargeTypeRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceChargeType"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/convert-pay-type"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceChargeTypeResponse(callApi(params, req, runtime));
}

UpdateInstanceChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceChargeType(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceChargeTypeWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<UpdateInstanceSettingsRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStrategy)) {
    query->insert(pair<string, string>("updateStrategy", *request->updateStrategy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/instance-settings"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceSettingsResponse(callApi(params, req, runtime));
}

UpdateInstanceSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaPvlNetworkWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<UpdateKibanaPvlNetworkRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pvlId)) {
    query->insert(pair<string, string>("pvlId", *request->pvlId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointName)) {
    body->insert(pair<string, string>("endpointName", *request->endpointName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->securityGroups)) {
    body->insert(pair<string, vector<string>>("securityGroups", *request->securityGroups));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateKibanaPvlNetwork"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/update-kibana-private"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateKibanaPvlNetworkResponse(callApi(params, req, runtime));
}

UpdateKibanaPvlNetworkResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaPvlNetwork(shared_ptr<string> InstanceId, shared_ptr<UpdateKibanaPvlNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateKibanaPvlNetworkWithOptions(InstanceId, request, headers, runtime);
}

UpdateKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpdateKibanaSettingsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateKibanaSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/update-kibana-settings"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateKibanaSettingsResponse(callApi(params, req, runtime));
}

UpdateKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateKibanaSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateKibanaSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateKibanaWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpdateKibanaWhiteIpsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    query->insert(pair<string, string>("modifyMode", *request->modifyMode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->kibanaIPWhitelist)) {
    body->insert(pair<string, vector<string>>("kibanaIPWhitelist", *request->kibanaIPWhitelist));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateKibanaWhiteIpsRequestWhiteIpGroup>(request->whiteIpGroup)) {
    body->insert(pair<string, UpdateKibanaWhiteIpsRequestWhiteIpGroup>("whiteIpGroup", *request->whiteIpGroup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateKibanaWhiteIps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/kibana-white-ips"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateKibanaWhiteIpsResponse(callApi(params, req, runtime));
}

UpdateKibanaWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdateKibanaWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateKibanaWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateLogstashRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeAmount)) {
    body->insert(pair<string, long>("nodeAmount", *request->nodeAmount));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLogstashRequestNodeSpec>(request->nodeSpec)) {
    body->insert(pair<string, UpdateLogstashRequestNodeSpec>("nodeSpec", *request->nodeSpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogstash"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLogstashResponse(callApi(params, req, runtime));
}

UpdateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstash(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashChargeTypeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<UpdateLogstashChargeTypeRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogstashChargeType"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/convert-pay-type"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLogstashChargeTypeResponse(callApi(params, req, runtime));
}

UpdateLogstashChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashChargeType(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashChargeTypeWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashDescriptionWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<UpdateLogstashDescriptionRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogstashDescription"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/description"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLogstashDescriptionResponse(callApi(params, req, runtime));
}

UpdateLogstashDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashDescription(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashDescriptionWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<UpdateLogstashSettingsRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogstashSettings"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/instance-settings"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLogstashSettingsResponse(callApi(params, req, runtime));
}

UpdateLogstashSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdatePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelineManagementConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                                             shared_ptr<UpdatePipelineManagementConfigRequest> request,
                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpoints)) {
    body->insert(pair<string, vector<string>>("endpoints", *request->endpoints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->esInstanceId)) {
    body->insert(pair<string, string>("esInstanceId", *request->esInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pipelineIds)) {
    body->insert(pair<string, vector<string>>("pipelineIds", *request->pipelineIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineManagementType)) {
    body->insert(pair<string, string>("pipelineManagementType", *request->pipelineManagementType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("userName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipelineManagementConfig"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipeline-management-config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePipelineManagementConfigResponse(callApi(params, req, runtime));
}

UpdatePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelineManagementConfig(shared_ptr<string> InstanceId, shared_ptr<UpdatePipelineManagementConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelineManagementConfigWithOptions(InstanceId, request, headers, runtime);
}

UpdatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<UpdatePipelinesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->trigger)) {
    query->insert(pair<string, bool>("trigger", *request->trigger));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipelines"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/pipelines"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePipelinesResponse(callApi(params, req, runtime));
}

UpdatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelines(shared_ptr<string> InstanceId, shared_ptr<UpdatePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelinesWithOptions(InstanceId, request, headers, runtime);
}

UpdatePrivateNetworkWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePrivateNetworkWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                         shared_ptr<UpdatePrivateNetworkWhiteIpsRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    query->insert(pair<string, string>("modifyMode", *request->modifyMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrivateNetworkWhiteIps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/private-network-white-ips"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrivateNetworkWhiteIpsResponse(callApi(params, req, runtime));
}

UpdatePrivateNetworkWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePrivateNetworkWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdatePrivateNetworkWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePrivateNetworkWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdatePublicNetworkResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicNetworkWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<UpdatePublicNetworkRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePublicNetwork"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/public-network"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePublicNetworkResponse(callApi(params, req, runtime));
}

UpdatePublicNetworkResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicNetwork(shared_ptr<string> InstanceId, shared_ptr<UpdatePublicNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePublicNetworkWithOptions(InstanceId, request, headers, runtime);
}

UpdatePublicWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpdatePublicWhiteIpsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    query->insert(pair<string, string>("modifyMode", *request->modifyMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePublicWhiteIps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/public-white-ips"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePublicWhiteIpsResponse(callApi(params, req, runtime));
}

UpdatePublicWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdatePublicWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePublicWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateReadWritePolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateReadWritePolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UpdateReadWritePolicyRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateReadWritePolicy"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/update-read-write-policy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateReadWritePolicyResponse(callApi(params, req, runtime));
}

UpdateReadWritePolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateReadWritePolicy(shared_ptr<string> InstanceId, shared_ptr<UpdateReadWritePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateReadWritePolicyWithOptions(InstanceId, request, headers, runtime);
}

UpdateSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateSnapshotSettingWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UpdateSnapshotSettingRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSnapshotSetting"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/snapshot-setting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSnapshotSettingResponse(callApi(params, req, runtime));
}

UpdateSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateSnapshotSetting(shared_ptr<string> InstanceId, shared_ptr<UpdateSnapshotSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSnapshotSettingWithOptions(InstanceId, request, headers, runtime);
}

UpdateSynonymsDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateSynonymsDictsWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<UpdateSynonymsDictsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSynonymsDicts"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/synonymsDict"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSynonymsDictsResponse(callApi(params, req, runtime));
}

UpdateSynonymsDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateSynonymsDicts(shared_ptr<string> InstanceId, shared_ptr<UpdateSynonymsDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSynonymsDictsWithOptions(InstanceId, request, headers, runtime);
}

UpdateTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<string> TemplateName,
                                                                                             shared_ptr<UpdateTemplateRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/templates/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateName)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateTemplate(shared_ptr<string> InstanceId, shared_ptr<string> TemplateName, shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTemplateWithOptions(InstanceId, TemplateName, request, headers, runtime);
}

UpdateWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateWhiteIpsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    query->insert(pair<string, string>("modifyMode", *request->modifyMode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->esIPWhitelist)) {
    body->insert(pair<string, vector<string>>("esIPWhitelist", *request->esIPWhitelist));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWhiteIpsRequestWhiteIpGroup>(request->whiteIpGroup)) {
    body->insert(pair<string, UpdateWhiteIpsRequestWhiteIpGroup>("whiteIpGroup", *request->whiteIpGroup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWhiteIps"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/white-ips"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWhiteIpsResponse(callApi(params, req, runtime));
}

UpdateWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdateWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateXpackMonitorConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<UpdateXpackMonitorConfigRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    body->insert(pair<string, bool>("enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->endpoints)) {
    body->insert(pair<string, vector<string>>("endpoints", *request->endpoints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("userName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateXpackMonitorConfig"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/xpack-monitor-config"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateXpackMonitorConfigResponse(callApi(params, req, runtime));
}

UpdateXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateXpackMonitorConfig(shared_ptr<string> InstanceId, shared_ptr<UpdateXpackMonitorConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateXpackMonitorConfigWithOptions(InstanceId, request, headers, runtime);
}

UpgradeEngineVersionResponse Alibabacloud_Elasticsearch20170613::Client::upgradeEngineVersionWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpgradeEngineVersionRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("dryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStrategy)) {
    query->insert(pair<string, string>("updateStrategy", *request->updateStrategy));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpgradeEngineVersionRequestPlugins>>(request->plugins)) {
    body->insert(pair<string, vector<UpgradeEngineVersionRequestPlugins>>("plugins", *request->plugins));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("type", *request->type));
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
    {"action", boost::any(string("UpgradeEngineVersion"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/actions/upgrade-version"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeEngineVersionResponse(callApi(params, req, runtime));
}

UpgradeEngineVersionResponse Alibabacloud_Elasticsearch20170613::Client::upgradeEngineVersion(shared_ptr<string> InstanceId, shared_ptr<UpgradeEngineVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeEngineVersionWithOptions(InstanceId, request, headers, runtime);
}

ValidateConnectionResponse Alibabacloud_Elasticsearch20170613::Client::validateConnectionWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ValidateConnectionRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateConnection"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/logstashes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/validate-connection"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateConnectionResponse(callApi(params, req, runtime));
}

ValidateConnectionResponse Alibabacloud_Elasticsearch20170613::Client::validateConnection(shared_ptr<string> InstanceId, shared_ptr<ValidateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateConnectionWithOptions(InstanceId, request, headers, runtime);
}

ValidateShrinkNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateShrinkNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ValidateShrinkNodesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    query->insert(pair<string, bool>("ignoreStatus", *request->ignoreStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<ValidateShrinkNodesRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateShrinkNodes"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/validate-shrink-nodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateShrinkNodesResponse(callApi(params, req, runtime));
}

ValidateShrinkNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateShrinkNodes(shared_ptr<string> InstanceId, shared_ptr<ValidateShrinkNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateShrinkNodesWithOptions(InstanceId, request, headers, runtime);
}

ValidateSlrPermissionResponse Alibabacloud_Elasticsearch20170613::Client::validateSlrPermissionWithOptions(shared_ptr<ValidateSlrPermissionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rolename)) {
    query->insert(pair<string, string>("rolename", *request->rolename));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateSlrPermission"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/user/servicerolepermission"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateSlrPermissionResponse(callApi(params, req, runtime));
}

ValidateSlrPermissionResponse Alibabacloud_Elasticsearch20170613::Client::validateSlrPermission(shared_ptr<ValidateSlrPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateSlrPermissionWithOptions(request, headers, runtime);
}

ValidateTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateTransferableNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<ValidateTransferableNodesRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    query->insert(pair<string, string>("nodeType", *request->nodeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toArray<vector<ValidateTransferableNodesRequestBody>>(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateTransferableNodes"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/validate-transfer-nodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateTransferableNodesResponse(callApi(params, req, runtime));
}

ValidateTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateTransferableNodes(shared_ptr<string> InstanceId, shared_ptr<ValidateTransferableNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateTransferableNodesWithOptions(InstanceId, request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("clientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ClientNodeConfiguration>(request->clientNodeConfiguration)) {
    body->insert(pair<string, ClientNodeConfiguration>("clientNodeConfiguration", *request->clientNodeConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<ElasticDataNodeConfiguration>(request->elasticDataNodeConfiguration)) {
    body->insert(pair<string, ElasticDataNodeConfiguration>("elasticDataNodeConfiguration", *request->elasticDataNodeConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->esAdminPassword)) {
    body->insert(pair<string, string>("esAdminPassword", *request->esAdminPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->esVersion)) {
    body->insert(pair<string, string>("esVersion", *request->esVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceCategory)) {
    body->insert(pair<string, string>("instanceCategory", *request->instanceCategory));
  }
  if (!Darabonba_Util::Client::isUnset<KibanaNodeConfiguration>(request->kibanaConfiguration)) {
    body->insert(pair<string, KibanaNodeConfiguration>("kibanaConfiguration", *request->kibanaConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<MasterNodeConfiguration>(request->masterConfiguration)) {
    body->insert(pair<string, MasterNodeConfiguration>("masterConfiguration", *request->masterConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<NetworkConfig>(request->networkConfig)) {
    body->insert(pair<string, NetworkConfig>("networkConfig", *request->networkConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeAmount)) {
    body->insert(pair<string, long>("nodeAmount", *request->nodeAmount));
  }
  if (!Darabonba_Util::Client::isUnset<NodeSpec>(request->nodeSpec)) {
    body->insert(pair<string, NodeSpec>("nodeSpec", *request->nodeSpec));
  }
  if (!Darabonba_Util::Client::isUnset<PaymentInfo>(request->paymentInfo)) {
    body->insert(pair<string, PaymentInfo>("paymentInfo", *request->paymentInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    body->insert(pair<string, string>("paymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateInstanceRequestTags>>("tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<WarmNodeConfiguration>(request->warmNodeConfiguration)) {
    body->insert(pair<string, WarmNodeConfiguration>("warmNodeConfiguration", *request->warmNodeConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->zoneCount)) {
    body->insert(pair<string, long>("zoneCount", *request->zoneCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("createInstance"))},
    {"version", boost::any(string("2017-06-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/openapi/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

