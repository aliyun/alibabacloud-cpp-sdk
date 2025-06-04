// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/pai_rec_service_20221213.hpp>
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

using namespace Alibabacloud_PaiRecService20221213;

Alibabacloud_PaiRecService20221213::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("pairecservice"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_PaiRecService20221213::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::applyEngineConfigWithOptions(shared_ptr<string> EngineConfigId,
                                                                                                   shared_ptr<ApplyEngineConfigRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyEngineConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EngineConfigId)) + string("/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyEngineConfigResponse(callApi(params, req, runtime));
}

ApplyEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::applyEngineConfig(shared_ptr<string> EngineConfigId, shared_ptr<ApplyEngineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return applyEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

BackflowFeatureConsistencyCheckJobDataResponse Alibabacloud_PaiRecService20221213::Client::backflowFeatureConsistencyCheckJobDataWithOptions(shared_ptr<BackflowFeatureConsistencyCheckJobDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->featureConsistencyCheckJobConfigId)) {
    body->insert(pair<string, string>("FeatureConsistencyCheckJobConfigId", *request->featureConsistencyCheckJobConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemFeatures)) {
    body->insert(pair<string, string>("ItemFeatures", *request->itemFeatures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logItemId)) {
    body->insert(pair<string, string>("LogItemId", *request->logItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logRequestId)) {
    body->insert(pair<string, string>("LogRequestId", *request->logRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logRequestTime)) {
    body->insert(pair<string, long>("LogRequestTime", *request->logRequestTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logUserId)) {
    body->insert(pair<string, string>("LogUserId", *request->logUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scores)) {
    body->insert(pair<string, string>("Scores", *request->scores));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userFeatures)) {
    body->insert(pair<string, string>("UserFeatures", *request->userFeatures));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BackflowFeatureConsistencyCheckJobData"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs/action/backflowdata"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BackflowFeatureConsistencyCheckJobDataResponse(callApi(params, req, runtime));
}

BackflowFeatureConsistencyCheckJobDataResponse Alibabacloud_PaiRecService20221213::Client::backflowFeatureConsistencyCheckJobData(shared_ptr<BackflowFeatureConsistencyCheckJobDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return backflowFeatureConsistencyCheckJobDataWithOptions(request, headers, runtime);
}

CheckInstanceResourcesResponse Alibabacloud_PaiRecService20221213::Client::checkInstanceResourcesWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<CheckInstanceResourcesRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
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
    {"action", boost::any(string("CheckInstanceResources"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/action/checkresources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckInstanceResourcesResponse(callApi(params, req, runtime));
}

CheckInstanceResourcesResponse Alibabacloud_PaiRecService20221213::Client::checkInstanceResources(shared_ptr<string> InstanceId, shared_ptr<CheckInstanceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkInstanceResourcesWithOptions(InstanceId, request, headers, runtime);
}

CheckTrafficControlTaskExpressionResponse Alibabacloud_PaiRecService20221213::Client::checkTrafficControlTaskExpressionWithOptions(shared_ptr<CheckTrafficControlTaskExpressionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableMetaId)) {
    query->insert(pair<string, string>("TableMetaId", *request->tableMetaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckTrafficControlTaskExpression"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/action/checkexpression"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckTrafficControlTaskExpressionResponse(callApi(params, req, runtime));
}

CheckTrafficControlTaskExpressionResponse Alibabacloud_PaiRecService20221213::Client::checkTrafficControlTaskExpression(shared_ptr<CheckTrafficControlTaskExpressionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return checkTrafficControlTaskExpressionWithOptions(request, headers, runtime);
}

CloneEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::cloneEngineConfigWithOptions(shared_ptr<string> EngineConfigId,
                                                                                                   shared_ptr<CloneEngineConfigRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configValue)) {
    body->insert(pair<string, string>("ConfigValue", *request->configValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneEngineConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EngineConfigId)) + string("/action/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneEngineConfigResponse(callApi(params, req, runtime));
}

CloneEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::cloneEngineConfig(shared_ptr<string> EngineConfigId, shared_ptr<CloneEngineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

CloneExperimentResponse Alibabacloud_PaiRecService20221213::Client::cloneExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                               shared_ptr<CloneExperimentRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/action/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneExperimentResponse(callApi(params, req, runtime));
}

CloneExperimentResponse Alibabacloud_PaiRecService20221213::Client::cloneExperiment(shared_ptr<string> ExperimentId, shared_ptr<CloneExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneExperimentWithOptions(ExperimentId, request, headers, runtime);
}

CloneExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::cloneExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                                                         shared_ptr<CloneExperimentGroupRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerId)) {
    body->insert(pair<string, string>("LayerId", *request->layerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentGroupId)) + string("/action/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneExperimentGroupResponse(callApi(params, req, runtime));
}

CloneExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::cloneExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<CloneExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

CloneFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::cloneFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<string> SourceFeatureConsistencyCheckJobConfigId,
                                                                                                                                           shared_ptr<CloneFeatureConsistencyCheckJobConfigRequest> request,
                                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneFeatureConsistencyCheckJobConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SourceFeatureConsistencyCheckJobConfigId)) + string("/action/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneFeatureConsistencyCheckJobConfigResponse(callApi(params, req, runtime));
}

CloneFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::cloneFeatureConsistencyCheckJobConfig(shared_ptr<string> SourceFeatureConsistencyCheckJobConfigId, shared_ptr<CloneFeatureConsistencyCheckJobConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneFeatureConsistencyCheckJobConfigWithOptions(SourceFeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

CloneLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::cloneLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                                                               shared_ptr<CloneLaboratoryRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cloneExperimentGroup)) {
    body->insert(pair<string, bool>("CloneExperimentGroup", *request->cloneExperimentGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LaboratoryId)) + string("/action/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneLaboratoryResponse(callApi(params, req, runtime));
}

CloneLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::cloneLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<CloneLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

CloneTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::cloneTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                               shared_ptr<CloneTrafficControlTaskRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloneTrafficControlTaskResponse(callApi(params, req, runtime));
}

CloneTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::cloneTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<CloneTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

CompareSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::compareSampleConsistencyJobWithOptions(shared_ptr<string> SampleConsistencyJobId,
                                                                                                                       shared_ptr<CompareSampleConsistencyJobRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompareSampleConsistencyJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SampleConsistencyJobId)) + string("/action/compare"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompareSampleConsistencyJobResponse(callApi(params, req, runtime));
}

CompareSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::compareSampleConsistencyJob(shared_ptr<string> SampleConsistencyJobId, shared_ptr<CompareSampleConsistencyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return compareSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

CreateABMetricResponse Alibabacloud_PaiRecService20221213::Client::createABMetricWithOptions(shared_ptr<CreateABMetricRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    body->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leftMetricId)) {
    body->insert(pair<string, string>("LeftMetricId", *request->leftMetricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtime)) {
    body->insert(pair<string, bool>("Realtime", *request->realtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultResourceId)) {
    body->insert(pair<string, string>("ResultResourceId", *request->resultResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rightMetricId)) {
    body->insert(pair<string, string>("RightMetricId", *request->rightMetricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statisticsCycle)) {
    body->insert(pair<string, long>("StatisticsCycle", *request->statisticsCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableMetaId)) {
    body->insert(pair<string, string>("TableMetaId", *request->tableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABMetric"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetrics"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABMetricResponse(callApi(params, req, runtime));
}

CreateABMetricResponse Alibabacloud_PaiRecService20221213::Client::createABMetric(shared_ptr<CreateABMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABMetricWithOptions(request, headers, runtime);
}

CreateABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::createABMetricGroupWithOptions(shared_ptr<CreateABMetricGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ABMetricIds)) {
    body->insert(pair<string, string>("ABMetricIds", *request->ABMetricIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtime)) {
    body->insert(pair<string, bool>("Realtime", *request->realtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateABMetricGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetricgroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateABMetricGroupResponse(callApi(params, req, runtime));
}

CreateABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::createABMetricGroup(shared_ptr<CreateABMetricGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createABMetricGroupWithOptions(request, headers, runtime);
}

CreateCalculationJobsResponse Alibabacloud_PaiRecService20221213::Client::createCalculationJobsWithOptions(shared_ptr<CreateCalculationJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ABMetricIds)) {
    body->insert(pair<string, string>("ABMetricIds", *request->ABMetricIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCalculationJobs"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/batch/calculationjobs/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCalculationJobsResponse(callApi(params, req, runtime));
}

CreateCalculationJobsResponse Alibabacloud_PaiRecService20221213::Client::createCalculationJobs(shared_ptr<CreateCalculationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCalculationJobsWithOptions(request, headers, runtime);
}

CreateCrowdResponse Alibabacloud_PaiRecService20221213::Client::createCrowdWithOptions(shared_ptr<CreateCrowdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->users)) {
    body->insert(pair<string, string>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCrowd"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCrowdResponse(callApi(params, req, runtime));
}

CreateCrowdResponse Alibabacloud_PaiRecService20221213::Client::createCrowd(shared_ptr<CreateCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCrowdWithOptions(request, headers, runtime);
}

CreateEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::createEngineConfigWithOptions(shared_ptr<CreateEngineConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configValue)) {
    body->insert(pair<string, string>("ConfigValue", *request->configValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEngineConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEngineConfigResponse(callApi(params, req, runtime));
}

CreateEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::createEngineConfig(shared_ptr<CreateEngineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createEngineConfigWithOptions(request, headers, runtime);
}

CreateExperimentResponse Alibabacloud_PaiRecService20221213::Client::createExperimentWithOptions(shared_ptr<CreateExperimentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugCrowdId)) {
    body->insert(pair<string, string>("DebugCrowdId", *request->debugCrowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugUsers)) {
    body->insert(pair<string, string>("DebugUsers", *request->debugUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experimentGroupId)) {
    body->insert(pair<string, string>("ExperimentGroupId", *request->experimentGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowPercent)) {
    body->insert(pair<string, long>("FlowPercent", *request->flowPercent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExperimentResponse(callApi(params, req, runtime));
}

CreateExperimentResponse Alibabacloud_PaiRecService20221213::Client::createExperiment(shared_ptr<CreateExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createExperimentWithOptions(request, headers, runtime);
}

CreateExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::createExperimentGroupWithOptions(shared_ptr<CreateExperimentGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crowdId)) {
    body->insert(pair<string, string>("CrowdId", *request->crowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crowdTargetType)) {
    body->insert(pair<string, string>("CrowdTargetType", *request->crowdTargetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugCrowdId)) {
    body->insert(pair<string, string>("DebugCrowdId", *request->debugCrowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugUsers)) {
    body->insert(pair<string, string>("DebugUsers", *request->debugUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distributionTimeDuration)) {
    body->insert(pair<string, long>("DistributionTimeDuration", *request->distributionTimeDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionType)) {
    body->insert(pair<string, string>("DistributionType", *request->distributionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    body->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerId)) {
    body->insert(pair<string, string>("LayerId", *request->layerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needAA)) {
    body->insert(pair<string, bool>("NeedAA", *request->needAA));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->randomFlow)) {
    body->insert(pair<string, long>("RandomFlow", *request->randomFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedBuckets)) {
    body->insert(pair<string, string>("ReservedBuckets", *request->reservedBuckets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExperimentGroupResponse(callApi(params, req, runtime));
}

CreateExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::createExperimentGroup(shared_ptr<CreateExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createExperimentGroupWithOptions(request, headers, runtime);
}

CreateFeatureConsistencyCheckJobResponse Alibabacloud_PaiRecService20221213::Client::createFeatureConsistencyCheckJobWithOptions(shared_ptr<CreateFeatureConsistencyCheckJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureConsistencyCheckJobConfigId)) {
    body->insert(pair<string, string>("FeatureConsistencyCheckJobConfigId", *request->featureConsistencyCheckJobConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingDuration)) {
    body->insert(pair<string, long>("SamplingDuration", *request->samplingDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFeatureConsistencyCheckJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFeatureConsistencyCheckJobResponse(callApi(params, req, runtime));
}

CreateFeatureConsistencyCheckJobResponse Alibabacloud_PaiRecService20221213::Client::createFeatureConsistencyCheckJob(shared_ptr<CreateFeatureConsistencyCheckJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFeatureConsistencyCheckJobWithOptions(request, headers, runtime);
}

CreateFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::createFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<CreateFeatureConsistencyCheckJobConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->compareFeature)) {
    body->insert(pair<string, bool>("CompareFeature", *request->compareFeature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetId)) {
    body->insert(pair<string, string>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetMountPath)) {
    body->insert(pair<string, string>("DatasetMountPath", *request->datasetMountPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetType)) {
    body->insert(pair<string, string>("DatasetType", *request->datasetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetUri)) {
    body->insert(pair<string, string>("DatasetUri", *request->datasetUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRoute)) {
    body->insert(pair<string, string>("DefaultRoute", *request->defaultRoute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easServiceName)) {
    body->insert(pair<string, string>("EasServiceName", *request->easServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easyRecPackagePath)) {
    body->insert(pair<string, string>("EasyRecPackagePath", *request->easyRecPackagePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easyRecVersion)) {
    body->insert(pair<string, string>("EasyRecVersion", *request->easyRecVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureDisplayExclude)) {
    body->insert(pair<string, string>("FeatureDisplayExclude", *request->featureDisplayExclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureLandingResourceId)) {
    body->insert(pair<string, string>("FeatureLandingResourceId", *request->featureLandingResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featurePriority)) {
    body->insert(pair<string, string>("FeaturePriority", *request->featurePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreItemId)) {
    body->insert(pair<string, string>("FeatureStoreItemId", *request->featureStoreItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreModelId)) {
    body->insert(pair<string, string>("FeatureStoreModelId", *request->featureStoreModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreProjectId)) {
    body->insert(pair<string, string>("FeatureStoreProjectId", *request->featureStoreProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreProjectName)) {
    body->insert(pair<string, string>("FeatureStoreProjectName", *request->featureStoreProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreSeqFeatureView)) {
    body->insert(pair<string, string>("FeatureStoreSeqFeatureView", *request->featureStoreSeqFeatureView));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreUserId)) {
    body->insert(pair<string, string>("FeatureStoreUserId", *request->featureStoreUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fgJarVersion)) {
    body->insert(pair<string, string>("FgJarVersion", *request->fgJarVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fgJsonFileName)) {
    body->insert(pair<string, string>("FgJsonFileName", *request->fgJsonFileName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->generateZip)) {
    body->insert(pair<string, bool>("GenerateZip", *request->generateZip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdField)) {
    body->insert(pair<string, string>("ItemIdField", *request->itemIdField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTable)) {
    body->insert(pair<string, string>("ItemTable", *request->itemTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTablePartitionField)) {
    body->insert(pair<string, string>("ItemTablePartitionField", *request->itemTablePartitionField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTablePartitionFieldFormat)) {
    body->insert(pair<string, string>("ItemTablePartitionFieldFormat", *request->itemTablePartitionFieldFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossResourceId)) {
    body->insert(pair<string, string>("OssResourceId", *request->ossResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictWorkerCount)) {
    body->insert(pair<string, long>("PredictWorkerCount", *request->predictWorkerCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictWorkerCpu)) {
    body->insert(pair<string, long>("PredictWorkerCpu", *request->predictWorkerCpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictWorkerMemory)) {
    body->insert(pair<string, long>("PredictWorkerMemory", *request->predictWorkerMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceConfig)) {
    body->insert(pair<string, string>("ResourceConfig", *request->resourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->sampleRate)) {
    body->insert(pair<string, double>("SampleRate", *request->sampleRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    body->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchId)) {
    body->insert(pair<string, string>("SwitchId", *request->switchId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useFeatureStore)) {
    body->insert(pair<string, bool>("UseFeatureStore", *request->useFeatureStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdField)) {
    body->insert(pair<string, string>("UserIdField", *request->userIdField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTable)) {
    body->insert(pair<string, string>("UserTable", *request->userTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTablePartitionField)) {
    body->insert(pair<string, string>("UserTablePartitionField", *request->userTablePartitionField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTablePartitionFieldFormat)) {
    body->insert(pair<string, string>("UserTablePartitionFieldFormat", *request->userTablePartitionFieldFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowName)) {
    body->insert(pair<string, string>("WorkflowName", *request->workflowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFeatureConsistencyCheckJobConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobconfigs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFeatureConsistencyCheckJobConfigResponse(callApi(params, req, runtime));
}

CreateFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::createFeatureConsistencyCheckJobConfig(shared_ptr<CreateFeatureConsistencyCheckJobConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createFeatureConsistencyCheckJobConfigWithOptions(request, headers, runtime);
}

CreateInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::createInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<CreateInstanceResourceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    body->insert(pair<string, string>("Group", *request->group));
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
    {"action", boost::any(string("CreateInstanceResource"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResourceResponse(callApi(params, req, runtime));
}

CreateInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::createInstanceResource(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceResourceWithOptions(InstanceId, request, headers, runtime);
}

CreateLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::createLaboratoryWithOptions(shared_ptr<CreateLaboratoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bucketCount)) {
    body->insert(pair<string, long>("BucketCount", *request->bucketCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketType)) {
    body->insert(pair<string, string>("BucketType", *request->bucketType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buckets)) {
    body->insert(pair<string, string>("Buckets", *request->buckets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugCrowdId)) {
    body->insert(pair<string, string>("DebugCrowdId", *request->debugCrowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugUsers)) {
    body->insert(pair<string, string>("DebugUsers", *request->debugUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    body->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLaboratoryResponse(callApi(params, req, runtime));
}

CreateLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::createLaboratory(shared_ptr<CreateLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLaboratoryWithOptions(request, headers, runtime);
}

CreateLayerResponse Alibabacloud_PaiRecService20221213::Client::createLayerWithOptions(shared_ptr<CreateLayerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->laboratoryId)) {
    body->insert(pair<string, string>("LaboratoryId", *request->laboratoryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLayer"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/layers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLayerResponse(callApi(params, req, runtime));
}

CreateLayerResponse Alibabacloud_PaiRecService20221213::Client::createLayer(shared_ptr<CreateLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLayerWithOptions(request, headers, runtime);
}

CreateParamResponse Alibabacloud_PaiRecService20221213::Client::createParamWithOptions(shared_ptr<CreateParamRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateParam"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/params"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateParamResponse(callApi(params, req, runtime));
}

CreateParamResponse Alibabacloud_PaiRecService20221213::Client::createParam(shared_ptr<CreateParamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createParamWithOptions(request, headers, runtime);
}

CreateResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::createResourceRuleWithOptions(shared_ptr<CreateResourceRuleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricOperationType)) {
    body->insert(pair<string, string>("MetricOperationType", *request->metricOperationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricPullInfo)) {
    body->insert(pair<string, string>("MetricPullInfo", *request->metricPullInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricPullPeriod)) {
    body->insert(pair<string, string>("MetricPullPeriod", *request->metricPullPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleComputingDefinition)) {
    body->insert(pair<string, string>("RuleComputingDefinition", *request->ruleComputingDefinition));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceRuleRequestRuleItems>>(request->ruleItems)) {
    body->insert(pair<string, vector<CreateResourceRuleRequestRuleItems>>("RuleItems", *request->ruleItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceRule"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceRuleResponse(callApi(params, req, runtime));
}

CreateResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::createResourceRule(shared_ptr<CreateResourceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceRuleWithOptions(request, headers, runtime);
}

CreateResourceRuleItemResponse Alibabacloud_PaiRecService20221213::Client::createResourceRuleItemWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                             shared_ptr<CreateResourceRuleItemRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxValue)) {
    body->insert(pair<string, double>("MaxValue", *request->maxValue));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minValue)) {
    body->insert(pair<string, double>("MinValue", *request->minValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->value)) {
    body->insert(pair<string, double>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceRuleItem"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)) + string("/items"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceRuleItemResponse(callApi(params, req, runtime));
}

CreateResourceRuleItemResponse Alibabacloud_PaiRecService20221213::Client::createResourceRuleItem(shared_ptr<string> ResourceRuleId, shared_ptr<CreateResourceRuleItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceRuleItemWithOptions(ResourceRuleId, request, headers, runtime);
}

CreateSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::createSampleConsistencyJobWithOptions(shared_ptr<CreateSampleConsistencyJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    body->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easModelServiceName)) {
    body->insert(pair<string, string>("EasModelServiceName", *request->easModelServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureSaveResourceId)) {
    body->insert(pair<string, string>("FeatureSaveResourceId", *request->featureSaveResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdField)) {
    body->insert(pair<string, string>("ItemIdField", *request->itemIdField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partitionField)) {
    body->insert(pair<string, string>("PartitionField", *request->partitionField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partitionFieldFormat)) {
    body->insert(pair<string, string>("PartitionFieldFormat", *request->partitionFieldFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestIdField)) {
    body->insert(pair<string, string>("RequestIdField", *request->requestIdField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleRate)) {
    body->insert(pair<string, string>("SampleRate", *request->sampleRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sampleTableName)) {
    body->insert(pair<string, string>("SampleTableName", *request->sampleTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdField)) {
    body->insert(pair<string, string>("UserIdField", *request->userIdField));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSampleConsistencyJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSampleConsistencyJobResponse(callApi(params, req, runtime));
}

CreateSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::createSampleConsistencyJob(shared_ptr<CreateSampleConsistencyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSampleConsistencyJobWithOptions(request, headers, runtime);
}

CreateSceneResponse Alibabacloud_PaiRecService20221213::Client::createSceneWithOptions(shared_ptr<CreateSceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSceneRequestFlows>>(request->flows)) {
    body->insert(pair<string, vector<CreateSceneRequestFlows>>("Flows", *request->flows));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScene"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/scenes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSceneResponse(callApi(params, req, runtime));
}

CreateSceneResponse Alibabacloud_PaiRecService20221213::Client::createScene(shared_ptr<CreateSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSceneWithOptions(request, headers, runtime);
}

CreateSubCrowdResponse Alibabacloud_PaiRecService20221213::Client::createSubCrowdWithOptions(shared_ptr<string> CrowdId,
                                                                                             shared_ptr<CreateSubCrowdRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->users)) {
    body->insert(pair<string, string>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubCrowd"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)) + string("/subcrowds"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubCrowdResponse(callApi(params, req, runtime));
}

CreateSubCrowdResponse Alibabacloud_PaiRecService20221213::Client::createSubCrowd(shared_ptr<string> CrowdId, shared_ptr<CreateSubCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSubCrowdWithOptions(CrowdId, request, headers, runtime);
}

CreateTableMetaResponse Alibabacloud_PaiRecService20221213::Client::createTableMetaWithOptions(shared_ptr<CreateTableMetaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTableMetaRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<CreateTableMetaRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->module)) {
    body->insert(pair<string, string>("Module", *request->module));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTableMeta"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tablemetas"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTableMetaResponse(callApi(params, req, runtime));
}

CreateTableMetaResponse Alibabacloud_PaiRecService20221213::Client::createTableMeta(shared_ptr<CreateTableMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTableMetaWithOptions(request, headers, runtime);
}

CreateTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::createTrafficControlTargetWithOptions(shared_ptr<CreateTrafficControlTargetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->event)) {
    body->insert(pair<string, string>("Event", *request->event));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionArray)) {
    body->insert(pair<string, string>("ItemConditionArray", *request->itemConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionExpress)) {
    body->insert(pair<string, string>("ItemConditionExpress", *request->itemConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionType)) {
    body->insert(pair<string, string>("ItemConditionType", *request->itemConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newProductRegulation)) {
    body->insert(pair<string, bool>("NewProductRegulation", *request->newProductRegulation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallName)) {
    body->insert(pair<string, string>("RecallName", *request->recallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisPeriod)) {
    body->insert(pair<string, string>("StatisPeriod", *request->statisPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toleranceValue)) {
    body->insert(pair<string, long>("ToleranceValue", *request->toleranceValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlTaskId)) {
    body->insert(pair<string, string>("TrafficControlTaskId", *request->trafficControlTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->value)) {
    body->insert(pair<string, double>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrafficControlTargetResponse(callApi(params, req, runtime));
}

CreateTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::createTrafficControlTarget(shared_ptr<CreateTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTrafficControlTargetWithOptions(request, headers, runtime);
}

CreateTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::createTrafficControlTaskWithOptions(shared_ptr<CreateTrafficControlTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->behaviorTableMetaId)) {
    body->insert(pair<string, string>("BehaviorTableMetaId", *request->behaviorTableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlGranularity)) {
    body->insert(pair<string, string>("ControlGranularity", *request->controlGranularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlLogic)) {
    body->insert(pair<string, string>("ControlLogic", *request->controlLogic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlType)) {
    body->insert(pair<string, string>("ControlType", *request->controlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionTime)) {
    body->insert(pair<string, string>("ExecutionTime", *request->executionTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flinkResourceId)) {
    body->insert(pair<string, string>("FlinkResourceId", *request->flinkResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionArray)) {
    body->insert(pair<string, string>("ItemConditionArray", *request->itemConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionExpress)) {
    body->insert(pair<string, string>("ItemConditionExpress", *request->itemConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionType)) {
    body->insert(pair<string, string>("ItemConditionType", *request->itemConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTableMetaId)) {
    body->insert(pair<string, string>("ItemTableMetaId", *request->itemTableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preExperimentIds)) {
    body->insert(pair<string, string>("PreExperimentIds", *request->preExperimentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodExperimentIds)) {
    body->insert(pair<string, string>("ProdExperimentIds", *request->prodExperimentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    body->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisBehaviorConditionArray)) {
    body->insert(pair<string, string>("StatisBehaviorConditionArray", *request->statisBehaviorConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisBehaviorConditionExpress)) {
    body->insert(pair<string, string>("StatisBehaviorConditionExpress", *request->statisBehaviorConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisBehaviorConditionType)) {
    body->insert(pair<string, string>("StatisBehaviorConditionType", *request->statisBehaviorConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTrafficControlTaskRequestTrafficControlTargets>>(request->trafficControlTargets)) {
    body->insert(pair<string, vector<CreateTrafficControlTaskRequestTrafficControlTargets>>("TrafficControlTargets", *request->trafficControlTargets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConditionArray)) {
    body->insert(pair<string, string>("UserConditionArray", *request->userConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConditionExpress)) {
    body->insert(pair<string, string>("UserConditionExpress", *request->userConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConditionType)) {
    body->insert(pair<string, string>("UserConditionType", *request->userConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTableMetaId)) {
    body->insert(pair<string, string>("UserTableMetaId", *request->userTableMetaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrafficControlTaskResponse(callApi(params, req, runtime));
}

CreateTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::createTrafficControlTask(shared_ptr<CreateTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTrafficControlTaskWithOptions(request, headers, runtime);
}

DebugResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::debugResourceRuleWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                   shared_ptr<DebugResourceRuleRequest> tmpReq,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DebugResourceRuleShrinkRequest> request = make_shared<DebugResourceRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->metricInfo)) {
    request->metricInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->metricInfo, make_shared<string>("MetricInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricInfoShrink)) {
    query->insert(pair<string, string>("MetricInfo", *request->metricInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DebugResourceRule"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)) + string("/action/debug"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DebugResourceRuleResponse(callApi(params, req, runtime));
}

DebugResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::debugResourceRule(shared_ptr<string> ResourceRuleId, shared_ptr<DebugResourceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return debugResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

DeleteABMetricResponse Alibabacloud_PaiRecService20221213::Client::deleteABMetricWithOptions(shared_ptr<string> ABMetricId,
                                                                                             shared_ptr<DeleteABMetricRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABMetric"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetrics/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABMetricResponse(callApi(params, req, runtime));
}

DeleteABMetricResponse Alibabacloud_PaiRecService20221213::Client::deleteABMetric(shared_ptr<string> ABMetricId, shared_ptr<DeleteABMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABMetricWithOptions(ABMetricId, request, headers, runtime);
}

DeleteABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::deleteABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                                                                       shared_ptr<DeleteABMetricGroupRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteABMetricGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetricgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricGroupId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteABMetricGroupResponse(callApi(params, req, runtime));
}

DeleteABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::deleteABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<DeleteABMetricGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

DeleteCrowdResponse Alibabacloud_PaiRecService20221213::Client::deleteCrowdWithOptions(shared_ptr<string> CrowdId,
                                                                                       shared_ptr<DeleteCrowdRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCrowd"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCrowdResponse(callApi(params, req, runtime));
}

DeleteCrowdResponse Alibabacloud_PaiRecService20221213::Client::deleteCrowd(shared_ptr<string> CrowdId, shared_ptr<DeleteCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCrowdWithOptions(CrowdId, request, headers, runtime);
}

DeleteEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::deleteEngineConfigWithOptions(shared_ptr<string> EngineConfigId,
                                                                                                     shared_ptr<DeleteEngineConfigRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEngineConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EngineConfigId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEngineConfigResponse(callApi(params, req, runtime));
}

DeleteEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::deleteEngineConfig(shared_ptr<string> EngineConfigId, shared_ptr<DeleteEngineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

DeleteExperimentResponse Alibabacloud_PaiRecService20221213::Client::deleteExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                                 shared_ptr<DeleteExperimentRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExperimentResponse(callApi(params, req, runtime));
}

DeleteExperimentResponse Alibabacloud_PaiRecService20221213::Client::deleteExperiment(shared_ptr<string> ExperimentId, shared_ptr<DeleteExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteExperimentWithOptions(ExperimentId, request, headers, runtime);
}

DeleteExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::deleteExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                                                           shared_ptr<DeleteExperimentGroupRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentGroupId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExperimentGroupResponse(callApi(params, req, runtime));
}

DeleteExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::deleteExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<DeleteExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

DeleteInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::deleteInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> ResourceId,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstanceResource"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResourceResponse(callApi(params, req, runtime));
}

DeleteInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::deleteInstanceResource(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteInstanceResourceWithOptions(InstanceId, ResourceId, headers, runtime);
}

DeleteLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::deleteLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                                                                 shared_ptr<DeleteLaboratoryRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LaboratoryId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLaboratoryResponse(callApi(params, req, runtime));
}

DeleteLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::deleteLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<DeleteLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

DeleteLayerResponse Alibabacloud_PaiRecService20221213::Client::deleteLayerWithOptions(shared_ptr<string> LayerId,
                                                                                       shared_ptr<DeleteLayerRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLayer"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LayerId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLayerResponse(callApi(params, req, runtime));
}

DeleteLayerResponse Alibabacloud_PaiRecService20221213::Client::deleteLayer(shared_ptr<string> LayerId, shared_ptr<DeleteLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLayerWithOptions(LayerId, request, headers, runtime);
}

DeleteParamResponse Alibabacloud_PaiRecService20221213::Client::deleteParamWithOptions(shared_ptr<string> ParamId,
                                                                                       shared_ptr<DeleteParamRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteParam"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/params/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ParamId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteParamResponse(callApi(params, req, runtime));
}

DeleteParamResponse Alibabacloud_PaiRecService20221213::Client::deleteParam(shared_ptr<string> ParamId, shared_ptr<DeleteParamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteParamWithOptions(ParamId, request, headers, runtime);
}

DeleteResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::deleteResourceRuleWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                     shared_ptr<DeleteResourceRuleRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceRule"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceRuleResponse(callApi(params, req, runtime));
}

DeleteResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::deleteResourceRule(shared_ptr<string> ResourceRuleId, shared_ptr<DeleteResourceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

DeleteResourceRuleItemResponse Alibabacloud_PaiRecService20221213::Client::deleteResourceRuleItemWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                             shared_ptr<string> ResourceRuleItemId,
                                                                                                             shared_ptr<DeleteResourceRuleItemRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceRuleItem"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)) + string("/items/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleItemId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceRuleItemResponse(callApi(params, req, runtime));
}

DeleteResourceRuleItemResponse Alibabacloud_PaiRecService20221213::Client::deleteResourceRuleItem(shared_ptr<string> ResourceRuleId, shared_ptr<string> ResourceRuleItemId, shared_ptr<DeleteResourceRuleItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceRuleItemWithOptions(ResourceRuleId, ResourceRuleItemId, request, headers, runtime);
}

DeleteSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::deleteSampleConsistencyJobWithOptions(shared_ptr<string> SampleConsistencyJobId,
                                                                                                                     shared_ptr<DeleteSampleConsistencyJobRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSampleConsistencyJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SampleConsistencyJobId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSampleConsistencyJobResponse(callApi(params, req, runtime));
}

DeleteSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::deleteSampleConsistencyJob(shared_ptr<string> SampleConsistencyJobId, shared_ptr<DeleteSampleConsistencyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

DeleteSceneResponse Alibabacloud_PaiRecService20221213::Client::deleteSceneWithOptions(shared_ptr<string> SceneId,
                                                                                       shared_ptr<DeleteSceneRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScene"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SceneId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSceneResponse(callApi(params, req, runtime));
}

DeleteSceneResponse Alibabacloud_PaiRecService20221213::Client::deleteScene(shared_ptr<string> SceneId, shared_ptr<DeleteSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSceneWithOptions(SceneId, request, headers, runtime);
}

DeleteSubCrowdResponse Alibabacloud_PaiRecService20221213::Client::deleteSubCrowdWithOptions(shared_ptr<string> CrowdId,
                                                                                             shared_ptr<string> SubCrowdId,
                                                                                             shared_ptr<DeleteSubCrowdRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubCrowd"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)) + string("/subcrowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SubCrowdId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubCrowdResponse(callApi(params, req, runtime));
}

DeleteSubCrowdResponse Alibabacloud_PaiRecService20221213::Client::deleteSubCrowd(shared_ptr<string> CrowdId, shared_ptr<string> SubCrowdId, shared_ptr<DeleteSubCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSubCrowdWithOptions(CrowdId, SubCrowdId, request, headers, runtime);
}

DeleteTableMetaResponse Alibabacloud_PaiRecService20221213::Client::deleteTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                                                                               shared_ptr<DeleteTableMetaRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTableMeta"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tablemetas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TableMetaId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTableMetaResponse(callApi(params, req, runtime));
}

DeleteTableMetaResponse Alibabacloud_PaiRecService20221213::Client::deleteTableMeta(shared_ptr<string> TableMetaId, shared_ptr<DeleteTableMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

DeleteTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::deleteTrafficControlTargetWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                     shared_ptr<DeleteTrafficControlTargetRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficControlTargetResponse(callApi(params, req, runtime));
}

DeleteTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::deleteTrafficControlTarget(shared_ptr<string> TrafficControlTargetId, shared_ptr<DeleteTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

DeleteTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::deleteTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                 shared_ptr<DeleteTrafficControlTaskRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficControlTaskResponse(callApi(params, req, runtime));
}

DeleteTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::deleteTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<DeleteTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

GenerateTrafficControlTaskCodeResponse Alibabacloud_PaiRecService20221213::Client::generateTrafficControlTaskCodeWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                             shared_ptr<GenerateTrafficControlTaskCodeRequest> request,
                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateTrafficControlTaskCode"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/generatecode"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateTrafficControlTaskCodeResponse(callApi(params, req, runtime));
}

GenerateTrafficControlTaskCodeResponse Alibabacloud_PaiRecService20221213::Client::generateTrafficControlTaskCode(shared_ptr<string> TrafficControlTaskId, shared_ptr<GenerateTrafficControlTaskCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateTrafficControlTaskCodeWithOptions(TrafficControlTaskId, request, headers, runtime);
}

GenerateTrafficControlTaskConfigResponse Alibabacloud_PaiRecService20221213::Client::generateTrafficControlTaskConfigWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                                 shared_ptr<GenerateTrafficControlTaskConfigRequest> request,
                                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateTrafficControlTaskConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/generateconfig"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateTrafficControlTaskConfigResponse(callApi(params, req, runtime));
}

GenerateTrafficControlTaskConfigResponse Alibabacloud_PaiRecService20221213::Client::generateTrafficControlTaskConfig(shared_ptr<string> TrafficControlTaskId, shared_ptr<GenerateTrafficControlTaskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateTrafficControlTaskConfigWithOptions(TrafficControlTaskId, request, headers, runtime);
}

GetABMetricResponse Alibabacloud_PaiRecService20221213::Client::getABMetricWithOptions(shared_ptr<string> ABMetricId,
                                                                                       shared_ptr<GetABMetricRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetABMetric"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetrics/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetABMetricResponse(callApi(params, req, runtime));
}

GetABMetricResponse Alibabacloud_PaiRecService20221213::Client::getABMetric(shared_ptr<string> ABMetricId, shared_ptr<GetABMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getABMetricWithOptions(ABMetricId, request, headers, runtime);
}

GetABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::getABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                                                                 shared_ptr<GetABMetricGroupRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetABMetricGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetricgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricGroupId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetABMetricGroupResponse(callApi(params, req, runtime));
}

GetABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::getABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<GetABMetricGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

GetCalculationJobResponse Alibabacloud_PaiRecService20221213::Client::getCalculationJobWithOptions(shared_ptr<string> CalculationJobId,
                                                                                                   shared_ptr<GetCalculationJobRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCalculationJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/calculationjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CalculationJobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCalculationJobResponse(callApi(params, req, runtime));
}

GetCalculationJobResponse Alibabacloud_PaiRecService20221213::Client::getCalculationJob(shared_ptr<string> CalculationJobId, shared_ptr<GetCalculationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCalculationJobWithOptions(CalculationJobId, request, headers, runtime);
}

GetEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::getEngineConfigWithOptions(shared_ptr<string> EngineConfigId,
                                                                                               shared_ptr<GetEngineConfigRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEngineConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EngineConfigId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEngineConfigResponse(callApi(params, req, runtime));
}

GetEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::getEngineConfig(shared_ptr<string> EngineConfigId, shared_ptr<GetEngineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

GetExperimentResponse Alibabacloud_PaiRecService20221213::Client::getExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                           shared_ptr<GetExperimentRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExperimentResponse(callApi(params, req, runtime));
}

GetExperimentResponse Alibabacloud_PaiRecService20221213::Client::getExperiment(shared_ptr<string> ExperimentId, shared_ptr<GetExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getExperimentWithOptions(ExperimentId, request, headers, runtime);
}

GetExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::getExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                                                     shared_ptr<GetExperimentGroupRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentGroupId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExperimentGroupResponse(callApi(params, req, runtime));
}

GetExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::getExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<GetExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

GetFeatureConsistencyCheckJobResponse Alibabacloud_PaiRecService20221213::Client::getFeatureConsistencyCheckJobWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                                                           shared_ptr<GetFeatureConsistencyCheckJobRequest> request,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFeatureConsistencyCheckJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureConsistencyCheckJobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFeatureConsistencyCheckJobResponse(callApi(params, req, runtime));
}

GetFeatureConsistencyCheckJobResponse Alibabacloud_PaiRecService20221213::Client::getFeatureConsistencyCheckJob(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<GetFeatureConsistencyCheckJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFeatureConsistencyCheckJobWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

GetFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::getFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<string> FeatureConsistencyCheckJobConfigId,
                                                                                                                                       shared_ptr<GetFeatureConsistencyCheckJobConfigRequest> request,
                                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFeatureConsistencyCheckJobConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureConsistencyCheckJobConfigId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFeatureConsistencyCheckJobConfigResponse(callApi(params, req, runtime));
}

GetFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::getFeatureConsistencyCheckJobConfig(shared_ptr<string> FeatureConsistencyCheckJobConfigId, shared_ptr<GetFeatureConsistencyCheckJobConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFeatureConsistencyCheckJobConfigWithOptions(FeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

GetInstanceResponse Alibabacloud_PaiRecService20221213::Client::getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2022-12-13"))},
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

GetInstanceResponse Alibabacloud_PaiRecService20221213::Client::getInstance(shared_ptr<string> InstanceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceWithOptions(InstanceId, headers, runtime);
}

GetInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::getInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                       shared_ptr<string> ResourceId,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceResource"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResourceResponse(callApi(params, req, runtime));
}

GetInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::getInstanceResource(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceResourceWithOptions(InstanceId, ResourceId, headers, runtime);
}

GetInstanceResourceTableResponse Alibabacloud_PaiRecService20221213::Client::getInstanceResourceTableWithOptions(shared_ptr<string> InstanceId,
                                                                                                                 shared_ptr<string> ResourceId,
                                                                                                                 shared_ptr<string> TableName,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceResourceTable"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/tables/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TableName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResourceTableResponse(callApi(params, req, runtime));
}

GetInstanceResourceTableResponse Alibabacloud_PaiRecService20221213::Client::getInstanceResourceTable(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId, shared_ptr<string> TableName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getInstanceResourceTableWithOptions(InstanceId, ResourceId, TableName, headers, runtime);
}

GetLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::getLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                                                           shared_ptr<GetLaboratoryRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LaboratoryId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLaboratoryResponse(callApi(params, req, runtime));
}

GetLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::getLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<GetLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

GetLayerResponse Alibabacloud_PaiRecService20221213::Client::getLayerWithOptions(shared_ptr<string> LayerId,
                                                                                 shared_ptr<GetLayerRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLayer"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LayerId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLayerResponse(callApi(params, req, runtime));
}

GetLayerResponse Alibabacloud_PaiRecService20221213::Client::getLayer(shared_ptr<string> LayerId, shared_ptr<GetLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLayerWithOptions(LayerId, request, headers, runtime);
}

GetResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::getResourceRuleWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                               shared_ptr<GetResourceRuleRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceRule"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceRuleResponse(callApi(params, req, runtime));
}

GetResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::getResourceRule(shared_ptr<string> ResourceRuleId, shared_ptr<GetResourceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

GetSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::getSampleConsistencyJobWithOptions(shared_ptr<string> SampleConsistencyJobId,
                                                                                                               shared_ptr<GetSampleConsistencyJobRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSampleConsistencyJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SampleConsistencyJobId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSampleConsistencyJobResponse(callApi(params, req, runtime));
}

GetSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::getSampleConsistencyJob(shared_ptr<string> SampleConsistencyJobId, shared_ptr<GetSampleConsistencyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

GetSceneResponse Alibabacloud_PaiRecService20221213::Client::getSceneWithOptions(shared_ptr<string> SceneId,
                                                                                 shared_ptr<GetSceneRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScene"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SceneId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneResponse(callApi(params, req, runtime));
}

GetSceneResponse Alibabacloud_PaiRecService20221213::Client::getScene(shared_ptr<string> SceneId, shared_ptr<GetSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSceneWithOptions(SceneId, request, headers, runtime);
}

GetSubCrowdResponse Alibabacloud_PaiRecService20221213::Client::getSubCrowdWithOptions(shared_ptr<string> CrowdId,
                                                                                       shared_ptr<string> SubCrowdId,
                                                                                       shared_ptr<GetSubCrowdRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubCrowd"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)) + string("/subcrowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SubCrowdId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubCrowdResponse(callApi(params, req, runtime));
}

GetSubCrowdResponse Alibabacloud_PaiRecService20221213::Client::getSubCrowd(shared_ptr<string> CrowdId, shared_ptr<string> SubCrowdId, shared_ptr<GetSubCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSubCrowdWithOptions(CrowdId, SubCrowdId, request, headers, runtime);
}

GetTableMetaResponse Alibabacloud_PaiRecService20221213::Client::getTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                                                                         shared_ptr<GetTableMetaRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTableMeta"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tablemetas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TableMetaId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTableMetaResponse(callApi(params, req, runtime));
}

GetTableMetaResponse Alibabacloud_PaiRecService20221213::Client::getTableMeta(shared_ptr<string> TableMetaId, shared_ptr<GetTableMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

GetTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::getTrafficControlTargetWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                               shared_ptr<GetTrafficControlTargetRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrafficControlTargetResponse(callApi(params, req, runtime));
}

GetTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::getTrafficControlTarget(shared_ptr<string> TrafficControlTargetId, shared_ptr<GetTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

GetTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::getTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                           shared_ptr<GetTrafficControlTaskRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->controlTargetFilter)) {
    query->insert(pair<string, string>("ControlTargetFilter", *request->controlTargetFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrafficControlTaskResponse(callApi(params, req, runtime));
}

GetTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::getTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<GetTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

GetTrafficControlTaskTrafficResponse Alibabacloud_PaiRecService20221213::Client::getTrafficControlTaskTrafficWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                         shared_ptr<GetTrafficControlTaskTrafficRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrafficControlTaskTraffic"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/trafficinfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrafficControlTaskTrafficResponse(callApi(params, req, runtime));
}

GetTrafficControlTaskTrafficResponse Alibabacloud_PaiRecService20221213::Client::getTrafficControlTaskTraffic(shared_ptr<string> TrafficControlTaskId, shared_ptr<GetTrafficControlTaskTrafficRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTrafficControlTaskTrafficWithOptions(TrafficControlTaskId, request, headers, runtime);
}

ListABMetricGroupsResponse Alibabacloud_PaiRecService20221213::Client::listABMetricGroupsWithOptions(shared_ptr<ListABMetricGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtime)) {
    query->insert(pair<string, bool>("Realtime", *request->realtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABMetricGroups"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetricgroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABMetricGroupsResponse(callApi(params, req, runtime));
}

ListABMetricGroupsResponse Alibabacloud_PaiRecService20221213::Client::listABMetricGroups(shared_ptr<ListABMetricGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABMetricGroupsWithOptions(request, headers, runtime);
}

ListABMetricsResponse Alibabacloud_PaiRecService20221213::Client::listABMetricsWithOptions(shared_ptr<ListABMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtime)) {
    query->insert(pair<string, bool>("Realtime", *request->realtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableMetaId)) {
    query->insert(pair<string, string>("TableMetaId", *request->tableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListABMetrics"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetrics"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListABMetricsResponse(callApi(params, req, runtime));
}

ListABMetricsResponse Alibabacloud_PaiRecService20221213::Client::listABMetrics(shared_ptr<ListABMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listABMetricsWithOptions(request, headers, runtime);
}

ListCalculationJobsResponse Alibabacloud_PaiRecService20221213::Client::listCalculationJobsWithOptions(shared_ptr<ListCalculationJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCalculationJobs"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/calculationjobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCalculationJobsResponse(callApi(params, req, runtime));
}

ListCalculationJobsResponse Alibabacloud_PaiRecService20221213::Client::listCalculationJobs(shared_ptr<ListCalculationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCalculationJobsWithOptions(request, headers, runtime);
}

ListCrowdUsersResponse Alibabacloud_PaiRecService20221213::Client::listCrowdUsersWithOptions(shared_ptr<string> CrowdId,
                                                                                             shared_ptr<ListCrowdUsersRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCrowdUsers"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCrowdUsersResponse(callApi(params, req, runtime));
}

ListCrowdUsersResponse Alibabacloud_PaiRecService20221213::Client::listCrowdUsers(shared_ptr<string> CrowdId, shared_ptr<ListCrowdUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCrowdUsersWithOptions(CrowdId, request, headers, runtime);
}

ListCrowdsResponse Alibabacloud_PaiRecService20221213::Client::listCrowdsWithOptions(shared_ptr<ListCrowdsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCrowds"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCrowdsResponse(callApi(params, req, runtime));
}

ListCrowdsResponse Alibabacloud_PaiRecService20221213::Client::listCrowds(shared_ptr<ListCrowdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCrowdsWithOptions(request, headers, runtime);
}

ListEngineConfigsResponse Alibabacloud_PaiRecService20221213::Client::listEngineConfigsWithOptions(shared_ptr<ListEngineConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEngineConfigs"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEngineConfigsResponse(callApi(params, req, runtime));
}

ListEngineConfigsResponse Alibabacloud_PaiRecService20221213::Client::listEngineConfigs(shared_ptr<ListEngineConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEngineConfigsWithOptions(request, headers, runtime);
}

ListExperimentGroupsResponse Alibabacloud_PaiRecService20221213::Client::listExperimentGroupsWithOptions(shared_ptr<ListExperimentGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerId)) {
    query->insert(pair<string, string>("LayerId", *request->layerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeEnd)) {
    query->insert(pair<string, string>("TimeRangeEnd", *request->timeRangeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRangeStart)) {
    query->insert(pair<string, string>("TimeRangeStart", *request->timeRangeStart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExperimentGroups"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExperimentGroupsResponse(callApi(params, req, runtime));
}

ListExperimentGroupsResponse Alibabacloud_PaiRecService20221213::Client::listExperimentGroups(shared_ptr<ListExperimentGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listExperimentGroupsWithOptions(request, headers, runtime);
}

ListExperimentsResponse Alibabacloud_PaiRecService20221213::Client::listExperimentsWithOptions(shared_ptr<ListExperimentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->experimentGroupId)) {
    query->insert(pair<string, string>("ExperimentGroupId", *request->experimentGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExperiments"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExperimentsResponse(callApi(params, req, runtime));
}

ListExperimentsResponse Alibabacloud_PaiRecService20221213::Client::listExperiments(shared_ptr<ListExperimentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listExperimentsWithOptions(request, headers, runtime);
}

ListFeatureConsistencyCheckJobConfigsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobConfigsWithOptions(shared_ptr<ListFeatureConsistencyCheckJobConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureConsistencyCheckJobConfigs"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobconfigs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureConsistencyCheckJobConfigsResponse(callApi(params, req, runtime));
}

ListFeatureConsistencyCheckJobConfigsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobConfigs(shared_ptr<ListFeatureConsistencyCheckJobConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureConsistencyCheckJobConfigsWithOptions(request, headers, runtime);
}

ListFeatureConsistencyCheckJobFeatureReportsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobFeatureReportsWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                                                                                         shared_ptr<ListFeatureConsistencyCheckJobFeatureReportsRequest> request,
                                                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logItemId)) {
    query->insert(pair<string, string>("LogItemId", *request->logItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logRequestId)) {
    query->insert(pair<string, string>("LogRequestId", *request->logRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logUserId)) {
    query->insert(pair<string, string>("LogUserId", *request->logUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureConsistencyCheckJobFeatureReports"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureConsistencyCheckJobId)) + string("/featurereports"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureConsistencyCheckJobFeatureReportsResponse(callApi(params, req, runtime));
}

ListFeatureConsistencyCheckJobFeatureReportsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobFeatureReports(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<ListFeatureConsistencyCheckJobFeatureReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureConsistencyCheckJobFeatureReportsWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

ListFeatureConsistencyCheckJobScoreReportsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobScoreReportsWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                                                                                     shared_ptr<ListFeatureConsistencyCheckJobScoreReportsRequest> tmpReq,
                                                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListFeatureConsistencyCheckJobScoreReportsShrinkRequest> request = make_shared<ListFeatureConsistencyCheckJobScoreReportsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->excludeRequestIds)) {
    request->excludeRequestIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->excludeRequestIds, make_shared<string>("ExcludeRequestIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeRequestIdsShrink)) {
    query->insert(pair<string, string>("ExcludeRequestIds", *request->excludeRequestIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFeatureConsistencyCheckJobScoreReports"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureConsistencyCheckJobId)) + string("/scorereports"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureConsistencyCheckJobScoreReportsResponse(callApi(params, req, runtime));
}

ListFeatureConsistencyCheckJobScoreReportsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobScoreReports(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<ListFeatureConsistencyCheckJobScoreReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureConsistencyCheckJobScoreReportsWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

ListFeatureConsistencyCheckJobsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobsWithOptions(shared_ptr<ListFeatureConsistencyCheckJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
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
    {"action", boost::any(string("ListFeatureConsistencyCheckJobs"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFeatureConsistencyCheckJobsResponse(callApi(params, req, runtime));
}

ListFeatureConsistencyCheckJobsResponse Alibabacloud_PaiRecService20221213::Client::listFeatureConsistencyCheckJobs(shared_ptr<ListFeatureConsistencyCheckJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFeatureConsistencyCheckJobsWithOptions(request, headers, runtime);
}

ListInstanceResourcesResponse Alibabacloud_PaiRecService20221213::Client::listInstanceResourcesWithOptions(shared_ptr<string> InstanceId,
                                                                                                           shared_ptr<ListInstanceResourcesRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->group)) {
    query->insert(pair<string, string>("Group", *request->group));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceResources"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceResourcesResponse(callApi(params, req, runtime));
}

ListInstanceResourcesResponse Alibabacloud_PaiRecService20221213::Client::listInstanceResources(shared_ptr<string> InstanceId, shared_ptr<ListInstanceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstanceResourcesWithOptions(InstanceId, request, headers, runtime);
}

ListInstancesResponse Alibabacloud_PaiRecService20221213::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2022-12-13"))},
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

ListInstancesResponse Alibabacloud_PaiRecService20221213::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listInstancesWithOptions(request, headers, runtime);
}

ListLaboratoriesResponse Alibabacloud_PaiRecService20221213::Client::listLaboratoriesWithOptions(shared_ptr<ListLaboratoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLaboratories"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLaboratoriesResponse(callApi(params, req, runtime));
}

ListLaboratoriesResponse Alibabacloud_PaiRecService20221213::Client::listLaboratories(shared_ptr<ListLaboratoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLaboratoriesWithOptions(request, headers, runtime);
}

ListLayersResponse Alibabacloud_PaiRecService20221213::Client::listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->laboratoryId)) {
    query->insert(pair<string, string>("LaboratoryId", *request->laboratoryId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLayers"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/layers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLayersResponse(callApi(params, req, runtime));
}

ListLayersResponse Alibabacloud_PaiRecService20221213::Client::listLayers(shared_ptr<ListLayersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLayersWithOptions(request, headers, runtime);
}

ListParamsResponse Alibabacloud_PaiRecService20221213::Client::listParamsWithOptions(shared_ptr<ListParamsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListParams"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/params"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListParamsResponse(callApi(params, req, runtime));
}

ListParamsResponse Alibabacloud_PaiRecService20221213::Client::listParams(shared_ptr<ListParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listParamsWithOptions(request, headers, runtime);
}

ListResourceRulesResponse Alibabacloud_PaiRecService20221213::Client::listResourceRulesWithOptions(shared_ptr<ListResourceRulesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRuleId)) {
    query->insert(pair<string, string>("ResourceRuleId", *request->resourceRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRuleName)) {
    query->insert(pair<string, string>("ResourceRuleName", *request->resourceRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceRules"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceRulesResponse(callApi(params, req, runtime));
}

ListResourceRulesResponse Alibabacloud_PaiRecService20221213::Client::listResourceRules(shared_ptr<ListResourceRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceRulesWithOptions(request, headers, runtime);
}

ListSampleConsistencyJobsResponse Alibabacloud_PaiRecService20221213::Client::listSampleConsistencyJobsWithOptions(shared_ptr<ListSampleConsistencyJobsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSampleConsistencyJobs"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSampleConsistencyJobsResponse(callApi(params, req, runtime));
}

ListSampleConsistencyJobsResponse Alibabacloud_PaiRecService20221213::Client::listSampleConsistencyJobs(shared_ptr<ListSampleConsistencyJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSampleConsistencyJobsWithOptions(request, headers, runtime);
}

ListScenesResponse Alibabacloud_PaiRecService20221213::Client::listScenesWithOptions(shared_ptr<ListScenesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScenes"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/scenes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScenesResponse(callApi(params, req, runtime));
}

ListScenesResponse Alibabacloud_PaiRecService20221213::Client::listScenes(shared_ptr<ListScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listScenesWithOptions(request, headers, runtime);
}

ListSubCrowdsResponse Alibabacloud_PaiRecService20221213::Client::listSubCrowdsWithOptions(shared_ptr<string> CrowdId,
                                                                                           shared_ptr<ListSubCrowdsRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubCrowds"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)) + string("/subcrowds"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubCrowdsResponse(callApi(params, req, runtime));
}

ListSubCrowdsResponse Alibabacloud_PaiRecService20221213::Client::listSubCrowds(shared_ptr<string> CrowdId, shared_ptr<ListSubCrowdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSubCrowdsWithOptions(CrowdId, request, headers, runtime);
}

ListTableMetasResponse Alibabacloud_PaiRecService20221213::Client::listTableMetasWithOptions(shared_ptr<ListTableMetasRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->module)) {
    query->insert(pair<string, string>("Module", *request->module));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTableMetas"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tablemetas"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTableMetasResponse(callApi(params, req, runtime));
}

ListTableMetasResponse Alibabacloud_PaiRecService20221213::Client::listTableMetas(shared_ptr<ListTableMetasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTableMetasWithOptions(request, headers, runtime);
}

ListTrafficControlTargetTrafficHistoryResponse Alibabacloud_PaiRecService20221213::Client::listTrafficControlTargetTrafficHistoryWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                                             shared_ptr<ListTrafficControlTargetTrafficHistoryRequest> request,
                                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experimentGroupId)) {
    query->insert(pair<string, string>("ExperimentGroupId", *request->experimentGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experimentId)) {
    query->insert(pair<string, string>("ExperimentId", *request->experimentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    query->insert(pair<string, string>("ItemId", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->threshold)) {
    query->insert(pair<string, string>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrafficControlTargetTrafficHistory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)) + string("/traffichistories"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrafficControlTargetTrafficHistoryResponse(callApi(params, req, runtime));
}

ListTrafficControlTargetTrafficHistoryResponse Alibabacloud_PaiRecService20221213::Client::listTrafficControlTargetTrafficHistory(shared_ptr<string> TrafficControlTargetId, shared_ptr<ListTrafficControlTargetTrafficHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrafficControlTargetTrafficHistoryWithOptions(TrafficControlTargetId, request, headers, runtime);
}

ListTrafficControlTasksResponse Alibabacloud_PaiRecService20221213::Client::listTrafficControlTasksWithOptions(shared_ptr<ListTrafficControlTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlTargetFilter)) {
    query->insert(pair<string, string>("ControlTargetFilter", *request->controlTargetFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlTaskId)) {
    query->insert(pair<string, string>("TrafficControlTaskId", *request->trafficControlTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrafficControlTasks"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrafficControlTasksResponse(callApi(params, req, runtime));
}

ListTrafficControlTasksResponse Alibabacloud_PaiRecService20221213::Client::listTrafficControlTasks(shared_ptr<ListTrafficControlTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTrafficControlTasksWithOptions(request, headers, runtime);
}

OfflineExperimentResponse Alibabacloud_PaiRecService20221213::Client::offlineExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                                   shared_ptr<OfflineExperimentRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/action/offline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineExperimentResponse(callApi(params, req, runtime));
}

OfflineExperimentResponse Alibabacloud_PaiRecService20221213::Client::offlineExperiment(shared_ptr<string> ExperimentId, shared_ptr<OfflineExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return offlineExperimentWithOptions(ExperimentId, request, headers, runtime);
}

OfflineExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::offlineExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                                                             shared_ptr<OfflineExperimentGroupRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentGroupId)) + string("/action/offline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineExperimentGroupResponse(callApi(params, req, runtime));
}

OfflineExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::offlineExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<OfflineExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return offlineExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

OfflineLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::offlineLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                                                                   shared_ptr<OfflineLaboratoryRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OfflineLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LaboratoryId)) + string("/action/offline"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OfflineLaboratoryResponse(callApi(params, req, runtime));
}

OfflineLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::offlineLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<OfflineLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return offlineLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

OnlineExperimentResponse Alibabacloud_PaiRecService20221213::Client::onlineExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                                 shared_ptr<OnlineExperimentRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OnlineExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/action/online"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OnlineExperimentResponse(callApi(params, req, runtime));
}

OnlineExperimentResponse Alibabacloud_PaiRecService20221213::Client::onlineExperiment(shared_ptr<string> ExperimentId, shared_ptr<OnlineExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return onlineExperimentWithOptions(ExperimentId, request, headers, runtime);
}

OnlineExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::onlineExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                                                           shared_ptr<OnlineExperimentGroupRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OnlineExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentGroupId)) + string("/action/online"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OnlineExperimentGroupResponse(callApi(params, req, runtime));
}

OnlineExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::onlineExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<OnlineExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return onlineExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

OnlineLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::onlineLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                                                                 shared_ptr<OnlineLaboratoryRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OnlineLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LaboratoryId)) + string("/action/online"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OnlineLaboratoryResponse(callApi(params, req, runtime));
}

OnlineLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::onlineLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<OnlineLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return onlineLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

PushAllExperimentResponse Alibabacloud_PaiRecService20221213::Client::pushAllExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                                   shared_ptr<PushAllExperimentRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushAllExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)) + string("/action/pushall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushAllExperimentResponse(callApi(params, req, runtime));
}

PushAllExperimentResponse Alibabacloud_PaiRecService20221213::Client::pushAllExperiment(shared_ptr<string> ExperimentId, shared_ptr<PushAllExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushAllExperimentWithOptions(ExperimentId, request, headers, runtime);
}

PushResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::pushResourceRuleWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                 shared_ptr<PushResourceRuleRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PushResourceRuleShrinkRequest> request = make_shared<PushResourceRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->metricInfo)) {
    request->metricInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->metricInfo, make_shared<string>("MetricInfo"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricInfoShrink)) {
    query->insert(pair<string, string>("MetricInfo", *request->metricInfoShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushResourceRule"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)) + string("/action/push"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushResourceRuleResponse(callApi(params, req, runtime));
}

PushResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::pushResourceRule(shared_ptr<string> ResourceRuleId, shared_ptr<PushResourceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pushResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

QuerySampleConsistencyJobDifferenceResponse Alibabacloud_PaiRecService20221213::Client::querySampleConsistencyJobDifferenceWithOptions(shared_ptr<string> SampleConsistencyJobId,
                                                                                                                                       shared_ptr<QuerySampleConsistencyJobDifferenceRequest> request,
                                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureType)) {
    query->insert(pair<string, string>("FeatureType", *request->featureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySampleConsistencyJobDifference"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SampleConsistencyJobId)) + string("/action/querydifference"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySampleConsistencyJobDifferenceResponse(callApi(params, req, runtime));
}

QuerySampleConsistencyJobDifferenceResponse Alibabacloud_PaiRecService20221213::Client::querySampleConsistencyJobDifference(shared_ptr<string> SampleConsistencyJobId, shared_ptr<QuerySampleConsistencyJobDifferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return querySampleConsistencyJobDifferenceWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

QueryTrafficControlTargetItemReportDetailResponse Alibabacloud_PaiRecService20221213::Client::queryTrafficControlTargetItemReportDetailWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                                                   shared_ptr<QueryTrafficControlTargetItemReportDetailRequest> request,
                                                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("Date", *request->date));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    query->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTrafficControlTargetItemReportDetail"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)) + string("/itemcontrolreportdetail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTrafficControlTargetItemReportDetailResponse(callApi(params, req, runtime));
}

QueryTrafficControlTargetItemReportDetailResponse Alibabacloud_PaiRecService20221213::Client::queryTrafficControlTargetItemReportDetail(shared_ptr<string> TrafficControlTargetId, shared_ptr<QueryTrafficControlTargetItemReportDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTrafficControlTargetItemReportDetailWithOptions(TrafficControlTargetId, request, headers, runtime);
}

ReleaseTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::releaseTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                   shared_ptr<ReleaseTrafficControlTaskRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/release"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseTrafficControlTaskResponse(callApi(params, req, runtime));
}

ReleaseTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::releaseTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<ReleaseTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

ReportABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::reportABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                                                                       shared_ptr<ReportABMetricGroupRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseExperimentId)) {
    body->insert(pair<string, string>("BaseExperimentId", *request->baseExperimentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimensionFields)) {
    body->insert(pair<string, string>("DimensionFields", *request->dimensionFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experimentGroupId)) {
    body->insert(pair<string, string>("ExperimentGroupId", *request->experimentGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experimentIds)) {
    body->insert(pair<string, string>("ExperimentIds", *request->experimentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportType)) {
    body->insert(pair<string, string>("ReportType", *request->reportType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeStatisticsMethod)) {
    body->insert(pair<string, string>("TimeStatisticsMethod", *request->timeStatisticsMethod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportABMetricGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetricgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricGroupId)) + string("/action/report"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportABMetricGroupResponse(callApi(params, req, runtime));
}

ReportABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::reportABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<ReportABMetricGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reportABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

ReportSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::reportSampleConsistencyJobWithOptions(shared_ptr<string> SampleConsistencyJobId,
                                                                                                                     shared_ptr<ReportSampleConsistencyJobRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportSampleConsistencyJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SampleConsistencyJobId)) + string("/action/report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportSampleConsistencyJobResponse(callApi(params, req, runtime));
}

ReportSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::reportSampleConsistencyJob(shared_ptr<string> SampleConsistencyJobId, shared_ptr<ReportSampleConsistencyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reportSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

SplitTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::splitTrafficControlTargetWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                   shared_ptr<SplitTrafficControlTargetRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->setPoints)) {
    body->insert(pair<string, vector<long>>("SetPoints", *request->setPoints));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->setValues)) {
    body->insert(pair<string, vector<long>>("SetValues", *request->setValues));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->timePoints)) {
    body->insert(pair<string, vector<long>>("TimePoints", *request->timePoints));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SplitTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)) + string("/action/split"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SplitTrafficControlTargetResponse(callApi(params, req, runtime));
}

SplitTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::splitTrafficControlTarget(shared_ptr<string> TrafficControlTargetId, shared_ptr<SplitTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return splitTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

StartTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::startTrafficControlTargetWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                   shared_ptr<StartTrafficControlTargetRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)) + string("/action/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTrafficControlTargetResponse(callApi(params, req, runtime));
}

StartTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::startTrafficControlTarget(shared_ptr<string> TrafficControlTargetId, shared_ptr<StartTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

StartTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::startTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                               shared_ptr<StartTrafficControlTaskRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/start"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTrafficControlTaskResponse(callApi(params, req, runtime));
}

StartTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::startTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<StartTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

StopSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::stopSampleConsistencyJobWithOptions(shared_ptr<string> SampleConsistencyJobId,
                                                                                                                 shared_ptr<StopSampleConsistencyJobRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopSampleConsistencyJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/sampleconsistencyjobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SampleConsistencyJobId)) + string("/action/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopSampleConsistencyJobResponse(callApi(params, req, runtime));
}

StopSampleConsistencyJobResponse Alibabacloud_PaiRecService20221213::Client::stopSampleConsistencyJob(shared_ptr<string> SampleConsistencyJobId, shared_ptr<StopSampleConsistencyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopSampleConsistencyJobWithOptions(SampleConsistencyJobId, request, headers, runtime);
}

StopTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::stopTrafficControlTargetWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                 shared_ptr<StopTrafficControlTargetRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)) + string("/action/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTrafficControlTargetResponse(callApi(params, req, runtime));
}

StopTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::stopTrafficControlTarget(shared_ptr<string> TrafficControlTargetId, shared_ptr<StopTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

StopTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::stopTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                             shared_ptr<StopTrafficControlTaskRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/stop"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTrafficControlTaskResponse(callApi(params, req, runtime));
}

StopTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::stopTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<StopTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

SyncFeatureConsistencyCheckJobReplayLogResponse Alibabacloud_PaiRecService20221213::Client::syncFeatureConsistencyCheckJobReplayLogWithOptions(shared_ptr<SyncFeatureConsistencyCheckJobReplayLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contextFeatures)) {
    body->insert(pair<string, string>("ContextFeatures", *request->contextFeatures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureConsistencyCheckJobConfigId)) {
    body->insert(pair<string, string>("FeatureConsistencyCheckJobConfigId", *request->featureConsistencyCheckJobConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generatedFeatures)) {
    body->insert(pair<string, string>("GeneratedFeatures", *request->generatedFeatures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logItemId)) {
    body->insert(pair<string, string>("LogItemId", *request->logItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logRequestId)) {
    body->insert(pair<string, string>("LogRequestId", *request->logRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->logRequestTime)) {
    body->insert(pair<string, long>("LogRequestTime", *request->logRequestTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logUserId)) {
    body->insert(pair<string, string>("LogUserId", *request->logUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rawFeatures)) {
    body->insert(pair<string, string>("RawFeatures", *request->rawFeatures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncFeatureConsistencyCheckJobReplayLog"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs/action/syncreplaylog"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncFeatureConsistencyCheckJobReplayLogResponse(callApi(params, req, runtime));
}

SyncFeatureConsistencyCheckJobReplayLogResponse Alibabacloud_PaiRecService20221213::Client::syncFeatureConsistencyCheckJobReplayLog(shared_ptr<SyncFeatureConsistencyCheckJobReplayLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return syncFeatureConsistencyCheckJobReplayLogWithOptions(request, headers, runtime);
}

TerminateFeatureConsistencyCheckJobResponse Alibabacloud_PaiRecService20221213::Client::terminateFeatureConsistencyCheckJobWithOptions(shared_ptr<string> FeatureConsistencyCheckJobId,
                                                                                                                                       shared_ptr<TerminateFeatureConsistencyCheckJobRequest> request,
                                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateFeatureConsistencyCheckJob"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureConsistencyCheckJobId)) + string("/action/terminate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateFeatureConsistencyCheckJobResponse(callApi(params, req, runtime));
}

TerminateFeatureConsistencyCheckJobResponse Alibabacloud_PaiRecService20221213::Client::terminateFeatureConsistencyCheckJob(shared_ptr<string> FeatureConsistencyCheckJobId, shared_ptr<TerminateFeatureConsistencyCheckJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return terminateFeatureConsistencyCheckJobWithOptions(FeatureConsistencyCheckJobId, request, headers, runtime);
}

UpdateABMetricResponse Alibabacloud_PaiRecService20221213::Client::updateABMetricWithOptions(shared_ptr<string> ABMetricId,
                                                                                             shared_ptr<UpdateABMetricRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    body->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leftMetricId)) {
    body->insert(pair<string, string>("LeftMetricId", *request->leftMetricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    body->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtime)) {
    body->insert(pair<string, bool>("Realtime", *request->realtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultResourceId)) {
    body->insert(pair<string, string>("ResultResourceId", *request->resultResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rightMetricId)) {
    body->insert(pair<string, string>("RightMetricId", *request->rightMetricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statisticsCycle)) {
    body->insert(pair<string, long>("StatisticsCycle", *request->statisticsCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableMetaId)) {
    body->insert(pair<string, string>("TableMetaId", *request->tableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABMetric"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetrics/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABMetricResponse(callApi(params, req, runtime));
}

UpdateABMetricResponse Alibabacloud_PaiRecService20221213::Client::updateABMetric(shared_ptr<string> ABMetricId, shared_ptr<UpdateABMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABMetricWithOptions(ABMetricId, request, headers, runtime);
}

UpdateABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::updateABMetricGroupWithOptions(shared_ptr<string> ABMetricGroupId,
                                                                                                       shared_ptr<UpdateABMetricGroupRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ABMetricIds)) {
    body->insert(pair<string, string>("ABMetricIds", *request->ABMetricIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->realtime)) {
    body->insert(pair<string, bool>("Realtime", *request->realtime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateABMetricGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/abmetricgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ABMetricGroupId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateABMetricGroupResponse(callApi(params, req, runtime));
}

UpdateABMetricGroupResponse Alibabacloud_PaiRecService20221213::Client::updateABMetricGroup(shared_ptr<string> ABMetricGroupId, shared_ptr<UpdateABMetricGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateABMetricGroupWithOptions(ABMetricGroupId, request, headers, runtime);
}

UpdateCrowdResponse Alibabacloud_PaiRecService20221213::Client::updateCrowdWithOptions(shared_ptr<string> CrowdId,
                                                                                       shared_ptr<UpdateCrowdRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCrowd"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/crowds/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(CrowdId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCrowdResponse(callApi(params, req, runtime));
}

UpdateCrowdResponse Alibabacloud_PaiRecService20221213::Client::updateCrowd(shared_ptr<string> CrowdId, shared_ptr<UpdateCrowdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCrowdWithOptions(CrowdId, request, headers, runtime);
}

UpdateEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::updateEngineConfigWithOptions(shared_ptr<string> EngineConfigId,
                                                                                                     shared_ptr<UpdateEngineConfigRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configValue)) {
    body->insert(pair<string, string>("ConfigValue", *request->configValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEngineConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/engineconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(EngineConfigId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEngineConfigResponse(callApi(params, req, runtime));
}

UpdateEngineConfigResponse Alibabacloud_PaiRecService20221213::Client::updateEngineConfig(shared_ptr<string> EngineConfigId, shared_ptr<UpdateEngineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateEngineConfigWithOptions(EngineConfigId, request, headers, runtime);
}

UpdateExperimentResponse Alibabacloud_PaiRecService20221213::Client::updateExperimentWithOptions(shared_ptr<string> ExperimentId,
                                                                                                 shared_ptr<UpdateExperimentRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugCrowdId)) {
    body->insert(pair<string, string>("DebugCrowdId", *request->debugCrowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugUsers)) {
    body->insert(pair<string, string>("DebugUsers", *request->debugUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowPercent)) {
    body->insert(pair<string, long>("FlowPercent", *request->flowPercent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExperiment"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experiments/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExperimentResponse(callApi(params, req, runtime));
}

UpdateExperimentResponse Alibabacloud_PaiRecService20221213::Client::updateExperiment(shared_ptr<string> ExperimentId, shared_ptr<UpdateExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateExperimentWithOptions(ExperimentId, request, headers, runtime);
}

UpdateExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::updateExperimentGroupWithOptions(shared_ptr<string> ExperimentGroupId,
                                                                                                           shared_ptr<UpdateExperimentGroupRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crowdId)) {
    body->insert(pair<string, string>("CrowdId", *request->crowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crowdTargetType)) {
    body->insert(pair<string, string>("CrowdTargetType", *request->crowdTargetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugCrowdId)) {
    body->insert(pair<string, string>("DebugCrowdId", *request->debugCrowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugUsers)) {
    body->insert(pair<string, string>("DebugUsers", *request->debugUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distributionTimeDuration)) {
    body->insert(pair<string, long>("DistributionTimeDuration", *request->distributionTimeDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributionType)) {
    body->insert(pair<string, string>("DistributionType", *request->distributionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    body->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerId)) {
    body->insert(pair<string, string>("LayerId", *request->layerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needAA)) {
    body->insert(pair<string, bool>("NeedAA", *request->needAA));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->randomFlow)) {
    body->insert(pair<string, long>("RandomFlow", *request->randomFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservcedBuckets)) {
    body->insert(pair<string, string>("ReservcedBuckets", *request->reservcedBuckets));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExperimentGroup"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/experimentgroups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ExperimentGroupId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExperimentGroupResponse(callApi(params, req, runtime));
}

UpdateExperimentGroupResponse Alibabacloud_PaiRecService20221213::Client::updateExperimentGroup(shared_ptr<string> ExperimentGroupId, shared_ptr<UpdateExperimentGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateExperimentGroupWithOptions(ExperimentGroupId, request, headers, runtime);
}

UpdateFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::updateFeatureConsistencyCheckJobConfigWithOptions(shared_ptr<string> FeatureConsistencyCheckJobConfigId,
                                                                                                                                             shared_ptr<UpdateFeatureConsistencyCheckJobConfigRequest> request,
                                                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->compareFeature)) {
    body->insert(pair<string, bool>("CompareFeature", *request->compareFeature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetId)) {
    body->insert(pair<string, string>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetMountPath)) {
    body->insert(pair<string, string>("DatasetMountPath", *request->datasetMountPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetName)) {
    body->insert(pair<string, string>("DatasetName", *request->datasetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetType)) {
    body->insert(pair<string, string>("DatasetType", *request->datasetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->datasetUri)) {
    body->insert(pair<string, string>("DatasetUri", *request->datasetUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRoute)) {
    body->insert(pair<string, string>("DefaultRoute", *request->defaultRoute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easServiceName)) {
    body->insert(pair<string, string>("EasServiceName", *request->easServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easyRecPackagePath)) {
    body->insert(pair<string, string>("EasyRecPackagePath", *request->easyRecPackagePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->easyRecVersion)) {
    body->insert(pair<string, string>("EasyRecVersion", *request->easyRecVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureDisplayExclude)) {
    body->insert(pair<string, string>("FeatureDisplayExclude", *request->featureDisplayExclude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureLandingResourceId)) {
    body->insert(pair<string, string>("FeatureLandingResourceId", *request->featureLandingResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featurePriority)) {
    body->insert(pair<string, string>("FeaturePriority", *request->featurePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreItemId)) {
    body->insert(pair<string, string>("FeatureStoreItemId", *request->featureStoreItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreModelId)) {
    body->insert(pair<string, string>("FeatureStoreModelId", *request->featureStoreModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreProjectId)) {
    body->insert(pair<string, string>("FeatureStoreProjectId", *request->featureStoreProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreProjectName)) {
    body->insert(pair<string, string>("FeatureStoreProjectName", *request->featureStoreProjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreSeqFeatureView)) {
    body->insert(pair<string, string>("FeatureStoreSeqFeatureView", *request->featureStoreSeqFeatureView));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureStoreUserId)) {
    body->insert(pair<string, string>("FeatureStoreUserId", *request->featureStoreUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fgJarVersion)) {
    body->insert(pair<string, string>("FgJarVersion", *request->fgJarVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fgJsonFileName)) {
    body->insert(pair<string, string>("FgJsonFileName", *request->fgJsonFileName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->generateZip)) {
    body->insert(pair<string, bool>("GenerateZip", *request->generateZip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isUseFeatureStore)) {
    body->insert(pair<string, bool>("IsUseFeatureStore", *request->isUseFeatureStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemIdField)) {
    body->insert(pair<string, string>("ItemIdField", *request->itemIdField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTable)) {
    body->insert(pair<string, string>("ItemTable", *request->itemTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTablePartitionField)) {
    body->insert(pair<string, string>("ItemTablePartitionField", *request->itemTablePartitionField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTablePartitionFieldFormat)) {
    body->insert(pair<string, string>("ItemTablePartitionFieldFormat", *request->itemTablePartitionFieldFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossResourceId)) {
    body->insert(pair<string, string>("OssResourceId", *request->ossResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictWorkerCount)) {
    body->insert(pair<string, long>("PredictWorkerCount", *request->predictWorkerCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictWorkerCpu)) {
    body->insert(pair<string, long>("PredictWorkerCpu", *request->predictWorkerCpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictWorkerMemory)) {
    body->insert(pair<string, long>("PredictWorkerMemory", *request->predictWorkerMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceConfig)) {
    body->insert(pair<string, string>("ResourceConfig", *request->resourceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->sampleRate)) {
    body->insert(pair<string, double>("SampleRate", *request->sampleRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    body->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchId)) {
    body->insert(pair<string, string>("SwitchId", *request->switchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdField)) {
    body->insert(pair<string, string>("UserIdField", *request->userIdField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTable)) {
    body->insert(pair<string, string>("UserTable", *request->userTable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTablePartitionField)) {
    body->insert(pair<string, string>("UserTablePartitionField", *request->userTablePartitionField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTablePartitionFieldFormat)) {
    body->insert(pair<string, string>("UserTablePartitionFieldFormat", *request->userTablePartitionFieldFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowName)) {
    body->insert(pair<string, string>("WorkflowName", *request->workflowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFeatureConsistencyCheckJobConfig"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/featureconsistencycheck/jobconfigs/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(FeatureConsistencyCheckJobConfigId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFeatureConsistencyCheckJobConfigResponse(callApi(params, req, runtime));
}

UpdateFeatureConsistencyCheckJobConfigResponse Alibabacloud_PaiRecService20221213::Client::updateFeatureConsistencyCheckJobConfig(shared_ptr<string> FeatureConsistencyCheckJobConfigId, shared_ptr<UpdateFeatureConsistencyCheckJobConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateFeatureConsistencyCheckJobConfigWithOptions(FeatureConsistencyCheckJobConfigId, request, headers, runtime);
}

UpdateInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::updateInstanceResourceWithOptions(shared_ptr<string> InstanceId,
                                                                                                             shared_ptr<string> ResourceId,
                                                                                                             shared_ptr<UpdateInstanceResourceRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    body->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceResource"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)) + string("/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResourceResponse(callApi(params, req, runtime));
}

UpdateInstanceResourceResponse Alibabacloud_PaiRecService20221213::Client::updateInstanceResource(shared_ptr<string> InstanceId, shared_ptr<string> ResourceId, shared_ptr<UpdateInstanceResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceResourceWithOptions(InstanceId, ResourceId, request, headers, runtime);
}

UpdateLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::updateLaboratoryWithOptions(shared_ptr<string> LaboratoryId,
                                                                                                 shared_ptr<UpdateLaboratoryRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bucketCount)) {
    body->insert(pair<string, long>("BucketCount", *request->bucketCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bucketType)) {
    body->insert(pair<string, string>("BucketType", *request->bucketType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buckets)) {
    body->insert(pair<string, string>("Buckets", *request->buckets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugCrowdId)) {
    body->insert(pair<string, string>("DebugCrowdId", *request->debugCrowdId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->debugUsers)) {
    body->insert(pair<string, string>("DebugUsers", *request->debugUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    body->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLaboratory"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/laboratories/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LaboratoryId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLaboratoryResponse(callApi(params, req, runtime));
}

UpdateLaboratoryResponse Alibabacloud_PaiRecService20221213::Client::updateLaboratory(shared_ptr<string> LaboratoryId, shared_ptr<UpdateLaboratoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLaboratoryWithOptions(LaboratoryId, request, headers, runtime);
}

UpdateLayerResponse Alibabacloud_PaiRecService20221213::Client::updateLayerWithOptions(shared_ptr<string> LayerId,
                                                                                       shared_ptr<UpdateLayerRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLayer"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/layers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(LayerId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLayerResponse(callApi(params, req, runtime));
}

UpdateLayerResponse Alibabacloud_PaiRecService20221213::Client::updateLayer(shared_ptr<string> LayerId, shared_ptr<UpdateLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateLayerWithOptions(LayerId, request, headers, runtime);
}

UpdateParamResponse Alibabacloud_PaiRecService20221213::Client::updateParamWithOptions(shared_ptr<string> ParamId,
                                                                                       shared_ptr<UpdateParamRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateParam"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/params/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ParamId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateParamResponse(callApi(params, req, runtime));
}

UpdateParamResponse Alibabacloud_PaiRecService20221213::Client::updateParam(shared_ptr<string> ParamId, shared_ptr<UpdateParamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateParamWithOptions(ParamId, request, headers, runtime);
}

UpdateResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::updateResourceRuleWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                     shared_ptr<UpdateResourceRuleRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricOperationType)) {
    body->insert(pair<string, string>("MetricOperationType", *request->metricOperationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricPullInfo)) {
    body->insert(pair<string, string>("MetricPullInfo", *request->metricPullInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricPullPeriod)) {
    body->insert(pair<string, string>("MetricPullPeriod", *request->metricPullPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleComputingDefinition)) {
    body->insert(pair<string, string>("RuleComputingDefinition", *request->ruleComputingDefinition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceRule"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceRuleResponse(callApi(params, req, runtime));
}

UpdateResourceRuleResponse Alibabacloud_PaiRecService20221213::Client::updateResourceRule(shared_ptr<string> ResourceRuleId, shared_ptr<UpdateResourceRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceRuleWithOptions(ResourceRuleId, request, headers, runtime);
}

UpdateResourceRuleItemResponse Alibabacloud_PaiRecService20221213::Client::updateResourceRuleItemWithOptions(shared_ptr<string> ResourceRuleId,
                                                                                                             shared_ptr<string> ResourceRuleItemId,
                                                                                                             shared_ptr<UpdateResourceRuleItemRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxValue)) {
    body->insert(pair<string, double>("MaxValue", *request->maxValue));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minValue)) {
    body->insert(pair<string, double>("MinValue", *request->minValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->value)) {
    body->insert(pair<string, double>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceRuleItem"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/resourcerules/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleId)) + string("/items/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceRuleItemId)))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResourceRuleItemResponse(callApi(params, req, runtime));
}

UpdateResourceRuleItemResponse Alibabacloud_PaiRecService20221213::Client::updateResourceRuleItem(shared_ptr<string> ResourceRuleId, shared_ptr<string> ResourceRuleItemId, shared_ptr<UpdateResourceRuleItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceRuleItemWithOptions(ResourceRuleId, ResourceRuleItemId, request, headers, runtime);
}

UpdateSceneResponse Alibabacloud_PaiRecService20221213::Client::updateSceneWithOptions(shared_ptr<string> SceneId,
                                                                                       shared_ptr<UpdateSceneRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateSceneRequestFlows>>(request->flows)) {
    body->insert(pair<string, vector<UpdateSceneRequestFlows>>("Flows", *request->flows));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScene"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/scenes/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(SceneId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneResponse(callApi(params, req, runtime));
}

UpdateSceneResponse Alibabacloud_PaiRecService20221213::Client::updateScene(shared_ptr<string> SceneId, shared_ptr<UpdateSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSceneWithOptions(SceneId, request, headers, runtime);
}

UpdateTableMetaResponse Alibabacloud_PaiRecService20221213::Client::updateTableMetaWithOptions(shared_ptr<string> TableMetaId,
                                                                                               shared_ptr<UpdateTableMetaRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTableMetaRequestFields>>(request->fields)) {
    body->insert(pair<string, vector<UpdateTableMetaRequestFields>>("Fields", *request->fields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->module)) {
    body->insert(pair<string, string>("Module", *request->module));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    body->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTableMeta"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/tablemetas/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TableMetaId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTableMetaResponse(callApi(params, req, runtime));
}

UpdateTableMetaResponse Alibabacloud_PaiRecService20221213::Client::updateTableMeta(shared_ptr<string> TableMetaId, shared_ptr<UpdateTableMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTableMetaWithOptions(TableMetaId, request, headers, runtime);
}

UpdateTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::updateTrafficControlTargetWithOptions(shared_ptr<string> TrafficControlTargetId,
                                                                                                                     shared_ptr<UpdateTrafficControlTargetRequest> request,
                                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newParam3)) {
    query->insert(pair<string, string>("new-param-3", *request->newParam3));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->event)) {
    body->insert(pair<string, string>("Event", *request->event));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionArray)) {
    body->insert(pair<string, string>("ItemConditionArray", *request->itemConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionExpress)) {
    body->insert(pair<string, string>("ItemConditionExpress", *request->itemConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionType)) {
    body->insert(pair<string, string>("ItemConditionType", *request->itemConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newProductRegulation)) {
    body->insert(pair<string, bool>("NewProductRegulation", *request->newProductRegulation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallName)) {
    body->insert(pair<string, string>("RecallName", *request->recallName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisPeriod)) {
    body->insert(pair<string, string>("StatisPeriod", *request->statisPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toleranceValue)) {
    body->insert(pair<string, long>("ToleranceValue", *request->toleranceValue));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->value)) {
    body->insert(pair<string, double>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrafficControlTarget"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltargets/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTargetId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrafficControlTargetResponse(callApi(params, req, runtime));
}

UpdateTrafficControlTargetResponse Alibabacloud_PaiRecService20221213::Client::updateTrafficControlTarget(shared_ptr<string> TrafficControlTargetId, shared_ptr<UpdateTrafficControlTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTrafficControlTargetWithOptions(TrafficControlTargetId, request, headers, runtime);
}

UpdateTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::updateTrafficControlTaskWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                 shared_ptr<UpdateTrafficControlTaskRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->behaviorTableMetaId)) {
    body->insert(pair<string, string>("BehaviorTableMetaId", *request->behaviorTableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlGranularity)) {
    body->insert(pair<string, string>("ControlGranularity", *request->controlGranularity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlLogic)) {
    body->insert(pair<string, string>("ControlLogic", *request->controlLogic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->controlType)) {
    body->insert(pair<string, string>("ControlType", *request->controlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionTime)) {
    body->insert(pair<string, string>("ExecutionTime", *request->executionTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flinkResourceId)) {
    body->insert(pair<string, string>("FlinkResourceId", *request->flinkResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionArray)) {
    body->insert(pair<string, string>("ItemConditionArray", *request->itemConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionExpress)) {
    body->insert(pair<string, string>("ItemConditionExpress", *request->itemConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConditionType)) {
    body->insert(pair<string, string>("ItemConditionType", *request->itemConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemTableMetaId)) {
    body->insert(pair<string, string>("ItemTableMetaId", *request->itemTableMetaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preExperimentIds)) {
    body->insert(pair<string, string>("PreExperimentIds", *request->preExperimentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prodExperimentIds)) {
    body->insert(pair<string, string>("ProdExperimentIds", *request->prodExperimentIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    body->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    body->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisBaeaviorConditionArray)) {
    body->insert(pair<string, string>("StatisBaeaviorConditionArray", *request->statisBaeaviorConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisBehaviorConditionExpress)) {
    body->insert(pair<string, string>("StatisBehaviorConditionExpress", *request->statisBehaviorConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statisBehaviorConditionType)) {
    body->insert(pair<string, string>("StatisBehaviorConditionType", *request->statisBehaviorConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTrafficControlTaskRequestTrafficControlTargets>>(request->trafficControlTargets)) {
    body->insert(pair<string, vector<UpdateTrafficControlTaskRequestTrafficControlTargets>>("TrafficControlTargets", *request->trafficControlTargets));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConditionArray)) {
    body->insert(pair<string, string>("UserConditionArray", *request->userConditionArray));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConditionExpress)) {
    body->insert(pair<string, string>("UserConditionExpress", *request->userConditionExpress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userConditionType)) {
    body->insert(pair<string, string>("UserConditionType", *request->userConditionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTableMetaId)) {
    body->insert(pair<string, string>("UserTableMetaId", *request->userTableMetaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrafficControlTask"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrafficControlTaskResponse(callApi(params, req, runtime));
}

UpdateTrafficControlTaskResponse Alibabacloud_PaiRecService20221213::Client::updateTrafficControlTask(shared_ptr<string> TrafficControlTaskId, shared_ptr<UpdateTrafficControlTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTrafficControlTaskWithOptions(TrafficControlTaskId, request, headers, runtime);
}

UpdateTrafficControlTaskTrafficResponse Alibabacloud_PaiRecService20221213::Client::updateTrafficControlTaskTrafficWithOptions(shared_ptr<string> TrafficControlTaskId,
                                                                                                                               shared_ptr<UpdateTrafficControlTaskTrafficRequest> request,
                                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newParam3)) {
    query->insert(pair<string, string>("new-param-3", *request->newParam3));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environment)) {
    body->insert(pair<string, string>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTrafficControlTaskTrafficRequestTraffics>>(request->traffics)) {
    body->insert(pair<string, vector<UpdateTrafficControlTaskTrafficRequestTraffics>>("Traffics", *request->traffics));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrafficControlTaskTraffic"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/trafficcontroltasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TrafficControlTaskId)) + string("/action/traffic"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTrafficControlTaskTrafficResponse(callApi(params, req, runtime));
}

UpdateTrafficControlTaskTrafficResponse Alibabacloud_PaiRecService20221213::Client::updateTrafficControlTaskTraffic(shared_ptr<string> TrafficControlTaskId, shared_ptr<UpdateTrafficControlTaskTrafficRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateTrafficControlTaskTrafficWithOptions(TrafficControlTaskId, request, headers, runtime);
}

UploadRecommendationDataResponse Alibabacloud_PaiRecService20221213::Client::uploadRecommendationDataWithOptions(shared_ptr<UploadRecommendationDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UploadRecommendationDataRequestContent>>(request->content)) {
    body->insert(pair<string, vector<UploadRecommendationDataRequestContent>>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    body->insert(pair<string, string>("DataType", *request->dataType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadRecommendationData"))},
    {"version", boost::any(string("2022-12-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v1/recommendationdata/action/upload"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadRecommendationDataResponse(callApi(params, req, runtime));
}

UploadRecommendationDataResponse Alibabacloud_PaiRecService20221213::Client::uploadRecommendationData(shared_ptr<UploadRecommendationDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uploadRecommendationDataWithOptions(request, headers, runtime);
}

