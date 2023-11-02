// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sls_20201230.hpp>
#include <alibabacloud/gateway_sls.hpp>
#include <alibabacloud/gateway_spi.hpp>
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

using namespace Alibabacloud_Sls20201230;

Alibabacloud_Sls20201230::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _client = make_shared<Alibabacloud_GatewaySLS::Client>();
  _spi = _client;
  _endpointRule = make_shared<string>("central");
};

ApplyConfigToMachineGroupResponse Alibabacloud_Sls20201230::Client::applyConfigToMachineGroupWithOptions(shared_ptr<string> project,
                                                                                                         shared_ptr<string> machineGroup,
                                                                                                         shared_ptr<string> configName,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyConfigToMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup) + string("/configs/") + string(*configName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyConfigToMachineGroupResponse(execute(params, req, runtime));
}

ApplyConfigToMachineGroupResponse Alibabacloud_Sls20201230::Client::applyConfigToMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyConfigToMachineGroupWithOptions(project, machineGroup, configName, headers, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Sls20201230::Client::changeResourceGroupWithOptions(shared_ptr<string> project,
                                                                                             shared_ptr<ChangeResourceGroupRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/resourcegroup"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return ChangeResourceGroupResponse(execute(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Sls20201230::Client::changeResourceGroup(shared_ptr<string> project, shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeResourceGroupWithOptions(project, request, headers, runtime);
}

ConsumerGroupHeartBeatResponse Alibabacloud_Sls20201230::Client::consumerGroupHeartBeatWithOptions(shared_ptr<string> project,
                                                                                                   shared_ptr<string> logstore,
                                                                                                   shared_ptr<string> consumerGroup,
                                                                                                   shared_ptr<ConsumerGroupHeartBeatRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumer)) {
    query->insert(pair<string, string>("consumer", *request->consumer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConsumerGroupHeartBeat"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/consumergroups/") + string(*consumerGroup) + string("?type=heartbeat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return ConsumerGroupHeartBeatResponse(execute(params, req, runtime));
}

ConsumerGroupHeartBeatResponse Alibabacloud_Sls20201230::Client::consumerGroupHeartBeat(shared_ptr<string> project,
                                                                                        shared_ptr<string> logstore,
                                                                                        shared_ptr<string> consumerGroup,
                                                                                        shared_ptr<ConsumerGroupHeartBeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return consumerGroupHeartBeatWithOptions(project, logstore, consumerGroup, request, headers, runtime);
}

CreateAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::createAnnotationDataSetWithOptions(shared_ptr<CreateAnnotationDataSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetId)) {
    query->insert(pair<string, string>("datasetId", *request->datasetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnnotationDataSet"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateAnnotationDataSetResponse(execute(params, req, runtime));
}

CreateAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::createAnnotationDataSet(shared_ptr<CreateAnnotationDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAnnotationDataSetWithOptions(request, headers, runtime);
}

CreateAnnotationLabelResponse Alibabacloud_Sls20201230::Client::createAnnotationLabelWithOptions(shared_ptr<CreateAnnotationLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnnotationLabel"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationlabel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateAnnotationLabelResponse(execute(params, req, runtime));
}

CreateAnnotationLabelResponse Alibabacloud_Sls20201230::Client::createAnnotationLabel(shared_ptr<CreateAnnotationLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAnnotationLabelWithOptions(request, headers, runtime);
}

CreateConfigResponse Alibabacloud_Sls20201230::Client::createConfigWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<CreateConfigRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/configs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateConfigResponse(execute(params, req, runtime));
}

CreateConfigResponse Alibabacloud_Sls20201230::Client::createConfig(shared_ptr<string> project, shared_ptr<CreateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConfigWithOptions(project, request, headers, runtime);
}

CreateConsumerGroupResponse Alibabacloud_Sls20201230::Client::createConsumerGroupWithOptions(shared_ptr<string> project,
                                                                                             shared_ptr<string> logstore,
                                                                                             shared_ptr<CreateConsumerGroupRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroup)) {
    body->insert(pair<string, string>("consumerGroup", *request->consumerGroup));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->order)) {
    body->insert(pair<string, bool>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/consumergroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateConsumerGroupResponse(execute(params, req, runtime));
}

CreateConsumerGroupResponse Alibabacloud_Sls20201230::Client::createConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConsumerGroupWithOptions(project, logstore, request, headers, runtime);
}

CreateDashboardResponse Alibabacloud_Sls20201230::Client::createDashboardWithOptions(shared_ptr<string> project,
                                                                                     shared_ptr<CreateDashboardRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDashboard"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dashboards"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateDashboardResponse(execute(params, req, runtime));
}

CreateDashboardResponse Alibabacloud_Sls20201230::Client::createDashboard(shared_ptr<string> project, shared_ptr<CreateDashboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDashboardWithOptions(project, request, headers, runtime);
}

CreateDomainResponse Alibabacloud_Sls20201230::Client::createDomainWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<CreateDomainRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("domainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomain"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/domains"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateDomainResponse(execute(params, req, runtime));
}

CreateDomainResponse Alibabacloud_Sls20201230::Client::createDomain(shared_ptr<string> project, shared_ptr<CreateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createDomainWithOptions(project, request, headers, runtime);
}

CreateIndexResponse Alibabacloud_Sls20201230::Client::createIndexWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> logstore,
                                                                             shared_ptr<CreateIndexRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, KeysValue>>(request->keys)) {
    body->insert(pair<string, map<string, KeysValue>>("keys", *request->keys));
  }
  if (!Darabonba_Util::Client::isUnset<CreateIndexRequestLine>(request->line)) {
    body->insert(pair<string, CreateIndexRequestLine>("line", *request->line));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logReduce)) {
    body->insert(pair<string, bool>("log_reduce", *request->logReduce));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logReduceBlackList)) {
    body->insert(pair<string, vector<string>>("log_reduce_black_list", *request->logReduceBlackList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logReduceWhiteList)) {
    body->insert(pair<string, vector<string>>("log_reduce_white_list", *request->logReduceWhiteList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxTextLen)) {
    body->insert(pair<string, long>("max_text_len", *request->maxTextLen));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIndex"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/index"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateIndexResponse(execute(params, req, runtime));
}

CreateIndexResponse Alibabacloud_Sls20201230::Client::createIndex(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createIndexWithOptions(project, logstore, request, headers, runtime);
}

CreateLogStoreResponse Alibabacloud_Sls20201230::Client::createLogStoreWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<CreateLogStoreRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appendMeta)) {
    body->insert(pair<string, bool>("appendMeta", *request->appendMeta));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoSplit)) {
    body->insert(pair<string, bool>("autoSplit", *request->autoSplit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableTracking)) {
    body->insert(pair<string, bool>("enable_tracking", *request->enableTracking));
  }
  if (!Darabonba_Util::Client::isUnset<EncryptConf>(request->encryptConf)) {
    body->insert(pair<string, EncryptConf>("encrypt_conf", *request->encryptConf));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotTtl)) {
    body->insert(pair<string, long>("hot_ttl", *request->hotTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstoreName)) {
    body->insert(pair<string, string>("logstoreName", *request->logstoreName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSplitShard)) {
    body->insert(pair<string, long>("maxSplitShard", *request->maxSplitShard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shardCount)) {
    body->insert(pair<string, long>("shardCount", *request->shardCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telemetryType)) {
    body->insert(pair<string, string>("telemetryType", *request->telemetryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateLogStoreResponse(execute(params, req, runtime));
}

CreateLogStoreResponse Alibabacloud_Sls20201230::Client::createLogStore(shared_ptr<string> project, shared_ptr<CreateLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLogStoreWithOptions(project, request, headers, runtime);
}

CreateLoggingResponse Alibabacloud_Sls20201230::Client::createLoggingWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<CreateLoggingRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoggingRequestLoggingDetails>>(request->loggingDetails)) {
    body->insert(pair<string, vector<CreateLoggingRequestLoggingDetails>>("loggingDetails", *request->loggingDetails));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loggingProject)) {
    body->insert(pair<string, string>("loggingProject", *request->loggingProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogging"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logging"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateLoggingResponse(execute(params, req, runtime));
}

CreateLoggingResponse Alibabacloud_Sls20201230::Client::createLogging(shared_ptr<string> project, shared_ptr<CreateLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLoggingWithOptions(project, request, headers, runtime);
}

CreateLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::createLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                                                             shared_ptr<CreateLogtailPipelineConfigRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->aggregators)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("aggregators", *request->aggregators));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    body->insert(pair<string, string>("configName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->flushers)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("flushers", *request->flushers));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->global)) {
    body->insert(pair<string, map<string, boost::any>>("global", *request->global));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->inputs)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logSample)) {
    body->insert(pair<string, string>("logSample", *request->logSample));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->processors)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("processors", *request->processors));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogtailPipelineConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pipelineconfigs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateLogtailPipelineConfigResponse(execute(params, req, runtime));
}

CreateLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::createLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<CreateLogtailPipelineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLogtailPipelineConfigWithOptions(project, request, headers, runtime);
}

