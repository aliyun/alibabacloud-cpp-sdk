// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cr_20181201.hpp>
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

using namespace Alibabacloud_Cr20181201;

Alibabacloud_Cr20181201::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cr"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cr20181201::Client::getEndpoint(shared_ptr<string> productId,
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

CancelArtifactBuildTaskResponse Alibabacloud_Cr20181201::Client::cancelArtifactBuildTaskWithOptions(shared_ptr<CancelArtifactBuildTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildTaskId)) {
    query->insert(pair<string, string>("BuildTaskId", *request->buildTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelArtifactBuildTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelArtifactBuildTaskResponse(callApi(params, req, runtime));
}

CancelArtifactBuildTaskResponse Alibabacloud_Cr20181201::Client::cancelArtifactBuildTask(shared_ptr<CancelArtifactBuildTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelArtifactBuildTaskWithOptions(request, runtime);
}

CancelRepoBuildRecordResponse Alibabacloud_Cr20181201::Client::cancelRepoBuildRecordWithOptions(shared_ptr<CancelRepoBuildRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRecordId)) {
    query->insert(pair<string, string>("BuildRecordId", *request->buildRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRepoBuildRecord"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRepoBuildRecordResponse(callApi(params, req, runtime));
}

CancelRepoBuildRecordResponse Alibabacloud_Cr20181201::Client::cancelRepoBuildRecord(shared_ptr<CancelRepoBuildRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRepoBuildRecordWithOptions(request, runtime);
}

CancelRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::cancelRepoSyncTaskWithOptions(shared_ptr<CancelRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncTaskId)) {
    query->insert(pair<string, string>("SyncTaskId", *request->syncTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRepoSyncTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelRepoSyncTaskResponse(callApi(params, req, runtime));
}

CancelRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::cancelRepoSyncTask(shared_ptr<CancelRepoSyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRepoSyncTaskWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Cr20181201::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRegionId)) {
    query->insert(pair<string, string>("ResourceRegionId", *request->resourceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Cr20181201::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CreateArtifactBuildRuleResponse Alibabacloud_Cr20181201::Client::createArtifactBuildRuleWithOptions(shared_ptr<CreateArtifactBuildRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateArtifactBuildRuleShrinkRequest> request = make_shared<CreateArtifactBuildRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->artifactType)) {
    query->insert(pair<string, string>("ArtifactType", *request->artifactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeId)) {
    query->insert(pair<string, string>("ScopeId", *request->scopeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeType)) {
    query->insert(pair<string, string>("ScopeType", *request->scopeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateArtifactBuildRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateArtifactBuildRuleResponse(callApi(params, req, runtime));
}

CreateArtifactBuildRuleResponse Alibabacloud_Cr20181201::Client::createArtifactBuildRule(shared_ptr<CreateArtifactBuildRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createArtifactBuildRuleWithOptions(request, runtime);
}

CreateArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::createArtifactLifecycleRuleWithOptions(shared_ptr<CreateArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->auto_)) {
    query->insert(pair<string, bool>("Auto_", *request->auto_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableDeleteTag)) {
    query->insert(pair<string, bool>("EnableDeleteTag", *request->enableDeleteTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionTagCount)) {
    query->insert(pair<string, long>("RetentionTagCount", *request->retentionTagCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleTime)) {
    query->insert(pair<string, string>("ScheduleTime", *request->scheduleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagRegexp)) {
    query->insert(pair<string, string>("TagRegexp", *request->tagRegexp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateArtifactLifecycleRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateArtifactLifecycleRuleResponse(callApi(params, req, runtime));
}

CreateArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::createArtifactLifecycleRule(shared_ptr<CreateArtifactLifecycleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createArtifactLifecycleRuleWithOptions(request, runtime);
}

CreateArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::createArtifactSubscriptionRuleWithOptions(shared_ptr<CreateArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accelerate)) {
    query->insert(pair<string, bool>("Accelerate", *request->accelerate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->override)) {
    query->insert(pair<string, bool>("Override", *request->override));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->platform)) {
    query->insert(pair<string, vector<string>>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceNamespaceName)) {
    query->insert(pair<string, string>("SourceNamespaceName", *request->sourceNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProvider)) {
    query->insert(pair<string, string>("SourceProvider", *request->sourceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRepoName)) {
    query->insert(pair<string, string>("SourceRepoName", *request->sourceRepoName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagCount)) {
    query->insert(pair<string, long>("TagCount", *request->tagCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagRegexp)) {
    query->insert(pair<string, string>("TagRegexp", *request->tagRegexp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateArtifactSubscriptionRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateArtifactSubscriptionRuleResponse(callApi(params, req, runtime));
}

CreateArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::createArtifactSubscriptionRule(shared_ptr<CreateArtifactSubscriptionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createArtifactSubscriptionRuleWithOptions(request, runtime);
}

CreateArtifactSubscriptionTaskResponse Alibabacloud_Cr20181201::Client::createArtifactSubscriptionTaskWithOptions(shared_ptr<CreateArtifactSubscriptionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateArtifactSubscriptionTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateArtifactSubscriptionTaskResponse(callApi(params, req, runtime));
}

CreateArtifactSubscriptionTaskResponse Alibabacloud_Cr20181201::Client::createArtifactSubscriptionTask(shared_ptr<CreateArtifactSubscriptionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createArtifactSubscriptionTaskWithOptions(request, runtime);
}

CreateBuildRecordByRecordResponse Alibabacloud_Cr20181201::Client::createBuildRecordByRecordWithOptions(shared_ptr<CreateBuildRecordByRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRecordId)) {
    query->insert(pair<string, string>("BuildRecordId", *request->buildRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBuildRecordByRecord"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBuildRecordByRecordResponse(callApi(params, req, runtime));
}

CreateBuildRecordByRecordResponse Alibabacloud_Cr20181201::Client::createBuildRecordByRecord(shared_ptr<CreateBuildRecordByRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBuildRecordByRecordWithOptions(request, runtime);
}

CreateBuildRecordByRuleResponse Alibabacloud_Cr20181201::Client::createBuildRecordByRuleWithOptions(shared_ptr<CreateBuildRecordByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRuleId)) {
    query->insert(pair<string, string>("BuildRuleId", *request->buildRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBuildRecordByRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBuildRecordByRuleResponse(callApi(params, req, runtime));
}

CreateBuildRecordByRuleResponse Alibabacloud_Cr20181201::Client::createBuildRecordByRule(shared_ptr<CreateBuildRecordByRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBuildRecordByRuleWithOptions(request, runtime);
}

CreateChainResponse Alibabacloud_Cr20181201::Client::createChainWithOptions(shared_ptr<CreateChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chainConfig)) {
    query->insert(pair<string, string>("ChainConfig", *request->chainConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scopeExclude)) {
    query->insert(pair<string, vector<string>>("ScopeExclude", *request->scopeExclude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChain"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChainResponse(callApi(params, req, runtime));
}

CreateChainResponse Alibabacloud_Cr20181201::Client::createChain(shared_ptr<CreateChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChainWithOptions(request, runtime);
}

CreateChartNamespaceResponse Alibabacloud_Cr20181201::Client::createChartNamespaceWithOptions(shared_ptr<CreateChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateRepo)) {
    query->insert(pair<string, bool>("AutoCreateRepo", *request->autoCreateRepo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRepoType)) {
    query->insert(pair<string, string>("DefaultRepoType", *request->defaultRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChartNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChartNamespaceResponse(callApi(params, req, runtime));
}

CreateChartNamespaceResponse Alibabacloud_Cr20181201::Client::createChartNamespace(shared_ptr<CreateChartNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChartNamespaceWithOptions(request, runtime);
}

CreateChartRepositoryResponse Alibabacloud_Cr20181201::Client::createChartRepositoryWithOptions(shared_ptr<CreateChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoType)) {
    query->insert(pair<string, string>("RepoType", *request->repoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    query->insert(pair<string, string>("Summary", *request->summary));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChartRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChartRepositoryResponse(callApi(params, req, runtime));
}

CreateChartRepositoryResponse Alibabacloud_Cr20181201::Client::createChartRepository(shared_ptr<CreateChartRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChartRepositoryWithOptions(request, runtime);
}

CreateInstanceEndpointAclPolicyResponse Alibabacloud_Cr20181201::Client::createInstanceEndpointAclPolicyWithOptions(shared_ptr<CreateInstanceEndpointAclPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entry)) {
    query->insert(pair<string, string>("Entry", *request->entry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceEndpointAclPolicy"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceEndpointAclPolicyResponse(callApi(params, req, runtime));
}

CreateInstanceEndpointAclPolicyResponse Alibabacloud_Cr20181201::Client::createInstanceEndpointAclPolicy(shared_ptr<CreateInstanceEndpointAclPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceEndpointAclPolicyWithOptions(request, runtime);
}

CreateInstanceVpcEndpointLinkedVpcResponse Alibabacloud_Cr20181201::Client::createInstanceVpcEndpointLinkedVpcWithOptions(shared_ptr<CreateInstanceVpcEndpointLinkedVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCreateDNSRecordInPvzt)) {
    query->insert(pair<string, bool>("EnableCreateDNSRecordInPvzt", *request->enableCreateDNSRecordInPvzt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchId)) {
    query->insert(pair<string, string>("VswitchId", *request->vswitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceVpcEndpointLinkedVpc"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceVpcEndpointLinkedVpcResponse(callApi(params, req, runtime));
}

CreateInstanceVpcEndpointLinkedVpcResponse Alibabacloud_Cr20181201::Client::createInstanceVpcEndpointLinkedVpc(shared_ptr<CreateInstanceVpcEndpointLinkedVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceVpcEndpointLinkedVpcWithOptions(request, runtime);
}

CreateNamespaceResponse Alibabacloud_Cr20181201::Client::createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateRepo)) {
    query->insert(pair<string, bool>("AutoCreateRepo", *request->autoCreateRepo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRepoType)) {
    query->insert(pair<string, string>("DefaultRepoType", *request->defaultRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNamespaceResponse(callApi(params, req, runtime));
}

CreateNamespaceResponse Alibabacloud_Cr20181201::Client::createNamespace(shared_ptr<CreateNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNamespaceWithOptions(request, runtime);
}

CreateRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::createRepoBuildRuleWithOptions(shared_ptr<CreateRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->buildArgs)) {
    query->insert(pair<string, vector<string>>("BuildArgs", *request->buildArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dockerfileLocation)) {
    query->insert(pair<string, string>("DockerfileLocation", *request->dockerfileLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dockerfileName)) {
    query->insert(pair<string, string>("DockerfileName", *request->dockerfileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTag)) {
    query->insert(pair<string, string>("ImageTag", *request->imageTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->platforms)) {
    query->insert(pair<string, vector<string>>("Platforms", *request->platforms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushName)) {
    query->insert(pair<string, string>("PushName", *request->pushName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    query->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoBuildRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoBuildRuleResponse(callApi(params, req, runtime));
}

CreateRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::createRepoBuildRule(shared_ptr<CreateRepoBuildRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoBuildRuleWithOptions(request, runtime);
}

CreateRepoSourceCodeRepoResponse Alibabacloud_Cr20181201::Client::createRepoSourceCodeRepoWithOptions(shared_ptr<CreateRepoSourceCodeRepoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoBuild)) {
    query->insert(pair<string, bool>("AutoBuild", *request->autoBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoName)) {
    query->insert(pair<string, string>("CodeRepoName", *request->codeRepoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoNamespaceName)) {
    query->insert(pair<string, string>("CodeRepoNamespaceName", *request->codeRepoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoType)) {
    query->insert(pair<string, string>("CodeRepoType", *request->codeRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableCacheBuild)) {
    query->insert(pair<string, bool>("DisableCacheBuild", *request->disableCacheBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overseaBuild)) {
    query->insert(pair<string, bool>("OverseaBuild", *request->overseaBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoSourceCodeRepo"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoSourceCodeRepoResponse(callApi(params, req, runtime));
}

CreateRepoSourceCodeRepoResponse Alibabacloud_Cr20181201::Client::createRepoSourceCodeRepo(shared_ptr<CreateRepoSourceCodeRepoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoSourceCodeRepoWithOptions(request, runtime);
}

CreateRepoSyncRuleResponse Alibabacloud_Cr20181201::Client::createRepoSyncRuleWithOptions(shared_ptr<CreateRepoSyncRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNameFilter)) {
    query->insert(pair<string, string>("RepoNameFilter", *request->repoNameFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncRuleName)) {
    query->insert(pair<string, string>("SyncRuleName", *request->syncRuleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncScope)) {
    query->insert(pair<string, string>("SyncScope", *request->syncScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncTrigger)) {
    query->insert(pair<string, string>("SyncTrigger", *request->syncTrigger));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagFilter)) {
    query->insert(pair<string, string>("TagFilter", *request->tagFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetNamespaceName)) {
    query->insert(pair<string, string>("TargetNamespaceName", *request->targetNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetRegionId)) {
    query->insert(pair<string, string>("TargetRegionId", *request->targetRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetRepoName)) {
    query->insert(pair<string, string>("TargetRepoName", *request->targetRepoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    query->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoSyncRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoSyncRuleResponse(callApi(params, req, runtime));
}

CreateRepoSyncRuleResponse Alibabacloud_Cr20181201::Client::createRepoSyncRule(shared_ptr<CreateRepoSyncRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoSyncRuleWithOptions(request, runtime);
}

CreateRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::createRepoSyncTaskWithOptions(shared_ptr<CreateRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->override)) {
    query->insert(pair<string, bool>("Override", *request->override));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetNamespace)) {
    query->insert(pair<string, string>("TargetNamespace", *request->targetNamespace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetRegionId)) {
    query->insert(pair<string, string>("TargetRegionId", *request->targetRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetRepoName)) {
    query->insert(pair<string, string>("TargetRepoName", *request->targetRepoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetTag)) {
    query->insert(pair<string, string>("TargetTag", *request->targetTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    query->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoSyncTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoSyncTaskResponse(callApi(params, req, runtime));
}

CreateRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::createRepoSyncTask(shared_ptr<CreateRepoSyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoSyncTaskWithOptions(request, runtime);
}

CreateRepoSyncTaskByRuleResponse Alibabacloud_Cr20181201::Client::createRepoSyncTaskByRuleWithOptions(shared_ptr<CreateRepoSyncTaskByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncRuleId)) {
    query->insert(pair<string, string>("SyncRuleId", *request->syncRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoSyncTaskByRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoSyncTaskByRuleResponse(callApi(params, req, runtime));
}

CreateRepoSyncTaskByRuleResponse Alibabacloud_Cr20181201::Client::createRepoSyncTaskByRule(shared_ptr<CreateRepoSyncTaskByRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoSyncTaskByRuleWithOptions(request, runtime);
}

CreateRepoTagResponse Alibabacloud_Cr20181201::Client::createRepoTagWithOptions(shared_ptr<CreateRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fromTag)) {
    query->insert(pair<string, string>("FromTag", *request->fromTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toTag)) {
    query->insert(pair<string, string>("ToTag", *request->toTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoTag"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoTagResponse(callApi(params, req, runtime));
}

CreateRepoTagResponse Alibabacloud_Cr20181201::Client::createRepoTag(shared_ptr<CreateRepoTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoTagWithOptions(request, runtime);
}

CreateRepoTagScanTaskResponse Alibabacloud_Cr20181201::Client::createRepoTagScanTaskWithOptions(shared_ptr<CreateRepoTagScanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanService)) {
    query->insert(pair<string, string>("ScanService", *request->scanService));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanType)) {
    query->insert(pair<string, string>("ScanType", *request->scanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoTagScanTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoTagScanTaskResponse(callApi(params, req, runtime));
}

CreateRepoTagScanTaskResponse Alibabacloud_Cr20181201::Client::createRepoTagScanTask(shared_ptr<CreateRepoTagScanTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoTagScanTaskWithOptions(request, runtime);
}

CreateRepoTriggerResponse Alibabacloud_Cr20181201::Client::createRepoTriggerWithOptions(shared_ptr<CreateRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerName)) {
    query->insert(pair<string, string>("TriggerName", *request->triggerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerTag)) {
    query->insert(pair<string, string>("TriggerTag", *request->triggerTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    query->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerUrl)) {
    query->insert(pair<string, string>("TriggerUrl", *request->triggerUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoTrigger"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepoTriggerResponse(callApi(params, req, runtime));
}

CreateRepoTriggerResponse Alibabacloud_Cr20181201::Client::createRepoTrigger(shared_ptr<CreateRepoTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepoTriggerWithOptions(request, runtime);
}

CreateRepositoryResponse Alibabacloud_Cr20181201::Client::createRepositoryWithOptions(shared_ptr<CreateRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->detail)) {
    query->insert(pair<string, string>("Detail", *request->detail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoType)) {
    query->insert(pair<string, string>("RepoType", *request->repoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    query->insert(pair<string, string>("Summary", *request->summary));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tagImmutability)) {
    query->insert(pair<string, bool>("TagImmutability", *request->tagImmutability));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRepositoryResponse(callApi(params, req, runtime));
}

CreateRepositoryResponse Alibabacloud_Cr20181201::Client::createRepository(shared_ptr<CreateRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRepositoryWithOptions(request, runtime);
}

DeleteArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::deleteArtifactLifecycleRuleWithOptions(shared_ptr<DeleteArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteArtifactLifecycleRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteArtifactLifecycleRuleResponse(callApi(params, req, runtime));
}

DeleteArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::deleteArtifactLifecycleRule(shared_ptr<DeleteArtifactLifecycleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteArtifactLifecycleRuleWithOptions(request, runtime);
}

DeleteArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::deleteArtifactSubscriptionRuleWithOptions(shared_ptr<DeleteArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteArtifactSubscriptionRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteArtifactSubscriptionRuleResponse(callApi(params, req, runtime));
}

DeleteArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::deleteArtifactSubscriptionRule(shared_ptr<DeleteArtifactSubscriptionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteArtifactSubscriptionRuleWithOptions(request, runtime);
}

DeleteChainResponse Alibabacloud_Cr20181201::Client::deleteChainWithOptions(shared_ptr<DeleteChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chainId)) {
    query->insert(pair<string, string>("ChainId", *request->chainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChain"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChainResponse(callApi(params, req, runtime));
}

DeleteChainResponse Alibabacloud_Cr20181201::Client::deleteChain(shared_ptr<DeleteChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChainWithOptions(request, runtime);
}

DeleteChartNamespaceResponse Alibabacloud_Cr20181201::Client::deleteChartNamespaceWithOptions(shared_ptr<DeleteChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChartNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChartNamespaceResponse(callApi(params, req, runtime));
}

DeleteChartNamespaceResponse Alibabacloud_Cr20181201::Client::deleteChartNamespace(shared_ptr<DeleteChartNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChartNamespaceWithOptions(request, runtime);
}

DeleteChartReleaseResponse Alibabacloud_Cr20181201::Client::deleteChartReleaseWithOptions(shared_ptr<DeleteChartReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chart)) {
    query->insert(pair<string, string>("Chart", *request->chart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->release)) {
    query->insert(pair<string, string>("Release", *request->release));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChartRelease"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChartReleaseResponse(callApi(params, req, runtime));
}

DeleteChartReleaseResponse Alibabacloud_Cr20181201::Client::deleteChartRelease(shared_ptr<DeleteChartReleaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChartReleaseWithOptions(request, runtime);
}

DeleteChartRepositoryResponse Alibabacloud_Cr20181201::Client::deleteChartRepositoryWithOptions(shared_ptr<DeleteChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChartRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChartRepositoryResponse(callApi(params, req, runtime));
}

DeleteChartRepositoryResponse Alibabacloud_Cr20181201::Client::deleteChartRepository(shared_ptr<DeleteChartRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChartRepositoryWithOptions(request, runtime);
}

DeleteEventCenterRuleResponse Alibabacloud_Cr20181201::Client::deleteEventCenterRuleWithOptions(shared_ptr<DeleteEventCenterRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventCenterRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventCenterRuleResponse(callApi(params, req, runtime));
}

DeleteEventCenterRuleResponse Alibabacloud_Cr20181201::Client::deleteEventCenterRule(shared_ptr<DeleteEventCenterRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventCenterRuleWithOptions(request, runtime);
}

DeleteInstanceEndpointAclPolicyResponse Alibabacloud_Cr20181201::Client::deleteInstanceEndpointAclPolicyWithOptions(shared_ptr<DeleteInstanceEndpointAclPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entry)) {
    query->insert(pair<string, string>("Entry", *request->entry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstanceEndpointAclPolicy"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceEndpointAclPolicyResponse(callApi(params, req, runtime));
}

DeleteInstanceEndpointAclPolicyResponse Alibabacloud_Cr20181201::Client::deleteInstanceEndpointAclPolicy(shared_ptr<DeleteInstanceEndpointAclPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceEndpointAclPolicyWithOptions(request, runtime);
}

DeleteInstanceVpcEndpointLinkedVpcResponse Alibabacloud_Cr20181201::Client::deleteInstanceVpcEndpointLinkedVpcWithOptions(shared_ptr<DeleteInstanceVpcEndpointLinkedVpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vswitchId)) {
    query->insert(pair<string, string>("VswitchId", *request->vswitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstanceVpcEndpointLinkedVpc"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceVpcEndpointLinkedVpcResponse(callApi(params, req, runtime));
}

DeleteInstanceVpcEndpointLinkedVpcResponse Alibabacloud_Cr20181201::Client::deleteInstanceVpcEndpointLinkedVpc(shared_ptr<DeleteInstanceVpcEndpointLinkedVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceVpcEndpointLinkedVpcWithOptions(request, runtime);
}

DeleteNamespaceResponse Alibabacloud_Cr20181201::Client::deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNamespaceResponse(callApi(params, req, runtime));
}

DeleteNamespaceResponse Alibabacloud_Cr20181201::Client::deleteNamespace(shared_ptr<DeleteNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNamespaceWithOptions(request, runtime);
}

DeleteRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::deleteRepoBuildRuleWithOptions(shared_ptr<DeleteRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRuleId)) {
    query->insert(pair<string, string>("BuildRuleId", *request->buildRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepoBuildRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepoBuildRuleResponse(callApi(params, req, runtime));
}

DeleteRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::deleteRepoBuildRule(shared_ptr<DeleteRepoBuildRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRepoBuildRuleWithOptions(request, runtime);
}

DeleteRepoSyncRuleResponse Alibabacloud_Cr20181201::Client::deleteRepoSyncRuleWithOptions(shared_ptr<DeleteRepoSyncRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncRuleId)) {
    query->insert(pair<string, string>("SyncRuleId", *request->syncRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepoSyncRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepoSyncRuleResponse(callApi(params, req, runtime));
}

DeleteRepoSyncRuleResponse Alibabacloud_Cr20181201::Client::deleteRepoSyncRule(shared_ptr<DeleteRepoSyncRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRepoSyncRuleWithOptions(request, runtime);
}

DeleteRepoTagResponse Alibabacloud_Cr20181201::Client::deleteRepoTagWithOptions(shared_ptr<DeleteRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepoTag"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepoTagResponse(callApi(params, req, runtime));
}

DeleteRepoTagResponse Alibabacloud_Cr20181201::Client::deleteRepoTag(shared_ptr<DeleteRepoTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRepoTagWithOptions(request, runtime);
}

DeleteRepoTriggerResponse Alibabacloud_Cr20181201::Client::deleteRepoTriggerWithOptions(shared_ptr<DeleteRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerId)) {
    query->insert(pair<string, string>("TriggerId", *request->triggerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepoTrigger"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepoTriggerResponse(callApi(params, req, runtime));
}

DeleteRepoTriggerResponse Alibabacloud_Cr20181201::Client::deleteRepoTrigger(shared_ptr<DeleteRepoTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRepoTriggerWithOptions(request, runtime);
}

DeleteRepositoryResponse Alibabacloud_Cr20181201::Client::deleteRepositoryWithOptions(shared_ptr<DeleteRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRepositoryResponse(callApi(params, req, runtime));
}

DeleteRepositoryResponse Alibabacloud_Cr20181201::Client::deleteRepository(shared_ptr<DeleteRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRepositoryWithOptions(request, runtime);
}

GetArtifactBuildRuleResponse Alibabacloud_Cr20181201::Client::getArtifactBuildRuleWithOptions(shared_ptr<GetArtifactBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactBuildRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactBuildRuleResponse(callApi(params, req, runtime));
}

GetArtifactBuildRuleResponse Alibabacloud_Cr20181201::Client::getArtifactBuildRule(shared_ptr<GetArtifactBuildRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactBuildRuleWithOptions(request, runtime);
}

GetArtifactBuildTaskResponse Alibabacloud_Cr20181201::Client::getArtifactBuildTaskWithOptions(shared_ptr<GetArtifactBuildTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactBuildTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactBuildTaskResponse(callApi(params, req, runtime));
}

GetArtifactBuildTaskResponse Alibabacloud_Cr20181201::Client::getArtifactBuildTask(shared_ptr<GetArtifactBuildTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactBuildTaskWithOptions(request, runtime);
}

GetArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::getArtifactLifecycleRuleWithOptions(shared_ptr<GetArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactLifecycleRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactLifecycleRuleResponse(callApi(params, req, runtime));
}

GetArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::getArtifactLifecycleRule(shared_ptr<GetArtifactLifecycleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactLifecycleRuleWithOptions(request, runtime);
}

GetArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::getArtifactSubscriptionRuleWithOptions(shared_ptr<GetArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactSubscriptionRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactSubscriptionRuleResponse(callApi(params, req, runtime));
}

GetArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::getArtifactSubscriptionRule(shared_ptr<GetArtifactSubscriptionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactSubscriptionRuleWithOptions(request, runtime);
}

GetArtifactSubscriptionTaskResponse Alibabacloud_Cr20181201::Client::getArtifactSubscriptionTaskWithOptions(shared_ptr<GetArtifactSubscriptionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactSubscriptionTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactSubscriptionTaskResponse(callApi(params, req, runtime));
}

GetArtifactSubscriptionTaskResponse Alibabacloud_Cr20181201::Client::getArtifactSubscriptionTask(shared_ptr<GetArtifactSubscriptionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactSubscriptionTaskWithOptions(request, runtime);
}

GetArtifactSubscriptionTaskResultResponse Alibabacloud_Cr20181201::Client::getArtifactSubscriptionTaskResultWithOptions(shared_ptr<GetArtifactSubscriptionTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetArtifactSubscriptionTaskResult"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetArtifactSubscriptionTaskResultResponse(callApi(params, req, runtime));
}

GetArtifactSubscriptionTaskResultResponse Alibabacloud_Cr20181201::Client::getArtifactSubscriptionTaskResult(shared_ptr<GetArtifactSubscriptionTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getArtifactSubscriptionTaskResultWithOptions(request, runtime);
}

GetAuthorizationTokenResponse Alibabacloud_Cr20181201::Client::getAuthorizationTokenWithOptions(shared_ptr<GetAuthorizationTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorizationToken"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthorizationTokenResponse(callApi(params, req, runtime));
}

GetAuthorizationTokenResponse Alibabacloud_Cr20181201::Client::getAuthorizationToken(shared_ptr<GetAuthorizationTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthorizationTokenWithOptions(request, runtime);
}

GetChainResponse Alibabacloud_Cr20181201::Client::getChainWithOptions(shared_ptr<GetChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chainId)) {
    query->insert(pair<string, string>("ChainId", *request->chainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChain"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChainResponse(callApi(params, req, runtime));
}

GetChainResponse Alibabacloud_Cr20181201::Client::getChain(shared_ptr<GetChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChainWithOptions(request, runtime);
}

GetChartNamespaceResponse Alibabacloud_Cr20181201::Client::getChartNamespaceWithOptions(shared_ptr<GetChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChartNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChartNamespaceResponse(callApi(params, req, runtime));
}

GetChartNamespaceResponse Alibabacloud_Cr20181201::Client::getChartNamespace(shared_ptr<GetChartNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChartNamespaceWithOptions(request, runtime);
}

GetChartRepositoryResponse Alibabacloud_Cr20181201::Client::getChartRepositoryWithOptions(shared_ptr<GetChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChartRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChartRepositoryResponse(callApi(params, req, runtime));
}

GetChartRepositoryResponse Alibabacloud_Cr20181201::Client::getChartRepository(shared_ptr<GetChartRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChartRepositoryWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_Cr20181201::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstance"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceResponse(callApi(params, req, runtime));
}

GetInstanceResponse Alibabacloud_Cr20181201::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

GetInstanceCountResponse Alibabacloud_Cr20181201::Client::getInstanceCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceCount"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceCountResponse(callApi(params, req, runtime));
}

GetInstanceCountResponse Alibabacloud_Cr20181201::Client::getInstanceCount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceCountWithOptions(runtime);
}

GetInstanceEndpointResponse Alibabacloud_Cr20181201::Client::getInstanceEndpointWithOptions(shared_ptr<GetInstanceEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceEndpoint"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceEndpointResponse(callApi(params, req, runtime));
}

GetInstanceEndpointResponse Alibabacloud_Cr20181201::Client::getInstanceEndpoint(shared_ptr<GetInstanceEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceEndpointWithOptions(request, runtime);
}

GetInstanceUsageResponse Alibabacloud_Cr20181201::Client::getInstanceUsageWithOptions(shared_ptr<GetInstanceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceUsage"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceUsageResponse(callApi(params, req, runtime));
}

GetInstanceUsageResponse Alibabacloud_Cr20181201::Client::getInstanceUsage(shared_ptr<GetInstanceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceUsageWithOptions(request, runtime);
}

GetInstanceVpcEndpointResponse Alibabacloud_Cr20181201::Client::getInstanceVpcEndpointWithOptions(shared_ptr<GetInstanceVpcEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceVpcEndpoint"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceVpcEndpointResponse(callApi(params, req, runtime));
}

GetInstanceVpcEndpointResponse Alibabacloud_Cr20181201::Client::getInstanceVpcEndpoint(shared_ptr<GetInstanceVpcEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceVpcEndpointWithOptions(request, runtime);
}

GetNamespaceResponse Alibabacloud_Cr20181201::Client::getNamespaceWithOptions(shared_ptr<GetNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceId)) {
    query->insert(pair<string, string>("NamespaceId", *request->namespaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNamespaceResponse(callApi(params, req, runtime));
}

GetNamespaceResponse Alibabacloud_Cr20181201::Client::getNamespace(shared_ptr<GetNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNamespaceWithOptions(request, runtime);
}

GetRepoBuildRecordResponse Alibabacloud_Cr20181201::Client::getRepoBuildRecordWithOptions(shared_ptr<GetRepoBuildRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRecordId)) {
    query->insert(pair<string, string>("BuildRecordId", *request->buildRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoBuildRecord"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoBuildRecordResponse(callApi(params, req, runtime));
}

GetRepoBuildRecordResponse Alibabacloud_Cr20181201::Client::getRepoBuildRecord(shared_ptr<GetRepoBuildRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoBuildRecordWithOptions(request, runtime);
}

GetRepoBuildRecordStatusResponse Alibabacloud_Cr20181201::Client::getRepoBuildRecordStatusWithOptions(shared_ptr<GetRepoBuildRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRecordId)) {
    query->insert(pair<string, string>("BuildRecordId", *request->buildRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoBuildRecordStatus"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoBuildRecordStatusResponse(callApi(params, req, runtime));
}

GetRepoBuildRecordStatusResponse Alibabacloud_Cr20181201::Client::getRepoBuildRecordStatus(shared_ptr<GetRepoBuildRecordStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoBuildRecordStatusWithOptions(request, runtime);
}

GetRepoSourceCodeRepoResponse Alibabacloud_Cr20181201::Client::getRepoSourceCodeRepoWithOptions(shared_ptr<GetRepoSourceCodeRepoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoSourceCodeRepo"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoSourceCodeRepoResponse(callApi(params, req, runtime));
}

GetRepoSourceCodeRepoResponse Alibabacloud_Cr20181201::Client::getRepoSourceCodeRepo(shared_ptr<GetRepoSourceCodeRepoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoSourceCodeRepoWithOptions(request, runtime);
}

GetRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::getRepoSyncTaskWithOptions(shared_ptr<GetRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncTaskId)) {
    query->insert(pair<string, string>("SyncTaskId", *request->syncTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoSyncTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoSyncTaskResponse(callApi(params, req, runtime));
}

GetRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::getRepoSyncTask(shared_ptr<GetRepoSyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoSyncTaskWithOptions(request, runtime);
}

GetRepoTagResponse Alibabacloud_Cr20181201::Client::getRepoTagWithOptions(shared_ptr<GetRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTag"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoTagResponse(callApi(params, req, runtime));
}

GetRepoTagResponse Alibabacloud_Cr20181201::Client::getRepoTag(shared_ptr<GetRepoTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoTagWithOptions(request, runtime);
}

GetRepoTagScanStatusResponse Alibabacloud_Cr20181201::Client::getRepoTagScanStatusWithOptions(shared_ptr<GetRepoTagScanStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanTaskId)) {
    query->insert(pair<string, string>("ScanTaskId", *request->scanTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanType)) {
    query->insert(pair<string, string>("ScanType", *request->scanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTagScanStatus"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoTagScanStatusResponse(callApi(params, req, runtime));
}

GetRepoTagScanStatusResponse Alibabacloud_Cr20181201::Client::getRepoTagScanStatus(shared_ptr<GetRepoTagScanStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoTagScanStatusWithOptions(request, runtime);
}

GetRepoTagScanSummaryResponse Alibabacloud_Cr20181201::Client::getRepoTagScanSummaryWithOptions(shared_ptr<GetRepoTagScanSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanTaskId)) {
    query->insert(pair<string, string>("ScanTaskId", *request->scanTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTagScanSummary"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoTagScanSummaryResponse(callApi(params, req, runtime));
}

GetRepoTagScanSummaryResponse Alibabacloud_Cr20181201::Client::getRepoTagScanSummary(shared_ptr<GetRepoTagScanSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepoTagScanSummaryWithOptions(request, runtime);
}

GetRepositoryResponse Alibabacloud_Cr20181201::Client::getRepositoryWithOptions(shared_ptr<GetRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepositoryResponse(callApi(params, req, runtime));
}

GetRepositoryResponse Alibabacloud_Cr20181201::Client::getRepository(shared_ptr<GetRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepositoryWithOptions(request, runtime);
}

ListArtifactBuildTaskLogResponse Alibabacloud_Cr20181201::Client::listArtifactBuildTaskLogWithOptions(shared_ptr<ListArtifactBuildTaskLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArtifactBuildTaskLog"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactBuildTaskLogResponse(callApi(params, req, runtime));
}

ListArtifactBuildTaskLogResponse Alibabacloud_Cr20181201::Client::listArtifactBuildTaskLog(shared_ptr<ListArtifactBuildTaskLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactBuildTaskLogWithOptions(request, runtime);
}

ListArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::listArtifactLifecycleRuleWithOptions(shared_ptr<ListArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArtifactLifecycleRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactLifecycleRuleResponse(callApi(params, req, runtime));
}

ListArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::listArtifactLifecycleRule(shared_ptr<ListArtifactLifecycleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactLifecycleRuleWithOptions(request, runtime);
}

ListArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::listArtifactSubscriptionRuleWithOptions(shared_ptr<ListArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArtifactSubscriptionRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactSubscriptionRuleResponse(callApi(params, req, runtime));
}

ListArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::listArtifactSubscriptionRule(shared_ptr<ListArtifactSubscriptionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactSubscriptionRuleWithOptions(request, runtime);
}

ListArtifactSubscriptionTaskResponse Alibabacloud_Cr20181201::Client::listArtifactSubscriptionTaskWithOptions(shared_ptr<ListArtifactSubscriptionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListArtifactSubscriptionTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListArtifactSubscriptionTaskResponse(callApi(params, req, runtime));
}

ListArtifactSubscriptionTaskResponse Alibabacloud_Cr20181201::Client::listArtifactSubscriptionTask(shared_ptr<ListArtifactSubscriptionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listArtifactSubscriptionTaskWithOptions(request, runtime);
}

ListChainResponse Alibabacloud_Cr20181201::Client::listChainWithOptions(shared_ptr<ListChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChain"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChainResponse(callApi(params, req, runtime));
}

ListChainResponse Alibabacloud_Cr20181201::Client::listChain(shared_ptr<ListChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChainWithOptions(request, runtime);
}

ListChainInstanceResponse Alibabacloud_Cr20181201::Client::listChainInstanceWithOptions(shared_ptr<ListChainInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChainInstance"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChainInstanceResponse(callApi(params, req, runtime));
}

ListChainInstanceResponse Alibabacloud_Cr20181201::Client::listChainInstance(shared_ptr<ListChainInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChainInstanceWithOptions(request, runtime);
}

ListChartNamespaceResponse Alibabacloud_Cr20181201::Client::listChartNamespaceWithOptions(shared_ptr<ListChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceStatus)) {
    query->insert(pair<string, string>("NamespaceStatus", *request->namespaceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChartNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChartNamespaceResponse(callApi(params, req, runtime));
}

ListChartNamespaceResponse Alibabacloud_Cr20181201::Client::listChartNamespace(shared_ptr<ListChartNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChartNamespaceWithOptions(request, runtime);
}

ListChartReleaseResponse Alibabacloud_Cr20181201::Client::listChartReleaseWithOptions(shared_ptr<ListChartReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chart)) {
    query->insert(pair<string, string>("Chart", *request->chart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChartRelease"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChartReleaseResponse(callApi(params, req, runtime));
}

ListChartReleaseResponse Alibabacloud_Cr20181201::Client::listChartRelease(shared_ptr<ListChartReleaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChartReleaseWithOptions(request, runtime);
}

ListChartRepositoryResponse Alibabacloud_Cr20181201::Client::listChartRepositoryWithOptions(shared_ptr<ListChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoStatus)) {
    query->insert(pair<string, string>("RepoStatus", *request->repoStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChartRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChartRepositoryResponse(callApi(params, req, runtime));
}

ListChartRepositoryResponse Alibabacloud_Cr20181201::Client::listChartRepository(shared_ptr<ListChartRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChartRepositoryWithOptions(request, runtime);
}

ListEventCenterRecordResponse Alibabacloud_Cr20181201::Client::listEventCenterRecordWithOptions(shared_ptr<ListEventCenterRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventCenterRecord"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventCenterRecordResponse(callApi(params, req, runtime));
}

ListEventCenterRecordResponse Alibabacloud_Cr20181201::Client::listEventCenterRecord(shared_ptr<ListEventCenterRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventCenterRecordWithOptions(request, runtime);
}

ListEventCenterRuleNameResponse Alibabacloud_Cr20181201::Client::listEventCenterRuleNameWithOptions(shared_ptr<ListEventCenterRuleNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventCenterRuleName"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventCenterRuleNameResponse(callApi(params, req, runtime));
}

ListEventCenterRuleNameResponse Alibabacloud_Cr20181201::Client::listEventCenterRuleName(shared_ptr<ListEventCenterRuleNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventCenterRuleNameWithOptions(request, runtime);
}

ListInstanceResponse Alibabacloud_Cr20181201::Client::listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    query->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstance"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceResponse(callApi(params, req, runtime));
}

ListInstanceResponse Alibabacloud_Cr20181201::Client::listInstance(shared_ptr<ListInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceWithOptions(request, runtime);
}

ListInstanceEndpointResponse Alibabacloud_Cr20181201::Client::listInstanceEndpointWithOptions(shared_ptr<ListInstanceEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->summary)) {
    query->insert(pair<string, bool>("Summary", *request->summary));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceEndpoint"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceEndpointResponse(callApi(params, req, runtime));
}

ListInstanceEndpointResponse Alibabacloud_Cr20181201::Client::listInstanceEndpoint(shared_ptr<ListInstanceEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceEndpointWithOptions(request, runtime);
}

ListInstanceRegionResponse Alibabacloud_Cr20181201::Client::listInstanceRegionWithOptions(shared_ptr<ListInstanceRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceRegion"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstanceRegionResponse(callApi(params, req, runtime));
}

ListInstanceRegionResponse Alibabacloud_Cr20181201::Client::listInstanceRegion(shared_ptr<ListInstanceRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceRegionWithOptions(request, runtime);
}

ListNamespaceResponse Alibabacloud_Cr20181201::Client::listNamespaceWithOptions(shared_ptr<ListNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceStatus)) {
    query->insert(pair<string, string>("NamespaceStatus", *request->namespaceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNamespaceResponse(callApi(params, req, runtime));
}

ListNamespaceResponse Alibabacloud_Cr20181201::Client::listNamespace(shared_ptr<ListNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNamespaceWithOptions(request, runtime);
}

ListRepoBuildRecordResponse Alibabacloud_Cr20181201::Client::listRepoBuildRecordWithOptions(shared_ptr<ListRepoBuildRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoBuildRecord"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoBuildRecordResponse(callApi(params, req, runtime));
}

ListRepoBuildRecordResponse Alibabacloud_Cr20181201::Client::listRepoBuildRecord(shared_ptr<ListRepoBuildRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoBuildRecordWithOptions(request, runtime);
}

ListRepoBuildRecordLogResponse Alibabacloud_Cr20181201::Client::listRepoBuildRecordLogWithOptions(shared_ptr<ListRepoBuildRecordLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRecordId)) {
    query->insert(pair<string, string>("BuildRecordId", *request->buildRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoBuildRecordLog"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoBuildRecordLogResponse(callApi(params, req, runtime));
}

ListRepoBuildRecordLogResponse Alibabacloud_Cr20181201::Client::listRepoBuildRecordLog(shared_ptr<ListRepoBuildRecordLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoBuildRecordLogWithOptions(request, runtime);
}

ListRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::listRepoBuildRuleWithOptions(shared_ptr<ListRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoBuildRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoBuildRuleResponse(callApi(params, req, runtime));
}

ListRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::listRepoBuildRule(shared_ptr<ListRepoBuildRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoBuildRuleWithOptions(request, runtime);
}

ListRepoSyncRuleResponse Alibabacloud_Cr20181201::Client::listRepoSyncRuleWithOptions(shared_ptr<ListRepoSyncRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetRegionId)) {
    query->insert(pair<string, string>("TargetRegionId", *request->targetRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoSyncRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoSyncRuleResponse(callApi(params, req, runtime));
}

ListRepoSyncRuleResponse Alibabacloud_Cr20181201::Client::listRepoSyncRule(shared_ptr<ListRepoSyncRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoSyncRuleWithOptions(request, runtime);
}

ListRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::listRepoSyncTaskWithOptions(shared_ptr<ListRepoSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncRecordId)) {
    query->insert(pair<string, string>("SyncRecordId", *request->syncRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoSyncTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoSyncTaskResponse(callApi(params, req, runtime));
}

ListRepoSyncTaskResponse Alibabacloud_Cr20181201::Client::listRepoSyncTask(shared_ptr<ListRepoSyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoSyncTaskWithOptions(request, runtime);
}

ListRepoTagResponse Alibabacloud_Cr20181201::Client::listRepoTagWithOptions(shared_ptr<ListRepoTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoTag"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoTagResponse(callApi(params, req, runtime));
}

ListRepoTagResponse Alibabacloud_Cr20181201::Client::listRepoTag(shared_ptr<ListRepoTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoTagWithOptions(request, runtime);
}

ListRepoTagScanResultResponse Alibabacloud_Cr20181201::Client::listRepoTagScanResultWithOptions(shared_ptr<ListRepoTagScanResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValue)) {
    query->insert(pair<string, string>("FilterValue", *request->filterValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanTaskId)) {
    query->insert(pair<string, string>("ScanTaskId", *request->scanTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scanType)) {
    query->insert(pair<string, string>("ScanType", *request->scanType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tag)) {
    query->insert(pair<string, string>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vulQueryKey)) {
    query->insert(pair<string, string>("VulQueryKey", *request->vulQueryKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoTagScanResult"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoTagScanResultResponse(callApi(params, req, runtime));
}

ListRepoTagScanResultResponse Alibabacloud_Cr20181201::Client::listRepoTagScanResult(shared_ptr<ListRepoTagScanResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoTagScanResultWithOptions(request, runtime);
}

ListRepoTriggerResponse Alibabacloud_Cr20181201::Client::listRepoTriggerWithOptions(shared_ptr<ListRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepoTrigger"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepoTriggerResponse(callApi(params, req, runtime));
}

ListRepoTriggerResponse Alibabacloud_Cr20181201::Client::listRepoTrigger(shared_ptr<ListRepoTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepoTriggerWithOptions(request, runtime);
}

ListRepositoryResponse Alibabacloud_Cr20181201::Client::listRepositoryWithOptions(shared_ptr<ListRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoStatus)) {
    query->insert(pair<string, string>("RepoStatus", *request->repoStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRepositoryResponse(callApi(params, req, runtime));
}

ListRepositoryResponse Alibabacloud_Cr20181201::Client::listRepository(shared_ptr<ListRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRepositoryWithOptions(request, runtime);
}

ListScanBaselineByTaskResponse Alibabacloud_Cr20181201::Client::listScanBaselineByTaskWithOptions(shared_ptr<ListScanBaselineByTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScanBaselineByTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScanBaselineByTaskResponse(callApi(params, req, runtime));
}

ListScanBaselineByTaskResponse Alibabacloud_Cr20181201::Client::listScanBaselineByTask(shared_ptr<ListScanBaselineByTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScanBaselineByTaskWithOptions(request, runtime);
}

ListScanMaliciousFileByTaskResponse Alibabacloud_Cr20181201::Client::listScanMaliciousFileByTaskWithOptions(shared_ptr<ListScanMaliciousFileByTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScanMaliciousFileByTask"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScanMaliciousFileByTaskResponse(callApi(params, req, runtime));
}

ListScanMaliciousFileByTaskResponse Alibabacloud_Cr20181201::Client::listScanMaliciousFileByTask(shared_ptr<ListScanMaliciousFileByTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScanMaliciousFileByTaskWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Cr20181201::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Cr20181201::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ResetLoginPasswordResponse Alibabacloud_Cr20181201::Client::resetLoginPasswordWithOptions(shared_ptr<ResetLoginPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetLoginPassword"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetLoginPasswordResponse(callApi(params, req, runtime));
}

ResetLoginPasswordResponse Alibabacloud_Cr20181201::Client::resetLoginPassword(shared_ptr<ResetLoginPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetLoginPasswordWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Cr20181201::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Cr20181201::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Cr20181201::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Cr20181201::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::updateArtifactLifecycleRuleWithOptions(shared_ptr<UpdateArtifactLifecycleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->auto_)) {
    query->insert(pair<string, bool>("Auto_", *request->auto_));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableDeleteTag)) {
    query->insert(pair<string, bool>("EnableDeleteTag", *request->enableDeleteTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionTagCount)) {
    query->insert(pair<string, long>("RetentionTagCount", *request->retentionTagCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleTime)) {
    query->insert(pair<string, string>("ScheduleTime", *request->scheduleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagRegexp)) {
    query->insert(pair<string, string>("TagRegexp", *request->tagRegexp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateArtifactLifecycleRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateArtifactLifecycleRuleResponse(callApi(params, req, runtime));
}

UpdateArtifactLifecycleRuleResponse Alibabacloud_Cr20181201::Client::updateArtifactLifecycleRule(shared_ptr<UpdateArtifactLifecycleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateArtifactLifecycleRuleWithOptions(request, runtime);
}

UpdateArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::updateArtifactSubscriptionRuleWithOptions(shared_ptr<UpdateArtifactSubscriptionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accelerate)) {
    query->insert(pair<string, string>("Accelerate", *request->accelerate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->override)) {
    query->insert(pair<string, string>("Override", *request->override));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->platform)) {
    query->insert(pair<string, vector<string>>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceNamespaceName)) {
    query->insert(pair<string, string>("SourceNamespaceName", *request->sourceNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProvider)) {
    query->insert(pair<string, string>("SourceProvider", *request->sourceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRepoName)) {
    query->insert(pair<string, string>("SourceRepoName", *request->sourceRepoName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagCount)) {
    query->insert(pair<string, long>("TagCount", *request->tagCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagRegexp)) {
    query->insert(pair<string, string>("TagRegexp", *request->tagRegexp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateArtifactSubscriptionRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateArtifactSubscriptionRuleResponse(callApi(params, req, runtime));
}

UpdateArtifactSubscriptionRuleResponse Alibabacloud_Cr20181201::Client::updateArtifactSubscriptionRule(shared_ptr<UpdateArtifactSubscriptionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateArtifactSubscriptionRuleWithOptions(request, runtime);
}

UpdateChainResponse Alibabacloud_Cr20181201::Client::updateChainWithOptions(shared_ptr<UpdateChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chainConfig)) {
    query->insert(pair<string, string>("ChainConfig", *request->chainConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chainId)) {
    query->insert(pair<string, string>("ChainId", *request->chainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scopeExclude)) {
    query->insert(pair<string, vector<string>>("ScopeExclude", *request->scopeExclude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateChain"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateChainResponse(callApi(params, req, runtime));
}

UpdateChainResponse Alibabacloud_Cr20181201::Client::updateChain(shared_ptr<UpdateChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateChainWithOptions(request, runtime);
}

UpdateChartNamespaceResponse Alibabacloud_Cr20181201::Client::updateChartNamespaceWithOptions(shared_ptr<UpdateChartNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateRepo)) {
    query->insert(pair<string, bool>("AutoCreateRepo", *request->autoCreateRepo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRepoType)) {
    query->insert(pair<string, string>("DefaultRepoType", *request->defaultRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateChartNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateChartNamespaceResponse(callApi(params, req, runtime));
}

UpdateChartNamespaceResponse Alibabacloud_Cr20181201::Client::updateChartNamespace(shared_ptr<UpdateChartNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateChartNamespaceWithOptions(request, runtime);
}

UpdateChartRepositoryResponse Alibabacloud_Cr20181201::Client::updateChartRepositoryWithOptions(shared_ptr<UpdateChartRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoType)) {
    query->insert(pair<string, string>("RepoType", *request->repoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    query->insert(pair<string, string>("Summary", *request->summary));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateChartRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateChartRepositoryResponse(callApi(params, req, runtime));
}

UpdateChartRepositoryResponse Alibabacloud_Cr20181201::Client::updateChartRepository(shared_ptr<UpdateChartRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateChartRepositoryWithOptions(request, runtime);
}

UpdateEventCenterRuleResponse Alibabacloud_Cr20181201::Client::updateEventCenterRuleWithOptions(shared_ptr<UpdateEventCenterRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEventCenterRuleShrinkRequest> request = make_shared<UpdateEventCenterRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->namespaces)) {
    request->namespacesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->namespaces, make_shared<string>("Namespaces"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->repoNames)) {
    request->repoNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->repoNames, make_shared<string>("RepoNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventChannel)) {
    query->insert(pair<string, string>("EventChannel", *request->eventChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventConfig)) {
    query->insert(pair<string, string>("EventConfig", *request->eventConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventScope)) {
    query->insert(pair<string, string>("EventScope", *request->eventScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespacesShrink)) {
    query->insert(pair<string, string>("Namespaces", *request->namespacesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamesShrink)) {
    query->insert(pair<string, string>("RepoNames", *request->repoNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoTagFilterPattern)) {
    query->insert(pair<string, string>("RepoTagFilterPattern", *request->repoTagFilterPattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventCenterRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventCenterRuleResponse(callApi(params, req, runtime));
}

UpdateEventCenterRuleResponse Alibabacloud_Cr20181201::Client::updateEventCenterRule(shared_ptr<UpdateEventCenterRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEventCenterRuleWithOptions(request, runtime);
}

UpdateInstanceEndpointStatusResponse Alibabacloud_Cr20181201::Client::updateInstanceEndpointStatusWithOptions(shared_ptr<UpdateInstanceEndpointStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enable)) {
    query->insert(pair<string, bool>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointType)) {
    query->insert(pair<string, string>("EndpointType", *request->endpointType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceEndpointStatus"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceEndpointStatusResponse(callApi(params, req, runtime));
}

UpdateInstanceEndpointStatusResponse Alibabacloud_Cr20181201::Client::updateInstanceEndpointStatus(shared_ptr<UpdateInstanceEndpointStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceEndpointStatusWithOptions(request, runtime);
}

UpdateNamespaceResponse Alibabacloud_Cr20181201::Client::updateNamespaceWithOptions(shared_ptr<UpdateNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoCreateRepo)) {
    query->insert(pair<string, bool>("AutoCreateRepo", *request->autoCreateRepo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultRepoType)) {
    query->insert(pair<string, string>("DefaultRepoType", *request->defaultRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceName)) {
    query->insert(pair<string, string>("NamespaceName", *request->namespaceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNamespace"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateNamespaceResponse(callApi(params, req, runtime));
}

UpdateNamespaceResponse Alibabacloud_Cr20181201::Client::updateNamespace(shared_ptr<UpdateNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNamespaceWithOptions(request, runtime);
}

UpdateRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::updateRepoBuildRuleWithOptions(shared_ptr<UpdateRepoBuildRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->buildArgs)) {
    query->insert(pair<string, vector<string>>("BuildArgs", *request->buildArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildRuleId)) {
    query->insert(pair<string, string>("BuildRuleId", *request->buildRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dockerfileLocation)) {
    query->insert(pair<string, string>("DockerfileLocation", *request->dockerfileLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dockerfileName)) {
    query->insert(pair<string, string>("DockerfileName", *request->dockerfileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTag)) {
    query->insert(pair<string, string>("ImageTag", *request->imageTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->platforms)) {
    query->insert(pair<string, vector<string>>("Platforms", *request->platforms));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushName)) {
    query->insert(pair<string, string>("PushName", *request->pushName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushType)) {
    query->insert(pair<string, string>("PushType", *request->pushType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepoBuildRule"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRepoBuildRuleResponse(callApi(params, req, runtime));
}

UpdateRepoBuildRuleResponse Alibabacloud_Cr20181201::Client::updateRepoBuildRule(shared_ptr<UpdateRepoBuildRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRepoBuildRuleWithOptions(request, runtime);
}

UpdateRepoSourceCodeRepoResponse Alibabacloud_Cr20181201::Client::updateRepoSourceCodeRepoWithOptions(shared_ptr<UpdateRepoSourceCodeRepoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoBuild)) {
    query->insert(pair<string, string>("AutoBuild", *request->autoBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoId)) {
    query->insert(pair<string, string>("CodeRepoId", *request->codeRepoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoName)) {
    query->insert(pair<string, string>("CodeRepoName", *request->codeRepoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoNamespaceName)) {
    query->insert(pair<string, string>("CodeRepoNamespaceName", *request->codeRepoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeRepoType)) {
    query->insert(pair<string, string>("CodeRepoType", *request->codeRepoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disableCacheBuild)) {
    query->insert(pair<string, string>("DisableCacheBuild", *request->disableCacheBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overseaBuild)) {
    query->insert(pair<string, string>("OverseaBuild", *request->overseaBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepoSourceCodeRepo"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRepoSourceCodeRepoResponse(callApi(params, req, runtime));
}

UpdateRepoSourceCodeRepoResponse Alibabacloud_Cr20181201::Client::updateRepoSourceCodeRepo(shared_ptr<UpdateRepoSourceCodeRepoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRepoSourceCodeRepoWithOptions(request, runtime);
}

UpdateRepoTriggerResponse Alibabacloud_Cr20181201::Client::updateRepoTriggerWithOptions(shared_ptr<UpdateRepoTriggerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerId)) {
    query->insert(pair<string, string>("TriggerId", *request->triggerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerName)) {
    query->insert(pair<string, string>("TriggerName", *request->triggerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerTag)) {
    query->insert(pair<string, string>("TriggerTag", *request->triggerTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    query->insert(pair<string, string>("TriggerType", *request->triggerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerUrl)) {
    query->insert(pair<string, string>("TriggerUrl", *request->triggerUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepoTrigger"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRepoTriggerResponse(callApi(params, req, runtime));
}

UpdateRepoTriggerResponse Alibabacloud_Cr20181201::Client::updateRepoTrigger(shared_ptr<UpdateRepoTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRepoTriggerWithOptions(request, runtime);
}

UpdateRepositoryResponse Alibabacloud_Cr20181201::Client::updateRepositoryWithOptions(shared_ptr<UpdateRepositoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->detail)) {
    query->insert(pair<string, string>("Detail", *request->detail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoId)) {
    query->insert(pair<string, string>("RepoId", *request->repoId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoName)) {
    query->insert(pair<string, string>("RepoName", *request->repoName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoNamespaceName)) {
    query->insert(pair<string, string>("RepoNamespaceName", *request->repoNamespaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repoType)) {
    query->insert(pair<string, string>("RepoType", *request->repoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    query->insert(pair<string, string>("Summary", *request->summary));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->tagImmutability)) {
    query->insert(pair<string, bool>("TagImmutability", *request->tagImmutability));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepository"))},
    {"version", boost::any(string("2018-12-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRepositoryResponse(callApi(params, req, runtime));
}

UpdateRepositoryResponse Alibabacloud_Cr20181201::Client::updateRepository(shared_ptr<UpdateRepositoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRepositoryWithOptions(request, runtime);
}

