// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/elasticsearch_20170613.hpp>
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

using namespace Alibabacloud_Elasticsearch20170613;

Alibabacloud_Elasticsearch20170613::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "elasticsearch.aliyuncs.com"},
    {"cn-beijing-finance-1", "elasticsearch.aliyuncs.com"},
    {"cn-beijing-finance-pop", "elasticsearch.aliyuncs.com"},
    {"cn-beijing-gov-1", "elasticsearch.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "elasticsearch.aliyuncs.com"},
    {"cn-chengdu", "elasticsearch.aliyuncs.com"},
    {"cn-edge-1", "elasticsearch.aliyuncs.com"},
    {"cn-fujian", "elasticsearch.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "elasticsearch.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "elasticsearch.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "elasticsearch.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "elasticsearch.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "elasticsearch.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "elasticsearch.aliyuncs.com"},
    {"cn-hangzhou-test-306", "elasticsearch.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "elasticsearch.aliyuncs.com"},
    {"cn-huhehaote", "elasticsearch.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "elasticsearch.aliyuncs.com"},
    {"cn-qingdao-nebula", "elasticsearch.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "elasticsearch.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "elasticsearch.aliyuncs.com"},
    {"cn-shanghai-inner", "elasticsearch.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "elasticsearch.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "elasticsearch.aliyuncs.com"},
    {"cn-shenzhen-inner", "elasticsearch.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "elasticsearch.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "elasticsearch.aliyuncs.com"},
    {"cn-wuhan", "elasticsearch.aliyuncs.com"},
    {"cn-wulanchabu", "elasticsearch.aliyuncs.com"},
    {"cn-yushanfang", "elasticsearch.aliyuncs.com"},
    {"cn-zhangbei", "elasticsearch.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "elasticsearch.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "elasticsearch.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "elasticsearch.aliyuncs.com"},
    {"eu-west-1-oxs", "elasticsearch.aliyuncs.com"},
    {"me-east-1", "elasticsearch.aliyuncs.com"},
    {"rus-west-1-pop", "elasticsearch.aliyuncs.com"}
  })
);
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

ActivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::activateZones(shared_ptr<string> InstanceId, shared_ptr<ActivateZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return activateZonesWithOptions(InstanceId, request, headers, runtime);
}

ActivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::activateZonesWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<ActivateZonesRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ActivateZonesResponse(doROARequest(make_shared<string>("ActivateZones"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/recover-zones")), make_shared<string>("json"), req, runtime));
}

AddConnectableClusterResponse Alibabacloud_Elasticsearch20170613::Client::addConnectableCluster(shared_ptr<string> InstanceId, shared_ptr<AddConnectableClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addConnectableClusterWithOptions(InstanceId, request, headers, runtime);
}

AddConnectableClusterResponse Alibabacloud_Elasticsearch20170613::Client::addConnectableClusterWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<AddConnectableClusterRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddConnectableClusterResponse(doROARequest(make_shared<string>("AddConnectableCluster"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/connected-clusters")), make_shared<string>("json"), req, runtime));
}

AddSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::addSnapshotRepo(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addSnapshotRepoWithOptions(InstanceId, headers, runtime);
}

AddSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::addSnapshotRepoWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return AddSnapshotRepoResponse(doROARequest(make_shared<string>("AddSnapshotRepo"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/snapshot-repos")), make_shared<string>("json"), req, runtime));
}

CancelDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelDeletion(shared_ptr<string> InstanceId, shared_ptr<CancelDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelDeletionWithOptions(InstanceId, request, headers, runtime);
}

CancelDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelDeletionWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CancelDeletionRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CancelDeletionResponse(doROARequest(make_shared<string>("CancelDeletion"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/cancel-deletion")), make_shared<string>("json"), req, runtime));
}

CancelLogstashDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelLogstashDeletion(shared_ptr<string> InstanceId, shared_ptr<CancelLogstashDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelLogstashDeletionWithOptions(InstanceId, request, headers, runtime);
}

CancelLogstashDeletionResponse Alibabacloud_Elasticsearch20170613::Client::cancelLogstashDeletionWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<CancelLogstashDeletionRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CancelLogstashDeletionResponse(doROARequest(make_shared<string>("CancelLogstashDeletion"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/actions/cancel-deletion")), make_shared<string>("json"), req, runtime));
}

CancelTaskResponse Alibabacloud_Elasticsearch20170613::Client::cancelTask(shared_ptr<string> InstanceId, shared_ptr<CancelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelTaskWithOptions(InstanceId, request, headers, runtime);
}

CancelTaskResponse Alibabacloud_Elasticsearch20170613::Client::cancelTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<CancelTaskRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    (*query)["taskType"] = *request->taskType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CancelTaskResponse(doROARequest(make_shared<string>("CancelTask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/cancel-task")), make_shared<string>("json"), req, runtime));
}

CapacityPlanResponse Alibabacloud_Elasticsearch20170613::Client::capacityPlan(shared_ptr<CapacityPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return capacityPlanWithOptions(request, headers, runtime);
}

CapacityPlanResponse Alibabacloud_Elasticsearch20170613::Client::capacityPlanWithOptions(shared_ptr<CapacityPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->complexQueryAvailable)) {
    (*body)["complexQueryAvailable"] = *request->complexQueryAvailable;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CapacityPlanRequestDataInfo>>(request->dataInfo)) {
    (*body)["dataInfo"] = *request->dataInfo;
  }
  if (!Darabonba_Util::Client::isUnset<vector<CapacityPlanRequestMetric>>(request->metric)) {
    (*body)["metric"] = *request->metric;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usageScenario)) {
    (*body)["usageScenario"] = *request->usageScenario;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CapacityPlanResponse(doROARequest(make_shared<string>("CapacityPlan"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/assist/actions/capacity-plan")), make_shared<string>("json"), req, runtime));
}

CloseDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::closeDiagnosis(shared_ptr<string> InstanceId, shared_ptr<CloseDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

CloseDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::closeDiagnosisWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CloseDiagnosisRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CloseDiagnosisResponse(doROARequest(make_shared<string>("CloseDiagnosis"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/actions/close-diagnosis")), make_shared<string>("json"), req, runtime));
}

CloseHttpsResponse Alibabacloud_Elasticsearch20170613::Client::closeHttps(shared_ptr<string> InstanceId, shared_ptr<CloseHttpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeHttpsWithOptions(InstanceId, request, headers, runtime);
}

CloseHttpsResponse Alibabacloud_Elasticsearch20170613::Client::closeHttpsWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<CloseHttpsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CloseHttpsResponse(doROARequest(make_shared<string>("CloseHttps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/close-https")), make_shared<string>("json"), req, runtime));
}

CloseManagedIndexResponse Alibabacloud_Elasticsearch20170613::Client::closeManagedIndex(shared_ptr<string> InstanceId, shared_ptr<string> Index, shared_ptr<CloseManagedIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return closeManagedIndexWithOptions(InstanceId, Index, request, headers, runtime);
}

CloseManagedIndexResponse Alibabacloud_Elasticsearch20170613::Client::closeManagedIndexWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> Index,
                                                                                                   shared_ptr<CloseManagedIndexRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  Index = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Index));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CloseManagedIndexResponse(doROARequest(make_shared<string>("CloseManagedIndex"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/indices/") + string(*Index) + string("/close-managed")), make_shared<string>("json"), req, runtime));
}

CreateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::createCollector(shared_ptr<CreateCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCollectorWithOptions(request, headers, runtime);
}

CreateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::createCollectorWithOptions(shared_ptr<CreateCollectorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateCollectorResponse(doROARequest(make_shared<string>("CreateCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors")), make_shared<string>("json"), req, runtime));
}

CreateDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::createDataStream(shared_ptr<string> InstanceId, shared_ptr<CreateDataStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDataStreamWithOptions(InstanceId, request, headers, runtime);
}

CreateDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::createDataStreamWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<CreateDataStreamRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateDataStreamResponse(doROARequest(make_shared<string>("CreateDataStream"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-streams")), make_shared<string>("json"), req, runtime));
}

CreateDataTasksResponse Alibabacloud_Elasticsearch20170613::Client::createDataTasks(shared_ptr<string> InstanceId, shared_ptr<CreateDataTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDataTasksWithOptions(InstanceId, request, headers, runtime);
}

CreateDataTasksResponse Alibabacloud_Elasticsearch20170613::Client::createDataTasksWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<CreateDataTasksRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateDataTasksResponse(doROARequest(make_shared<string>("CreateDataTasks"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-task")), make_shared<string>("json"), req, runtime));
}

CreateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::createILMPolicy(shared_ptr<string> InstanceId, shared_ptr<CreateILMPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createILMPolicyWithOptions(InstanceId, request, headers, runtime);
}

CreateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::createILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<CreateILMPolicyRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateILMPolicyResponse(doROARequest(make_shared<string>("CreateILMPolicy"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/ilm-policies")), make_shared<string>("json"), req, runtime));
}

CreateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::createIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<CreateIndexTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndexTemplateWithOptions(InstanceId, request, headers, runtime);
}

CreateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::createIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<CreateIndexTemplateRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateIndexTemplateResponse(doROARequest(make_shared<string>("CreateIndexTemplate"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/index-templates")), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceWithOptions(request, headers, runtime);
}

CreateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateInstanceResponse(doROARequest(make_shared<string>("createInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances")), make_shared<string>("json"), req, runtime));
}

CreateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::createLogstash(shared_ptr<CreateLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLogstashWithOptions(request, headers, runtime);
}

CreateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::createLogstashWithOptions(shared_ptr<CreateLogstashRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateLogstashResponse(doROARequest(make_shared<string>("CreateLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes")), make_shared<string>("json"), req, runtime));
}

CreatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::createPipelines(shared_ptr<string> InstanceId, shared_ptr<CreatePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPipelinesWithOptions(InstanceId, request, headers, runtime);
}

CreatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::createPipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<CreatePipelinesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->trigger)) {
    (*query)["trigger"] = *request->trigger;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreatePipelinesResponse(doROARequest(make_shared<string>("CreatePipelines"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines")), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_Elasticsearch20170613::Client::createSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSnapshotWithOptions(InstanceId, request, headers, runtime);
}

CreateSnapshotResponse Alibabacloud_Elasticsearch20170613::Client::createSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<CreateSnapshotRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateSnapshotResponse(doROARequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/snapshots")), make_shared<string>("json"), req, runtime));
}

CreateVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::createVpcEndpoint(shared_ptr<string> InstanceId, shared_ptr<CreateVpcEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVpcEndpointWithOptions(InstanceId, request, headers, runtime);
}

CreateVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::createVpcEndpointWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<CreateVpcEndpointRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    (*query)["dryRun"] = *request->dryRun;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateVpcEndpointResponse(doROARequest(make_shared<string>("CreateVpcEndpoint"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/vpc-endpoints")), make_shared<string>("json"), req, runtime));
}

DeactivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::deactivateZones(shared_ptr<string> InstanceId, shared_ptr<DeactivateZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deactivateZonesWithOptions(InstanceId, request, headers, runtime);
}

DeactivateZonesResponse Alibabacloud_Elasticsearch20170613::Client::deactivateZonesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<DeactivateZonesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeactivateZonesResponse(doROARequest(make_shared<string>("DeactivateZones"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/down-zones")), make_shared<string>("json"), req, runtime));
}

DeleteCollectorResponse Alibabacloud_Elasticsearch20170613::Client::deleteCollector(shared_ptr<string> ResId, shared_ptr<DeleteCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCollectorWithOptions(ResId, request, headers, runtime);
}

DeleteCollectorResponse Alibabacloud_Elasticsearch20170613::Client::deleteCollectorWithOptions(shared_ptr<string> ResId,
                                                                                               shared_ptr<DeleteCollectorRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteCollectorResponse(doROARequest(make_shared<string>("DeleteCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId)), make_shared<string>("json"), req, runtime));
}

DeleteConnectedClusterResponse Alibabacloud_Elasticsearch20170613::Client::deleteConnectedCluster(shared_ptr<string> InstanceId, shared_ptr<DeleteConnectedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConnectedClusterWithOptions(InstanceId, request, headers, runtime);
}

DeleteConnectedClusterResponse Alibabacloud_Elasticsearch20170613::Client::deleteConnectedClusterWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<DeleteConnectedClusterRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectedInstanceId)) {
    (*query)["connectedInstanceId"] = *request->connectedInstanceId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteConnectedClusterResponse(doROARequest(make_shared<string>("DeleteConnectedCluster"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/connected-clusters")), make_shared<string>("json"), req, runtime));
}

DeleteDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataStream(shared_ptr<string> InstanceId, shared_ptr<string> DataStream, shared_ptr<DeleteDataStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDataStreamWithOptions(InstanceId, DataStream, request, headers, runtime);
}

DeleteDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataStreamWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> DataStream,
                                                                                                 shared_ptr<DeleteDataStreamRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  DataStream = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DataStream));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteDataStreamResponse(doROARequest(make_shared<string>("DeleteDataStream"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-streams/") + string(*DataStream)), make_shared<string>("json"), req, runtime));
}

DeleteDataTaskResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataTask(shared_ptr<string> InstanceId, shared_ptr<DeleteDataTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDataTaskWithOptions(InstanceId, request, headers, runtime);
}

DeleteDataTaskResponse Alibabacloud_Elasticsearch20170613::Client::deleteDataTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<DeleteDataTaskRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    (*query)["taskId"] = *request->taskId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteDataTaskResponse(doROARequest(make_shared<string>("DeleteDataTask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-task")), make_shared<string>("json"), req, runtime));
}

DeleteILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::deleteILMPolicy(shared_ptr<string> InstanceId, shared_ptr<string> PolicyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

DeleteILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::deleteILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<string> PolicyName,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  PolicyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PolicyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteILMPolicyResponse(doROARequest(make_shared<string>("DeleteILMPolicy"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/ilm-policies/") + string(*PolicyName)), make_shared<string>("json"), req, runtime));
}

DeleteIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::deleteIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<string> IndexTemplate) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

DeleteIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::deleteIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> IndexTemplate,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  IndexTemplate = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(IndexTemplate));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DeleteIndexTemplateResponse(doROARequest(make_shared<string>("DeleteIndexTemplate"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/index-templates/") + string(*IndexTemplate)), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_Elasticsearch20170613::Client::deleteInstance(shared_ptr<string> InstanceId, shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceWithOptions(InstanceId, request, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Elasticsearch20170613::Client::deleteInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<DeleteInstanceRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteType)) {
    (*query)["deleteType"] = *request->deleteType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteInstanceResponse(doROARequest(make_shared<string>("DeleteInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

DeleteLogstashResponse Alibabacloud_Elasticsearch20170613::Client::deleteLogstash(shared_ptr<string> InstanceId, shared_ptr<DeleteLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLogstashWithOptions(InstanceId, request, headers, runtime);
}

DeleteLogstashResponse Alibabacloud_Elasticsearch20170613::Client::deleteLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<DeleteLogstashRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteType)) {
    (*query)["deleteType"] = *request->deleteType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteLogstashResponse(doROARequest(make_shared<string>("DeleteLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

DeletePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::deletePipelines(shared_ptr<string> InstanceId, shared_ptr<DeletePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePipelinesWithOptions(InstanceId, request, headers, runtime);
}

DeletePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::deletePipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<DeletePipelinesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineIds)) {
    (*query)["pipelineIds"] = *request->pipelineIds;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeletePipelinesResponse(doROARequest(make_shared<string>("DeletePipelines"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines")), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::deleteSnapshotRepo(shared_ptr<string> InstanceId, shared_ptr<DeleteSnapshotRepoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSnapshotRepoWithOptions(InstanceId, request, headers, runtime);
}

DeleteSnapshotRepoResponse Alibabacloud_Elasticsearch20170613::Client::deleteSnapshotRepoWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<DeleteSnapshotRepoRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->repoPath)) {
    (*query)["repoPath"] = *request->repoPath;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteSnapshotRepoResponse(doROARequest(make_shared<string>("DeleteSnapshotRepo"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/snapshot-repos")), make_shared<string>("json"), req, runtime));
}

DeleteVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::deleteVpcEndpoint(shared_ptr<string> InstanceId, shared_ptr<string> EndpointId, shared_ptr<DeleteVpcEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVpcEndpointWithOptions(InstanceId, EndpointId, request, headers, runtime);
}

DeleteVpcEndpointResponse Alibabacloud_Elasticsearch20170613::Client::deleteVpcEndpointWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> EndpointId,
                                                                                                   shared_ptr<DeleteVpcEndpointRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  EndpointId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EndpointId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteVpcEndpointResponse(doROARequest(make_shared<string>("DeleteVpcEndpoint"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/vpc-endpoints/") + string(*EndpointId)), make_shared<string>("json"), req, runtime));
}

DescribeAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::describeAckOperator(shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAckOperatorWithOptions(ClusterId, headers, runtime);
}

DescribeAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::describeAckOperatorWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeAckOperatorResponse(doROARequest(make_shared<string>("DescribeAckOperator"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/ack-clusters/") + string(*ClusterId) + string("/operator")), make_shared<string>("json"), req, runtime));
}

DescribeCollectorResponse Alibabacloud_Elasticsearch20170613::Client::describeCollector(shared_ptr<string> ResId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCollectorWithOptions(ResId, headers, runtime);
}

DescribeCollectorResponse Alibabacloud_Elasticsearch20170613::Client::describeCollectorWithOptions(shared_ptr<string> ResId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeCollectorResponse(doROARequest(make_shared<string>("DescribeCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId)), make_shared<string>("json"), req, runtime));
}

DescribeConnectableClustersResponse Alibabacloud_Elasticsearch20170613::Client::describeConnectableClusters(shared_ptr<string> InstanceId, shared_ptr<DescribeConnectableClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConnectableClustersWithOptions(InstanceId, request, headers, runtime);
}

DescribeConnectableClustersResponse Alibabacloud_Elasticsearch20170613::Client::describeConnectableClustersWithOptions(shared_ptr<string> InstanceId,
                                                                                                                       shared_ptr<DescribeConnectableClustersRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->alreadySetItems)) {
    (*query)["alreadySetItems"] = *request->alreadySetItems;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeConnectableClustersResponse(doROARequest(make_shared<string>("DescribeConnectableClusters"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/connectable-clusters")), make_shared<string>("json"), req, runtime));
}

DescribeDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnoseReport(shared_ptr<string> InstanceId, shared_ptr<string> ReportId, shared_ptr<DescribeDiagnoseReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDiagnoseReportWithOptions(InstanceId, ReportId, request, headers, runtime);
}

DescribeDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnoseReportWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> ReportId,
                                                                                                             shared_ptr<DescribeDiagnoseReportRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  ReportId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ReportId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeDiagnoseReportResponse(doROARequest(make_shared<string>("DescribeDiagnoseReport"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/reports/") + string(*ReportId)), make_shared<string>("json"), req, runtime));
}

DescribeDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnosisSettings(shared_ptr<string> InstanceId, shared_ptr<DescribeDiagnosisSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

DescribeDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeDiagnosisSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<DescribeDiagnosisSettingsRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeDiagnosisSettingsResponse(doROARequest(make_shared<string>("DescribeDiagnosisSettings"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/settings")), make_shared<string>("json"), req, runtime));
}

DescribeElasticsearchHealthResponse Alibabacloud_Elasticsearch20170613::Client::describeElasticsearchHealth(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeElasticsearchHealthWithOptions(InstanceId, headers, runtime);
}

DescribeElasticsearchHealthResponse Alibabacloud_Elasticsearch20170613::Client::describeElasticsearchHealthWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeElasticsearchHealthResponse(doROARequest(make_shared<string>("DescribeElasticsearchHealth"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/elasticsearch-health")), make_shared<string>("json"), req, runtime));
}

DescribeILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::describeILMPolicy(shared_ptr<string> InstanceId, shared_ptr<string> PolicyName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeILMPolicyWithOptions(InstanceId, PolicyName, headers, runtime);
}

DescribeILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::describeILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<string> PolicyName,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  PolicyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PolicyName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeILMPolicyResponse(doROARequest(make_shared<string>("DescribeILMPolicy"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/ilm-policies/") + string(*PolicyName)), make_shared<string>("json"), req, runtime));
}

DescribeIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::describeIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<string> IndexTemplate) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeIndexTemplateWithOptions(InstanceId, IndexTemplate, headers, runtime);
}

DescribeIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::describeIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<string> IndexTemplate,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  IndexTemplate = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(IndexTemplate));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeIndexTemplateResponse(doROARequest(make_shared<string>("DescribeIndexTemplate"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/index-templates/") + string(*IndexTemplate)), make_shared<string>("json"), req, runtime));
}

DescribeInstanceResponse Alibabacloud_Elasticsearch20170613::Client::describeInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInstanceWithOptions(InstanceId, headers, runtime);
}

DescribeInstanceResponse Alibabacloud_Elasticsearch20170613::Client::describeInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeInstanceResponse(doROARequest(make_shared<string>("DescribeInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

DescribeKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeKibanaSettings(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeKibanaSettingsWithOptions(InstanceId, headers, runtime);
}

DescribeKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::describeKibanaSettingsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeKibanaSettingsResponse(doROARequest(make_shared<string>("DescribeKibanaSettings"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/kibana-settings")), make_shared<string>("json"), req, runtime));
}

DescribeLogstashResponse Alibabacloud_Elasticsearch20170613::Client::describeLogstash(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeLogstashWithOptions(InstanceId, headers, runtime);
}

DescribeLogstashResponse Alibabacloud_Elasticsearch20170613::Client::describeLogstashWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeLogstashResponse(doROARequest(make_shared<string>("DescribeLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

DescribePipelineResponse Alibabacloud_Elasticsearch20170613::Client::describePipeline(shared_ptr<string> InstanceId, shared_ptr<string> PipelineId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePipelineWithOptions(InstanceId, PipelineId, headers, runtime);
}

DescribePipelineResponse Alibabacloud_Elasticsearch20170613::Client::describePipelineWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<string> PipelineId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  PipelineId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PipelineId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribePipelineResponse(doROARequest(make_shared<string>("DescribePipeline"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines/") + string(*PipelineId)), make_shared<string>("json"), req, runtime));
}

DescribePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::describePipelineManagementConfig(shared_ptr<string> InstanceId, shared_ptr<DescribePipelineManagementConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePipelineManagementConfigWithOptions(InstanceId, request, headers, runtime);
}

DescribePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::describePipelineManagementConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                                                 shared_ptr<DescribePipelineManagementConfigRequest> request,
                                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribePipelineManagementConfigResponse(doROARequest(make_shared<string>("DescribePipelineManagementConfig"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipeline-management-config")), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Elasticsearch20170613::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(headers, runtime);
}

DescribeRegionsResponse Alibabacloud_Elasticsearch20170613::Client::describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeRegionsResponse(doROARequest(make_shared<string>("DescribeRegions"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/regions")), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::describeSnapshotSetting(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSnapshotSettingWithOptions(InstanceId, headers, runtime);
}

DescribeSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::describeSnapshotSettingWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeSnapshotSettingResponse(doROARequest(make_shared<string>("DescribeSnapshotSetting"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/snapshot-setting")), make_shared<string>("json"), req, runtime));
}

DescribeTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::describeTemplates(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeTemplatesWithOptions(InstanceId, headers, runtime);
}

DescribeTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::describeTemplatesWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeTemplatesResponse(doROARequest(make_shared<string>("DescribeTemplates"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/templates")), make_shared<string>("json"), req, runtime));
}

DescribeXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::describeXpackMonitorConfig(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeXpackMonitorConfigWithOptions(InstanceId, headers, runtime);
}

DescribeXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::describeXpackMonitorConfigWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return DescribeXpackMonitorConfigResponse(doROARequest(make_shared<string>("DescribeXpackMonitorConfig"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/xpack-monitor-config")), make_shared<string>("json"), req, runtime));
}

DiagnoseInstanceResponse Alibabacloud_Elasticsearch20170613::Client::diagnoseInstance(shared_ptr<string> InstanceId, shared_ptr<DiagnoseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return diagnoseInstanceWithOptions(InstanceId, request, headers, runtime);
}

DiagnoseInstanceResponse Alibabacloud_Elasticsearch20170613::Client::diagnoseInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<DiagnoseInstanceRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DiagnoseInstanceResponse(doROARequest(make_shared<string>("DiagnoseInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/actions/diagnose")), make_shared<string>("json"), req, runtime));
}

EstimatedLogstashRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedLogstashRestartTime(shared_ptr<string> InstanceId, shared_ptr<EstimatedLogstashRestartTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return estimatedLogstashRestartTimeWithOptions(InstanceId, request, headers, runtime);
}

EstimatedLogstashRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedLogstashRestartTimeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                         shared_ptr<EstimatedLogstashRestartTimeRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    (*query)["force"] = *request->force;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return EstimatedLogstashRestartTimeResponse(doROARequest(make_shared<string>("EstimatedLogstashRestartTime"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/estimated-time/restart-time")), make_shared<string>("json"), req, runtime));
}

EstimatedRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedRestartTime(shared_ptr<string> InstanceId, shared_ptr<EstimatedRestartTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return estimatedRestartTimeWithOptions(InstanceId, request, headers, runtime);
}

EstimatedRestartTimeResponse Alibabacloud_Elasticsearch20170613::Client::estimatedRestartTimeWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<EstimatedRestartTimeRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    (*query)["force"] = *request->force;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return EstimatedRestartTimeResponse(doROARequest(make_shared<string>("EstimatedRestartTime"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/estimated-time/restart-time")), make_shared<string>("json"), req, runtime));
}

GetClusterDataInformationResponse Alibabacloud_Elasticsearch20170613::Client::getClusterDataInformation() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getClusterDataInformationWithOptions(headers, runtime);
}

GetClusterDataInformationResponse Alibabacloud_Elasticsearch20170613::Client::getClusterDataInformationWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetClusterDataInformationResponse(doROARequest(make_shared<string>("GetClusterDataInformation"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/cluster/data-information")), make_shared<string>("json"), req, runtime));
}

GetElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::getElastictask(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getElastictaskWithOptions(InstanceId, headers, runtime);
}

GetElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::getElastictaskWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetElastictaskResponse(doROARequest(make_shared<string>("GetElastictask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/elastic-task")), make_shared<string>("json"), req, runtime));
}

GetEmonGrafanaAlertsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaAlerts(shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmonGrafanaAlertsWithOptions(ProjectId, headers, runtime);
}

GetEmonGrafanaAlertsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaAlertsWithOptions(shared_ptr<string> ProjectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ProjectId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetEmonGrafanaAlertsResponse(doROARequest(make_shared<string>("GetEmonGrafanaAlerts"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/emon/projects/") + string(*ProjectId) + string("/grafana/proxy/api/alerts")), make_shared<string>("json"), req, runtime));
}

GetEmonGrafanaDashboardsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaDashboards(shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmonGrafanaDashboardsWithOptions(ProjectId, headers, runtime);
}

GetEmonGrafanaDashboardsResponse Alibabacloud_Elasticsearch20170613::Client::getEmonGrafanaDashboardsWithOptions(shared_ptr<string> ProjectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ProjectId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetEmonGrafanaDashboardsResponse(doROARequest(make_shared<string>("GetEmonGrafanaDashboards"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/emon/projects/") + string(*ProjectId) + string("/grafana/proxy/api/search")), make_shared<string>("json"), req, runtime));
}

GetEmonMonitorDataResponse Alibabacloud_Elasticsearch20170613::Client::getEmonMonitorData(shared_ptr<string> ProjectId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEmonMonitorDataWithOptions(ProjectId, headers, runtime);
}

GetEmonMonitorDataResponse Alibabacloud_Elasticsearch20170613::Client::getEmonMonitorDataWithOptions(shared_ptr<string> ProjectId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ProjectId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetEmonMonitorDataResponse(doROARequest(make_shared<string>("GetEmonMonitorData"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/emon/projects/") + string(*ProjectId) + string("/metrics/query")), make_shared<string>("json"), req, runtime));
}

GetOpenStoreUsageResponse Alibabacloud_Elasticsearch20170613::Client::getOpenStoreUsage(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getOpenStoreUsageWithOptions(InstanceId, headers, runtime);
}

GetOpenStoreUsageResponse Alibabacloud_Elasticsearch20170613::Client::getOpenStoreUsageWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return GetOpenStoreUsageResponse(doROARequest(make_shared<string>("GetOpenStoreUsage"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/openstore/usage")), make_shared<string>("json"), req, runtime));
}

GetRegionConfigurationResponse Alibabacloud_Elasticsearch20170613::Client::getRegionConfiguration(shared_ptr<GetRegionConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRegionConfigurationWithOptions(request, headers, runtime);
}

GetRegionConfigurationResponse Alibabacloud_Elasticsearch20170613::Client::getRegionConfigurationWithOptions(shared_ptr<GetRegionConfigurationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    (*query)["zoneId"] = *request->zoneId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetRegionConfigurationResponse(doROARequest(make_shared<string>("GetRegionConfiguration"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/region")), make_shared<string>("json"), req, runtime));
}

GetSuggestShrinkableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getSuggestShrinkableNodes(shared_ptr<string> InstanceId, shared_ptr<GetSuggestShrinkableNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSuggestShrinkableNodesWithOptions(InstanceId, request, headers, runtime);
}

GetSuggestShrinkableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getSuggestShrinkableNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<GetSuggestShrinkableNodesRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*query)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*query)["count"] = *request->count;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    (*query)["ignoreStatus"] = *request->ignoreStatus;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetSuggestShrinkableNodesResponse(doROARequest(make_shared<string>("GetSuggestShrinkableNodes"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/suggest-shrinkable-nodes")), make_shared<string>("json"), req, runtime));
}

GetTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getTransferableNodes(shared_ptr<string> InstanceId, shared_ptr<GetTransferableNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTransferableNodesWithOptions(InstanceId, request, headers, runtime);
}

GetTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::getTransferableNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<GetTransferableNodesRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*query)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    (*query)["count"] = *request->count;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetTransferableNodesResponse(doROARequest(make_shared<string>("GetTransferableNodes"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/transferable-nodes")), make_shared<string>("json"), req, runtime));
}

InitializeOperationRoleResponse Alibabacloud_Elasticsearch20170613::Client::initializeOperationRole(shared_ptr<InitializeOperationRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return initializeOperationRoleWithOptions(request, headers, runtime);
}

InitializeOperationRoleResponse Alibabacloud_Elasticsearch20170613::Client::initializeOperationRoleWithOptions(shared_ptr<InitializeOperationRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InitializeOperationRoleResponse(doROARequest(make_shared<string>("InitializeOperationRole"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/user/slr")), make_shared<string>("json"), req, runtime));
}

InstallAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::installAckOperator(shared_ptr<string> ClusterId, shared_ptr<InstallAckOperatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installAckOperatorWithOptions(ClusterId, request, headers, runtime);
}

InstallAckOperatorResponse Alibabacloud_Elasticsearch20170613::Client::installAckOperatorWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<InstallAckOperatorRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InstallAckOperatorResponse(doROARequest(make_shared<string>("InstallAckOperator"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/ack-clusters/") + string(*ClusterId) + string("/operator")), make_shared<string>("json"), req, runtime));
}

InstallKibanaSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installKibanaSystemPlugin(shared_ptr<string> InstanceId, shared_ptr<InstallKibanaSystemPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installKibanaSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

InstallKibanaSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installKibanaSystemPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<InstallKibanaSystemPluginRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InstallKibanaSystemPluginResponse(doROARequest(make_shared<string>("InstallKibanaSystemPlugin"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/kibana-plugins/system/actions/install")), make_shared<string>("json"), req, runtime));
}

InstallLogstashSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installLogstashSystemPlugin(shared_ptr<string> InstanceId, shared_ptr<InstallLogstashSystemPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installLogstashSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

InstallLogstashSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installLogstashSystemPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                                       shared_ptr<InstallLogstashSystemPluginRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InstallLogstashSystemPluginResponse(doROARequest(make_shared<string>("InstallLogstashSystemPlugin"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/plugins/system/actions/install")), make_shared<string>("json"), req, runtime));
}

InstallSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installSystemPlugin(shared_ptr<string> InstanceId, shared_ptr<InstallSystemPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installSystemPluginWithOptions(InstanceId, request, headers, runtime);
}

InstallSystemPluginResponse Alibabacloud_Elasticsearch20170613::Client::installSystemPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<InstallSystemPluginRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InstallSystemPluginResponse(doROARequest(make_shared<string>("InstallSystemPlugin"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/plugins/system/actions/install")), make_shared<string>("json"), req, runtime));
}

InstallUserPluginsResponse Alibabacloud_Elasticsearch20170613::Client::installUserPlugins(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return installUserPluginsWithOptions(InstanceId, headers, runtime);
}

InstallUserPluginsResponse Alibabacloud_Elasticsearch20170613::Client::installUserPluginsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return InstallUserPluginsResponse(doROARequest(make_shared<string>("InstallUserPlugins"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/plugins/user/actions/install")), make_shared<string>("json"), req, runtime));
}

InterruptElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptElasticsearchTask(shared_ptr<string> InstanceId, shared_ptr<InterruptElasticsearchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return interruptElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

InterruptElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptElasticsearchTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                                     shared_ptr<InterruptElasticsearchTaskRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InterruptElasticsearchTaskResponse(doROARequest(make_shared<string>("InterruptElasticsearchTask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/interrupt")), make_shared<string>("json"), req, runtime));
}

InterruptLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptLogstashTask(shared_ptr<string> InstanceId, shared_ptr<InterruptLogstashTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return interruptLogstashTaskWithOptions(InstanceId, request, headers, runtime);
}

InterruptLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::interruptLogstashTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<InterruptLogstashTaskRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return InterruptLogstashTaskResponse(doROARequest(make_shared<string>("InterruptLogstashTask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/actions/interrupt")), make_shared<string>("json"), req, runtime));
}

ListAckClustersResponse Alibabacloud_Elasticsearch20170613::Client::listAckClusters(shared_ptr<ListAckClustersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAckClustersWithOptions(request, headers, runtime);
}

ListAckClustersResponse Alibabacloud_Elasticsearch20170613::Client::listAckClustersWithOptions(shared_ptr<ListAckClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["vpcId"] = *request->vpcId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListAckClustersResponse(doROARequest(make_shared<string>("ListAckClusters"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/ack-clusters")), make_shared<string>("json"), req, runtime));
}

ListAckNamespacesResponse Alibabacloud_Elasticsearch20170613::Client::listAckNamespaces(shared_ptr<string> ClusterId, shared_ptr<ListAckNamespacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAckNamespacesWithOptions(ClusterId, request, headers, runtime);
}

ListAckNamespacesResponse Alibabacloud_Elasticsearch20170613::Client::listAckNamespacesWithOptions(shared_ptr<string> ClusterId,
                                                                                                   shared_ptr<ListAckNamespacesRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ClusterId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListAckNamespacesResponse(doROARequest(make_shared<string>("ListAckNamespaces"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/ack-clusters/") + string(*ClusterId) + string("/namespaces")), make_shared<string>("json"), req, runtime));
}

ListAllNodeResponse Alibabacloud_Elasticsearch20170613::Client::listAllNode(shared_ptr<string> InstanceId, shared_ptr<ListAllNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAllNodeWithOptions(InstanceId, request, headers, runtime);
}

ListAllNodeResponse Alibabacloud_Elasticsearch20170613::Client::listAllNodeWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<ListAllNodeRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->extended)) {
    (*query)["extended"] = *request->extended;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListAllNodeResponse(doROARequest(make_shared<string>("ListAllNode"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/nodes")), make_shared<string>("json"), req, runtime));
}

ListAlternativeSnapshotReposResponse Alibabacloud_Elasticsearch20170613::Client::listAlternativeSnapshotRepos(shared_ptr<string> InstanceId, shared_ptr<ListAlternativeSnapshotReposRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAlternativeSnapshotReposWithOptions(InstanceId, request, headers, runtime);
}

ListAlternativeSnapshotReposResponse Alibabacloud_Elasticsearch20170613::Client::listAlternativeSnapshotReposWithOptions(shared_ptr<string> InstanceId,
                                                                                                                         shared_ptr<ListAlternativeSnapshotReposRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->alreadySetItems)) {
    (*query)["alreadySetItems"] = *request->alreadySetItems;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListAlternativeSnapshotReposResponse(doROARequest(make_shared<string>("ListAlternativeSnapshotRepos"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/alternative-snapshot-repos")), make_shared<string>("json"), req, runtime));
}

ListAvailableEsInstanceIdsResponse Alibabacloud_Elasticsearch20170613::Client::listAvailableEsInstanceIds(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAvailableEsInstanceIdsWithOptions(InstanceId, headers, runtime);
}

ListAvailableEsInstanceIdsResponse Alibabacloud_Elasticsearch20170613::Client::listAvailableEsInstanceIdsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListAvailableEsInstanceIdsResponse(doROARequest(make_shared<string>("ListAvailableEsInstanceIds"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/available-elasticsearch-for-centralized-management")), make_shared<string>("json"), req, runtime));
}

ListCollectorsResponse Alibabacloud_Elasticsearch20170613::Client::listCollectors(shared_ptr<ListCollectorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCollectorsWithOptions(request, headers, runtime);
}

ListCollectorsResponse Alibabacloud_Elasticsearch20170613::Client::listCollectorsWithOptions(shared_ptr<ListCollectorsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resId)) {
    (*query)["resId"] = *request->resId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    (*query)["instanceId"] = *request->instanceId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    (*query)["sourceType"] = *request->sourceType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListCollectorsResponse(doROARequest(make_shared<string>("ListCollectors"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors")), make_shared<string>("json"), req, runtime));
}

ListConnectedClustersResponse Alibabacloud_Elasticsearch20170613::Client::listConnectedClusters(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConnectedClustersWithOptions(InstanceId, headers, runtime);
}

ListConnectedClustersResponse Alibabacloud_Elasticsearch20170613::Client::listConnectedClustersWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListConnectedClustersResponse(doROARequest(make_shared<string>("ListConnectedClusters"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/connected-clusters")), make_shared<string>("json"), req, runtime));
}

ListDataStreamsResponse Alibabacloud_Elasticsearch20170613::Client::listDataStreams(shared_ptr<string> InstanceId, shared_ptr<ListDataStreamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataStreamsWithOptions(InstanceId, request, headers, runtime);
}

ListDataStreamsResponse Alibabacloud_Elasticsearch20170613::Client::listDataStreamsWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListDataStreamsRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isManaged)) {
    (*query)["isManaged"] = *request->isManaged;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDataStreamsResponse(doROARequest(make_shared<string>("ListDataStreams"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-streams")), make_shared<string>("json"), req, runtime));
}

ListDataTasksResponse Alibabacloud_Elasticsearch20170613::Client::listDataTasks(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDataTasksWithOptions(InstanceId, headers, runtime);
}

ListDataTasksResponse Alibabacloud_Elasticsearch20170613::Client::listDataTasksWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListDataTasksResponse(doROARequest(make_shared<string>("ListDataTasks"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-task")), make_shared<string>("json"), req, runtime));
}

ListDefaultCollectorConfigurationsResponse Alibabacloud_Elasticsearch20170613::Client::listDefaultCollectorConfigurations(shared_ptr<ListDefaultCollectorConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDefaultCollectorConfigurationsWithOptions(request, headers, runtime);
}

ListDefaultCollectorConfigurationsResponse Alibabacloud_Elasticsearch20170613::Client::listDefaultCollectorConfigurationsWithOptions(shared_ptr<ListDefaultCollectorConfigurationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resType)) {
    (*query)["resType"] = *request->resType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resVersion)) {
    (*query)["resVersion"] = *request->resVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    (*query)["sourceType"] = *request->sourceType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDefaultCollectorConfigurationsResponse(doROARequest(make_shared<string>("ListDefaultCollectorConfigurations"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/beats/default-configurations")), make_shared<string>("json"), req, runtime));
}

ListDiagnoseIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseIndices(shared_ptr<string> InstanceId, shared_ptr<ListDiagnoseIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnoseIndicesWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnoseIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseIndicesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListDiagnoseIndicesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDiagnoseIndicesResponse(doROARequest(make_shared<string>("ListDiagnoseIndices"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/indices")), make_shared<string>("json"), req, runtime));
}

ListDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReport(shared_ptr<string> InstanceId, shared_ptr<ListDiagnoseReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnoseReportWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnoseReportResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReportWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ListDiagnoseReportRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    (*query)["startTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["endTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detail)) {
    (*query)["detail"] = *request->detail;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trigger)) {
    (*query)["trigger"] = *request->trigger;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDiagnoseReportResponse(doROARequest(make_shared<string>("ListDiagnoseReport"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/reports")), make_shared<string>("json"), req, runtime));
}

ListDiagnoseReportIdsResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReportIds(shared_ptr<string> InstanceId, shared_ptr<ListDiagnoseReportIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDiagnoseReportIdsWithOptions(InstanceId, request, headers, runtime);
}

ListDiagnoseReportIdsResponse Alibabacloud_Elasticsearch20170613::Client::listDiagnoseReportIdsWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<ListDiagnoseReportIdsRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    (*query)["startTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["endTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trigger)) {
    (*query)["trigger"] = *request->trigger;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDiagnoseReportIdsResponse(doROARequest(make_shared<string>("ListDiagnoseReportIds"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/report-ids")), make_shared<string>("json"), req, runtime));
}

ListDictInformationResponse Alibabacloud_Elasticsearch20170613::Client::listDictInformation(shared_ptr<string> InstanceId, shared_ptr<ListDictInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictInformationWithOptions(InstanceId, request, headers, runtime);
}

ListDictInformationResponse Alibabacloud_Elasticsearch20170613::Client::listDictInformationWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListDictInformationRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketName)) {
    (*query)["bucketName"] = *request->bucketName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    (*query)["key"] = *request->key;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->analyzerType)) {
    (*query)["analyzerType"] = *request->analyzerType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDictInformationResponse(doROARequest(make_shared<string>("ListDictInformation"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/dict/_info")), make_shared<string>("json"), req, runtime));
}

ListDictsResponse Alibabacloud_Elasticsearch20170613::Client::listDicts(shared_ptr<string> InstanceId, shared_ptr<ListDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDictsWithOptions(InstanceId, request, headers, runtime);
}

ListDictsResponse Alibabacloud_Elasticsearch20170613::Client::listDictsWithOptions(shared_ptr<string> InstanceId,
                                                                                   shared_ptr<ListDictsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analyzerType)) {
    (*query)["analyzerType"] = *request->analyzerType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListDictsResponse(doROARequest(make_shared<string>("ListDicts"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/dicts")), make_shared<string>("json"), req, runtime));
}

ListEcsInstancesResponse Alibabacloud_Elasticsearch20170613::Client::listEcsInstances(shared_ptr<ListEcsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEcsInstancesWithOptions(request, headers, runtime);
}

ListEcsInstancesResponse Alibabacloud_Elasticsearch20170613::Client::listEcsInstancesWithOptions(shared_ptr<ListEcsInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceIds)) {
    (*query)["ecsInstanceIds"] = *request->ecsInstanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceName)) {
    (*query)["ecsInstanceName"] = *request->ecsInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["vpcId"] = *request->vpcId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListEcsInstancesResponse(doROARequest(make_shared<string>("ListEcsInstances"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/ecs")), make_shared<string>("json"), req, runtime));
}

ListExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::listExtendfiles(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listExtendfilesWithOptions(InstanceId, headers, runtime);
}

ListExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::listExtendfilesWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListExtendfilesResponse(doROARequest(make_shared<string>("ListExtendfiles"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/extendfiles")), make_shared<string>("json"), req, runtime));
}

ListILMPoliciesResponse Alibabacloud_Elasticsearch20170613::Client::listILMPolicies(shared_ptr<string> InstanceId, shared_ptr<ListILMPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listILMPoliciesWithOptions(InstanceId, request, headers, runtime);
}

ListILMPoliciesResponse Alibabacloud_Elasticsearch20170613::Client::listILMPoliciesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListILMPoliciesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    (*query)["policyName"] = *request->policyName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListILMPoliciesResponse(doROARequest(make_shared<string>("ListILMPolicies"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/ilm-policies")), make_shared<string>("json"), req, runtime));
}

ListIndexTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::listIndexTemplates(shared_ptr<string> InstanceId, shared_ptr<ListIndexTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listIndexTemplatesWithOptions(InstanceId, request, headers, runtime);
}

ListIndexTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::listIndexTemplatesWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ListIndexTemplatesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexTemplate)) {
    (*query)["indexTemplate"] = *request->indexTemplate;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListIndexTemplatesResponse(doROARequest(make_shared<string>("ListIndexTemplates"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/index-templates")), make_shared<string>("json"), req, runtime));
}

ListInstanceResponse Alibabacloud_Elasticsearch20170613::Client::listInstance(shared_ptr<ListInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceWithOptions(request, headers, runtime);
}

ListInstanceResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*query)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    (*query)["instanceId"] = *request->instanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->esVersion)) {
    (*query)["esVersion"] = *request->esVersion;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    (*query)["resourceGroupId"] = *request->resourceGroupId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["tags"] = *request->tags;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*query)["vpcId"] = *request->vpcId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    (*query)["zoneId"] = *request->zoneId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    (*query)["paymentType"] = *request->paymentType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceCategory)) {
    (*query)["instanceCategory"] = *request->instanceCategory;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListInstanceResponse(doROARequest(make_shared<string>("ListInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances")), make_shared<string>("json"), req, runtime));
}

ListInstanceIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceIndices(shared_ptr<string> InstanceId, shared_ptr<ListInstanceIndicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceIndicesWithOptions(InstanceId, request, headers, runtime);
}

ListInstanceIndicesResponse Alibabacloud_Elasticsearch20170613::Client::listInstanceIndicesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListInstanceIndicesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    (*query)["all"] = *request->all;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isManaged)) {
    (*query)["isManaged"] = *request->isManaged;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOpenstore)) {
    (*query)["isOpenstore"] = *request->isOpenstore;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListInstanceIndicesResponse(doROARequest(make_shared<string>("ListInstanceIndices"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/indices")), make_shared<string>("json"), req, runtime));
}

ListKibanaPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listKibanaPlugins(shared_ptr<string> InstanceId, shared_ptr<ListKibanaPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listKibanaPluginsWithOptions(InstanceId, request, headers, runtime);
}

ListKibanaPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listKibanaPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<ListKibanaPluginsRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListKibanaPluginsResponse(doROARequest(make_shared<string>("ListKibanaPlugins"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/kibana-plugins")), make_shared<string>("json"), req, runtime));
}

ListLogstashResponse Alibabacloud_Elasticsearch20170613::Client::listLogstash(shared_ptr<ListLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogstashWithOptions(request, headers, runtime);
}

ListLogstashResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashWithOptions(shared_ptr<ListLogstashRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*query)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    (*query)["instanceId"] = *request->instanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    (*query)["version"] = *request->version;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    (*query)["ownerId"] = *request->ownerId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    (*query)["resourceGroupId"] = *request->resourceGroupId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListLogstashResponse(doROARequest(make_shared<string>("ListLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes")), make_shared<string>("json"), req, runtime));
}

ListLogstashLogResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashLog(shared_ptr<string> InstanceId, shared_ptr<ListLogstashLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogstashLogWithOptions(InstanceId, request, headers, runtime);
}

ListLogstashLogResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashLogWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<ListLogstashLogRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    (*query)["query"] = *request->query;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    (*query)["beginTime"] = *request->beginTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["endTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListLogstashLogResponse(doROARequest(make_shared<string>("ListLogstashLog"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/search-log")), make_shared<string>("json"), req, runtime));
}

ListLogstashPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashPlugins(shared_ptr<string> InstanceId, shared_ptr<ListLogstashPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogstashPluginsWithOptions(InstanceId, request, headers, runtime);
}

ListLogstashPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listLogstashPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListLogstashPluginsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["source"] = *request->source;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListLogstashPluginsResponse(doROARequest(make_shared<string>("ListLogstashPlugins"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/plugins")), make_shared<string>("json"), req, runtime));
}

ListNodesResponse Alibabacloud_Elasticsearch20170613::Client::listNodes(shared_ptr<string> ResId, shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listNodesWithOptions(ResId, request, headers, runtime);
}

ListNodesResponse Alibabacloud_Elasticsearch20170613::Client::listNodesWithOptions(shared_ptr<string> ResId,
                                                                                   shared_ptr<ListNodesRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceIds)) {
    (*query)["ecsInstanceIds"] = *request->ecsInstanceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceName)) {
    (*query)["ecsInstanceName"] = *request->ecsInstanceName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["tags"] = *request->tags;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListNodesResponse(doROARequest(make_shared<string>("ListNodes"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/nodes")), make_shared<string>("json"), req, runtime));
}

ListPipelineResponse Alibabacloud_Elasticsearch20170613::Client::listPipeline(shared_ptr<string> InstanceId, shared_ptr<ListPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineWithOptions(InstanceId, request, headers, runtime);
}

ListPipelineResponse Alibabacloud_Elasticsearch20170613::Client::listPipelineWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<ListPipelineRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    (*query)["pipelineId"] = *request->pipelineId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListPipelineResponse(doROARequest(make_shared<string>("ListPipeline"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines")), make_shared<string>("json"), req, runtime));
}

ListPipelineIdsResponse Alibabacloud_Elasticsearch20170613::Client::listPipelineIds(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPipelineIdsWithOptions(InstanceId, headers, runtime);
}

ListPipelineIdsResponse Alibabacloud_Elasticsearch20170613::Client::listPipelineIdsWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListPipelineIdsResponse(doROARequest(make_shared<string>("ListPipelineIds"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/pipeline-ids")), make_shared<string>("json"), req, runtime));
}

ListPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listPlugins(shared_ptr<string> InstanceId, shared_ptr<ListPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listPluginsWithOptions(InstanceId, request, headers, runtime);
}

ListPluginsResponse Alibabacloud_Elasticsearch20170613::Client::listPluginsWithOptions(shared_ptr<string> InstanceId,
                                                                                       shared_ptr<ListPluginsRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    (*query)["source"] = *request->source;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListPluginsResponse(doROARequest(make_shared<string>("ListPlugins"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/plugins")), make_shared<string>("json"), req, runtime));
}

ListSearchLogResponse Alibabacloud_Elasticsearch20170613::Client::listSearchLog(shared_ptr<string> InstanceId, shared_ptr<ListSearchLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSearchLogWithOptions(InstanceId, request, headers, runtime);
}

ListSearchLogResponse Alibabacloud_Elasticsearch20170613::Client::listSearchLogWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<ListSearchLogRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*query)["type"] = *request->type;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    (*query)["query"] = *request->query;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    (*query)["beginTime"] = *request->beginTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["endTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSearchLogResponse(doROARequest(make_shared<string>("ListSearchLog"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/search-log")), make_shared<string>("json"), req, runtime));
}

ListShardRecoveriesResponse Alibabacloud_Elasticsearch20170613::Client::listShardRecoveries(shared_ptr<string> InstanceId, shared_ptr<ListShardRecoveriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listShardRecoveriesWithOptions(InstanceId, request, headers, runtime);
}

ListShardRecoveriesResponse Alibabacloud_Elasticsearch20170613::Client::listShardRecoveriesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ListShardRecoveriesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->activeOnly)) {
    (*query)["activeOnly"] = *request->activeOnly;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListShardRecoveriesResponse(doROARequest(make_shared<string>("ListShardRecoveries"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/cat-recovery")), make_shared<string>("json"), req, runtime));
}

ListSnapshotReposByInstanceIdResponse Alibabacloud_Elasticsearch20170613::Client::listSnapshotReposByInstanceId(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSnapshotReposByInstanceIdWithOptions(InstanceId, headers, runtime);
}

ListSnapshotReposByInstanceIdResponse Alibabacloud_Elasticsearch20170613::Client::listSnapshotReposByInstanceIdWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ListSnapshotReposByInstanceIdResponse(doROARequest(make_shared<string>("ListSnapshotReposByInstanceId"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/snapshot-repos")), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["Size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["ResourceType"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["NextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    (*query)["ResourceIds"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    (*query)["Tags"] = *request->tags;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListTagResourcesResponse(doROARequest(make_shared<string>("ListTagResources"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/tags")), make_shared<string>("json"), req, runtime));
}

ListTagsResponse Alibabacloud_Elasticsearch20170613::Client::listTags(shared_ptr<ListTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagsWithOptions(request, headers, runtime);
}

ListTagsResponse Alibabacloud_Elasticsearch20170613::Client::listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["pageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["resourceType"] = *request->resourceType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListTagsResponse(doROARequest(make_shared<string>("ListTags"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/tags/all-tags")), make_shared<string>("json"), req, runtime));
}

ListVpcEndpointsResponse Alibabacloud_Elasticsearch20170613::Client::listVpcEndpoints(shared_ptr<string> InstanceId, shared_ptr<ListVpcEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVpcEndpointsWithOptions(InstanceId, request, headers, runtime);
}

ListVpcEndpointsResponse Alibabacloud_Elasticsearch20170613::Client::listVpcEndpointsWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<ListVpcEndpointsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    (*query)["size"] = *request->size;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["page"] = *request->page;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListVpcEndpointsResponse(doROARequest(make_shared<string>("ListVpcEndpoints"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/vpc-endpoints")), make_shared<string>("json"), req, runtime));
}

MigrateToOtherZoneResponse Alibabacloud_Elasticsearch20170613::Client::migrateToOtherZone(shared_ptr<string> InstanceId, shared_ptr<MigrateToOtherZoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return migrateToOtherZoneWithOptions(InstanceId, request, headers, runtime);
}

MigrateToOtherZoneResponse Alibabacloud_Elasticsearch20170613::Client::migrateToOtherZoneWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<MigrateToOtherZoneRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    (*query)["dryRun"] = *request->dryRun;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return MigrateToOtherZoneResponse(doROARequest(make_shared<string>("MigrateToOtherZone"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/migrate-zones")), make_shared<string>("json"), req, runtime));
}

ModifyDeployMachineResponse Alibabacloud_Elasticsearch20170613::Client::modifyDeployMachine(shared_ptr<string> ResId, shared_ptr<ModifyDeployMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDeployMachineWithOptions(ResId, request, headers, runtime);
}

ModifyDeployMachineResponse Alibabacloud_Elasticsearch20170613::Client::modifyDeployMachineWithOptions(shared_ptr<string> ResId,
                                                                                                       shared_ptr<ModifyDeployMachineRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ModifyDeployMachineResponse(doROARequest(make_shared<string>("ModifyDeployMachine"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/actions/modify-deploy-machines")), make_shared<string>("json"), req, runtime));
}

ModifyElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::modifyElastictask(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyElastictaskWithOptions(InstanceId, headers, runtime);
}

ModifyElastictaskResponse Alibabacloud_Elasticsearch20170613::Client::modifyElastictaskWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return ModifyElastictaskResponse(doROARequest(make_shared<string>("ModifyElastictask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/elastic-task")), make_shared<string>("json"), req, runtime));
}

ModifyInstanceMaintainTimeResponse Alibabacloud_Elasticsearch20170613::Client::modifyInstanceMaintainTime(shared_ptr<string> InstanceId, shared_ptr<ModifyInstanceMaintainTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyInstanceMaintainTimeWithOptions(InstanceId, request, headers, runtime);
}

ModifyInstanceMaintainTimeResponse Alibabacloud_Elasticsearch20170613::Client::modifyInstanceMaintainTimeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                     shared_ptr<ModifyInstanceMaintainTimeRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ModifyInstanceMaintainTimeResponse(doROARequest(make_shared<string>("ModifyInstanceMaintainTime"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/modify-maintaintime")), make_shared<string>("json"), req, runtime));
}

ModifyWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::modifyWhiteIps(shared_ptr<string> InstanceId, shared_ptr<ModifyWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

ModifyWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::modifyWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<ModifyWhiteIpsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*body)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    (*body)["networkType"] = *request->networkType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    (*body)["modifyMode"] = *request->modifyMode;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->whiteIpList)) {
    (*body)["whiteIpList"] = *request->whiteIpList;
  }
  if (!Darabonba_Util::Client::isUnset<ModifyWhiteIpsRequestWhiteIpGroup>(request->whiteIpGroup)) {
    (*body)["whiteIpGroup"] = *request->whiteIpGroup;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ModifyWhiteIpsResponse(doROARequestWithForm(make_shared<string>("ModifyWhiteIps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/modify-white-ips")), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_Elasticsearch20170613::Client::moveResourceGroup(shared_ptr<string> InstanceId, shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return moveResourceGroupWithOptions(InstanceId, request, headers, runtime);
}

MoveResourceGroupResponse Alibabacloud_Elasticsearch20170613::Client::moveResourceGroupWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<MoveResourceGroupRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return MoveResourceGroupResponse(doROARequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/resourcegroup")), make_shared<string>("json"), req, runtime));
}

OpenDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::openDiagnosis(shared_ptr<string> InstanceId, shared_ptr<OpenDiagnosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openDiagnosisWithOptions(InstanceId, request, headers, runtime);
}

OpenDiagnosisResponse Alibabacloud_Elasticsearch20170613::Client::openDiagnosisWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<OpenDiagnosisRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return OpenDiagnosisResponse(doROARequest(make_shared<string>("OpenDiagnosis"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/actions/open-diagnosis")), make_shared<string>("json"), req, runtime));
}

OpenHttpsResponse Alibabacloud_Elasticsearch20170613::Client::openHttps(shared_ptr<string> InstanceId, shared_ptr<OpenHttpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openHttpsWithOptions(InstanceId, request, headers, runtime);
}

OpenHttpsResponse Alibabacloud_Elasticsearch20170613::Client::openHttpsWithOptions(shared_ptr<string> InstanceId,
                                                                                   shared_ptr<OpenHttpsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return OpenHttpsResponse(doROARequest(make_shared<string>("OpenHttps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/open-https")), make_shared<string>("json"), req, runtime));
}

PostEmonTryAlarmRuleResponse Alibabacloud_Elasticsearch20170613::Client::postEmonTryAlarmRule(shared_ptr<string> ProjectId, shared_ptr<string> AlarmGroupId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return postEmonTryAlarmRuleWithOptions(ProjectId, AlarmGroupId, headers, runtime);
}

PostEmonTryAlarmRuleResponse Alibabacloud_Elasticsearch20170613::Client::postEmonTryAlarmRuleWithOptions(shared_ptr<string> ProjectId,
                                                                                                         shared_ptr<string> AlarmGroupId,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ProjectId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ProjectId));
  AlarmGroupId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(AlarmGroupId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return PostEmonTryAlarmRuleResponse(doROARequest(make_shared<string>("PostEmonTryAlarmRule"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/emon/projects/") + string(*ProjectId) + string("/alarm-groups/") + string(*AlarmGroupId) + string("/alarm-rules/_test")), make_shared<string>("json"), req, runtime));
}

RecommendTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::recommendTemplates(shared_ptr<string> InstanceId, shared_ptr<RecommendTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return recommendTemplatesWithOptions(InstanceId, request, headers, runtime);
}

RecommendTemplatesResponse Alibabacloud_Elasticsearch20170613::Client::recommendTemplatesWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<RecommendTemplatesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->usageScenario)) {
    (*query)["usageScenario"] = *request->usageScenario;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RecommendTemplatesResponse(doROARequest(make_shared<string>("RecommendTemplates"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/recommended-templates")), make_shared<string>("json"), req, runtime));
}

ReinstallCollectorResponse Alibabacloud_Elasticsearch20170613::Client::reinstallCollector(shared_ptr<string> ResId, shared_ptr<ReinstallCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reinstallCollectorWithOptions(ResId, request, headers, runtime);
}

ReinstallCollectorResponse Alibabacloud_Elasticsearch20170613::Client::reinstallCollectorWithOptions(shared_ptr<string> ResId,
                                                                                                     shared_ptr<ReinstallCollectorRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ReinstallCollectorResponse(doROARequest(make_shared<string>("ReinstallCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/actions/reinstall")), make_shared<string>("json"), req, runtime));
}

RenewInstanceResponse Alibabacloud_Elasticsearch20170613::Client::renewInstance(shared_ptr<string> InstanceId, shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewInstanceWithOptions(InstanceId, request, headers, runtime);
}

RenewInstanceResponse Alibabacloud_Elasticsearch20170613::Client::renewInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<RenewInstanceRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RenewInstanceResponse(doROARequest(make_shared<string>("RenewInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/renew")), make_shared<string>("json"), req, runtime));
}

RenewLogstashResponse Alibabacloud_Elasticsearch20170613::Client::renewLogstash(shared_ptr<string> InstanceId, shared_ptr<RenewLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return renewLogstashWithOptions(InstanceId, request, headers, runtime);
}

RenewLogstashResponse Alibabacloud_Elasticsearch20170613::Client::renewLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<RenewLogstashRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RenewLogstashResponse(doROARequest(make_shared<string>("RenewLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/actions/renew")), make_shared<string>("json"), req, runtime));
}

RestartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::restartCollector(shared_ptr<string> ResId, shared_ptr<RestartCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartCollectorWithOptions(ResId, request, headers, runtime);
}

RestartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::restartCollectorWithOptions(shared_ptr<string> ResId,
                                                                                                 shared_ptr<RestartCollectorRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RestartCollectorResponse(doROARequest(make_shared<string>("RestartCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/actions/restart")), make_shared<string>("json"), req, runtime));
}

RestartInstanceResponse Alibabacloud_Elasticsearch20170613::Client::restartInstance(shared_ptr<string> InstanceId, shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartInstanceWithOptions(InstanceId, request, headers, runtime);
}

RestartInstanceResponse Alibabacloud_Elasticsearch20170613::Client::restartInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<RestartInstanceRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    (*query)["force"] = *request->force;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RestartInstanceResponse(doROARequest(make_shared<string>("RestartInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/restart")), make_shared<string>("json"), req, runtime));
}

RestartLogstashResponse Alibabacloud_Elasticsearch20170613::Client::restartLogstash(shared_ptr<string> InstanceId, shared_ptr<RestartLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartLogstashWithOptions(InstanceId, request, headers, runtime);
}

RestartLogstashResponse Alibabacloud_Elasticsearch20170613::Client::restartLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<RestartLogstashRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    (*query)["force"] = *request->force;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RestartLogstashResponse(doROARequest(make_shared<string>("RestartLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/actions/restart")), make_shared<string>("json"), req, runtime));
}

ResumeElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeElasticsearchTask(shared_ptr<string> InstanceId, shared_ptr<ResumeElasticsearchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeElasticsearchTaskWithOptions(InstanceId, request, headers, runtime);
}

ResumeElasticsearchTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeElasticsearchTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<ResumeElasticsearchTaskRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ResumeElasticsearchTaskResponse(doROARequest(make_shared<string>("ResumeElasticsearchTask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/resume")), make_shared<string>("json"), req, runtime));
}

ResumeLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeLogstashTask(shared_ptr<string> InstanceId, shared_ptr<ResumeLogstashTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeLogstashTaskWithOptions(InstanceId, request, headers, runtime);
}

ResumeLogstashTaskResponse Alibabacloud_Elasticsearch20170613::Client::resumeLogstashTaskWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ResumeLogstashTaskRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ResumeLogstashTaskResponse(doROARequest(make_shared<string>("ResumeLogstashTask"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/actions/resume")), make_shared<string>("json"), req, runtime));
}

RolloverDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::rolloverDataStream(shared_ptr<string> InstanceId, shared_ptr<string> DataStream, shared_ptr<RolloverDataStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rolloverDataStreamWithOptions(InstanceId, DataStream, request, headers, runtime);
}

RolloverDataStreamResponse Alibabacloud_Elasticsearch20170613::Client::rolloverDataStreamWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<string> DataStream,
                                                                                                     shared_ptr<RolloverDataStreamRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  DataStream = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(DataStream));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RolloverDataStreamResponse(doROARequest(make_shared<string>("RolloverDataStream"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/data-streams/") + string(*DataStream) + string("/rollover")), make_shared<string>("json"), req, runtime));
}

RunPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::runPipelines(shared_ptr<string> InstanceId, shared_ptr<RunPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runPipelinesWithOptions(InstanceId, request, headers, runtime);
}

RunPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::runPipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<RunPipelinesRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return RunPipelinesResponse(doROARequest(make_shared<string>("RunPipelines"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines/action/run")), make_shared<string>("json"), req, runtime));
}

ShrinkNodeResponse Alibabacloud_Elasticsearch20170613::Client::shrinkNode(shared_ptr<string> InstanceId, shared_ptr<ShrinkNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return shrinkNodeWithOptions(InstanceId, request, headers, runtime);
}

ShrinkNodeResponse Alibabacloud_Elasticsearch20170613::Client::shrinkNodeWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<ShrinkNodeRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*query)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    (*query)["ignoreStatus"] = *request->ignoreStatus;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ShrinkNodeResponse(doROARequest(make_shared<string>("ShrinkNode"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/shrink")), make_shared<string>("json"), req, runtime));
}

StartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::startCollector(shared_ptr<string> ResId, shared_ptr<StartCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startCollectorWithOptions(ResId, request, headers, runtime);
}

StartCollectorResponse Alibabacloud_Elasticsearch20170613::Client::startCollectorWithOptions(shared_ptr<string> ResId,
                                                                                             shared_ptr<StartCollectorRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StartCollectorResponse(doROARequest(make_shared<string>("StartCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/actions/start")), make_shared<string>("json"), req, runtime));
}

StopCollectorResponse Alibabacloud_Elasticsearch20170613::Client::stopCollector(shared_ptr<string> ResId, shared_ptr<StopCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopCollectorWithOptions(ResId, request, headers, runtime);
}

StopCollectorResponse Alibabacloud_Elasticsearch20170613::Client::stopCollectorWithOptions(shared_ptr<string> ResId,
                                                                                           shared_ptr<StopCollectorRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StopCollectorResponse(doROARequest(make_shared<string>("StopCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/actions/stop")), make_shared<string>("json"), req, runtime));
}

StopPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::stopPipelines(shared_ptr<string> InstanceId, shared_ptr<StopPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopPipelinesWithOptions(InstanceId, request, headers, runtime);
}

StopPipelinesResponse Alibabacloud_Elasticsearch20170613::Client::stopPipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<StopPipelinesRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return StopPipelinesResponse(doROARequest(make_shared<string>("StopPipelines"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines/action/stop")), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::tagResources() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(headers, runtime);
}

TagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::tagResourcesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return TagResourcesResponse(doROARequest(make_shared<string>("TagResources"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/tags")), make_shared<string>("json"), req, runtime));
}

TransferNodeResponse Alibabacloud_Elasticsearch20170613::Client::transferNode(shared_ptr<string> InstanceId, shared_ptr<TransferNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transferNodeWithOptions(InstanceId, request, headers, runtime);
}

TransferNodeResponse Alibabacloud_Elasticsearch20170613::Client::transferNodeWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<TransferNodeRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*query)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return TransferNodeResponse(doROARequest(make_shared<string>("TransferNode"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/transfer")), make_shared<string>("json"), req, runtime));
}

TriggerNetworkResponse Alibabacloud_Elasticsearch20170613::Client::triggerNetwork(shared_ptr<string> InstanceId, shared_ptr<TriggerNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return triggerNetworkWithOptions(InstanceId, request, headers, runtime);
}

TriggerNetworkResponse Alibabacloud_Elasticsearch20170613::Client::triggerNetworkWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<TriggerNetworkRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*body)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    (*body)["networkType"] = *request->networkType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    (*body)["actionType"] = *request->actionType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return TriggerNetworkResponse(doROARequestWithForm(make_shared<string>("TriggerNetwork"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/network-trigger")), make_shared<string>("json"), req, runtime));
}

UninstallKibanaPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallKibanaPlugin(shared_ptr<string> InstanceId, shared_ptr<UninstallKibanaPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallKibanaPluginWithOptions(InstanceId, request, headers, runtime);
}

UninstallKibanaPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallKibanaPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UninstallKibanaPluginRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UninstallKibanaPluginResponse(doROARequest(make_shared<string>("UninstallKibanaPlugin"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/kibana-plugins/actions/uninstall")), make_shared<string>("json"), req, runtime));
}

UninstallLogstashPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallLogstashPlugin(shared_ptr<string> InstanceId, shared_ptr<UninstallLogstashPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallLogstashPluginWithOptions(InstanceId, request, headers, runtime);
}

UninstallLogstashPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallLogstashPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<UninstallLogstashPluginRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UninstallLogstashPluginResponse(doROARequest(make_shared<string>("UninstallLogstashPlugin"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/plugins/actions/uninstall")), make_shared<string>("json"), req, runtime));
}

UninstallPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallPlugin(shared_ptr<string> InstanceId, shared_ptr<UninstallPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uninstallPluginWithOptions(InstanceId, request, headers, runtime);
}

UninstallPluginResponse Alibabacloud_Elasticsearch20170613::Client::uninstallPluginWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<UninstallPluginRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UninstallPluginResponse(doROARequest(make_shared<string>("UninstallPlugin"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/plugins/actions/uninstall")), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Elasticsearch20170613::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    (*query)["ResourceIds"] = *request->resourceIds;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    (*query)["ResourceType"] = *request->resourceType;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    (*query)["TagKeys"] = *request->tagKeys;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    (*query)["All"] = *request->all;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UntagResourcesResponse(doROARequest(make_shared<string>("UntagResources"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/openapi/tags")), make_shared<string>("json"), req, runtime));
}

UpdateAdminPasswordResponse Alibabacloud_Elasticsearch20170613::Client::updateAdminPassword(shared_ptr<string> InstanceId, shared_ptr<UpdateAdminPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAdminPasswordWithOptions(InstanceId, request, headers, runtime);
}

UpdateAdminPasswordResponse Alibabacloud_Elasticsearch20170613::Client::updateAdminPasswordWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<UpdateAdminPasswordRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateAdminPasswordResponse(doROARequest(make_shared<string>("UpdateAdminPassword"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/admin-pwd")), make_shared<string>("json"), req, runtime));
}

UpdateAdvancedSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateAdvancedSetting(shared_ptr<string> InstanceId, shared_ptr<UpdateAdvancedSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAdvancedSettingWithOptions(InstanceId, request, headers, runtime);
}

UpdateAdvancedSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateAdvancedSettingWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UpdateAdvancedSettingRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateAdvancedSettingResponse(doROARequest(make_shared<string>("UpdateAdvancedSetting"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/update-advanced-setting")), make_shared<string>("json"), req, runtime));
}

UpdateAliwsDictResponse Alibabacloud_Elasticsearch20170613::Client::updateAliwsDict(shared_ptr<string> InstanceId, shared_ptr<UpdateAliwsDictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAliwsDictWithOptions(InstanceId, request, headers, runtime);
}

UpdateAliwsDictResponse Alibabacloud_Elasticsearch20170613::Client::updateAliwsDictWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<UpdateAliwsDictRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateAliwsDictResponse(doROARequest(make_shared<string>("UpdateAliwsDict"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/aliws-dict")), make_shared<string>("json"), req, runtime));
}

UpdateBlackIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateBlackIps(shared_ptr<string> InstanceId, shared_ptr<UpdateBlackIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateBlackIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateBlackIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateBlackIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateBlackIpsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->esIPBlacklist)) {
    (*body)["esIPBlacklist"] = *request->esIPBlacklist;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateBlackIpsResponse(doROARequestWithForm(make_shared<string>("UpdateBlackIps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/black-ips")), make_shared<string>("json"), req, runtime));
}

UpdateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::updateCollector(shared_ptr<string> ResId, shared_ptr<UpdateCollectorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCollectorWithOptions(ResId, request, headers, runtime);
}

UpdateCollectorResponse Alibabacloud_Elasticsearch20170613::Client::updateCollectorWithOptions(shared_ptr<string> ResId,
                                                                                               shared_ptr<UpdateCollectorRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateCollectorResponse(doROARequest(make_shared<string>("UpdateCollector"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId)), make_shared<string>("json"), req, runtime));
}

UpdateCollectorNameResponse Alibabacloud_Elasticsearch20170613::Client::updateCollectorName(shared_ptr<string> ResId, shared_ptr<UpdateCollectorNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCollectorNameWithOptions(ResId, request, headers, runtime);
}

UpdateCollectorNameResponse Alibabacloud_Elasticsearch20170613::Client::updateCollectorNameWithOptions(shared_ptr<string> ResId,
                                                                                                       shared_ptr<UpdateCollectorNameRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  ResId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateCollectorNameResponse(doROARequest(make_shared<string>("UpdateCollectorName"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/collectors/") + string(*ResId) + string("/actions/rename")), make_shared<string>("json"), req, runtime));
}

UpdateDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateDescription(shared_ptr<string> InstanceId, shared_ptr<UpdateDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDescriptionWithOptions(InstanceId, request, headers, runtime);
}

UpdateDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateDescriptionWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<UpdateDescriptionRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateDescriptionResponse(doROARequest(make_shared<string>("UpdateDescription"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/description")), make_shared<string>("json"), req, runtime));
}

UpdateDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateDiagnosisSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateDiagnosisSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDiagnosisSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateDiagnosisSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateDiagnosisSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                               shared_ptr<UpdateDiagnosisSettingsRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    (*query)["lang"] = *request->lang;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateDiagnosisSettingsResponse(doROARequest(make_shared<string>("UpdateDiagnosisSettings"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/diagnosis/instances/") + string(*InstanceId) + string("/settings")), make_shared<string>("json"), req, runtime));
}

UpdateDictResponse Alibabacloud_Elasticsearch20170613::Client::updateDict(shared_ptr<string> InstanceId, shared_ptr<UpdateDictRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDictWithOptions(InstanceId, request, headers, runtime);
}

UpdateDictResponse Alibabacloud_Elasticsearch20170613::Client::updateDictWithOptions(shared_ptr<string> InstanceId,
                                                                                     shared_ptr<UpdateDictRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateDictResponse(doROARequest(make_shared<string>("UpdateDict"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/dict")), make_shared<string>("json"), req, runtime));
}

UpdateExtendConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendConfig(shared_ptr<string> InstanceId, shared_ptr<UpdateExtendConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateExtendConfigWithOptions(InstanceId, request, headers, runtime);
}

UpdateExtendConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<UpdateExtendConfigRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateExtendConfigResponse(doROARequest(make_shared<string>("UpdateExtendConfig"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/extend-configs/actions/update")), make_shared<string>("json"), req, runtime));
}

UpdateExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendfiles(shared_ptr<string> InstanceId, shared_ptr<UpdateExtendfilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateExtendfilesWithOptions(InstanceId, request, headers, runtime);
}

UpdateExtendfilesResponse Alibabacloud_Elasticsearch20170613::Client::updateExtendfilesWithOptions(shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<UpdateExtendfilesRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateExtendfilesResponse(doROARequest(make_shared<string>("UpdateExtendfiles"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/extendfiles")), make_shared<string>("json"), req, runtime));
}

UpdateHotIkDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateHotIkDicts(shared_ptr<string> InstanceId, shared_ptr<UpdateHotIkDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateHotIkDictsWithOptions(InstanceId, request, headers, runtime);
}

UpdateHotIkDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateHotIkDictsWithOptions(shared_ptr<string> InstanceId,
                                                                                                 shared_ptr<UpdateHotIkDictsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateHotIkDictsResponse(doROARequest(make_shared<string>("UpdateHotIkDicts"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/ik-hot-dict")), make_shared<string>("json"), req, runtime));
}

UpdateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateILMPolicy(shared_ptr<string> InstanceId, shared_ptr<string> PolicyName, shared_ptr<UpdateILMPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateILMPolicyWithOptions(InstanceId, PolicyName, request, headers, runtime);
}

UpdateILMPolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateILMPolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<string> PolicyName,
                                                                                               shared_ptr<UpdateILMPolicyRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  PolicyName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(PolicyName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateILMPolicyResponse(doROARequest(make_shared<string>("UpdateILMPolicy"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/ilm-policies/") + string(*PolicyName)), make_shared<string>("json"), req, runtime));
}

UpdateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateIndexTemplate(shared_ptr<string> InstanceId, shared_ptr<string> IndexTemplate, shared_ptr<UpdateIndexTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIndexTemplateWithOptions(InstanceId, IndexTemplate, request, headers, runtime);
}

UpdateIndexTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateIndexTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> IndexTemplate,
                                                                                                       shared_ptr<UpdateIndexTemplateRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  IndexTemplate = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(IndexTemplate));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateIndexTemplateResponse(doROARequest(make_shared<string>("UpdateIndexTemplate"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/index-templates/") + string(*IndexTemplate)), make_shared<string>("json"), req, runtime));
}

UpdateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateInstanceRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    (*query)["ignoreStatus"] = *request->ignoreStatus;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderActionType)) {
    (*query)["orderActionType"] = *request->orderActionType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateInstanceResponse(doROARequest(make_shared<string>("UpdateInstance"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

UpdateInstanceChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceChargeType(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceChargeTypeWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceChargeTypeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<UpdateInstanceChargeTypeRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateInstanceChargeTypeResponse(doROARequest(make_shared<string>("UpdateInstanceChargeType"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/convert-pay-type")), make_shared<string>("json"), req, runtime));
}

UpdateInstanceSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateInstanceSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateInstanceSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<UpdateInstanceSettingsRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateInstanceSettingsResponse(doROARequest(make_shared<string>("UpdateInstanceSettings"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/instance-settings")), make_shared<string>("json"), req, runtime));
}

UpdateKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateKibanaSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateKibanaSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateKibanaSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpdateKibanaSettingsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateKibanaSettingsResponse(doROARequest(make_shared<string>("UpdateKibanaSettings"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/update-kibana-settings")), make_shared<string>("json"), req, runtime));
}

UpdateKibanaWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdateKibanaWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateKibanaWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateKibanaWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateKibanaWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpdateKibanaWhiteIpsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    (*query)["modifyMode"] = *request->modifyMode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateKibanaWhiteIpsResponse(doROARequest(make_shared<string>("UpdateKibanaWhiteIps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/kibana-white-ips")), make_shared<string>("json"), req, runtime));
}

UpdateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstash(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateLogstashRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateLogstashResponse(doROARequest(make_shared<string>("UpdateLogstash"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId)), make_shared<string>("json"), req, runtime));
}

UpdateLogstashChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashChargeType(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashChargeTypeWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashChargeTypeResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashChargeTypeWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<UpdateLogstashChargeTypeRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateLogstashChargeTypeResponse(doROARequest(make_shared<string>("UpdateLogstashChargeType"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/actions/convert-pay-type")), make_shared<string>("json"), req, runtime));
}

UpdateLogstashDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashDescription(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashDescriptionWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashDescriptionResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashDescriptionWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<UpdateLogstashDescriptionRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateLogstashDescriptionResponse(doROARequest(make_shared<string>("UpdateLogstashDescription"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/description")), make_shared<string>("json"), req, runtime));
}

UpdateLogstashSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashSettings(shared_ptr<string> InstanceId, shared_ptr<UpdateLogstashSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogstashSettingsWithOptions(InstanceId, request, headers, runtime);
}

UpdateLogstashSettingsResponse Alibabacloud_Elasticsearch20170613::Client::updateLogstashSettingsWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<UpdateLogstashSettingsRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateLogstashSettingsResponse(doROARequest(make_shared<string>("UpdateLogstashSettings"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/instance-settings")), make_shared<string>("json"), req, runtime));
}

UpdatePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelineManagementConfig(shared_ptr<string> InstanceId, shared_ptr<UpdatePipelineManagementConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelineManagementConfigWithOptions(InstanceId, request, headers, runtime);
}

UpdatePipelineManagementConfigResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelineManagementConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                                             shared_ptr<UpdatePipelineManagementConfigRequest> request,
                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdatePipelineManagementConfigResponse(doROARequest(make_shared<string>("UpdatePipelineManagementConfig"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipeline-management-config")), make_shared<string>("json"), req, runtime));
}

UpdatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelines(shared_ptr<string> InstanceId, shared_ptr<UpdatePipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePipelinesWithOptions(InstanceId, request, headers, runtime);
}

UpdatePipelinesResponse Alibabacloud_Elasticsearch20170613::Client::updatePipelinesWithOptions(shared_ptr<string> InstanceId,
                                                                                               shared_ptr<UpdatePipelinesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->trigger)) {
    (*query)["trigger"] = *request->trigger;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdatePipelinesResponse(doROARequest(make_shared<string>("UpdatePipelines"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/pipelines")), make_shared<string>("json"), req, runtime));
}

UpdatePrivateNetworkWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePrivateNetworkWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdatePrivateNetworkWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePrivateNetworkWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdatePrivateNetworkWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePrivateNetworkWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                                                         shared_ptr<UpdatePrivateNetworkWhiteIpsRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    (*query)["modifyMode"] = *request->modifyMode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdatePrivateNetworkWhiteIpsResponse(doROARequest(make_shared<string>("UpdatePrivateNetworkWhiteIps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/private-network-white-ips")), make_shared<string>("json"), req, runtime));
}

UpdatePublicNetworkResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicNetwork(shared_ptr<string> InstanceId, shared_ptr<UpdatePublicNetworkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePublicNetworkWithOptions(InstanceId, request, headers, runtime);
}

UpdatePublicNetworkResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicNetworkWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<UpdatePublicNetworkRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdatePublicNetworkResponse(doROARequest(make_shared<string>("UpdatePublicNetwork"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/public-network")), make_shared<string>("json"), req, runtime));
}

UpdatePublicWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdatePublicWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updatePublicWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdatePublicWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updatePublicWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpdatePublicWhiteIpsRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    (*query)["modifyMode"] = *request->modifyMode;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdatePublicWhiteIpsResponse(doROARequest(make_shared<string>("UpdatePublicWhiteIps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/public-white-ips")), make_shared<string>("json"), req, runtime));
}

UpdateReadWritePolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateReadWritePolicy(shared_ptr<string> InstanceId, shared_ptr<UpdateReadWritePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateReadWritePolicyWithOptions(InstanceId, request, headers, runtime);
}

UpdateReadWritePolicyResponse Alibabacloud_Elasticsearch20170613::Client::updateReadWritePolicyWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<UpdateReadWritePolicyRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateReadWritePolicyResponse(doROARequest(make_shared<string>("UpdateReadWritePolicy"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/update-read-write-policy")), make_shared<string>("json"), req, runtime));
}

UpdateSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateSnapshotSetting(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSnapshotSettingWithOptions(InstanceId, headers, runtime);
}

UpdateSnapshotSettingResponse Alibabacloud_Elasticsearch20170613::Client::updateSnapshotSettingWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  return UpdateSnapshotSettingResponse(doROARequest(make_shared<string>("UpdateSnapshotSetting"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/snapshot-setting")), make_shared<string>("json"), req, runtime));
}

UpdateSynonymsDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateSynonymsDicts(shared_ptr<string> InstanceId, shared_ptr<UpdateSynonymsDictsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSynonymsDictsWithOptions(InstanceId, request, headers, runtime);
}

UpdateSynonymsDictsResponse Alibabacloud_Elasticsearch20170613::Client::updateSynonymsDictsWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<UpdateSynonymsDictsRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateSynonymsDictsResponse(doROARequest(make_shared<string>("UpdateSynonymsDicts"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/synonymsDict")), make_shared<string>("json"), req, runtime));
}

UpdateTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateTemplate(shared_ptr<string> InstanceId, shared_ptr<string> TemplateName, shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTemplateWithOptions(InstanceId, TemplateName, request, headers, runtime);
}

UpdateTemplateResponse Alibabacloud_Elasticsearch20170613::Client::updateTemplateWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<string> TemplateName,
                                                                                             shared_ptr<UpdateTemplateRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  TemplateName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TemplateName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateTemplateResponse(doROARequest(make_shared<string>("UpdateTemplate"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/templates/") + string(*TemplateName)), make_shared<string>("json"), req, runtime));
}

UpdateWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateWhiteIps(shared_ptr<string> InstanceId, shared_ptr<UpdateWhiteIpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateWhiteIpsWithOptions(InstanceId, request, headers, runtime);
}

UpdateWhiteIpsResponse Alibabacloud_Elasticsearch20170613::Client::updateWhiteIpsWithOptions(shared_ptr<string> InstanceId,
                                                                                             shared_ptr<UpdateWhiteIpsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyMode)) {
    (*query)["modifyMode"] = *request->modifyMode;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->esIPWhitelist)) {
    (*body)["esIPWhitelist"] = *request->esIPWhitelist;
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWhiteIpsRequestWhiteIpGroup>(request->whiteIpGroup)) {
    (*body)["whiteIpGroup"] = *request->whiteIpGroup;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateWhiteIpsResponse(doROARequestWithForm(make_shared<string>("UpdateWhiteIps"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/white-ips")), make_shared<string>("json"), req, runtime));
}

UpdateXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateXpackMonitorConfig(shared_ptr<string> InstanceId, shared_ptr<UpdateXpackMonitorConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateXpackMonitorConfigWithOptions(InstanceId, request, headers, runtime);
}

UpdateXpackMonitorConfigResponse Alibabacloud_Elasticsearch20170613::Client::updateXpackMonitorConfigWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<UpdateXpackMonitorConfigRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return UpdateXpackMonitorConfigResponse(doROARequest(make_shared<string>("UpdateXpackMonitorConfig"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/xpack-monitor-config")), make_shared<string>("json"), req, runtime));
}

UpgradeEngineVersionResponse Alibabacloud_Elasticsearch20170613::Client::upgradeEngineVersion(shared_ptr<string> InstanceId, shared_ptr<UpgradeEngineVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeEngineVersionWithOptions(InstanceId, request, headers, runtime);
}

UpgradeEngineVersionResponse Alibabacloud_Elasticsearch20170613::Client::upgradeEngineVersionWithOptions(shared_ptr<string> InstanceId,
                                                                                                         shared_ptr<UpgradeEngineVersionRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["clientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    (*query)["dryRun"] = *request->dryRun;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    (*body)["version"] = *request->version;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    (*body)["type"] = *request->type;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpgradeEngineVersionResponse(doROARequestWithForm(make_shared<string>("UpgradeEngineVersion"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/actions/upgrade-version")), make_shared<string>("json"), req, runtime));
}

ValidateConnectionResponse Alibabacloud_Elasticsearch20170613::Client::validateConnection(shared_ptr<string> InstanceId, shared_ptr<ValidateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateConnectionWithOptions(InstanceId, request, headers, runtime);
}

ValidateConnectionResponse Alibabacloud_Elasticsearch20170613::Client::validateConnectionWithOptions(shared_ptr<string> InstanceId,
                                                                                                     shared_ptr<ValidateConnectionRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ValidateConnectionResponse(doROARequest(make_shared<string>("ValidateConnection"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/logstashes/") + string(*InstanceId) + string("/validate-connection")), make_shared<string>("json"), req, runtime));
}

ValidateShrinkNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateShrinkNodes(shared_ptr<string> InstanceId, shared_ptr<ValidateShrinkNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateShrinkNodesWithOptions(InstanceId, request, headers, runtime);
}

ValidateShrinkNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateShrinkNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<ValidateShrinkNodesRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*query)["nodeType"] = *request->nodeType;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreStatus)) {
    (*query)["ignoreStatus"] = *request->ignoreStatus;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ValidateShrinkNodesResponse(doROARequest(make_shared<string>("ValidateShrinkNodes"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/validate-shrink-nodes")), make_shared<string>("json"), req, runtime));
}

ValidateSlrPermissionResponse Alibabacloud_Elasticsearch20170613::Client::validateSlrPermission(shared_ptr<ValidateSlrPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateSlrPermissionWithOptions(request, headers, runtime);
}

ValidateSlrPermissionResponse Alibabacloud_Elasticsearch20170613::Client::validateSlrPermissionWithOptions(shared_ptr<ValidateSlrPermissionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rolename)) {
    (*query)["rolename"] = *request->rolename;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ValidateSlrPermissionResponse(doROARequest(make_shared<string>("ValidateSlrPermission"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/openapi/user/servicerolepermission")), make_shared<string>("json"), req, runtime));
}

ValidateTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateTransferableNodes(shared_ptr<string> InstanceId, shared_ptr<ValidateTransferableNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateTransferableNodesWithOptions(InstanceId, request, headers, runtime);
}

ValidateTransferableNodesResponse Alibabacloud_Elasticsearch20170613::Client::validateTransferableNodesWithOptions(shared_ptr<string> InstanceId,
                                                                                                                   shared_ptr<ValidateTransferableNodesRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  InstanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeType)) {
    (*query)["nodeType"] = *request->nodeType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ValidateTransferableNodesResponse(doROARequest(make_shared<string>("ValidateTransferableNodes"), make_shared<string>("2017-06-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/openapi/instances/") + string(*InstanceId) + string("/validate-transfer-nodes")), make_shared<string>("json"), req, runtime));
}