CreateMachineGroupResponse Alibabacloud_Sls20201230::Client::createMachineGroupWithOptions(shared_ptr<string> project,
                                                                                           shared_ptr<CreateMachineGroupRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateMachineGroupRequestGroupAttribute>(request->groupAttribute)) {
    body->insert(pair<string, CreateMachineGroupRequestGroupAttribute>("groupAttribute", *request->groupAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("groupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    body->insert(pair<string, string>("groupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineIdentifyType)) {
    body->insert(pair<string, string>("machineIdentifyType", *request->machineIdentifyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->machineList)) {
    body->insert(pair<string, vector<string>>("machineList", *request->machineList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateMachineGroupResponse(execute(params, req, runtime));
}

CreateMachineGroupResponse Alibabacloud_Sls20201230::Client::createMachineGroup(shared_ptr<string> project, shared_ptr<CreateMachineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createMachineGroupWithOptions(project, request, headers, runtime);
}

CreateOssExternalStoreResponse Alibabacloud_Sls20201230::Client::createOssExternalStoreWithOptions(shared_ptr<string> project,
                                                                                                   shared_ptr<CreateOssExternalStoreRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalStoreName)) {
    body->insert(pair<string, string>("externalStoreName", *request->externalStoreName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateOssExternalStoreRequestParameter>(request->parameter)) {
    body->insert(pair<string, CreateOssExternalStoreRequestParameter>("parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeType)) {
    body->insert(pair<string, string>("storeType", *request->storeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOssExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateOssExternalStoreResponse(execute(params, req, runtime));
}

CreateOssExternalStoreResponse Alibabacloud_Sls20201230::Client::createOssExternalStore(shared_ptr<string> project, shared_ptr<CreateOssExternalStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createOssExternalStoreWithOptions(project, request, headers, runtime);
}

CreateProjectResponse Alibabacloud_Sls20201230::Client::createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataRedundancyType)) {
    body->insert(pair<string, string>("dataRedundancyType", *request->dataRedundancyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("projectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("resourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProject"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateProjectResponse(execute(params, req, runtime));
}

CreateProjectResponse Alibabacloud_Sls20201230::Client::createProject(shared_ptr<CreateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createProjectWithOptions(request, headers, runtime);
}

CreateRdsExternalStoreResponse Alibabacloud_Sls20201230::Client::createRdsExternalStoreWithOptions(shared_ptr<string> project,
                                                                                                   shared_ptr<CreateRdsExternalStoreRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalStoreName)) {
    body->insert(pair<string, string>("externalStoreName", *request->externalStoreName));
  }
  if (!Darabonba_Util::Client::isUnset<CreateRdsExternalStoreRequestParameter>(request->parameter)) {
    body->insert(pair<string, CreateRdsExternalStoreRequestParameter>("parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeType)) {
    body->insert(pair<string, string>("storeType", *request->storeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRdsExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateRdsExternalStoreResponse(execute(params, req, runtime));
}

CreateRdsExternalStoreResponse Alibabacloud_Sls20201230::Client::createRdsExternalStore(shared_ptr<string> project, shared_ptr<CreateRdsExternalStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRdsExternalStoreWithOptions(project, request, headers, runtime);
}

CreateSavedSearchResponse Alibabacloud_Sls20201230::Client::createSavedSearchWithOptions(shared_ptr<string> project,
                                                                                         shared_ptr<CreateSavedSearchRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstore)) {
    body->insert(pair<string, string>("logstore", *request->logstore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->savedsearchName)) {
    body->insert(pair<string, string>("savedsearchName", *request->savedsearchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchQuery)) {
    body->insert(pair<string, string>("searchQuery", *request->searchQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSavedSearch"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/savedsearches"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateSavedSearchResponse(execute(params, req, runtime));
}

CreateSavedSearchResponse Alibabacloud_Sls20201230::Client::createSavedSearch(shared_ptr<string> project, shared_ptr<CreateSavedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSavedSearchWithOptions(project, request, headers, runtime);
}

CreateTicketResponse Alibabacloud_Sls20201230::Client::createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->playAccessKeyId)) {
    body->insert(pair<string, string>("playAccessKeyId", *request->playAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playAccessKeySecret)) {
    body->insert(pair<string, string>("playAccessKeySecret", *request->playAccessKeySecret));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTicket"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tickets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTicketResponse(execute(params, req, runtime));
}

CreateTicketResponse Alibabacloud_Sls20201230::Client::createTicket(shared_ptr<CreateTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTicketWithOptions(request, headers, runtime);
}

DeleteAnnotationDataResponse Alibabacloud_Sls20201230::Client::deleteAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                                                               shared_ptr<string> annotationdataId,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAnnotationData"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId) + string("/annotationdata/") + string(*annotationdataId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteAnnotationDataResponse(execute(params, req, runtime));
}

DeleteAnnotationDataResponse Alibabacloud_Sls20201230::Client::deleteAnnotationData(shared_ptr<string> datasetId, shared_ptr<string> annotationdataId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAnnotationDataWithOptions(datasetId, annotationdataId, headers, runtime);
}

DeleteAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::deleteAnnotationDataSetWithOptions(shared_ptr<string> datasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAnnotationDataSet"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteAnnotationDataSetResponse(execute(params, req, runtime));
}

DeleteAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::deleteAnnotationDataSet(shared_ptr<string> datasetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAnnotationDataSetWithOptions(datasetId, headers, runtime);
}

DeleteAnnotationLabelResponse Alibabacloud_Sls20201230::Client::deleteAnnotationLabelWithOptions(shared_ptr<string> labelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAnnotationLabel"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationlabel/") + string(*labelId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteAnnotationLabelResponse(execute(params, req, runtime));
}

DeleteAnnotationLabelResponse Alibabacloud_Sls20201230::Client::deleteAnnotationLabel(shared_ptr<string> labelId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAnnotationLabelWithOptions(labelId, headers, runtime);
}

DeleteCollectionPolicyResponse Alibabacloud_Sls20201230::Client::deleteCollectionPolicyWithOptions(shared_ptr<string> policyName,
                                                                                                   shared_ptr<DeleteCollectionPolicyRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCode)) {
    query->insert(pair<string, string>("dataCode", *request->dataCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("productCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCollectionPolicy"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/collectionpolicy/") + string(*policyName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCollectionPolicyResponse(execute(params, req, runtime));
}

DeleteCollectionPolicyResponse Alibabacloud_Sls20201230::Client::deleteCollectionPolicy(shared_ptr<string> policyName, shared_ptr<DeleteCollectionPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCollectionPolicyWithOptions(policyName, request, headers, runtime);
}

DeleteConfigResponse Alibabacloud_Sls20201230::Client::deleteConfigWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> configName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/configs/") + string(*configName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteConfigResponse(execute(params, req, runtime));
}

DeleteConfigResponse Alibabacloud_Sls20201230::Client::deleteConfig(shared_ptr<string> project, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigWithOptions(project, configName, headers, runtime);
}

DeleteConsumerGroupResponse Alibabacloud_Sls20201230::Client::deleteConsumerGroupWithOptions(shared_ptr<string> project,
                                                                                             shared_ptr<string> logstore,
                                                                                             shared_ptr<string> consumerGroup,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumerGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/consumergroups/") + string(*consumerGroup))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteConsumerGroupResponse(execute(params, req, runtime));
}

DeleteConsumerGroupResponse Alibabacloud_Sls20201230::Client::deleteConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> consumerGroup) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConsumerGroupWithOptions(project, logstore, consumerGroup, headers, runtime);
}

DeleteDashboardResponse Alibabacloud_Sls20201230::Client::deleteDashboardWithOptions(shared_ptr<string> project,
                                                                                     shared_ptr<string> dashboardName,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDashboard"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dashboards/") + string(*dashboardName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteDashboardResponse(execute(params, req, runtime));
}

DeleteDashboardResponse Alibabacloud_Sls20201230::Client::deleteDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDashboardWithOptions(project, dashboardName, headers, runtime);
}

DeleteDomainResponse Alibabacloud_Sls20201230::Client::deleteDomainWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> domainName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomain"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/domains/") + string(*domainName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteDomainResponse(execute(params, req, runtime));
}

DeleteDomainResponse Alibabacloud_Sls20201230::Client::deleteDomain(shared_ptr<string> project, shared_ptr<string> domainName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteDomainWithOptions(project, domainName, headers, runtime);
}

DeleteExternalStoreResponse Alibabacloud_Sls20201230::Client::deleteExternalStoreWithOptions(shared_ptr<string> project,
                                                                                             shared_ptr<string> externalStoreName,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores/") + string(*externalStoreName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteExternalStoreResponse(execute(params, req, runtime));
}

DeleteExternalStoreResponse Alibabacloud_Sls20201230::Client::deleteExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteExternalStoreWithOptions(project, externalStoreName, headers, runtime);
}

DeleteIndexResponse Alibabacloud_Sls20201230::Client::deleteIndexWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> logstore,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIndex"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/index"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteIndexResponse(execute(params, req, runtime));
}

DeleteIndexResponse Alibabacloud_Sls20201230::Client::deleteIndex(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteIndexWithOptions(project, logstore, headers, runtime);
}

DeleteLogStoreResponse Alibabacloud_Sls20201230::Client::deleteLogStoreWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<string> logstore,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteLogStoreResponse(execute(params, req, runtime));
}

DeleteLogStoreResponse Alibabacloud_Sls20201230::Client::deleteLogStore(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLogStoreWithOptions(project, logstore, headers, runtime);
}

DeleteLoggingResponse Alibabacloud_Sls20201230::Client::deleteLoggingWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogging"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logging"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteLoggingResponse(execute(params, req, runtime));
}

DeleteLoggingResponse Alibabacloud_Sls20201230::Client::deleteLogging(shared_ptr<string> project) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLoggingWithOptions(project, headers, runtime);
}

DeleteLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::deleteLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                                                             shared_ptr<string> configName,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogtailPipelineConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pipelineconfigs/") + string(*configName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteLogtailPipelineConfigResponse(execute(params, req, runtime));
}

DeleteLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::deleteLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLogtailPipelineConfigWithOptions(project, configName, headers, runtime);
}

DeleteMachineGroupResponse Alibabacloud_Sls20201230::Client::deleteMachineGroupWithOptions(shared_ptr<string> project,
                                                                                           shared_ptr<string> machineGroup,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteMachineGroupResponse(execute(params, req, runtime));
}

DeleteMachineGroupResponse Alibabacloud_Sls20201230::Client::deleteMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteMachineGroupWithOptions(project, machineGroup, headers, runtime);
}

DeleteProjectResponse Alibabacloud_Sls20201230::Client::deleteProjectWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteProjectResponse(execute(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_Sls20201230::Client::deleteProject(shared_ptr<string> project) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProjectWithOptions(project, headers, runtime);
}

DeleteProjectPolicyResponse Alibabacloud_Sls20201230::Client::deleteProjectPolicyWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProjectPolicy"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/policy"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectPolicyResponse(execute(params, req, runtime));
}

DeleteProjectPolicyResponse Alibabacloud_Sls20201230::Client::deleteProjectPolicy(shared_ptr<string> project) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteProjectPolicyWithOptions(project, headers, runtime);
}

DeleteSavedSearchResponse Alibabacloud_Sls20201230::Client::deleteSavedSearchWithOptions(shared_ptr<string> project,
                                                                                         shared_ptr<string> savedsearchName,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSavedSearch"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/savedsearches/") + string(*savedsearchName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteSavedSearchResponse(execute(params, req, runtime));
}

DeleteSavedSearchResponse Alibabacloud_Sls20201230::Client::deleteSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSavedSearchWithOptions(project, savedsearchName, headers, runtime);
}

DeleteShipperResponse Alibabacloud_Sls20201230::Client::deleteShipperWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<string> logstore,
                                                                                 shared_ptr<string> shipperName,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteShipper"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shipper/") + string(*shipperName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteShipperResponse(execute(params, req, runtime));
}

DeleteShipperResponse Alibabacloud_Sls20201230::Client::deleteShipper(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> shipperName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteShipperWithOptions(project, logstore, shipperName, headers, runtime);
}

GetAnnotationDataResponse Alibabacloud_Sls20201230::Client::getAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                                                         shared_ptr<string> annotationdataId,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAnnotationData"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId) + string("/annotationdata/") + string(*annotationdataId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAnnotationDataResponse(execute(params, req, runtime));
}

GetAnnotationDataResponse Alibabacloud_Sls20201230::Client::getAnnotationData(shared_ptr<string> datasetId, shared_ptr<string> annotationdataId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAnnotationDataWithOptions(datasetId, annotationdataId, headers, runtime);
}

GetAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::getAnnotationDataSetWithOptions(shared_ptr<string> datasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAnnotationDataSet"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAnnotationDataSetResponse(execute(params, req, runtime));
}

GetAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::getAnnotationDataSet(shared_ptr<string> datasetId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAnnotationDataSetWithOptions(datasetId, headers, runtime);
}

GetAnnotationLabelResponse Alibabacloud_Sls20201230::Client::getAnnotationLabelWithOptions(shared_ptr<string> labelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAnnotationLabel"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationlabel/") + string(*labelId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAnnotationLabelResponse(execute(params, req, runtime));
}

GetAnnotationLabelResponse Alibabacloud_Sls20201230::Client::getAnnotationLabel(shared_ptr<string> labelId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAnnotationLabelWithOptions(labelId, headers, runtime);
}

GetAppliedConfigsResponse Alibabacloud_Sls20201230::Client::getAppliedConfigsWithOptions(shared_ptr<string> project,
                                                                                         shared_ptr<string> machineGroup,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppliedConfigs"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup) + string("/configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppliedConfigsResponse(execute(params, req, runtime));
}

GetAppliedConfigsResponse Alibabacloud_Sls20201230::Client::getAppliedConfigs(shared_ptr<string> project, shared_ptr<string> machineGroup) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAppliedConfigsWithOptions(project, machineGroup, headers, runtime);
}

GetAppliedMachineGroupsResponse Alibabacloud_Sls20201230::Client::getAppliedMachineGroupsWithOptions(shared_ptr<string> project,
                                                                                                     shared_ptr<string> configName,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppliedMachineGroups"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/configs/") + string(*configName) + string("/machinegroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppliedMachineGroupsResponse(execute(params, req, runtime));
}

GetAppliedMachineGroupsResponse Alibabacloud_Sls20201230::Client::getAppliedMachineGroups(shared_ptr<string> project, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAppliedMachineGroupsWithOptions(project, configName, headers, runtime);
}

GetCheckPointResponse Alibabacloud_Sls20201230::Client::getCheckPointWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<string> logstore,
                                                                                 shared_ptr<string> consumerGroup,
                                                                                 shared_ptr<GetCheckPointRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->shard)) {
    query->insert(pair<string, long>("shard", *request->shard));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCheckPoint"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/consumergroups/") + string(*consumerGroup))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return GetCheckPointResponse(execute(params, req, runtime));
}

GetCheckPointResponse Alibabacloud_Sls20201230::Client::getCheckPoint(shared_ptr<string> project,
                                                                      shared_ptr<string> logstore,
                                                                      shared_ptr<string> consumerGroup,
                                                                      shared_ptr<GetCheckPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCheckPointWithOptions(project, logstore, consumerGroup, request, headers, runtime);
}

GetCollectionPolicyResponse Alibabacloud_Sls20201230::Client::getCollectionPolicyWithOptions(shared_ptr<string> policyName,
                                                                                             shared_ptr<GetCollectionPolicyRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCode)) {
    query->insert(pair<string, string>("dataCode", *request->dataCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("productCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCollectionPolicy"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/collectionpolicy/") + string(*policyName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCollectionPolicyResponse(execute(params, req, runtime));
}

GetCollectionPolicyResponse Alibabacloud_Sls20201230::Client::getCollectionPolicy(shared_ptr<string> policyName, shared_ptr<GetCollectionPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCollectionPolicyWithOptions(policyName, request, headers, runtime);
}

GetConfigResponse Alibabacloud_Sls20201230::Client::getConfigWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> configName,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/configs/") + string(*configName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConfigResponse(execute(params, req, runtime));
}

GetConfigResponse Alibabacloud_Sls20201230::Client::getConfig(shared_ptr<string> project, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getConfigWithOptions(project, configName, headers, runtime);
}

GetContextLogsResponse Alibabacloud_Sls20201230::Client::getContextLogsWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<string> logstore,
                                                                                   shared_ptr<GetContextLogsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->backLines)) {
    query->insert(pair<string, long>("back_lines", *request->backLines));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->forwardLines)) {
    query->insert(pair<string, long>("forward_lines", *request->forwardLines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packId)) {
    query->insert(pair<string, string>("pack_id", *request->packId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packMeta)) {
    query->insert(pair<string, string>("pack_meta", *request->packMeta));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContextLogs"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetContextLogsResponse(execute(params, req, runtime));
}

GetContextLogsResponse Alibabacloud_Sls20201230::Client::getContextLogs(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetContextLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getContextLogsWithOptions(project, logstore, request, headers, runtime);
}

GetCursorResponse Alibabacloud_Sls20201230::Client::getCursorWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> logstore,
                                                                         shared_ptr<string> shardId,
                                                                         shared_ptr<GetCursorRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    query->insert(pair<string, string>("from", *request->from));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCursor"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shards/") + string(*shardId) + string("?type=cursor"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCursorResponse(execute(params, req, runtime));
}

GetCursorResponse Alibabacloud_Sls20201230::Client::getCursor(shared_ptr<string> project,
                                                              shared_ptr<string> logstore,
                                                              shared_ptr<string> shardId,
                                                              shared_ptr<GetCursorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCursorWithOptions(project, logstore, shardId, request, headers, runtime);
}

GetCursorTimeResponse Alibabacloud_Sls20201230::Client::getCursorTimeWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<string> logstore,
                                                                                 shared_ptr<string> shardId,
                                                                                 shared_ptr<GetCursorTimeRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cursor)) {
    query->insert(pair<string, string>("cursor", *request->cursor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCursorTime"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shards/") + string(*shardId) + string("?type=cursor_time"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCursorTimeResponse(execute(params, req, runtime));
}

GetCursorTimeResponse Alibabacloud_Sls20201230::Client::getCursorTime(shared_ptr<string> project,
                                                                      shared_ptr<string> logstore,
                                                                      shared_ptr<string> shardId,
                                                                      shared_ptr<GetCursorTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCursorTimeWithOptions(project, logstore, shardId, request, headers, runtime);
}

GetDashboardResponse Alibabacloud_Sls20201230::Client::getDashboardWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> dashboardName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDashboard"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dashboards/") + string(*dashboardName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDashboardResponse(execute(params, req, runtime));
}

GetDashboardResponse Alibabacloud_Sls20201230::Client::getDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDashboardWithOptions(project, dashboardName, headers, runtime);
}

GetExternalStoreResponse Alibabacloud_Sls20201230::Client::getExternalStoreWithOptions(shared_ptr<string> project,
                                                                                       shared_ptr<string> externalStoreName,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores/") + string(*externalStoreName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExternalStoreResponse(execute(params, req, runtime));
}

GetExternalStoreResponse Alibabacloud_Sls20201230::Client::getExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getExternalStoreWithOptions(project, externalStoreName, headers, runtime);
}

GetHistogramsResponse Alibabacloud_Sls20201230::Client::getHistogramsWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<string> logstore,
                                                                                 shared_ptr<GetHistogramsRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("to", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHistograms"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/index?type=histogram"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return GetHistogramsResponse(execute(params, req, runtime));
}

GetHistogramsResponse Alibabacloud_Sls20201230::Client::getHistograms(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetHistogramsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getHistogramsWithOptions(project, logstore, request, headers, runtime);
}

GetIndexResponse Alibabacloud_Sls20201230::Client::getIndexWithOptions(shared_ptr<string> project,
                                                                       shared_ptr<string> logstore,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndex"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/index"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexResponse(execute(params, req, runtime));
}

GetIndexResponse Alibabacloud_Sls20201230::Client::getIndex(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getIndexWithOptions(project, logstore, headers, runtime);
}

GetLogStoreResponse Alibabacloud_Sls20201230::Client::getLogStoreWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> logstore,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogStoreResponse(execute(params, req, runtime));
}

GetLogStoreResponse Alibabacloud_Sls20201230::Client::getLogStore(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLogStoreWithOptions(project, logstore, headers, runtime);
}

GetLogStoreMeteringModeResponse Alibabacloud_Sls20201230::Client::getLogStoreMeteringModeWithOptions(shared_ptr<string> project,
                                                                                                     shared_ptr<string> logstore,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogStoreMeteringMode"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/meteringmode"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogStoreMeteringModeResponse(execute(params, req, runtime));
}

GetLogStoreMeteringModeResponse Alibabacloud_Sls20201230::Client::getLogStoreMeteringMode(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLogStoreMeteringModeWithOptions(project, logstore, headers, runtime);
}

GetLoggingResponse Alibabacloud_Sls20201230::Client::getLoggingWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogging"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logging"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLoggingResponse(execute(params, req, runtime));
}

GetLoggingResponse Alibabacloud_Sls20201230::Client::getLogging(shared_ptr<string> project) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLoggingWithOptions(project, headers, runtime);
}

GetLogsResponse Alibabacloud_Sls20201230::Client::getLogsWithOptions(shared_ptr<string> project,
                                                                     shared_ptr<string> logstore,
                                                                     shared_ptr<GetLogsRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->line)) {
    query->insert(pair<string, long>("line", *request->line));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->powerSql)) {
    query->insert(pair<string, bool>("powerSql", *request->powerSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("to", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogs"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("?type=log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return GetLogsResponse(execute(params, req, runtime));
}

GetLogsResponse Alibabacloud_Sls20201230::Client::getLogs(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLogsWithOptions(project, logstore, request, headers, runtime);
}

GetLogsV2Response Alibabacloud_Sls20201230::Client::getLogsV2WithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> logstore,
                                                                         shared_ptr<GetLogsV2Request> request,
                                                                         shared_ptr<GetLogsV2Headers> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->forward)) {
    body->insert(pair<string, bool>("forward", *request->forward));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    body->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->line)) {
    body->insert(pair<string, long>("line", *request->line));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->powerSql)) {
    body->insert(pair<string, bool>("powerSql", *request->powerSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    body->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    body->insert(pair<string, bool>("reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->session)) {
    body->insert(pair<string, string>("session", *request->session));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shard)) {
    body->insert(pair<string, long>("shard", *request->shard));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    body->insert(pair<string, long>("to", *request->to));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->acceptEncoding)) {
    realHeaders->insert(pair<string, string>("Accept-Encoding", Darabonba_Util::Client::toJSONString(headers->acceptEncoding)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogsV2"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/logs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogsV2Response(execute(params, req, runtime));
}

GetLogsV2Response Alibabacloud_Sls20201230::Client::getLogsV2(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetLogsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetLogsV2Headers> headers = make_shared<GetLogsV2Headers>();
  return getLogsV2WithOptions(project, logstore, request, headers, runtime);
}

GetLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::getLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                                                       shared_ptr<string> configName,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogtailPipelineConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pipelineconfigs/") + string(*configName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogtailPipelineConfigResponse(execute(params, req, runtime));
}

GetLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::getLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLogtailPipelineConfigWithOptions(project, configName, headers, runtime);
}

GetMachineGroupResponse Alibabacloud_Sls20201230::Client::getMachineGroupWithOptions(shared_ptr<string> project,
                                                                                     shared_ptr<string> machineGroup,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMachineGroupResponse(execute(params, req, runtime));
}

GetMachineGroupResponse Alibabacloud_Sls20201230::Client::getMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getMachineGroupWithOptions(project, machineGroup, headers, runtime);
}

GetProjectResponse Alibabacloud_Sls20201230::Client::getProjectWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(execute(params, req, runtime));
}

GetProjectResponse Alibabacloud_Sls20201230::Client::getProject(shared_ptr<string> project) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectWithOptions(project, headers, runtime);
}

GetProjectLogsResponse Alibabacloud_Sls20201230::Client::getProjectLogsWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<GetProjectLogsRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->powerSql)) {
    query->insert(pair<string, bool>("powerSql", *request->powerSql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectLogs"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return GetProjectLogsResponse(execute(params, req, runtime));
}

GetProjectLogsResponse Alibabacloud_Sls20201230::Client::getProjectLogs(shared_ptr<string> project, shared_ptr<GetProjectLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectLogsWithOptions(project, request, headers, runtime);
}

GetProjectPolicyResponse Alibabacloud_Sls20201230::Client::getProjectPolicyWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectPolicy"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/policy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return GetProjectPolicyResponse(execute(params, req, runtime));
}

GetProjectPolicyResponse Alibabacloud_Sls20201230::Client::getProjectPolicy(shared_ptr<string> project) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProjectPolicyWithOptions(project, headers, runtime);
}

GetSavedSearchResponse Alibabacloud_Sls20201230::Client::getSavedSearchWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<string> savedsearchName,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSavedSearch"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/savedsearches/") + string(*savedsearchName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSavedSearchResponse(execute(params, req, runtime));
}

GetSavedSearchResponse Alibabacloud_Sls20201230::Client::getSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSavedSearchWithOptions(project, savedsearchName, headers, runtime);
}

GetShipperStatusResponse Alibabacloud_Sls20201230::Client::getShipperStatusWithOptions(shared_ptr<string> project,
                                                                                       shared_ptr<string> logstore,
                                                                                       shared_ptr<string> shipperName,
                                                                                       shared_ptr<GetShipperStatusRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("from", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("to", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetShipperStatus"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shipper/") + string(*shipperName) + string("/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetShipperStatusResponse(execute(params, req, runtime));
}

GetShipperStatusResponse Alibabacloud_Sls20201230::Client::getShipperStatus(shared_ptr<string> project,
                                                                            shared_ptr<string> logstore,
                                                                            shared_ptr<string> shipperName,
                                                                            shared_ptr<GetShipperStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getShipperStatusWithOptions(project, logstore, shipperName, request, headers, runtime);
}

ListAnnotationDataResponse Alibabacloud_Sls20201230::Client::listAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                                                           shared_ptr<ListAnnotationDataRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnnotationData"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId) + string("/annotationdata"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnnotationDataResponse(execute(params, req, runtime));
}

ListAnnotationDataResponse Alibabacloud_Sls20201230::Client::listAnnotationData(shared_ptr<string> datasetId, shared_ptr<ListAnnotationDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAnnotationDataWithOptions(datasetId, request, headers, runtime);
}

ListAnnotationDataSetsResponse Alibabacloud_Sls20201230::Client::listAnnotationDataSetsWithOptions(shared_ptr<ListAnnotationDataSetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnnotationDataSets"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnnotationDataSetsResponse(execute(params, req, runtime));
}

ListAnnotationDataSetsResponse Alibabacloud_Sls20201230::Client::listAnnotationDataSets(shared_ptr<ListAnnotationDataSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAnnotationDataSetsWithOptions(request, headers, runtime);
}

ListAnnotationLabelsResponse Alibabacloud_Sls20201230::Client::listAnnotationLabelsWithOptions(shared_ptr<ListAnnotationLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnnotationLabels"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationlabel"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnnotationLabelsResponse(execute(params, req, runtime));
}

ListAnnotationLabelsResponse Alibabacloud_Sls20201230::Client::listAnnotationLabels(shared_ptr<ListAnnotationLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAnnotationLabelsWithOptions(request, headers, runtime);
}

ListCollectionPoliciesResponse Alibabacloud_Sls20201230::Client::listCollectionPoliciesWithOptions(shared_ptr<ListCollectionPoliciesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCollectionPoliciesShrinkRequest> request = make_shared<ListCollectionPoliciesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListCollectionPoliciesRequestAttribute>(tmpReq->attribute)) {
    request->attributeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attribute, make_shared<string>("attribute"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attributeShrink)) {
    query->insert(pair<string, string>("attribute", *request->attributeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCode)) {
    query->insert(pair<string, string>("dataCode", *request->dataCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("pageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("policyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("productCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCollectionPolicies"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/collectionpolicy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCollectionPoliciesResponse(execute(params, req, runtime));
}

ListCollectionPoliciesResponse Alibabacloud_Sls20201230::Client::listCollectionPolicies(shared_ptr<ListCollectionPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCollectionPoliciesWithOptions(request, headers, runtime);
}

ListConfigResponse Alibabacloud_Sls20201230::Client::listConfigWithOptions(shared_ptr<string> project,
                                                                           shared_ptr<ListConfigRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    query->insert(pair<string, string>("configName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstoreName)) {
    query->insert(pair<string, string>("logstoreName", *request->logstoreName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfigResponse(execute(params, req, runtime));
}

ListConfigResponse Alibabacloud_Sls20201230::Client::listConfig(shared_ptr<string> project, shared_ptr<ListConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConfigWithOptions(project, request, headers, runtime);
}

ListConsumerGroupResponse Alibabacloud_Sls20201230::Client::listConsumerGroupWithOptions(shared_ptr<string> project,
                                                                                         shared_ptr<string> logstore,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConsumerGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/consumergroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return ListConsumerGroupResponse(execute(params, req, runtime));
}

ListConsumerGroupResponse Alibabacloud_Sls20201230::Client::listConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listConsumerGroupWithOptions(project, logstore, headers, runtime);
}

ListDashboardResponse Alibabacloud_Sls20201230::Client::listDashboardWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<ListDashboardRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDashboard"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dashboards"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDashboardResponse(execute(params, req, runtime));
}

ListDashboardResponse Alibabacloud_Sls20201230::Client::listDashboard(shared_ptr<string> project, shared_ptr<ListDashboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDashboardWithOptions(project, request, headers, runtime);
}

ListDomainsResponse Alibabacloud_Sls20201230::Client::listDomainsWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<ListDomainsRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("domainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDomains"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/domains"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDomainsResponse(execute(params, req, runtime));
}

ListDomainsResponse Alibabacloud_Sls20201230::Client::listDomains(shared_ptr<string> project, shared_ptr<ListDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listDomainsWithOptions(project, request, headers, runtime);
}

ListExternalStoreResponse Alibabacloud_Sls20201230::Client::listExternalStoreWithOptions(shared_ptr<string> project,
                                                                                         shared_ptr<ListExternalStoreRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalStoreName)) {
    query->insert(pair<string, string>("externalStoreName", *request->externalStoreName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sizs)) {
    query->insert(pair<string, long>("sizs", *request->sizs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExternalStoreResponse(execute(params, req, runtime));
}

ListExternalStoreResponse Alibabacloud_Sls20201230::Client::listExternalStore(shared_ptr<string> project, shared_ptr<ListExternalStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listExternalStoreWithOptions(project, request, headers, runtime);
}

ListLogStoresResponse Alibabacloud_Sls20201230::Client::listLogStoresWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<ListLogStoresRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logstoreName)) {
    query->insert(pair<string, string>("logstoreName", *request->logstoreName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telemetryType)) {
    query->insert(pair<string, string>("telemetryType", *request->telemetryType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogStores"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogStoresResponse(execute(params, req, runtime));
}

ListLogStoresResponse Alibabacloud_Sls20201230::Client::listLogStores(shared_ptr<string> project, shared_ptr<ListLogStoresRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogStoresWithOptions(project, request, headers, runtime);
}

ListLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::listLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                                                         shared_ptr<ListLogtailPipelineConfigRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    query->insert(pair<string, string>("configName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstoreName)) {
    query->insert(pair<string, string>("logstoreName", *request->logstoreName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLogtailPipelineConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pipelineconfigs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLogtailPipelineConfigResponse(execute(params, req, runtime));
}

ListLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::listLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<ListLogtailPipelineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLogtailPipelineConfigWithOptions(project, request, headers, runtime);
}

ListMachineGroupResponse Alibabacloud_Sls20201230::Client::listMachineGroupWithOptions(shared_ptr<string> project,
                                                                                       shared_ptr<ListMachineGroupRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("groupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMachineGroupResponse(execute(params, req, runtime));
}

ListMachineGroupResponse Alibabacloud_Sls20201230::Client::listMachineGroup(shared_ptr<string> project, shared_ptr<ListMachineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMachineGroupWithOptions(project, request, headers, runtime);
}

ListMachinesResponse Alibabacloud_Sls20201230::Client::listMachinesWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> machineGroup,
                                                                               shared_ptr<ListMachinesRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMachines"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup) + string("/machines"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMachinesResponse(execute(params, req, runtime));
}

ListMachinesResponse Alibabacloud_Sls20201230::Client::listMachines(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<ListMachinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listMachinesWithOptions(project, machineGroup, request, headers, runtime);
}

ListProjectResponse Alibabacloud_Sls20201230::Client::listProjectWithOptions(shared_ptr<string> resourceGroupId,
                                                                             shared_ptr<ListProjectRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("projectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProject"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectResponse(execute(params, req, runtime));
}

ListProjectResponse Alibabacloud_Sls20201230::Client::listProject(shared_ptr<string> resourceGroupId, shared_ptr<ListProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProjectWithOptions(resourceGroupId, request, headers, runtime);
}

ListSavedSearchResponse Alibabacloud_Sls20201230::Client::listSavedSearchWithOptions(shared_ptr<string> project,
                                                                                     shared_ptr<ListSavedSearchRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSavedSearch"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/savedsearches"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSavedSearchResponse(execute(params, req, runtime));
}

ListSavedSearchResponse Alibabacloud_Sls20201230::Client::listSavedSearch(shared_ptr<string> project, shared_ptr<ListSavedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSavedSearchWithOptions(project, request, headers, runtime);
}

ListShardsResponse Alibabacloud_Sls20201230::Client::listShardsWithOptions(shared_ptr<string> project,
                                                                           shared_ptr<string> logstore,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListShards"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shards"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return ListShardsResponse(execute(params, req, runtime));
}

ListShardsResponse Alibabacloud_Sls20201230::Client::listShards(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listShardsWithOptions(project, logstore, headers, runtime);
}

ListShipperResponse Alibabacloud_Sls20201230::Client::listShipperWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> logstore,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListShipper"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shipper"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListShipperResponse(execute(params, req, runtime));
}

ListShipperResponse Alibabacloud_Sls20201230::Client::listShipper(shared_ptr<string> project, shared_ptr<string> logstore) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listShipperWithOptions(project, logstore, headers, runtime);
}

ListTagResourcesResponse Alibabacloud_Sls20201230::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTagResourcesShrinkRequest> request = make_shared<ListTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("resourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("resourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(execute(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Sls20201230::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTagResourcesWithOptions(request, headers, runtime);
}

PutAnnotationDataResponse Alibabacloud_Sls20201230::Client::putAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                                                         shared_ptr<PutAnnotationDataRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationdataId)) {
    query->insert(pair<string, string>("annotationdataId", *request->annotationdataId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<MLDataParam>(request->mlDataParam)) {
    body->insert(pair<string, MLDataParam>("mlDataParam", *request->mlDataParam));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, string>>>(request->rawLog)) {
    body->insert(pair<string, vector<map<string, string>>>("rawLog", *request->rawLog));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAnnotationData"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId) + string("/annotationdata"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PutAnnotationDataResponse(execute(params, req, runtime));
}

PutAnnotationDataResponse Alibabacloud_Sls20201230::Client::putAnnotationData(shared_ptr<string> datasetId, shared_ptr<PutAnnotationDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putAnnotationDataWithOptions(datasetId, request, headers, runtime);
}

PutProjectPolicyResponse Alibabacloud_Sls20201230::Client::putProjectPolicyWithOptions(shared_ptr<string> project,
                                                                                       shared_ptr<PutProjectPolicyRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutProjectPolicy"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/policy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutProjectPolicyResponse(execute(params, req, runtime));
}

PutProjectPolicyResponse Alibabacloud_Sls20201230::Client::putProjectPolicy(shared_ptr<string> project, shared_ptr<PutProjectPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putProjectPolicyWithOptions(project, request, headers, runtime);
}

PutWebtrackingResponse Alibabacloud_Sls20201230::Client::putWebtrackingWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<string> logstoreName,
                                                                                   shared_ptr<PutWebtrackingRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<map<string, string>>>(request->logs)) {
    body->insert(pair<string, vector<map<string, string>>>("__logs__", *request->logs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("__source__", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->tags)) {
    body->insert(pair<string, map<string, string>>("__tags__", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("__topic__", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutWebtracking"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstoreName) + string("/track"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PutWebtrackingResponse(execute(params, req, runtime));
}

PutWebtrackingResponse Alibabacloud_Sls20201230::Client::putWebtracking(shared_ptr<string> project, shared_ptr<string> logstoreName, shared_ptr<PutWebtrackingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putWebtrackingWithOptions(project, logstoreName, request, headers, runtime);
}

QueryMLServiceResultsResponse Alibabacloud_Sls20201230::Client::queryMLServiceResultsWithOptions(shared_ptr<string> serviceName,
                                                                                                 shared_ptr<QueryMLServiceResultsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowBuiltin)) {
    query->insert(pair<string, bool>("allowBuiltin", *request->allowBuiltin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMLServiceResults"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/service/") + string(*serviceName) + string("/analysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMLServiceResultsResponse(execute(params, req, runtime));
}

QueryMLServiceResultsResponse Alibabacloud_Sls20201230::Client::queryMLServiceResults(shared_ptr<string> serviceName, shared_ptr<QueryMLServiceResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryMLServiceResultsWithOptions(serviceName, request, headers, runtime);
}

RemoveConfigFromMachineGroupResponse Alibabacloud_Sls20201230::Client::removeConfigFromMachineGroupWithOptions(shared_ptr<string> project,
                                                                                                               shared_ptr<string> machineGroup,
                                                                                                               shared_ptr<string> configName,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveConfigFromMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup) + string("/configs/") + string(*configName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return RemoveConfigFromMachineGroupResponse(execute(params, req, runtime));
}

RemoveConfigFromMachineGroupResponse Alibabacloud_Sls20201230::Client::removeConfigFromMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<string> configName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return removeConfigFromMachineGroupWithOptions(project, machineGroup, configName, headers, runtime);
}

SplitShardResponse Alibabacloud_Sls20201230::Client::splitShardWithOptions(shared_ptr<string> project,
                                                                           shared_ptr<string> logstore,
                                                                           shared_ptr<string> shard,
                                                                           shared_ptr<SplitShardRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shardCount)) {
    query->insert(pair<string, long>("shardCount", *request->shardCount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SplitShard"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/shards/") + string(*shard) + string("?action=split"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("array"))}
  }));
  return SplitShardResponse(execute(params, req, runtime));
}

SplitShardResponse Alibabacloud_Sls20201230::Client::splitShard(shared_ptr<string> project,
                                                                shared_ptr<string> logstore,
                                                                shared_ptr<string> shard,
                                                                shared_ptr<SplitShardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return splitShardWithOptions(project, logstore, shard, request, headers, runtime);
}

TagResourcesResponse Alibabacloud_Sls20201230::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<TagResourcesRequestTags>>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tag"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return TagResourcesResponse(execute(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Sls20201230::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UntagResourcesResponse Alibabacloud_Sls20201230::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    body->insert(pair<string, bool>("all", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("resourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("resourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tags)) {
    body->insert(pair<string, vector<string>>("tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/untag"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UntagResourcesResponse(execute(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Sls20201230::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourcesWithOptions(request, headers, runtime);
}

UpdateAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::updateAnnotationDataSetWithOptions(shared_ptr<string> datasetId,
                                                                                                     shared_ptr<UpdateAnnotationDataSetRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAnnotationDataSet"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationdataset/") + string(*datasetId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateAnnotationDataSetResponse(execute(params, req, runtime));
}

UpdateAnnotationDataSetResponse Alibabacloud_Sls20201230::Client::updateAnnotationDataSet(shared_ptr<string> datasetId, shared_ptr<UpdateAnnotationDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAnnotationDataSetWithOptions(datasetId, request, headers, runtime);
}

UpdateAnnotationLabelResponse Alibabacloud_Sls20201230::Client::updateAnnotationLabelWithOptions(shared_ptr<UpdateAnnotationLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAnnotationLabel"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ml/annotationlabel"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateAnnotationLabelResponse(execute(params, req, runtime));
}

UpdateAnnotationLabelResponse Alibabacloud_Sls20201230::Client::updateAnnotationLabel(shared_ptr<UpdateAnnotationLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAnnotationLabelWithOptions(request, headers, runtime);
}

UpdateConfigResponse Alibabacloud_Sls20201230::Client::updateConfigWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> configName,
                                                                               shared_ptr<UpdateConfigRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/configs/") + string(*configName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateConfigResponse(execute(params, req, runtime));
}

UpdateConfigResponse Alibabacloud_Sls20201230::Client::updateConfig(shared_ptr<string> project, shared_ptr<string> configName, shared_ptr<UpdateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConfigWithOptions(project, configName, request, headers, runtime);
}

UpdateConsumerGroupResponse Alibabacloud_Sls20201230::Client::updateConsumerGroupWithOptions(shared_ptr<string> project,
                                                                                             shared_ptr<string> logstore,
                                                                                             shared_ptr<string> consumerGroup,
                                                                                             shared_ptr<UpdateConsumerGroupRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->order)) {
    body->insert(pair<string, bool>("order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConsumerGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/consumergroups/") + string(*consumerGroup))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateConsumerGroupResponse(execute(params, req, runtime));
}

UpdateConsumerGroupResponse Alibabacloud_Sls20201230::Client::updateConsumerGroup(shared_ptr<string> project,
                                                                                  shared_ptr<string> logstore,
                                                                                  shared_ptr<string> consumerGroup,
                                                                                  shared_ptr<UpdateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConsumerGroupWithOptions(project, logstore, consumerGroup, request, headers, runtime);
}

UpdateDashboardResponse Alibabacloud_Sls20201230::Client::updateDashboardWithOptions(shared_ptr<string> project,
                                                                                     shared_ptr<string> dashboardName,
                                                                                     shared_ptr<UpdateDashboardRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->attribute)) {
    body->insert(pair<string, map<string, string>>("attribute", *request->attribute));
  }
  if (!Darabonba_Util::Client::isUnset<vector<Chart>>(request->charts)) {
    body->insert(pair<string, vector<Chart>>("charts", *request->charts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dashboardName)) {
    body->insert(pair<string, string>("dashboardName", *request->dashboardName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDashboard"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dashboards/") + string(*dashboardName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateDashboardResponse(execute(params, req, runtime));
}

UpdateDashboardResponse Alibabacloud_Sls20201230::Client::updateDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName, shared_ptr<UpdateDashboardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateDashboardWithOptions(project, dashboardName, request, headers, runtime);
}

UpdateIndexResponse Alibabacloud_Sls20201230::Client::updateIndexWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> logstore,
                                                                             shared_ptr<UpdateIndexRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, KeysValue>>(request->keys)) {
    body->insert(pair<string, map<string, KeysValue>>("keys", *request->keys));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateIndexRequestLine>(request->line)) {
    body->insert(pair<string, UpdateIndexRequestLine>("line", *request->line));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->logReduce)) {
    body->insert(pair<string, bool>("log_reduce", *request->logReduce));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logReduceBlackList)) {
    body->insert(pair<string, vector<string>>("log_reduce_black_list", *request->logReduceBlackList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logReduceWhiteList)) {
    body->insert(pair<string, vector<string>>("log_reduce_white_list", *request->logReduceWhiteList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxTextLen)) {
    body->insert(pair<string, long>("max_text_len", *request->maxTextLen));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIndex"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/index"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateIndexResponse(execute(params, req, runtime));
}

UpdateIndexResponse Alibabacloud_Sls20201230::Client::updateIndex(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateIndexWithOptions(project, logstore, request, headers, runtime);
}

UpdateLogStoreResponse Alibabacloud_Sls20201230::Client::updateLogStoreWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<string> logstore,
                                                                                   shared_ptr<UpdateLogStoreRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appendMeta)) {
    body->insert(pair<string, bool>("appendMeta", *request->appendMeta));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoSplit)) {
    body->insert(pair<string, bool>("autoSplit", *request->autoSplit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableTracking)) {
    body->insert(pair<string, bool>("enable_tracking", *request->enableTracking));
  }
  if (!Darabonba_Util::Client::isUnset<EncryptConf>(request->encryptConf)) {
    body->insert(pair<string, EncryptConf>("encrypt_conf", *request->encryptConf));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotTtl)) {
    body->insert(pair<string, long>("hot_ttl", *request->hotTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstoreName)) {
    body->insert(pair<string, string>("logstoreName", *request->logstoreName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSplitShard)) {
    body->insert(pair<string, long>("maxSplitShard", *request->maxSplitShard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shardCount)) {
    body->insert(pair<string, long>("shardCount", *request->shardCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telemetryType)) {
    body->insert(pair<string, string>("telemetryType", *request->telemetryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    body->insert(pair<string, long>("ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateLogStoreResponse(execute(params, req, runtime));
}

UpdateLogStoreResponse Alibabacloud_Sls20201230::Client::updateLogStore(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateLogStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogStoreWithOptions(project, logstore, request, headers, runtime);
}

UpdateLogStoreMeteringModeResponse Alibabacloud_Sls20201230::Client::updateLogStoreMeteringModeWithOptions(shared_ptr<string> project,
                                                                                                           shared_ptr<string> logstore,
                                                                                                           shared_ptr<UpdateLogStoreMeteringModeRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->meteringMode)) {
    body->insert(pair<string, string>("meteringMode", *request->meteringMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogStoreMeteringMode"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logstores/") + string(*logstore) + string("/meteringmode"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateLogStoreMeteringModeResponse(execute(params, req, runtime));
}

UpdateLogStoreMeteringModeResponse Alibabacloud_Sls20201230::Client::updateLogStoreMeteringMode(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateLogStoreMeteringModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogStoreMeteringModeWithOptions(project, logstore, request, headers, runtime);
}

UpdateLoggingResponse Alibabacloud_Sls20201230::Client::updateLoggingWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<UpdateLoggingRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLoggingRequestLoggingDetails>>(request->loggingDetails)) {
    body->insert(pair<string, vector<UpdateLoggingRequestLoggingDetails>>("loggingDetails", *request->loggingDetails));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loggingProject)) {
    body->insert(pair<string, string>("loggingProject", *request->loggingProject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogging"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/logging"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateLoggingResponse(execute(params, req, runtime));
}

UpdateLoggingResponse Alibabacloud_Sls20201230::Client::updateLogging(shared_ptr<string> project, shared_ptr<UpdateLoggingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLoggingWithOptions(project, request, headers, runtime);
}

UpdateLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::updateLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                                                             shared_ptr<string> configName,
                                                                                                             shared_ptr<UpdateLogtailPipelineConfigRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->aggregators)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("aggregators", *request->aggregators));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    body->insert(pair<string, string>("configName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->flushers)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("flushers", *request->flushers));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->global)) {
    body->insert(pair<string, map<string, boost::any>>("global", *request->global));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->inputs)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("inputs", *request->inputs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logSample)) {
    body->insert(pair<string, string>("logSample", *request->logSample));
  }
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(request->processors)) {
    body->insert(pair<string, vector<map<string, boost::any>>>("processors", *request->processors));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLogtailPipelineConfig"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/pipelineconfigs/") + string(*configName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateLogtailPipelineConfigResponse(execute(params, req, runtime));
}

UpdateLogtailPipelineConfigResponse Alibabacloud_Sls20201230::Client::updateLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<string> configName, shared_ptr<UpdateLogtailPipelineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLogtailPipelineConfigWithOptions(project, configName, request, headers, runtime);
}

UpdateMachineGroupResponse Alibabacloud_Sls20201230::Client::updateMachineGroupWithOptions(shared_ptr<string> project,
                                                                                           shared_ptr<string> groupName,
                                                                                           shared_ptr<UpdateMachineGroupRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateMachineGroupRequestGroupAttribute>(request->groupAttribute)) {
    body->insert(pair<string, UpdateMachineGroupRequestGroupAttribute>("groupAttribute", *request->groupAttribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("groupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    body->insert(pair<string, string>("groupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->machineIdentifyType)) {
    body->insert(pair<string, string>("machineIdentifyType", *request->machineIdentifyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->machineList)) {
    body->insert(pair<string, vector<string>>("machineList", *request->machineList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMachineGroup"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*groupName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateMachineGroupResponse(execute(params, req, runtime));
}

UpdateMachineGroupResponse Alibabacloud_Sls20201230::Client::updateMachineGroup(shared_ptr<string> project, shared_ptr<string> groupName, shared_ptr<UpdateMachineGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMachineGroupWithOptions(project, groupName, request, headers, runtime);
}

UpdateMachineGroupMachineResponse Alibabacloud_Sls20201230::Client::updateMachineGroupMachineWithOptions(shared_ptr<string> project,
                                                                                                         shared_ptr<string> machineGroup,
                                                                                                         shared_ptr<UpdateMachineGroupMachineRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    query->insert(pair<string, string>("action", *request->action));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMachineGroupMachine"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/machinegroups/") + string(*machineGroup) + string("/machines"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateMachineGroupMachineResponse(execute(params, req, runtime));
}

UpdateMachineGroupMachineResponse Alibabacloud_Sls20201230::Client::updateMachineGroupMachine(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<UpdateMachineGroupMachineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateMachineGroupMachineWithOptions(project, machineGroup, request, headers, runtime);
}

UpdateOssExternalStoreResponse Alibabacloud_Sls20201230::Client::updateOssExternalStoreWithOptions(shared_ptr<string> project,
                                                                                                   shared_ptr<string> externalStoreName,
                                                                                                   shared_ptr<UpdateOssExternalStoreRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalStoreName)) {
    body->insert(pair<string, string>("externalStoreName", *request->externalStoreName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateOssExternalStoreRequestParameter>(request->parameter)) {
    body->insert(pair<string, UpdateOssExternalStoreRequestParameter>("parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeType)) {
    body->insert(pair<string, string>("storeType", *request->storeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOssExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores/") + string(*externalStoreName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateOssExternalStoreResponse(execute(params, req, runtime));
}

UpdateOssExternalStoreResponse Alibabacloud_Sls20201230::Client::updateOssExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName, shared_ptr<UpdateOssExternalStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateOssExternalStoreWithOptions(project, externalStoreName, request, headers, runtime);
}

UpdateProjectResponse Alibabacloud_Sls20201230::Client::updateProjectWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<UpdateProjectRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateProjectResponse(execute(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_Sls20201230::Client::updateProject(shared_ptr<string> project, shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateProjectWithOptions(project, request, headers, runtime);
}

UpdateRdsExternalStoreResponse Alibabacloud_Sls20201230::Client::updateRdsExternalStoreWithOptions(shared_ptr<string> project,
                                                                                                   shared_ptr<string> externalStoreName,
                                                                                                   shared_ptr<UpdateRdsExternalStoreRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalStoreName)) {
    body->insert(pair<string, string>("externalStoreName", *request->externalStoreName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateRdsExternalStoreRequestParameter>(request->parameter)) {
    body->insert(pair<string, UpdateRdsExternalStoreRequestParameter>("parameter", *request->parameter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storeType)) {
    body->insert(pair<string, string>("storeType", *request->storeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRdsExternalStore"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/externalstores/") + string(*externalStoreName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateRdsExternalStoreResponse(execute(params, req, runtime));
}

UpdateRdsExternalStoreResponse Alibabacloud_Sls20201230::Client::updateRdsExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName, shared_ptr<UpdateRdsExternalStoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRdsExternalStoreWithOptions(project, externalStoreName, request, headers, runtime);
}

UpdateSavedSearchResponse Alibabacloud_Sls20201230::Client::updateSavedSearchWithOptions(shared_ptr<string> project,
                                                                                         shared_ptr<string> savedsearchName,
                                                                                         shared_ptr<UpdateSavedSearchRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> hostMap = make_shared<map<string, string>>(map<string, string>());
  hostMap->insert(pair<string, string>("project", *project));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstore)) {
    body->insert(pair<string, string>("logstore", *request->logstore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->savedsearchName)) {
    body->insert(pair<string, string>("savedsearchName", *request->savedsearchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchQuery)) {
    body->insert(pair<string, string>("searchQuery", *request->searchQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    body->insert(pair<string, string>("topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"hostMap", !hostMap ? boost::any() : boost::any(*hostMap)},
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSavedSearch"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/savedsearches/") + string(*savedsearchName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateSavedSearchResponse(execute(params, req, runtime));
}

UpdateSavedSearchResponse Alibabacloud_Sls20201230::Client::updateSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName, shared_ptr<UpdateSavedSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSavedSearchWithOptions(project, savedsearchName, request, headers, runtime);
}

UpsertCollectionPolicyResponse Alibabacloud_Sls20201230::Client::upsertCollectionPolicyWithOptions(shared_ptr<UpsertCollectionPolicyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpsertCollectionPolicyRequestAttribute>(request->attribute)) {
    body->insert(pair<string, UpsertCollectionPolicyRequestAttribute>("attribute", *request->attribute));
  }
  if (!Darabonba_Util::Client::isUnset<UpsertCollectionPolicyRequestCentralizeConfig>(request->centralizeConfig)) {
    body->insert(pair<string, UpsertCollectionPolicyRequestCentralizeConfig>("centralizeConfig", *request->centralizeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->centralizeEnabled)) {
    body->insert(pair<string, bool>("centralizeEnabled", *request->centralizeEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCode)) {
    body->insert(pair<string, string>("dataCode", *request->dataCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    body->insert(pair<string, bool>("enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<UpsertCollectionPolicyRequestPolicyConfig>(request->policyConfig)) {
    body->insert(pair<string, UpsertCollectionPolicyRequestPolicyConfig>("policyConfig", *request->policyConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    body->insert(pair<string, string>("policyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("productCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpsertCollectionPolicy"))},
    {"version", boost::any(string("2020-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/collectionpolicy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpsertCollectionPolicyResponse(execute(params, req, runtime));
}

UpsertCollectionPolicyResponse Alibabacloud_Sls20201230::Client::upsertCollectionPolicy(shared_ptr<UpsertCollectionPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upsertCollectionPolicyWithOptions(request, headers, runtime);
}

